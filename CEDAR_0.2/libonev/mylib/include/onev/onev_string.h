#ifndef ONEV_STRING_H_
#define ONEV_STRING_H_

/**
 * inet的通用函数
 */
#include <stdarg.h>
#include "onev_defines.h"
#include "onev_palloc.h"

ONEV_CPP_START

extern char *onev_string_tohex(const char *str, int n, char *result, int size);
extern int onev_vsnprintf(char *buf, size_t size, const char *fmt, va_list args);
extern int lnprintf(char *str, size_t size, const char *fmt, ...) __attribute__ ((__format__ (__printf__, 3, 4)));


ONEV_CPP_END;

#endif
