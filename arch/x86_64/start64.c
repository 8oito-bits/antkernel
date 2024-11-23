#include <ant/boot.h>
#include <paging.h>
#include <fb/fb.h>
#include <gdt.h>
#include <idt.h>
#include <heap.h>
#include <kprintf.h>

extern unsigned long _start_text;       
extern unsigned long _end_brk; 
extern unsigned long kernel_p4d;
extern unsigned long kernel_pud;
extern unsigned long kernel_pmd;

int start64(struct boot_info *info)
{
  early_heap_init();
  gdt_load();
  idt_load();
  return 0;
}
