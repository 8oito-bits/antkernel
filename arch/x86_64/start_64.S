.code64

.extern start64
.global _start

.section ._start_64.text
_start:
  cli
  leaq stack_end(%rip), %rsp
  callq start64
  jmp .
  ret

.section .data
.align 4096

.comm stack_start, 16384
stack_end:
