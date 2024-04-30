#include <paging.h>

extern u64 _start_text;
extern u64 _end_text;

extern u64 _start_data;
extern u64 _end_data;

extern u64 _start_rodata;
extern u64 _end_rodata;

extern u64 _start_bss;
extern u64 _end_bss;

static u64 get_pml4_idx(uintptr_t virt_addr)
{

}

static u64 get_pd_idx(uintptr_t virt_addr)
{

}

static u64 get_pt_idx(uintptr_t virt_addr)
{

}

static u64 get_offset_idx(uintptr_t virt_addr)
{

}

void paging_map_kernel(void)
{
  
}
