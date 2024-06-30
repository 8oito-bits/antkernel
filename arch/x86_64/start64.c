#include <ant/boot.h>
#include <paging.h>
#include <fb/fb.h>
#include <gdt.h>
#include <idt.h>

int start64(struct boot_info *info)
{
  paging_init();
  fb_init(info);
  gdt_load();
  idt_load();
  return 0;
}
