#include <ant/boot.h>
#include <fb/fb.h>
#include "gdt.h"
#include "idt.h"

int start64(struct boot_info *info)
{
  gdt_load();
  
  return 0;
}
