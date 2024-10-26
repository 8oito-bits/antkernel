#include <paging.h>

extern virt_addr_t virtual_base; 

extern virt_addr_t _start_text;
extern virt_addr_t _end_text;

extern virt_addr_t _start_data;
extern virt_addr_t _end_data;

extern virt_addr_t _start_rodata;
extern virt_addr_t _end_rodata;

extern virt_addr_t _start_bss;
extern virt_addr_t _end_bss;

static p4d_t p4d[512];

static u64 get_p4d_idx(virt_addr_t virt_addr)
{
  return virt_addr >> 39 & 0x1ff;
}

static u64 get_pud_idx(virt_addr_t virt_addr)
{
  return virt_addr >> 30 & 0xff; 
}

static u64 get_pmd_idx(virt_addr_t virt_addr)
{
  return virt_addr >> 21 & 0x1ff;
}

static u64 get_pte_idx(virt_addr_t virt_addr)
{
  return virt_addr >> 12 & 0x1ff;
}

static u64 get_offset_idx(virt_addr_t virt_addr)
{
  return virt_addr & 0xfff;
}

void map_kernel(void)
{
  
}

phys_addr_t paging_virt_to_phys(virt_addr_t addr)
{
  return addr - virtual_base;
}

int paging_init(void)
{
  map_kernel(); 
  return 0;
}
