/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_struct.h
 * @brief All struct in libonev.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef M_ONEV_IO_STRUCT_H_
#define M_ONEV_IO_STRUCT_H_

#include <onev_define.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/conf.h>
#include <openssl/engine.h>
#include <openssl/evp.h>

ONEV_CPP_START

#define EV_STANDALONE    1
#define EV_USE_MONOTONIC 0
#include "ev.h"
#include <onev_palloc.h>
#include <onev_buf.h>
#include <onev_list.h>
#include <onev_atomic.h>
#include <onev_hash.h>
#include <onev_inet.h>
#include <onev_array.h>


// define
#define ONEV_MAX_THREAD_CNT         64
#define ONEV_CONN_DOING_REQ_CNT     1024
#ifndef ONEV_MAX_CLIENT_CNT
#define ONEV_MAX_CLIENT_CNT         1024
#endif
#define ONEV_IOTH_DOING_REQ_CNT     8192
#define ONEV_WARN_LOG_INTERVAL      100


#define ONEV_EVENT_READ             1
#define ONEV_EVENT_WRITE            2
#define ONEV_EVENT_TIMEOUT          4
#define ONEV_TYPE_MESSAGE           1
#define ONEV_TYPE_SESSION           2
/// auto connect if there is no connection to addr
#define ONEV_CONNECT_SEND           0x05

#define ONEV_TYPE_SERVER            0
#define ONEV_TYPE_CLIENT            1

#define ONEV_MESG_DESTROY           3

#define ONEV_CONN_OK                0
#define ONEV_CONN_CONNECTING        1
#define ONEV_CONN_AUTO_CONN         2
#define ONEV_CONN_CLOSE             3

#define ONEV_CLIENT_DEFAULT_TIMEOUT 4000
#define ONEV_FIRST_MSGLEN           1024
#define ONEV_IO_BUFFER_SIZE         8192
#define ONEV_MESG_READ_AGAIN        1
#define ONEV_REQUEST_DONE           1

#define ONEV_IOV_MAX                256
#define ONEV_IOV_SIZE               262144


// summary
#define ONEV_SUMMARY_CNT            64
#define ONEV_SUMMARY_LENGTH_BIT     10
#define ONEV_SUMMARY_LENGTH         (1<<ONEV_SUMMARY_LENGTH_BIT)
#define ONEV_SUMMARY_LENGTH_MASK    (ONEV_SUMMARY_LENGTH - 1)

#define ONEV_CONNECT_SEND           0x05
#define ONEV_OTHER_EVENT            0xf0
#define ONEV_ADD_LISTEN             0x10


#define ONEV_DISCONNECT_ADDR        0x02
#define ONEV_CONNECT_ADDR           0x03
#define ONEV_CONNECT_AUTOCONN       0x01
#define ONEV_CONNECT_SSL            0x02

/// typedef
typedef struct onev_io_thread_e onev_io_thread_e;
typedef struct onev_io_e onev_io_e;
typedef struct onev_request_thread_e onev_request_thread_e;
typedef struct onev_io_handler_pe onev_io_handler_pe;
typedef struct onev_io_stat_e onev_io_stat_e;
typedef struct onev_request_e onev_request_e;
typedef struct onev_connection_e onev_connection_e;
typedef struct onev_message_e onev_message_e;
typedef struct onev_message_session_e onev_message_session_e;
typedef struct onev_session_e onev_session_e;
typedef struct onev_listen_simple_e onev_listen_simple_e;
typedef struct onev_baseth_e onev_baseth_e;
typedef struct onev_thread_pool_e onev_thread_pool_e;
typedef struct onev_client_wait_e onev_client_wait_e;
typedef struct onev_summary_node_e onev_summary_node_e;
typedef struct onev_summary_e onev_summary_e;
typedef struct onev_listen_e onev_listen_e;
typedef struct onev_client_e onev_client_e;

typedef struct onev_ssl_e onev_ssl_e;
typedef struct onev_ssl_ctx_e onev_ssl_ctx_e;
typedef struct onev_ssl_connection_e onev_ssl_connection_e;

