#include <ant/boot.h>
#include <paging.h>
#include <fb/fb.h>
#include <gdt.h>
#include <idt.h>
#include <heap.h>
#include <kprintf.h>

int start64(struct boot_info *info)
{
  early_heap_init();
  void *ptr1 = early_malloc(15);
  void *ptr2 = early_malloc(16);

  struct block *ptr1_block = ((struct block *) ptr1);
  ptr1_block--;
  
  early_free(ptr1);
  early_free(ptr2);

  paging_init();
  fb_init(info);
  kprintf("Hello\n");
  //kprintf("ptr1 = %x, size = %i, free = %i", ptr1, ptr1_block->size, ptr1_block->free);
  if(ptr1 == 0)
    kprintf("%#lX\n", 0xabcdefabcefabcef);
  gdt_load();
  idt_load();
  return 0;
}
