.code64

.equ START_KERNEL, 0xFFFFFFFF80000000

.extern start64
.global _start

.align 4096
.section .text
_start:
  cli
  movq  $stack_end, %rsp
  leaq  kernel_p4d(%rip), %rax
  movq  %rax, %cr3
  jmp   higher_half_kernel
higher_half_kernel:
  callq start64
  jmp .
  ret

.section .data

.global kernel_p4d
.align 4096
kernel_p4d:
  .quad kernel_identity_pud - START_KERNEL + 0x3
  .fill 510, 8, 0
  .quad kernel_pud - START_KERNEL + 0x3

.global kernel_pud
.align 4096
kernel_pud:
  .fill 510, 8, 0
  .quad kernel_pmd - START_KERNEL + 0x3
  .fill 1, 8, 0

.align 4096
kernel_identity_pud:
  .quad kernel_identity_pmd - START_KERNEL + 0x3
  .fill 511, 8, 0

.global kernel_pmd
.align 4096
kernel_pmd:
  .set i, 0;
  .rept 32
    .quad i | 0x83
    .set i, i + (1 << 21)
  .endr
  .fill 480, 8, 0

.align 4096
kernel_identity_pmd:
  .quad 0x83
  .fill 511, 8, 0

.comm stack_start, 16384
stack_end:
