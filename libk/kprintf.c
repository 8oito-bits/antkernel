#include <kprintf.h>
#include <stdarg.h>
#include <fb/fb.h>
#include <stdlib.h>

static void print_int(u64 number)
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
       }
    }
    else
      fb_put_char(*format);

    format++;
  }

  va_end(arg);
}
