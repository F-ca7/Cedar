/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_palloc.h
 * @brief Simple memory pool inspired from nginx.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_POOL_H_
#define ONEV_POOL_H_

#include <onev_define.h>
#include <onev_list.h>
#include <onev_atomic.h>

ONEV_CPP_START


#define ONEV_POOL_ALIGNMENT         512
#define ONEV_POOL_PAGE_SIZE         4096
/// allocate $size memory from pool
#define onev_pool_alloc(pool, size)  onev_pool_alloc_ex(pool, size, sizeof(long))
 
typedef struct onev_pool_large_e onev_pool_large_e;
typedef struct onev_pool_e onev_pool_e;
typedef void   *(*onev_pool_realloc_pe)(void *ptr, size_t size);


struct onev_pool_large_e
{
    onev_pool_large_e       *next;// point to the next unit in the linked list
    uint8_t                 *data;// head address of large memory
};

struct onev_pool_e
{
    uint8_t                 *last;// tail boundary address of current available space
    uint8_t                 *end;// tail address of used space
    onev_pool_e             *next;// address of next pool
    uint16_t                failed;// record of memory-alloc failure
    uint16_t                flags;// =1,set lock
    uint32_t                max;// max assignable address of memory pool. Max accommodation of a pool

    // pool header
    onev_pool_e             *current;// address of current pool node
    onev_pool_large_e       *large;// memory address linked-list, when large memory is needed
    onev_atomic_t           ref;// reference count, for resource management
    onev_atomic_t           tlock;
};

extern onev_pool_e *onev_create_pool(uint32_t size);
extern void        onev_destroy_pool(onev_pool_e *pool);

extern void onev_pool_clear(onev_pool_e *pool);
extern void *onev_pool_alloc_ex(onev_pool_e *pool, uint32_t size, int align);
extern void *onev_pool_calloc(onev_pool_e *pool, uint32_t size);

/// set lock, flags=1
extern void onev_pool_set_lock(onev_pool_e *pool);

/// come in, set realloc
extern onev_pool_realloc_pe onev_pool_realloc;
extern void                 *onev_pool_default_realloc (void *ptr, size_t size);
extern void                 onev_pool_set_allocator(onev_pool_realloc_pe alloc);

 
ONEV_CPP_END
#endif
