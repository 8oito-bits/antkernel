#include <ant/boot.h>
#include <fb/fb.h>
#include "gdt.h"

int init_64(struct boot_info *info)
{
  gdt_load();
  return 0;
}
