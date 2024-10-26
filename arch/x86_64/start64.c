#include <ant/boot.h>
#include <paging.h>
#include <fb/fb.h>
#include <gdt.h>
#include <idt.h>
#include <heap.h>

int start64(struct boot_info *info)
{
  heap_init();
  paging_init();
  fb_init(info);
  gdt_load();
  idt_load();
  return 0;
}
