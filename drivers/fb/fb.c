#include "fb.h"
#include "font.h"

static u32 *frame_buffer_base;
static u32 width, height;
static u16 cursor_x, cursor_y;
static u32 color;

static void plot_pixel(u16, u16);

static void plot_pixel(u16 x, u16 y)
{
  frame_buffer_base[y * width + x] = color;
}

void fb_draw_char(u8 c)
{
  u16 i, j;
  u8 bitmap;
  u16 x = cursor_x * 8, y = cursor_y * 16;
  u16 old_x = x;
  for(i = 0; i < 16; i++)
  {
    bitmap = font8x16[c - ' '][i];
    if(!bitmap)
    {
      y++;
      continue;
    }

    for(j = 0; j < 8; j++)
    {
      if(bitmap & (128U >> j))
        plot_pixel(x, y);

      x++;
    }

    x = old_x;
    y++;
  }

  if(cursor_x != width / 8)
    cursor_x++;
  else
    cursor_y++;
}

void fb_write(char *s)
{
  while(*s) fb_draw_char(*s++);
}

void fb_init(struct boot_info *info)
{
  frame_buffer_base = info->mode.frame_buffer_base;
  width = info->mode.horizontal_resolution;
  height = info->mode.vertical_resolution;
  cursor_x = 0;
  cursor_y = 0;
  color = 0x33ff00;
}
