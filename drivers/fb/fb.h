#ifndef _include_fb_
#define _include_fb_

#include <ant/boot.h>
#include <ant/types.h>

#define FB_WHITE_COLOR 0xffffffff
#define FB_BLACK_COLOR 0x00000000

void fb_set_background_color(u32);
void fb_set_foreground_color(u32);
void fb_init(struct boot_info *);
void fb_write(char *);

#endif
