#ifndef _INCLUDE_LIST_
#define _INCLUDE_LIST_

struct list_head
{
  struct list_head *prev, *next;
};

static inline void list_head_init(struct list_head *list)
{
  list->next = list;
  list->prev = list;
}

static inline void list_add(struct list_head *new, struct list_head *list)
{
  new->next = list->next;
  new->prev = list;
  list->next->prev = new;
  list->next = new;
}

static inline void list_del(struct list_head *entry)
{
  entry->next->prev = entry->prev;
  entry->prev->next = entry->next;
}

#endif
