#include <ant/types.h>
#include <kprintf.h>

void exception_handler_c(unsigned long error_code)
{
  kprintf("Handling exception...\r\n");
}
