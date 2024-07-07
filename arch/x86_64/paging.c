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

static pml4e_t pml4[512];

static u64 get_pml4_idx(virt_addr_t virt_addr)
{
  return virt_addr >> 39 & 0x1ff;
}

static u64 get_pdpte_idx(virt_addr_t virt_addr)
{
  return virt_addr >> 30 & 0xff; 
}

static u64 get_pd_idx(virt_addr_t virt_addr)
{
  return virt_addr >> 21 & 0x1ff;
}

static u64 get_pt_idx(virt_addr_t virt_addr)
{
  return virt_addr >> 12 & 0x1ff;
}

static u64 get_offset_idx(virt_addr_t virt_addr)
{
  return virt_addr & 0xfff;
}

phys_addr_t paging_virt_to_phys(virt_addr_t addr)
{
  return addr - virtual_base;
}

int paging_init(void)
{
  // We don't implement 5-level paging.
  if(cr4_get() & (1U << CR4_LA57))
    return 1;
  
  return 0;
}
