.code64

.global exception_handler
.extern exception_handler_c
.section .text
exception_handler:
  pushq %rdi
  pushq %rsi
  pushq %rdx
  pushq %rcx
  pushq %rax
  pushq %rbx
  pushq %r15
  pushq %r14
  pushq %r11
  pushq %r10
  pushq %r9

  callq exception_handler_c

  popq  %r9
  popq  %r10
  popq  %r11
  popq  %r14
  popq  %r15
  popq  %rbx
  popq  %rax
  popq  %rcx
  popq  %rdx
  popq  %rsi
  popq  %rdi

  addq  $8, %rsp
  iretq

.macro ex_handler error_code
.global ex_handler_\error_code
ex_hander_\error_code:
  jmp exception_handler
.endm

.macro ex_handler_no_code error_code
.global ex_handler_no_code_\error_code
ex_handler_no_code_\error_code:
  pushq $\error_code
  jmp exception_handler
.endm

ex_handler_no_code 0
ex_handler_no_code 1
ex_handler_no_code 2
ex_handler_no_code 3
ex_handler_no_code 4
ex_handler_no_code 5
ex_handler_no_code 6
ex_handler_no_code 7
ex_handler 8
ex_handler_no_code 9
ex_handler 10
ex_handler 11
ex_handler 12
ex_handler 13
ex_handler 14
ex_handler_no_code 15
ex_handler_no_code 16
ex_handler_no_code 17
ex_handler_no_code 18
ex_handler_no_code 19
ex_handler_no_code 20
ex_handler 21
