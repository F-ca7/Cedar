#ifndef ONEV_ARRAY_H_
#define ONEV_ARRAY_H_

/**
 * 固定长度数组分配
 */
#include "onev_palloc.h"
#include "onev_list.h"

ONEV_CPP_START


typedef struct onev_array_t {
    onev_pool_e *pool;
    onev_list_e list;
    int         object_size;
    int         count;
} onev_array_t;

onev_array_t *onev_array_create(int object_size);
void onev_array_destroy(onev_array_t *array);
void *onev_array_alloc(onev_array_t *array);
void onev_array_free(onev_array_t *array, void *ptr);

ONEV_CPP_END

#endif
