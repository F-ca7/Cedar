#ifndef M_ONEV_IO_H_
#define M_ONEV_IO_H_


#include "onev_struct.h"
#include <unistd.h>
#include <pthread.h>
#include "onev_struct.h"
#include "onev_log.h"
#include "onev_summary.h"
/**
 * IO文件头
 */

ONEV_CPP_START
// 接口函数
///////////////////////////////////////////////////////////////////////////////////////////////////
// onev_io_e
///create an io object and return
extern onev_io_e           *onev_create_io(onev_io_e *eio, int io_thread_count);
///start io and its threads
extern int                  onev_start_io(onev_io_e *eio);
///use spinlock to wait io
extern int                  onev_wait_io(onev_io_e *eio);
///stop io, also in pool
extern int                  onev_stop_io(onev_io_e *eio);
///free space for an io
extern void                 onev_destroy_io(onev_io_e *eio);
///set user thread start
extern void                 onev_io_set_uthread_start(onev_io_e *eio, onev_io_uth_start_pe *on_utstart, void *args);
extern void                 onev_eio_stat_watcher_start(onev_io_e *eio, ev_timer *stat_watcher,
        double interval, onev_io_stat_t *iostat, onev_io_stat_process_pt *process);

///////////////////////////////////////////////////////////////////////////////////////////////////
// onev_connection_e
///call onev_add_listen
extern onev_listen_e       *onev_connection_add_listen(onev_io_e *eio, const char *host, int port, onev_io_handler_pe *handler);
extern onev_connection_e   *onev_connection_connect_thread(onev_io_e *eio, onev_addr_e addr,
        onev_io_handler_pe *handler, int conn_timeout, void *args, int flags);
extern int                  onev_connection_connect(onev_io_e *eio, onev_addr_e addr,
        onev_io_handler_pe *handler, int conn_timeout, void *args, int flags);
extern int                  onev_connection_disconnect(onev_io_e *eio, onev_addr_e addr);
extern int                  onev_connection_disconnect_thread(onev_io_e *eio, onev_addr_e addr);
extern int                  onev_connection_send_session(onev_connection_e *c, onev_session_e *s);
extern char                 *onev_connection_to_str(onev_connection_e *c);
extern int                  onev_connection_dispatch_to_thread(onev_connection_e *c, onev_io_thread_e *ioth);

extern onev_session_e       *onev_connection_connect_init(onev_session_e *s, onev_io_handler_pe *handler,
        int conn_timeout, void *args, int flags, char *servername);
extern onev_connection_e    *onev_connection_connect_thread_ex(onev_addr_e addr, onev_session_e *s);
extern int                  onev_connection_connect_ex(onev_io_e *eio, onev_addr_e addr, onev_session_e *s);
///kill connection
extern int                  onev_connection_destroy_dispatch(onev_connection_e *c);
///
extern onev_listen_e        *onev_add_listen(onev_io_e *eio, const char *host, int port,
        onev_io_handler_pe *handler, void *args);
extern onev_listen_e        *onev_add_listen_addr(onev_io_e *eio, onev_addr_e addr,
        onev_io_handler_pe *handler, int udp, void *args);
///////////////////////////////////////////////////////////////////////////////////////////////////
//onev_session
///create a session of given size
extern onev_session_e      *onev_create_session(int64_t size);
///free space for a session
extern void                 onev_destroy_session(void *s);
///////////////////////////////////////////////////////////////////////////////////////////////////
// onev_request
///activates the async watcher of its io thread
extern void                 onev_request_wakeup(onev_request_e *r);
///push buffer to c->buf
extern void                 onev_request_addbuf(onev_request_e *r, onev_buf_e *b);
///////////////////////////////////////////////////////////////////////////////////////////////////
// onev_client uthread
extern void                 onev_client_uthread_set_handler(onev_io_handler_pe *handler);	
///////////////////////////////////////////////////////////////////////////////////////////////////
// onev_client_wait
extern void                 onev_client_wait_cleanup(onev_client_wait_e *w);
///send packet, synchronize, wait ack
extern void                *onev_client_send(onev_io_e *eio, onev_addr_e addr, onev_session_e *s);
///send session to addr
extern int                  onev_client_dispatch(onev_io_e *eio, onev_addr_e addr, onev_session_e *s);
///
extern void                 onev_client_wait_init(onev_client_wait_e *w);
extern int                  onev_client_wait_process(onev_request_e *r);
extern void                 onev_client_wait(onev_client_wait_e *w, int count);
extern void                 onev_client_wait_wakeup(onev_client_wait_e *w);
///
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
/*
#define onev_io_create(cnt)                         onev_create_io(&onev_io_var, cnt)
#define onev_start_io()                             onev_start_io(&onev_io_var)
#define onev_wait_io()                              onev_wait_io(&onev_io_var)
#define onev_stop_io()                              onev_stop_io(&onev_io_var)
#define onev_io_destroy()                           onev_destroy_io(&onev_io_var)
#define onev_io_connect(addr,handler,t,args)        onev_connection_connect(&onev_io_var,addr,handler,t,args,0)


#define onev_io_set_uthread_start(start,args)       onev_io_set_uthread_start(&onev_io_var,start,args)
#define onev_io_stat_watcher_start(a1,a2,a3,a4)     onev_eio_stat_watcher_start(&onev_io_var,a1,a2,a3,a4)
#define onev_io_add_listen(host,port,handler)       onev_connection_add_listen(&onev_io_var,host,port,handler)*/
#define onev_request_set_wobj(r, w)     (r)->request_list_node.prev = (onev_list_e *)w
#define onev_session_set_wobj(s, w)     onev_request_set_wobj(&((s)->r), w)
#endif

// 变量
extern __thread onev_baseth_e *onev_baseth_self;
extern onev_io_e onev_io_var;

ONEV_CPP_END

#endif