typedef void *(onev_baseth_on_start_pe)(void *args);
typedef void (onev_baseth_on_process_pe)(onev_baseth_e *th);
typedef void (onev_baseth_on_wakeup_pe)(struct ev_loop *loop, ev_async *w, int revents);
/// needs implementation
typedef int (onev_io_process_pe)(onev_request_e *r);
typedef int (onev_io_cleanup_pe)(onev_request_e *r, void *apacket);
typedef int (onev_read_pe)(onev_connection_e *c, char *buf, int size, int *pending);
typedef int (onev_write_pe)(onev_connection_e *c, onev_list_e *l);
typedef void (onev_ssl_schandler_pe)(onev_connection_e *c);
/// needs implementation
typedef void (onev_io_uth_start_pe)(void *args);
typedef void (onev_io_stat_process_pe)(onev_io_stat_e *iostat);

/// for synchronization
struct onev_client_wait_e {
    pthread_mutex_t         mutex;///< lock, in client_wait_wakeup
    int                     done_count;///< after mutex_lock
    pthread_cond_t          cond;///< conditional variable
    onev_list_e             session_list;
    int                     status;
    onev_list_e             next_list;
};

struct onev_request_e {
    void                    *args;
    int                     reserved;
    void                    *user_data;///< event
    void                    *ipacket;///< input packets
    onev_list_e             request_list_node;
    onev_message_session_e  *ms;// includes connection and pool
    onev_list_e             all_node;
    int8_t                  retcode, status, waiting;
    ev_tstamp               start_time;// when do_request
    void                    *opacket;///< output packets
    onev_client_wait_e      *client_wait;
};

/// communicate with outside, operations callback and flags
struct onev_io_handler_pe {
    void                    *(*decode)(onev_message_e *m);
    int                     (*encode)(onev_request_e *r, void *packet);
    onev_io_process_pe      *process;
    int                     (*new_packet) (onev_connection_e *c);
    int                     (*on_disconnect) (onev_connection_e *c); // when destroy connection
    void                    *user_data, *user_data2;// server

    uint64_t                (*get_packet_id)(onev_connection_e *c, void *packet);
    onev_io_cleanup_pe      *cleanup;
    int                     (*batch_process)(onev_message_e *m);
    void                    (*send_output_done) (onev_connection_e *c);
    int                     (*on_connect) (onev_connection_e *c);
    int                     (*on_idle) (onev_connection_e *c);
//    int                     (*set_data) (onev_request_e *r, const char *data, int len);
    int8_t                  is_uthread, is_ssl, is_udp;
    void                    (*send_buf_done) (onev_request_e *r);
};

// async + spinlock
#define ONEV_BASETH_DEFINE                          \
    onev_baseth_on_start_pe         *on_start;      \
    pthread_t                       tid;            \
    int                             idx, iot;       \
    struct ev_loop                  *loop;          \
    ev_async                        thread_watcher; \
    onev_atomic_t                   thread_lock;    \
    onev_list_e                     user_list;      \
    onev_baseth_on_process_pe       *user_process;  \
    ev_timer                        user_timer;     \
    onev_io_e                       *eio;

/*thread pool element*/
struct onev_thread_pool_e {
    int                     thread_count;
    int                     member_size;
    char                    *last;// last=data[0]+member_size*thread_count
    onev_list_e             list_node;// linkd to io->thread_pool_list
    char                    data[0];

    onev_atomic32_t         last_number;
    onev_thread_pool_e      *next;
};

/*listen list*/
#define ONEV_LISTEN_HEADER                  \
    int                     fd;             \
    int8_t                  cur, old;       \
    uint8_t                 hidden_sum : 1; \
    uint8_t                 reuseport : 1;  \
    uint8_t                 is_simple : 1;  \
    onev_io_handler_pe      *handler;       \
    void                    *user_data;

struct onev_listen_simple_e {
    ONEV_LISTEN_HEADER;
};
struct onev_listen_e {
    ONEV_LISTEN_HEADER;

