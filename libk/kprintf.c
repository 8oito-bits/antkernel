#include <kprintf.h>
#include <ant/types.h>
#include <stdarg.h>
#include <fb/fb.h>

static void print_int(u64 integer)
{
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
       }
    }
    else
      fb_put_char(*format);

    format++;
  }

  va_end(arg);
}
