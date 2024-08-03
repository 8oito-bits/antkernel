#include "fb.h"
#include "font.h"

static u32 *frame_buffer_base;
static u32 width, height;
static u16 cursor_x, cursor_y;
static u32 background_color;
static u32 foreground_color;

static void plot_pixel(u16, u16, u32 color);

static void plot_pixel(u16 x, u16 y, u32 color)
{
  frame_buffer_base[y * width + x] = color;
}

static void new_line(void)
{
  cursor_x = 0;
  cursor_y++;
}

static void fb_draw_char(u8 c)
{
  u16 i, j;
  u8 bitmap;
  u16 x = cursor_x * 8, y = cursor_y * 16;
  u16 old_x = x;
  u8 no_bitmap = 0;

  if(c < ' ' || c > '~')
  {
    c = '?';
    no_bitmap = 1;
  }

  for(i = 0; i < FONT_HEIGHT; i++)
  {
    bitmap = font8x16[c - ' '][i];

    for(j = 0; j < FONT_WIDTH; j++)
    {
      if(bitmap & (128U >> j))
        plot_pixel(x, y, no_bitmap ? background_color : foreground_color);
      else
        plot_pixel(x, y, no_bitmap ? foreground_color : background_color);

      x++;
    }

    x = old_x;
    y++;
  }
}

void fb_set_background_color(u32 color)
{
  background_color = color;
}

void fb_set_foreground_color(u32 color)
{
  foreground_color = color;
}

void fb_put_char(u8 c)
{
  if(c == '\n')
  {
    new_line();
    return;
  }

  fb_draw_char(c);
  
  if(cursor_x < width / FONT_WIDTH - 1)
    cursor_x++;
  else
  {
    new_line();
    cursor_y++;
  }
}

void fb_write(char *s)
{
  while(*s) fb_put_char(*s++);
}

void fb_init(struct boot_info *info)
{
  frame_buffer_base = info->mode.frame_buffer_base;
  width = info->mode.horizontal_resolution;
  height = info->mode.vertical_resolution;
  cursor_x = 0;
  cursor_y = 0;
  fb_set_background_color(FB_BLACK_COLOR);
  fb_set_foreground_color(FB_WHITE_COLOR);
}
