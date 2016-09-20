#ifndef ONEV_BUF_H_
#define ONEV_BUF_H_
/**
 * 网络读写的BUFFER
 */
#include "onev_defines.h"
#include "onev_palloc.h"

ONEV_CPP_START

#define ONEV_BUF_FILE        1
#define ONEV_BUF_CLOSE_FILE  3

typedef struct onev_buf_e onev_buf_e;
typedef struct onev_file_buf_t onev_file_buf_t;
typedef void (onev_buf_cleanup_pt)(onev_buf_e *, void *);

#define ONEV_BUF_DEFINE             \
    onev_list_e             node;       \
    int                     flags;      \
    onev_buf_cleanup_pt     *cleanup;   \
    void                    *args;

struct onev_buf_e {
    ONEV_BUF_DEFINE;
    char                *pos;
    char                *last;
    char                *end;
};

struct onev_file_buf_t {
    ONEV_BUF_DEFINE;
    int                     fd;
    int64_t                 offset;
    int64_t                 count;
};


extern onev_buf_e *onev_buf_create(onev_pool_e *pool, uint32_t size);
extern void onev_buf_set_cleanup(onev_buf_e *b, onev_buf_cleanup_pt *cleanup, void *args);
///set data to buf
extern void onev_buf_set_data(onev_pool_e *pool, onev_buf_e *b, const void *data, uint32_t size);
extern void onev_buf_destroy(onev_buf_e *b);
extern int onev_buf_check_read_space(onev_pool_e *pool, onev_buf_e *b, uint32_t size);

extern void onev_buf_chain_clear(onev_list_e *l);

ONEV_CPP_END

#endif
