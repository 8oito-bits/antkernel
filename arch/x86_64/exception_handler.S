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
ex_handler_\error_code:
  jmp exception_handler
.endm

.macro ex_handler_no_code error_code
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

.global ex_handlers
ex_handlers:
.quad ex_handler_no_code_0
.quad ex_handler_no_code_1
.quad ex_handler_no_code_2
.quad ex_handler_no_code_3
.quad ex_handler_no_code_4
.quad ex_handler_no_code_5
.quad ex_handler_no_code_6
.quad ex_handler_no_code_7
.quad ex_handler_8
.quad ex_handler_no_code_9
.quad ex_handler_10
.quad ex_handler_11
.quad ex_handler_12
.quad ex_handler_13
.quad ex_handler_14
.quad ex_handler_no_code_15
.quad ex_handler_no_code_16
.quad ex_handler_no_code_17 
.quad ex_handler_no_code_18
.quad ex_handler_no_code_19
.quad ex_handler_no_code_20
.quad ex_handler_21
