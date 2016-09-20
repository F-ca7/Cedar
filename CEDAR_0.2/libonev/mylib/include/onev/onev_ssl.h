#ifndef ONEV_SSL_H_
#define ONEV_SSL_H_

#include <onev_defines.h>
#include "onev_struct.h"


/**
 * ssl支持模块
 */

ONEV_CPP_START

typedef struct onev_ssl_ctx_server_t {
    onev_hash_bucket_e        node;
    char                    *server_name;
    onev_ssl_ctx_t          *ss;
} onev_ssl_ctx_server_t;

extern int  onev_ssl_connection_index;

int onev_ssl_connection_create(onev_ssl_ctx_t *ssl, onev_connection_e *c);
void onev_ssl_connection_handshake(struct ev_loop *loop, ev_io *w, int revents);
void onev_ssl_client_handshake(struct ev_loop *loop, ev_io *w, int revents);
int onev_ssl_client_do_handshake(onev_connection_e *c);
int onev_ssl_connection_destroy(onev_connection_e *c);


ONEV_CPP_END

#endif
