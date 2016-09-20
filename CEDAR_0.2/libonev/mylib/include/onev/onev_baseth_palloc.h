#ifndef ONEV_BASETH_POOL_H
#define ONEV_BASETH_POOL_H

#include <onev_defines.h>

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

// 第n个
static inline void *onev_thread_pool_index(onev_thread_pool_e *tp, int n)
{
    if (n < 0 || n >= tp->thread_count)
        return NULL;

    return &tp->data[n * tp->member_size];
}
void onev_baseth_on_wakeup(void *args);
void onev_baseth_init(void *args, onev_thread_pool_e *tp,
                      onev_baseth_on_start_pt *start, onev_baseth_on_wakeup_pt *wakeup);
void onev_baseth_pool_on_wakeup(onev_thread_pool_e *tp);
onev_thread_pool_e *onev_baseth_pool_create(onev_io_e *eio, int thread_count, int member_size);
void onev_baseth_pool_destroy(onev_thread_pool_e *tp);

ONEV_CPP_END

#endif
