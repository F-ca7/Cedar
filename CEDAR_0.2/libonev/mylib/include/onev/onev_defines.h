#ifndef ONEV_DEFINE_H_
#define ONEV_DEFINE_H_

/**
 * 定义一些编译参数
 */

#ifdef __cplusplus
#define ONEV_CPP_START extern "C" {
#define ONEV_CPP_END }
#else
#define ONEV_CPP_START
#define ONEV_CPP_END
#endif

#ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS
#endif
#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <assert.h>
#include <stddef.h>
#include <inttypes.h>
#include <unistd.h>
#include <execinfo.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
// define

#define onev_min(a,b)               (a < b ? a : b)
#define onev_max(a,b)               (a > b ? a : b)
#define likely(x)                   __builtin_expect(!!(x), 1)
#define unlikely(x)                 __builtin_expect(!!(x), 0)
#define onev_align_ptr(p, a)        (uint8_t*)(((uintptr_t)(p) + ((uintptr_t) a - 1)) & ~((uintptr_t) a - 1))
#define onev_align(d, a)            (((d) + (a - 1)) & ~(a - 1))
#define onev_memcpy(dst, src, n)    (((char *) memcpy(dst, src, (n))) + (n))
#define onev_safe_close(fd)         {if((fd)>=0){close((fd));(fd)=-1;}}

#define ONEV_OK                     0
#define ONEV_ERROR                  (-1)
#define ONEV_ABORT                  (-2)
#define ONEV_ASYNC                  (-3)
#define ONEV_BREAK                  (-4)
#define ONEV_AGAIN                  (-EAGAIN)
///////////////////////////////////////////////////////////////////////////////////////////////////
// typedef
typedef struct onev_addr_e {
    uint16_t                  family;///<socket address domain
    uint16_t                  port;
    union {
        uint32_t                addr;
        uint8_t                 addr6[16];
    } u;
    uint32_t                cidx; //thread id
} onev_addr_e;

#endif
