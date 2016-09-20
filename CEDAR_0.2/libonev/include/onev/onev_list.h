/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_list.h
 * @brief Implement from Linux kernel list.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_LIST_H_
#define ONEV_LIST_H_

#include "onev_define.h"

ONEV_CPP_START

typedef struct onev_list_e onev_list_e;

struct onev_list_e
{
    onev_list_e *prev, *next;
};

#define LIST_HEAD_INIT(name) {&(name), &(name)}

#define onev_list_init(ptr) do{  \
    (ptr)->prev = (ptr); \
    (ptr)->next = (ptr); \
}while (0)

/*
 * Insert a new entry between two known consecutive entries.
 *
 * This is only for internal list manipulation where we know
 * the prev/next entries already!
 */
static inline void __list_add(onev_list_e *list,onev_list_e *prev, onev_list_e *next)
{
    next->prev = list;
    list->next = next;
    list->prev = prev;
    prev->next = list;
}

/**
 * @brief add a new entry
 * Insert a new entry before the specified head.
 * This is useful for implementing queues.
 * @param[out] list  new entry to be added
 * @param[in]  head  list head to add it before
 */
static inline void onev_list_add_tail(onev_list_e *list, onev_list_e *head)
{
    __list_add(list, head->prev, head);
}

/*
 * Delete a list entry by making the prev/next entries
 * point to each other.
 *
 * This is only for internal list manipulation where we know
 * the prev/next entries already!
 */
static inline void __list_del(onev_list_e *prev, onev_list_e *next)
{
    next->prev = prev;
    prev->next = next;
}

/**
 * @brief delete entry from its list
 * @param[in] entry: the entry to be deleted
 */
static inline void onev_list_del(onev_list_e *entry)
{
    __list_del(entry->prev, entry->next);
    onev_list_init(entry);
}

/**
 * @brief checks whether a list is empty
 * @param[in] head: the list to checked
 * @return true for empty, false otherwise
 */
static inline int onev_list_isempty(const onev_list_e *head)
{
    return (head->next == head);
}

/**
 * @brief delete from one list and add as another's head
 * @param[out] list: the entry to move
 * @param[out] head: the head that will precede our entry
 */
static inline void onev_list_move(onev_list_e *list, onev_list_e *head)
{
    if (!onev_list_isempty(list)) {
        head->prev = list->prev;
        head->next = list->next;
        head->prev->next = head;
        head->next->prev = head;
        onev_list_init(list);
    } else {
        onev_list_init(head);
    }
}

static inline void __list_splice(const onev_list_e *list, onev_list_e*prev, onev_list_e *next)
{
    onev_list_e *first = list->next;
    onev_list_e *last = list->prev;

    first->prev = prev;
    prev->next = first;

    last->next = next;
    next->prev = last;
}

/**
 * list_splice - join two lists, this is designed for stacks
 * @list: the new list to add.
 * @head: the place to add it in the first list.
 */
static inline void onev_list_join(onev_list_e *list, onev_list_e *head)
{
    if (!onev_list_isempty(list))
        __list_splice(list, head, head->next);
}

#define container_of(ptr,type,member)({                                     \
    const typeof( ((type *)0)->member ) *__mptr = (ptr);                    \
    (type *)( (char *)__mptr - offsetof(type,member) );})

#define onev_list_entry(ptr, type, member)                                  \
    container_of(ptr,type,member)

#define onev_list_get_last(list, type, member)                              \
    onev_list_isempty(list) ? NULL : onev_list_entry((list)->prev, type, member)

#define onev_list_first_entry(ptr, type, member) \
    onev_list_entry((ptr)->next, type, member)

#define onev_list_next_entry(pos, member) \
    onev_list_entry((pos)->member.next, typeof(*(pos)), member)

#define onev_list_for_each_entry(pos, head, member)                         \
    for (pos = onev_list_first_entry(head, typeof(*pos), member);           \
            &pos->member != (head);                                         \
            pos = onev_list_next_entry(pos, member))

#define onev_list_for_each_entry_safe(pos, n, head, member)                 \
    for (pos = onev_list_first_entry(head, typeof(*pos), member),           \
            n = onev_list_next_entry(pos, member);                          \
            &pos->member != (head);                                         \
            pos = n, n = onev_list_next_entry(n, member))


ONEV_CPP_END

#endif
