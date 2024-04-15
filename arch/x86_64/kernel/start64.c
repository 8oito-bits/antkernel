#include <ant/boot.h>
#include <fb/fb.h>
#include <gdt.h>
#include <idt.h>

int start64(struct boot_info *info)
{
  fb_init(info);
  gdt_load();
  idt_load();
  fb_write("%"); 

  unsigned i = 10;

  i /= 0;

  return 0;
}
