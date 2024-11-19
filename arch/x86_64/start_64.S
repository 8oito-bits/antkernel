.code64

.equ START_KERNEL, 0xFFFFFFFF80000000

.extern start64
.global _start

.section .text
_start:
  cli
  leaq stack_end(%rip), %rsp
  callq start64
  jmp .
  ret

.section .data
.align 4096

.global kernel_p4d
kernel_p4d:
  .fill 511, 8, 0
  .quad kernel_pud - START_KERNEL

kernel_pud:
  .fill 510, 8, 0
  .quad kernel_pmd - START_KERNEL
  .fill 1, 8, 0

kernel_pmd:
  .set i, 0;
  .rept 256
    .quad 0 + i
  .set i, i + 1 << 21
  .endr
.comm stack_start, 16384
stack_end:
