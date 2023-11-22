#ifndef _INCLUDE_GDT_
#define _INCLUDE_GDT_

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
  unsigned short  llimit;
  unsigned        lbase: 24;
  unsigned        type: 4;
  unsigned        s: 1;
  unsigned        dpl: 2;
  unsigned        p: 1;
  unsigned        hlimit:4;
  unsigned        avl: 1;
  unsigned        l: 1;
  unsigned        db: 1;
  unsigned        g: 1;
  unsigned        hbase: 8;
} __attribute__((packed, __aligned__(8)));

struct gdt_register
{
  unsigned short limit;
  unsigned long base;
} __attribute__((packed));

void gdt_load(void);

#endif
