#ifndef _INCLUDE_GDT_
#define _INCLUDE_GDT_

#include <ant/types.h>

#define GDT_ENTRY(limit, base, segment_type, segment_dpl, flags)  \
{ \
  .llimit = limit & 0xffff, \
  .hlimit = limit >> 16 & 0xf, \
  .lbase = base & 0xffff, \
  .hbase = base >> 16 & 0xff, \
  .type = segment_type, \
  .dpl = segment_dpl, \
  .s = flags & 0x1, \
  .p = flags >> 0x1 & 0x1, \
  .avl = 0, \
  .l = flags >> 0x2 & 0x1, \
  .db = flags >> 0x3 & 0x1, \
  .g = flags >> 0x4 & 0x1 \
}

struct gdt_entry
{
  u16 llimit;
  u32 lbase: 24;
  u32 type: 4;
  u32 s: 1;
  u32 dpl: 2;
  u32 p: 1;
  u32 hlimit:4;
  u32 avl: 1;
  u32 l: 1;
  u32 db: 1;
  u32 g: 1;
  u8  hbase;
} __attribute__((packed, __aligned__(8)));

struct gdt_register
{
  u16 limit;
  u64 base;
} __attribute__((packed));

void gdt_load(void);

#endif
