/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_hash.h
 * @brief Hashtable with fixed hash bucket.
 * Needs to define the hash bucket in the object.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_HASH_H_
#define ONEV_HASH_H_

#include "onev_palloc.h"
#include "onev_list.h"
#include "onev_buf.h"

ONEV_CPP_START

typedef struct onev_hash_e onev_hash_e;
typedef struct onev_hash_bucket_e onev_hash_bucket_e;
typedef int (onev_hash_cmp_pt)(const void *a, const void *b);

struct onev_hash_bucket_e
{
    uint64_t              key;
    onev_hash_bucket_e    *next;
    onev_hash_bucket_e    **pprev;
};

struct onev_hash_e
{
    onev_hash_bucket_e      **buckets;
    uint32_t                size;
    uint32_t                mask;
    uint32_t                count;
    int16_t                 offset;
    int16_t                 flags;
    uint64_t                seqno;
    onev_list_e             list;
};

/**
 * @brief create hash
 * @param[in] pool   space pool
 * @param[in] size   number of client on each thread
 * @param[in] offset computed offset
 * @return hash or NULL
 */
extern onev_hash_e *onev_hash_create(onev_pool_e *pool, uint32_t size, int offset);
extern int         onev_hash_del_node(onev_hash_bucket_e *n);
extern uint64_t    onev_hash_code(const void *key, int len, unsigned int seed);
extern int         onev_hash_add_with_list(onev_hash_e *table, uint64_t key, onev_hash_bucket_e *hash, onev_list_e *list);
extern void        *onev_hash_dlist_del(onev_hash_e *table, uint64_t key);
extern void        *onev_hash_del(onev_hash_e *table, uint64_t key);
extern int         onev_hash_add(onev_hash_e *table, uint64_t key, onev_hash_bucket_e *list);
extern uint64_t    onev_hash_key(volatile uint64_t key);
void *onev_hash_find_ex(onev_hash_e *table, uint64_t key, onev_hash_cmp_pt cmp, const void *a);

ONEV_CPP_END

#endif
