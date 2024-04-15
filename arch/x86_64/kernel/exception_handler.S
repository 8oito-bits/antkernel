.code64

.global exception_handler
.extern exception_handler_c
.section .text
exception_handler:
  movq  -8(%rsp), %rdi
  callq exception_handler_c
  addq  $0x8, %rsp
  iretq
