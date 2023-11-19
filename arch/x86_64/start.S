.code64

.extern kmain

.global _start
_start:
  callq kmain
  ret
