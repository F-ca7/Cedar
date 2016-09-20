/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_io.h
 * @brief IO interfaces and global variables.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_IO_H_
#define ONEV_IO_H_

#include "onev_struct.h"
#include <unistd.h>
#include <pthread.h>
#include "onev_log.h"
#include "onev_summary.h"

ONEV_CPP_START
// Interfaces
///////////////////////////////////////////////////////////////////////////////////////////////////
// onev_io_e

/**
 * @brief Initialize io object, including its thread pool.
 * @param[out] io               the io object that is going to be initialized
 * @param[in]  io_thread_count  the count of io thread
 * @return io or NULL
 */
extern onev_io_e           *onev_create_io(onev_io_e *io, int io_thread_count);

/**
 * @brief React signals.
 * Start all threads in all thread pools of io.
 * @param[in] io  io object
 * @return ONEV_OK if success, ONEV_ABORT if started, ONEV_ERROR if fail.
 */
extern int                  onev_start_io(onev_io_e *io);

/**
 * @brief Wait io. Use spinlock.
 * @param[in] io
 * @return ONEV_OK if success.
 */
extern int  onev_wait_io(onev_io_e *io);

/**
 * @brief Stop io.
 * @param[in] io target io object
 * @return ONEV_OK if success, ONEV_ERROR if fail
 */
extern int  onev_stop_io(onev_io_e *io);

/**
 * @brief Release io resource and space.
 * @param[in] io  target io object
 */
extern void                 onev_destroy_io(onev_io_e *io);

/**
 * @brief  Set user thread start function for listen.
 * @param[in] io          io object
 * @param[in] on_utstart  implementated in user programs if needed
 * @param[in] args        usurally 'this'
 */
extern void  onev_io_set_uthread_start(onev_io_e *io, onev_io_uth_start_pe *on_utstart, void *args);

/**
 * Start state timer watcher.
 */
extern void  onev_eio_stat_watcher_start(onev_io_e *io, ev_timer *stat_watcher,
        double interval, onev_io_stat_e *iostat, onev_io_stat_process_pe *process);

///////////////////////////////////////////////////////////////////////////////////////////////////
// onev_connection_e
/**
 * @brief Close read function on the TCP socket of a connection.
 * @param[in] c  connection
 * @return 0 shutdown
 */
extern int  onev_connection_destroy_dispatch(onev_connection_e *c);

extern char                 *onev_connection_to_str(onev_connection_e *c);

/**
 * @brief Add listen port. Called when start io.
 * @param[in] io      the starting io object
 * @param[in] host    server name or IP address or NULL
 * @param[in] port    net port
 * @param[in] handler onev_io_handler_pe
 * @return connection if success, or NULL otherwise
 */
extern onev_listen_e   *onev_connection_add_listen(onev_io_e *io,
                       const char *host, int port, onev_io_handler_pe *handler);

/**
 * Synch connect.
 */
extern onev_connection_e   *onev_connection_connect_thread(onev_io_e *io, onev_addr_e addr,
        onev_io_handler_pe *handler, int conn_timeout, void *args, int flags);

/**
 * Async connect.
 */
extern int                  onev_connection_connect(onev_io_e *io, onev_addr_e addr,
        onev_io_handler_pe *handler, int conn_timeout, void *args, int flags);

/**
 * Break connection.
 */
extern int                  onev_connection_disconnect(onev_io_e *io, onev_addr_e addr);
extern int                  onev_connection_disconnect_thread(onev_io_e *io, onev_addr_e addr);

/**
 * Send session to connection. Local used.
 */
extern int                  onev_connection_send_session(onev_connection_e *c, onev_session_e *s);

/**
 * Switch to an assigned thread.
 */
extern int                  onev_connection_dispatch_to_thread(onev_connection_e *c, onev_io_thread_e *ioth);

/**
 * Initially configure connection.
 */
extern onev_session_e       *onev_connection_connect_init(onev_session_e *s, onev_io_handler_pe *handler,
        int conn_timeout, void *args, int flags, char *servername);
extern onev_connection_e    *onev_connection_connect_thread_ex(onev_addr_e addr, onev_session_e *s);
extern int                  onev_connection_connect_ex(onev_io_e *io, onev_addr_e addr, onev_session_e *s);

/**
 * @brief Add listen address
 * @param[in] io          the starting io object
 * @param[in] host        server name or IP address or NULL
 * @param[in] port        net port
 * @param[in] handler     onev_io_handler_pe
 * @param[in] args        NULL
 * @return onev_listen_e or NULL
 */
extern onev_listen_e *onev_add_listen(onev_io_e *io, const char *host, int port,onev_io_handler_pe *handler, void *args);


/**
 *Add listen through address.
 */
