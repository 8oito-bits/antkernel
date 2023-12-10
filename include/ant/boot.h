#ifndef _INCLUDE_BOOT_
#define _INCLUDE_BOOT_

#include "types.h"

typedef struct
{
  u32 type;
  u64 physical_start;
  u64 virtual_start;
  u64 number_of_pages;
  u64 attributes;
} efi_memory_descriptor;

typedef enum
{
  pixel_red_green_blue_reserved_8bit_per_color,
  pixel_blue_green_red_reserved_8bit_per_color,
  pixel_bit_mask,
  pixel_blt_only,
  pixel_format_max
} efi_graphics_pixel_format;

struct gop_video_mode
{
  void                      *frame_buffer_base;
  u64                       frame_buffer_size;
  u32                       horizontal_resolution;
  u32                       vertical_resolution;
  efi_graphics_pixel_format pixel_format;
};

struct memory_map
{
  u64 memory_map_size;
  efi_memory_descriptor *memory_descriptor;
  u64 descriptor_size;
};

struct boot_info
{
  struct memory_map map;    
  struct gop_video_mode mode;
};

#endif
