#ifndef ONEV_HASH_H_
#define ONEV_HASH_H_

/**
 * 固定HASH桶的hashtable, 需要在使用的对象上定义一个onev_hash_bucket_e
 */
#include "onev_palloc.h"
#include "onev_list.h"
#include "onev_buf.h"

ONEV_CPP_START

typedef struct onev_hash_e onev_hash_e;
typedef struct onev_hash_bucket_e onev_hash_bucket_e;
typedef int (onev_hash_cmp_pt)(const void *a, const void *b);

struct onev_hash_e {
    onev_hash_bucket_e        **buckets;
    uint32_t                size;
    uint32_t                mask;
    uint32_t                count;
    int16_t                 offset;
    int16_t                 flags;
    uint64_t                seqno;
    onev_list_e             list;
};


struct onev_hash_bucket_e {
    onev_hash_bucket_e    *next;
    onev_hash_bucket_e    **pprev;
    uint64_t            key;
};

extern onev_hash_e *onev_hash_create(onev_pool_e *pool, uint32_t size, int offset);

extern int onev_hash_add(onev_hash_e *table, uint64_t key, onev_hash_bucket_e *list);
extern void *onev_hash_del(onev_hash_e *table, uint64_t key);
extern int onev_hash_del_node(onev_hash_bucket_e *n);
extern uint64_t onev_hash_code(const void *key, int len, unsigned int seed);
void *onev_hash_find_ex(onev_hash_e *table, uint64_t key, onev_hash_cmp_pt cmp, const void *a);
extern uint64_t onev_hash_key(volatile uint64_t key);

extern int onev_hash_dlist_add(onev_hash_e *table, uint64_t key, onev_hash_bucket_e *hash, onev_list_e *list);
extern void *onev_hash_dlist_del(onev_hash_e *table, uint64_t key);

ONEV_CPP_END

#endif
