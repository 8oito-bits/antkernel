#include "fb.h"

u32 *frame_buffer_base;

void fb_init(struct boot_info *info)
{
    frame_buffer_base = info->mode.frame_buffer_base;
    frame_buffer_base[0] = 0xf3f30f;
}
