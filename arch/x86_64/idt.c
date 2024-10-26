#include <idt.h>
#include <fb/fb.h>

struct idt_entry idt[IDT_ENTRIES];
struct idt_register idtr;

extern void idtr_set(u64);
extern void exception_handler(void);

void handler(void)
{
}

void idt_load(void)
{
  u32 i;
  for(i = 0; i < 33; i++)
    idt[i] = (struct idt_entry) IDT_ENTRY((u64) exception_handler - 0xFFFFFFFF80000000UL, 0x8, 0x0, 0xe, 0x0, 0x1);
  idtr.limit = sizeof(idt) - 1;
  idtr.base = (u64) idt;

  idtr_set((u64) &idtr);
}
