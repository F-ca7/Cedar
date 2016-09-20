#ifndef M_ONEV_POOL_H_
#define M_ONEV_POOL_H_
/**
 * 简单的内存池
 */
#include <onev_defines.h>
#include <onev_list.h>
#include <onev_atomic.h>

ONEV_CPP_START


#define ONEV_POOL_ALIGNMENT         512
#define ONEV_POOL_PAGE_SIZE         4096
///allocate $size memory from pool
#define onev_pool_alloc(pool, size)  onev_pool_alloc_ex(pool, size, sizeof(long))
 
typedef void *(*onev_pool_realloc_pt)(void *ptr, size_t size);
typedef struct onev_pool_large_t onev_pool_large_t;
typedef struct onev_pool_e onev_pool_e;


struct onev_pool_large_t {
    onev_pool_large_t       *next;
    uint8_t                 *data;
};

struct onev_pool_e {
    uint8_t                 *last;
    uint8_t                 *end;
    onev_pool_e             *next;
    uint16_t                failed;
    uint16_t                flags;// =1,set lock
    uint32_t                max;

    // pool header
    onev_pool_e             *current;
    onev_pool_large_t       *large;
    onev_atomic_t           ref;
    onev_atomic_t           tlock;
};

/// come in, set realloc
extern onev_pool_realloc_pt onev_pool_realloc;
extern void *onev_pool_default_realloc (void *ptr, size_t size);

extern onev_pool_e *onev_pool_create(uint32_t size);
extern void onev_pool_clear(onev_pool_e *pool);
extern void onev_pool_destroy(onev_pool_e *pool);
extern void *onev_pool_alloc_ex(onev_pool_e *pool, uint32_t size, int align);
extern void *onev_pool_calloc(onev_pool_e *pool, uint32_t size);
extern void onev_pool_set_allocator(onev_pool_realloc_pt alloc);
///set lock, flags=1
extern void onev_pool_set_lock(onev_pool_e *pool);
 
ONEV_CPP_END
#endif
