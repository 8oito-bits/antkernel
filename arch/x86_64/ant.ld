ENTRY(physical_start)

virtual_base = 0xFFFFFFFF80000000;
virtual_entrypoint = virtual_base + 0x1000000;

SECTIONS
{
  . = virtual_entrypoint;
  physical_start = ABSOLUTE(_start - 0xFFFFFFFF80000000);

  .text ALIGN(0x1000): AT(ADDR(.text) - virtual_base)
  {
    *(.text)
  }

  .data ALIGN(0x1000): AT(ADDR(.data) - virtual_base)
  {
    *(.data)
  }

  .bss ALIGN(0x1000): AT(ADDR(.data) - virtual_base)
  {
    *(.data)
  }
}