    onev_addr_e             addr;
    onev_atomic_t           listen_lock;
    onev_io_thread_e        *curr_ioth;
    onev_io_thread_e        *old_ioth;
    onev_atomic_t           bind_port_cnt;// if reuseport

    onev_listen_e           *next;
    ev_io                   read_watcher[0];// bind_port_cnt length  reader_watcher[].fd ~ header->fd
};

/*ssl safe*/
struct onev_ssl_ctx_e {
    SSL_CTX                 *ctx;
    onev_pool_e             *pool;
    onev_list_e             list_node;
    int                     type;
    struct {
        char                    *file;
        int                     line;
        int                     prefer_server_ciphers;
        uint32_t                verify;
        uint32_t                verify_depth;
        int                     session_timeout;
        int                     session_cache;
        uint64_t                protocols;
        char                    *certificate;
        char                    *certificate_key;
        char                    *dhparam;
        char                    *client_certificate;
        char                    *crl;
        char                    *ciphers;
        char                    *server_name;
        char                    *pass_phrase_dialog;
        int                     session_reuse;
    } conf;
};
struct onev_ssl_e {
    onev_ssl_ctx_e          *client_ctx;
    onev_ssl_ctx_e          *server_ctx;
    onev_hash_e             *client_map;

    onev_list_e             server_list;
    onev_pool_e             *pool;
    onev_hash_e             *server_map;
};

/*io element*/
struct onev_io_e {
    onev_pool_e             *pool;// space
    onev_thread_pool_e      *io_thread_pool;
    onev_thread_pool_e      *thread_pool;

    int                     io_thread_count;
    onev_list_e             thread_pool_list;
    onev_list_e             eio_list_node;
    onev_atomic_t           lock;

    onev_listen_e           *listen;
    onev_listen_e           *listenadd;// to be added as the head
    void                    *user_data;

    // flags
    uint32_t                stoped : 1;// exit
    uint32_t                started : 1;
    uint32_t                tcp_cork : 1;
    uint32_t                tcp_nodelay : 1;// for socket to close Nagling
    uint32_t                tcp_defer_accept : 1;// a tcp option in socket, for server
    uint32_t                listen_all : 1;
    uint32_t                uthread_enable : 1;
    uint32_t                affinity_enable : 1;
    uint32_t                no_redispatch : 1;
    uint32_t                do_signal : 1;
    uint32_t                block_thread_signal : 1;
    uint32_t                support_ipv6 : 1;
    uint32_t                checkdrc : 1;
    uint32_t                no_reuseport : 1;
    uint32_t                use_accept4 : 1;
    uint32_t                no_delayack : 1;

    int32_t                 send_qlen;// request count on a connection
    int32_t                 force_destroy_second;// second
    sigset_t                block_thread_sigset;
    int                     listen_backlog;// for socket, may specify the maximum length of the queue for the pending connections

    ev_tstamp               start_time;
    onev_summary_e          *eio_summary;
    onev_ssl_e              *ssl;
};


/*io thread element*/
struct onev_io_thread_e {
    ONEV_BASETH_DEFINE

    // init in async event start
    onev_list_e             conn_list;///< connected, not listen
    onev_list_e             session_list;
    onev_list_e             request_list;///< done, not send

    // listen watcher
    ev_timer                listen_watcher;
    onev_io_uth_start_pe *on_utstart;
    void                    *ut_args;

    // client list
    onev_hash_e             *client_list;
    onev_array_e            *client_array;

    // connected list
    onev_list_e             connected_list;///< connected and listen
    onev_atomic32_t         doing_request_count;
    uint64_t                done_request_count;
};

#define ONEV_MESSAGE_SESSION_HEADER \
    onev_connection_e       *c;     \
    onev_pool_e             *pool;  \
    int8_t                  type;   \
    int8_t                  async;  \
    int8_t                  status; \
    int8_t                  error;

struct onev_message_session_e {
    ONEV_MESSAGE_SESSION_HEADER
};

///for receiving, one or more request
struct onev_message_e {
    ONEV_MESSAGE_SESSION_HEADER
    int                     recycle_cnt;

