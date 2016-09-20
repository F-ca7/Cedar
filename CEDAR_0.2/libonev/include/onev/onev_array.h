/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_array.h
 * @brief Fixed-length array allocation and release.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_ARRAY_H_
#define ONEV_ARRAY_H_

#include "onev_palloc.h"
#include "onev_list.h"

ONEV_CPP_START

typedef struct onev_array_e
{
    onev_pool_e *pool;
    onev_list_e list;
    int         object_size;
    int         count;
}onev_array_e;

/**
 * @brief Create array
 * @param[in] object_size size
 * @return array or NULL
 */
onev_array_e *onev_create_array(int object_size);
void onev_destroy_array(onev_array_e *array);
void *onev_array_alloc(onev_array_e *array);
void onev_array_free(onev_array_e *array, void *ptr);

ONEV_CPP_END

#endif
