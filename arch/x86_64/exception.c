#include <ant/types.h>
#include <fb/fb.h>

void exception_handler_c(unsigned long error_code)
{
  if(error_code == 0)
    fb_write("!");
  else
    fb_write("#");

  while(1);
}
