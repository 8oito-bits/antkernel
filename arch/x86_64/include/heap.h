#ifndef _INCLUDE_HEAP_
#define _INCLUDE_HEAP_

#include <ant/list.h>
#include <ant/types.h>

struct block
{
  struct list_head head;
  size_t size;
  _Bool free;
};

void heap_init(void);
#endif
