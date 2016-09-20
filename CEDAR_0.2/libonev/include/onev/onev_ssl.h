/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_ssl.h
 * @brief SSL safe support.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_SSL_H_
#define ONEV_SSL_H_

#include <onev_define.h>
#include "onev_struct.h"

ONEV_CPP_START

int  onev_ssl_connection_create(onev_ssl_ctx_e *ssl, onev_connection_e *c);

/**
 * Client handshake.
 */
int  onev_ssl_client_do_handshake(onev_connection_e *c);
void onev_ssl_client_handshake(struct ev_loop *loop, ev_io *w, int revents);

/**
 * Handshake.
 */
void onev_ssl_connection_handshake(struct ev_loop *loop, ev_io *w, int revents);
int  onev_destroy_ssl_connection(onev_connection_e *c);

extern int  onev_ssl_connection_index;

typedef struct onev_ssl_ctx_server_e
{
    onev_hash_bucket_e      node;
    char                    *server_name;
    onev_ssl_ctx_e          *ss;
} onev_ssl_ctx_server_e;

ONEV_CPP_END

#endif
