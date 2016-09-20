/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_atomic.h
 * @brief Atomic operations.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_LOCK_ATOMIC_H_
#define ONEV_LOCK_ATOMIC_H_

#include <onev_define.h>
#include <stdint.h>
#include <sched.h>

ONEV_CPP_START

#define ONEV_SMP_LOCK               "lock;"
typedef volatile int32_t            onev_atomic32_t;

// 32bit
static __inline__ void onev_atomic32_add(onev_atomic32_t *v, int i)
{
    __asm__ __volatile__(
        ONEV_SMP_LOCK "addl %1,%0"
        : "=m" ((*v)) : "r" (i), "m" ((*v)));
}
static __inline__ int32_t onev_atomic32_add_return(onev_atomic32_t *value, int32_t diff)
{
    int32_t old = diff;
    __asm__ volatile (
        ONEV_SMP_LOCK "xaddl %0, %1"
        :"+r" (diff), "+m" (*value) : : "memory");
    return diff + old;
}
static __inline__ void onev_atomic32_inc(onev_atomic32_t *v)
{
    __asm__ __volatile__(ONEV_SMP_LOCK "incl %0" : "=m" (*v) :"m" (*v));
}
static __inline__ void onev_atomic32_dec(onev_atomic32_t *v)
{
    __asm__ __volatile__(ONEV_SMP_LOCK "decl %0" : "=m" (*v) :"m" (*v));
}

// 64bit
#if __WORDSIZE == 64
typedef volatile int64_t onev_atomic_t;
static __inline__ void onev_atomic_add(onev_atomic_t *v, int64_t i)
{
    __asm__ __volatile__(
        ONEV_SMP_LOCK "addq %1,%0"
        : "=m" ((*v)) : "r" (i), "m" ((*v)));
}
static __inline__ int64_t onev_atomic_add_return(onev_atomic_t *value, int64_t diff)
{
    int64_t old = diff;
    __asm__ volatile (
        ONEV_SMP_LOCK "xaddq %0, %1"
        :"+r" (diff), "+m" (*value) : : "memory");
    return diff + old;
}
static __inline__ int64_t onev_atomic_cmp_set(onev_atomic_t *lock, int64_t old, int64_t set)
{
    uint8_t res;
    __asm__ volatile (
        ONEV_SMP_LOCK "cmpxchgq %3, %1; sete %0"
        : "=a" (res) : "m" (*lock), "a" (old), "r" (set) : "cc", "memory");
    return res;
}
static __inline__ void onev_atomic_inc(onev_atomic_t *v)
{
    __asm__ __volatile__(ONEV_SMP_LOCK "incq %0" : "=m" (*v) :"m" (*v));
}
static __inline__ void onev_atomic_dec(onev_atomic_t *v)
{
    __asm__ __volatile__(ONEV_SMP_LOCK "decq %0" : "=m" (*v) :"m" (*v));
}
#else
typedef volatile int32_t onev_atomic_t;
#define onev_atomic_add(v,i) onev_atomic32_add(v,i)
#define onev_atomic_add_return(v,diff) onev_atomic32_add_return(v,diff)
///atomic increase,on,such as reference count
#define onev_atomic_inc(v) onev_atomic32_inc(v)
#define onev_atomic_dec(v) onev_atomic32_dec(v)
static __inline__ int32_t onev_atomic_cmp_set(onev_atomic_t *lock, int32_t old, int32_t set)
{
    uint8_t                 res;
    __asm__ volatile (
        ONEV_SMP_LOCK "cmpxchgl %3, %1; sete %0"
        : "=a" (res) : "m" (*lock), "a" (old), "r" (set) : "cc", "memory");
    return res;
}
#endif

#define onev_trylock(lock)  (*(lock) == 0 && onev_atomic_cmp_set(lock, 0, 1))
#define onev_unlock(lock)   {__asm__ ("" ::: "memory"); *(lock) = 0;}
#define onev_spin_unlock onev_unlock

static __inline__ void onev_spin_lock(onev_atomic_t *lock)
{
    int i, n;

    for ( ; ; ) {
        if (*lock == 0 && onev_atomic_cmp_set(lock, 0, 1)) {
            return;
        }

        for (n = 1; n < 1024; n <<= 1) {

            for (i = 0; i < n; i++) {
                __asm__ (".byte 0xf3, 0x90");
            }

            if (*lock == 0 && onev_atomic_cmp_set(lock, 0, 1)) {
                return;
            }
        }

        sched_yield();
    }
}

ONEV_CPP_END

#endif
