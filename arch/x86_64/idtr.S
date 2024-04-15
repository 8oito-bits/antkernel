.code64

.extern idtr

.global idtr_set
.section .text

idtr_set:
  lidt idtr(%rip)
  sti
  ret
