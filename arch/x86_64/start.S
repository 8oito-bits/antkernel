.code64

.align 4096
stack_start:
.byte 16384
stack_end:

.extern kmain
.global _start

.section .text
_start:
  cli
  leaq stack_end(%rip), %rsp
  callq kmain
  jmp .
  ret