extern onev_listen_e *onev_add_listen_addr(onev_io_e *io, onev_addr_e addr,onev_io_handler_pe *handler, int udp,void *args);
///////////////////////////////////////////////////////////////////////////////////////////////////
//onev_session

/**
 * @brief New a session. Associate with request.
 * @param[in] size given size of session
 * @return session or NULL
 */
extern onev_session_e  *onev_create_session(int64_t size);

/**
 * @brief Destroy session through messages.
 * @param data  pointer of the session to be destroyed
 */
extern void            onev_destroy_session(void *s);

///////////////////////////////////////////////////////////////////////////////////////////////////
// onev_request

/**
 * @brief Activates the async thread watcher.
 * @param[in] r  the request to be sent
 */
extern void                 onev_request_wakeup(onev_request_e *r);

/**
 * @brief Push buffer to request(session)
 * request(session) in connection.
 * @param[in] r request
 * @param[in] b buffer
 */
extern void                 onev_request_addbuf(onev_request_e *r, onev_buf_e *b);
///////////////////////////////////////////////////////////////////////////////////////////////////
// onev_client uthread
extern void                 onev_client_uthread_set_handler(onev_io_handler_pe *handler);	
///////////////////////////////////////////////////////////////////////////////////////////////////
// onev_client_wait

/**
 * @brief Release wait object. Including its list member.
 * @param[in] w  wait object.
 */
extern void                 onev_client_wait_cleanup(onev_client_wait_e *w);

/**
 * @brief Synchronize. Wait for returned.
 * Used when posting packet.
 * @param[in] io    used in dispatch client
 * @param[in] addr  target addr, used in dispatch client
 * @param[in] s     session to be sent
 * @return input packet
 */
extern void                *onev_client_send(onev_io_e *eio, onev_addr_e addr, onev_session_e *s);

/**
 * @brief Send session to address.
 * Compute index and get io thread.
 * Signal async io thread watcher.
 * @param[in] io   where to select io thread
 * @param[in] addr target address
 * @param[in] s    session to be sent
 * @return ONEV_OK if success, ONEV_ERROR if fail
 */
extern int                  onev_client_dispatch(onev_io_e *eio, onev_addr_e addr, onev_session_e *s);

/**
 * @brief For synchronization.
 * Initialize wait object member vars, mutex and condition vars.
 * @param[in] w wait object
 */
extern void                 onev_client_wait_init(onev_client_wait_e *w);
extern int                  onev_client_wait_process(onev_request_e *r);
extern void                 onev_client_wait(onev_client_wait_e *w, int count);

/**
 * @brief Wakeup another thread under wait object.
 * @param[in] w  wait object, usually from request
 */
extern void                 onev_client_wait_wakeup(onev_client_wait_e *w);

/**
 * @brief To wakeup another thread once.
 * @param[in] r request
 */
extern void                 onev_client_wait_wakeup_request(onev_request_e *r);

///////////////////////////////////////////////////////////////////////////////////////////////////
// define
#define ONEV_IOTH_SELF ((onev_io_thread_e*) onev_baseth_self)
///type of session timeout: ev_tstamp
#define onev_session_set_timeout(s, t)  (s)->timeout = t
#define onev_session_set_wobj(s, w)     onev_request_set_wobj(&((s)->r), w)
#define onev_session_packet_create(type, s, size)           \
    ((s = onev_create_session(size + sizeof(type))) ? ({    \
        memset(&((s)->data[0]), 0, sizeof(type));           \
        (s)->r.opacket = &((s)->data[0]);                   \
        (type*) &((s)->data[0]);}) : NULL)

#ifdef ONEV_MULTIPLICITY
#define onev_io_create(eio, cnt)                    onev_create_io(eio, cnt)
#define onev_start_io(eio)                          onev_start_io(eio)
#define onev_wait_io(eio)                           onev_wait_io(eio)
#define onev_stop_io(eio)                           onev_stop_io(eio)
#define onev_io_destroy(eio)                        onev_destroy_io(eio)

#define onev_io_set_uthread_start(eio,start,args)   onev_io_set_uthread_start(eio,start,args)
#define onev_io_stat_watcher_start(a1,a2,a3,a4)     onev_eio_stat_watcher_start(&onev_io_var,a1,a2,a3,a4)
#define onev_io_add_listen(eio,host,port,handler)   onev_connection_add_listen(eio,host,port,handler)

#else
#define onev_request_set_wobj(r, w)     (r)->request_list_node.prev = (onev_list_e *)w
#define onev_session_set_wobj(s, w)     onev_request_set_wobj(&((s)->r), w)
#endif

// global var
extern __thread onev_baseth_e *onev_baseth_self;
extern onev_io_e onev_io_var;

ONEV_CPP_END

#endif
