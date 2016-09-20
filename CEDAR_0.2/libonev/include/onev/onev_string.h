/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_string.h
 * @brief Simple operations on string.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_STRING_H_
#define ONEV_STRING_H_

#include <stdarg.h>
#include "onev_define.h"
#include "onev_palloc.h"

ONEV_CPP_START

extern char *onev_string_tohex(const char *str, int n, char *result, int size);
extern int  onev_vsnprintf(char *buf, size_t size, const char *fmt, va_list args);
extern int  lnprintf(char *str, size_t size, const char *fmt, ...) __attribute__ ((__format__ (__printf__, 3, 4)));


ONEV_CPP_END;

#endif
