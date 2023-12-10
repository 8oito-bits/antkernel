.code64

.extern kmain
.global _start

.section .text
_start:
  cli
  leaq stack_end(%rip), %rsp
  callq kmain
  jmp .
  ret

.section .data
.align 4096

.comm stack_start, 16384
stack_end:
