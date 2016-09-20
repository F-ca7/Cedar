/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_connection.h
 * @brief Functions on connection.
 * Core of libonev processing connection.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_CONNECTION_H_
#define ONEV_CONNECTION_H_

#include <onev_define.h>
#include "onev_struct.h"

ONEV_CPP_START

typedef struct onev_connection_list_t
{
    onev_connection_e       *head;
    onev_connection_e       *tail;
} onev_connection_list_t;

/**
 * @brief onev_connection_on_listen
 * Switch listen. Timer event of ev_loop.
 * The callback function of listen_watcher on io_thread.
 */
void onev_connection_on_listen(struct ev_loop *loop, ev_timer *w, int revents);
void onev_destroy_connection(onev_connection_e *c);

/**
 * session_timeout
 */
void onev_connection_wakeup_session(onev_connection_e *c);

/**
 * reuseport for multi-thread
 */
void onev_connection_reuseport(onev_io_e *eio, onev_listen_e *l, int idx);

/**
 * Accpet connection. Process event.
 */
void onev_connection_on_accept(struct ev_loop *loop, ev_io *w, int revents);

/**
 * @brief After signal an IO thread.
 */
void onev_connection_on_wakeup(struct ev_loop *loop, ev_async *w, int revents);
int onev_connection_send_session_list(onev_list_e *list);
int onev_connection_session_build(onev_session_e *s);
uint64_t onev_connection_get_packet_id(onev_connection_e *c, void *packet, int flag);
int onev_connection_request_done(onev_request_e *c);

/**
 * @brief Write connection's output buffer to socket.
 * @param c onev_connection_e
 * @return ONEV_ABORT network break
 *         ONEV_AGAIN write again
 *         ONEV_OK    write done
 */
int onev_connection_write_socket(onev_connection_e *c);

/**
 * For write again.
 */
int onev_connection_write_again(onev_connection_e *c);

/**
 * Process read.
 */
void onev_connection_on_readable(struct ev_loop *loop, ev_io *w, int revents);

/**
 * Write event processing callbak function.
 */
void onev_connection_on_writable(struct ev_loop *loop, ev_io *w, int revents);

/**
 * udp read
 */
void onev_connection_on_udpread(struct ev_loop *loop, ev_io *w, int revents);

onev_listen_e *onev_connection_listen_addr(onev_io_e *eio, onev_addr_e addr, onev_io_handler_pe *handler);
int onev_connection_request_process(onev_request_e *r, onev_io_process_pe *process);

ONEV_CPP_END

#endif

