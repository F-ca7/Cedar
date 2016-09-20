#ifndef ONEV_LIST_H_
#define ONEV_LIST_H_

#include "onev_defines.h"

ONEV_CPP_START
// from kernel list
typedef struct onev_list_e onev_list_e;

struct onev_list_e {
    onev_list_e *next, *prev;
};

#define ONEV_LIST_HEAD_INIT(name) {&(name), &(name)}
#define onev_list_init(ptr) do{  \
            (ptr)->prev = (ptr); \
            (ptr)->next = (ptr); \
}while (0)

static inline void __onev_list_add(onev_list_e *list,
                                   onev_list_e *prev, onev_list_e *next)
{
    next->prev = list;
    list->next = next;
    list->prev = prev;
    prev->next = list;
}

///head turns to tail
static inline void onev_list_add_tail(onev_list_e *list, onev_list_e *head)
{
    __onev_list_add(list, head->prev, head);
}

static inline void __onev_list_del(onev_list_e *prev, onev_list_e *next)
{
    next->prev = prev;
    prev->next = next;
}
// deletes entry from list
static inline void onev_list_del(onev_list_e *entry)
{
    __onev_list_del(entry->prev, entry->next);
    onev_list_init(entry);
}
// tests whether a list is empty
static inline int onev_list_empty(const onev_list_e *head)
{
    return (head->next == head);
}
// move list to new_list
static inline void onev_list_movelist(onev_list_e *list, onev_list_e *new_list)
{
    if (!onev_list_empty(list)) {
        new_list->prev = list->prev;
        new_list->next = list->next;
        new_list->prev->next = new_list;
        new_list->next->prev = new_list;
        onev_list_init(list);
    } else {
        onev_list_init(new_list);
    }
}

// join list to head
static inline void onev_list_join(onev_list_e *list, onev_list_e *head)
{
    if (!onev_list_empty(list)) {
        onev_list_e             *first = list->next;
        onev_list_e             *last = list->prev;
        onev_list_e             *at = head->prev;

        first->prev = at;
        at->next = first;
        last->next = head;
        head->prev = last;
    }
}

///get last
#define onev_list_get_last(list, type, member)                              \
    onev_list_empty(list) ? NULL : onev_list_entry((list)->prev, type, member)

    
#define onev_list_entry(ptr, type, member) ({                               \
        const typeof( ((type *)0)->member ) *__mptr = (ptr);                \
        (type *)( (char *)__mptr - offsetof(type,member) );})

#define onev_list_for_each_entry(pos, head, member)                         \
    for (pos = onev_list_entry((head)->next, typeof(*pos), member);         \
            &pos->member != (head);                                         \
            pos = onev_list_entry(pos->member.next, typeof(*pos), member))

#define onev_list_for_each_entry_safe(pos, n, head, member)                 \
    for (pos = onev_list_entry((head)->next, typeof(*pos), member),         \
            n = onev_list_entry(pos->member.next, typeof(*pos), member);    \
            &pos->member != (head);                                         \
            pos = n, n = onev_list_entry(n->member.next, typeof(*n), member))


ONEV_CPP_END

#endif
