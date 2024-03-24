#include <ant/boot.h>
#include <fb/fb.h>
#include "gdt.h"

int kmain(struct boot_info *info)
{
  fb_init(info);
  gdt_load();
  return 0;
}