    onev_buf_e              *input;///< decode from here
    onev_list_e             message_list_node;
    onev_list_e             request_list;
    onev_list_e             all_list;
    int                     request_list_count;
    int                     next_read_len;
    void                    *user_data;
};

/*save client*/
struct onev_client_e {
    onev_addr_e             addr;
    onev_connection_e       *c;
    onev_io_handler_pe      *handler;
    SSL_SESSION             *ssl_session;
    onev_hash_bucket_e        client_list_node;// the offset is got in thread_pool initiating
    void                    *user_data;
    int                     ref;
    uint32_t                timeout : 31;
    uint32_t                is_ssl : 1;
    char                    *server_name;
};


///for sending, with one request
struct onev_session_e {
    ONEV_MESSAGE_SESSION_HEADER;
    ev_tstamp               timeout, now;
    ev_timer                timeout_watcher;

    onev_list_e             session_list_node;
    onev_hash_bucket_e        send_queue_hash;
    onev_list_e             send_queue_list;
    onev_io_process_pe      *process;
    onev_io_cleanup_pe      *cleanup;
    onev_addr_e             addr;
    onev_list_e             *nextb;

    uint64_t                packet_id;
    void                    *thread_ptr;
    onev_request_e          r;
    char                    data[0];
};

///a socket connection
struct onev_connection_e {
    struct ev_loop          *loop;
    onev_pool_e             *pool;
    onev_io_thread_e        *ioth;
    onev_connection_e       *next;
    onev_list_e             conn_list_node;

    // file description
    uint32_t                default_msglen;
    uint32_t                first_msglen;
    int                     reconn_time, reconn_fail;
    int                     idle_time;
    int                     fd, seq;// seq,thread id or session id
    onev_addr_e             addr;

    ev_io                   read_watcher;
    ev_io                   write_watcher;
    ev_timer                timeout_watcher;
    onev_list_e             message_list;

    onev_list_e             output;
    onev_io_handler_pe      *handler;
    onev_read_pe            *read;
    onev_write_pe           *write;
    onev_client_e           *client;
    onev_list_e             session_list;
    onev_hash_e             *send_queue;
    void                    *user_data;

    uint32_t                status : 4;
    uint32_t                event_status : 4;
    uint32_t                type : 1;
    uint32_t                async_conn : 1;
    uint32_t                conn_has_error : 1;
    uint32_t                tcp_cork_flag : 1;
    uint32_t                wait_close : 1;
    uint32_t                need_redispatch : 1;
    uint32_t                read_eof : 1;
    uint32_t                auto_reconn : 1;
    uint32_t                life_idle : 1;
    uint32_t                doing_request_count;

    ev_tstamp               start_time, last_time;
    ev_tstamp               wait_client_time, wcs;

    onev_summary_node_e     *con_summary;// add for summary
    onev_ssl_connection_e   *sc;
    void                    *evdata;
};

/*for statistics*/
struct onev_io_stat_e {
    int64_t                 last_cnt;
    ev_tstamp               last_time;
    double                  last_speed;
    double                  total_speed;
    onev_io_stat_process_pe *process;
    onev_io_e               *eio;
};


///base thread
struct onev_baseth_e {
    ONEV_BASETH_DEFINE
};

struct onev_ssl_connection_e {
    SSL                     *connection;
    onev_ssl_schandler_pe   *handler;

    int                     last;
    uint32_t                handshaked : 1;
    uint32_t                renegotiation : 1;
    uint32_t                session_reuse : 1;
};

struct onev_summary_e {
    int                     max_fd;
    ev_tstamp               time;
    onev_atomic_t           lock;
    onev_pool_e             *pool;
    onev_summary_node_e     *bucket[ONEV_SUMMARY_CNT];
};

struct onev_summary_node_e {
    int                     fd;
    uint32_t                doing_request_count;
    uint64_t                done_request_count;
    uint64_t                in_byte, out_byte;
    ev_tstamp               rt_total;
};

ONEV_CPP_END

#endif
