#ifndef ONEV_CONNECTION_H_
#define ONEV_CONNECTION_H_

#include <onev_defines.h>
#include "onev_struct.h"

/**
 * 连接主程序
 */

ONEV_CPP_START

typedef struct onev_connection_list_t {
    onev_connection_e       *head;
    onev_connection_e       *tail;
} onev_connection_list_t;

// fuction
onev_listen_e *onev_connection_listen_addr(onev_io_e *eio, onev_addr_e addr, onev_io_handler_pe *handler);
void onev_connection_on_wakeup(struct ev_loop *loop, ev_async *w, int revents);
void onev_connection_on_listen(struct ev_loop *loop, ev_timer *w, int revents);
int onev_connection_write_socket(onev_connection_e *c);
int onev_connection_request_process(onev_request_e *r, onev_io_process_pe *process);
uint64_t onev_connection_get_packet_id(onev_connection_e *c, void *packet, int flag);

int onev_connection_send_session_list(onev_list_e *list);
int onev_connection_session_build(onev_session_e *s);
void onev_connection_wakeup_session(onev_connection_e *c);
void onev_connection_destroy(onev_connection_e *c);
int onev_connection_request_done(onev_request_e *c);
int onev_connection_write_again(onev_connection_e *c);
void onev_connection_on_readable(struct ev_loop *loop, ev_io *w, int revents);
void onev_connection_on_writable(struct ev_loop *loop, ev_io *w, int revents);
void onev_connection_reuseport(onev_io_e *eio, onev_listen_e *l, int idx);
void onev_connection_on_accept(struct ev_loop *loop, ev_io *w, int revents);
void onev_connection_on_udpread(struct ev_loop *loop, ev_io *w, int revents);

ONEV_CPP_END

#endif

