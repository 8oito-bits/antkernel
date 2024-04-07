#include <ant/boot.h>
#include <fb/fb.h>
#include "gdt.h"
#include "idt.h"

int start64(struct boot_info *info)
{
  fb_init(info);
  fb_write("! \" #  $ %  & ' ( ) * + , - . / 0");
  gdt_load();
  idt_load();
/*  
  u64 i = 10;

  i /= 0;
*/
  return 0;
}
