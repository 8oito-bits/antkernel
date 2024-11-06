#include <kprintf.h>
#include <stdarg.h>
#include <fb/fb.h>
#include <stdlib.h>

static void print_hex(u64 number, _Bool uppercase)
{
  u8 nibble;
  _Bool zero_num = 0;
  u64 i;
  while(number)
  {
    nibble = number >> 60 & 0xf;
    number <<= 4;
 
    if(!nibble && !zero_num)
      continue;
    else
      zero_num = 1;

    if(nibble < 0xa)
      fb_put_char(nibble + '0');
    else if(uppercase)
      fb_put_char(nibble - 10 + 'A');
    else
      fb_put_char(nibble - 10 + 'a');
  }
}

static void print_int(s32 number)
{
  char string[22] = {0};
  itoa(string, number);
  fb_write(string);
}

int kprintf(const char *format, ...)
{
  va_list arg;
  va_start(arg, format);

  while(*format != '\0')
  {
    if(*format == '%')
    {
      format++;
      switch(*format)
      {
        case '%':
          fb_put_char('%');
          break;
        case 'c':
          fb_put_char((u8) va_arg(arg, int));
          break;
        case 's':
          fb_write(va_arg(arg, void *));
          break;
        case 'i':
          print_int(va_arg(arg, int));
          break;
        case 'X':
          print_hex(va_arg(arg, int), 1);
          break;
        case 'x':
          print_hex(va_arg(arg, int), 0);
          break;
        case '#':
          format++;
          fb_write("0x");
          if(*format == 'X')
            print_hex(va_arg(arg, int), 1);
          else if(*format == 'x')
            print_hex(va_arg(arg, int), 0);

          break;
       }
    }
    else
      fb_put_char(*format);

    format++;
  }

  va_end(arg);
}
