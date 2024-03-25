.code64

.extern init_64
.global _start

.section .text
_start:
  cli
  leaq stack_end(%rip), %rsp
  callq init_64
  jmp .
  ret

.section .data
.align 4096

.comm stack_start, 16384
stack_end:
