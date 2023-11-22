#include "gdt.h"

int kmain(void)
{
  gdt_load();
  return 1;
}
