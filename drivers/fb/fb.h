#ifndef _include_fb_
#define _include_fb_

#include <ant/boot.h>
#include <ant/types.h>

void fb_set_background_color(u32);
void fb_set_foreground_color(u32);
void fb_init(struct boot_info *info);
void fb_write(char *);

#endif
