#include <ant/boot.h>
#include "gdt.h"

int start64(struct boot_info *info)
{
  gdt_load();
  
  return 0;
}
