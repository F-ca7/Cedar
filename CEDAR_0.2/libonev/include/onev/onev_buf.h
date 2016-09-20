/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_buf.h
 * @brief Read & Write buffer.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_BUF_H_
#define ONEV_BUF_H_

#include "onev_define.h"
#include "onev_palloc.h"

ONEV_CPP_START

typedef struct onev_buf_e onev_buf_e;
typedef struct onev_file_buf_t onev_file_buf_t;
typedef void (onev_buf_cleanup_pe)(onev_buf_e *, void *);

#define ONEV_BUF_FILE        1
#define ONEV_BUF_CLOSE_FILE  3

#define ONEV_BUF_DEFINE                 \
    onev_buf_cleanup_pe     *cleanup;   \
    onev_list_e             node;       \
    int                     flags;      \
    void                    *args;

struct onev_buf_e
{
    ONEV_BUF_DEFINE;
    char                *pos;
    char                *last;
    char                *end;
};

struct onev_file_buf_t
{
    ONEV_BUF_DEFINE;
    int                 fd;
    int64_t             offset;
    int64_t             count;
};

/**
 * New a buffer element.
 */
extern onev_buf_e *onev_create_buf(onev_pool_e *pool, uint32_t size);
extern void       onev_destroy_buf(onev_buf_e *b);
extern int        onev_buf_check_may_add_for_read(onev_pool_e *pool, onev_buf_e *b, uint32_t size);
extern void       onev_buf_chain_clear(onev_list_e *l);

/**
 * @brief  Set data to buffer.
 * Associate with pool.
 * @param[in] pool  space pool
 * @param[in] b     the buffer needs setting
 * @param[in] data  modify the buffer size
 * @param[in] size  from configuration
 */
extern void       onev_buf_set_data(onev_pool_e *pool, onev_buf_e *b, const void *data, uint32_t size);
extern void       onev_buf_set_cleanup(onev_buf_e *b, onev_buf_cleanup_pe *cleanup, void *args);

ONEV_CPP_END

#endif
