/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_baseth_palloc.h
 * @brief Base thread pool management.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_BASETH_POOL_H
#define ONEV_BASETH_POOL_H

#include <onev_define.h>

ONEV_CPP_START

#include "onev_struct.h"
#define onev_thread_pool_for_each(th, tp, offset)                   \
    for((th) = (typeof(*(th))*)&(tp)->data[offset];                 \
            (char*)(th) < (tp)->last;                               \
            th = (typeof(*th)*)(((char*)th) + (tp)->member_size))

static inline void *onev_thread_pool_hash(onev_thread_pool_e *tp, uint64_t hv)
{
    hv %= tp->thread_count;
    return &tp->data[hv * tp->member_size];
}

// of the #nth
static inline void *onev_thread_pool_index(onev_thread_pool_e *tp, int n)
{
    if (n < 0 || n >= tp->thread_count)
        return NULL;

    return &tp->data[n * tp->member_size];
}

/**
 * @brief Create a thread pool.
 * @param[in] io           io object
 * @param[in] thread_count amount of thread
 * @param[in] member_size  size of each thread
 * @return thread pool or NULL
 */
onev_thread_pool_e *onev_baseth_create_pool(onev_io_e *io, int thread_count, int member_size);

/**
 * @brief Init base thread.
 * Register a start function(typedef) for base_thread.
 * Register a async wakeup callback for its thread_watcher and start.
 * @param[in] args   position of base_thread
 * @param[in] tp     thread pool
 * @param[in] start  typedef, input:args, return:void
 * @param[in] wakeup typedef, a async callback function
 */
void onev_baseth_init(void *args, onev_thread_pool_e *tp, onev_baseth_on_start_pe *start, onev_baseth_on_wakeup_pe *wakeup);

/**
 * wakeup pool, to wakeup every thread
 */
void onev_baseth_pool_on_wakeup(onev_thread_pool_e *tp);

/**
 * wakeup, usually thread.
 */
void onev_baseth_on_wakeup(void *args);

/**
 * destroy pool
 */
void onev_baseth_destroy_pool(onev_thread_pool_e *tp);

ONEV_CPP_END

#endif
