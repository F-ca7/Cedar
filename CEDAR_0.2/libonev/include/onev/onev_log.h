/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_log.h
 * @brief Simple log print.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_LOG_H_
#define ONEV_LOG_H_

#include <onev_define.h>
#include <onev_string.h>
#include <onev_baseth_palloc.h>

ONEV_CPP_START

typedef void (*onev_log_print_pe)(const char *message);
typedef void (*onev_log_format_pe)(int level, const char *file, int line, const char *function, const char *fmt, ...);

typedef enum
{
    ONEV_LOG_OFF = 1,
    ONEV_LOG_FATAL,
    ONEV_LOG_ERROR,
    ONEV_LOG_WARN,
    ONEV_LOG_INFO,
    ONEV_LOG_DEBUG,
    ONEV_LOG_TRACE,
    ONEV_LOG_ALL
} onev_log_level_t;

#define onev_log_common(file, line, format, args...)                            \
    onev_log_format_default(ONEV_LOG_OFF, file, line, __FUNCTION__, format, ## args)
#define onev_fatal_log(format, args...) if(onev_log_level>=ONEV_LOG_FATAL)      \
        onev_log_format(ONEV_LOG_FATAL, __FILE__, __LINE__, __FUNCTION__, format, ## args)
#define onev_error_log(format, args...) if(onev_log_level>=ONEV_LOG_ERROR)      \
        onev_log_format(ONEV_LOG_ERROR, __FILE__, __LINE__, __FUNCTION__, format, ## args)
#define onev_warn_log(format, args...) if(onev_log_level>=ONEV_LOG_WARN)        \
        onev_log_format(ONEV_LOG_WARN, __FILE__, __LINE__, __FUNCTION__, format, ## args)
#define onev_info_log(format, args...) if(onev_log_level>=ONEV_LOG_INFO)        \
        onev_log_format(ONEV_LOG_INFO, __FILE__, __LINE__, __FUNCTION__, format, ## args)
#define onev_debug_log(format, args...) if(onev_log_level>=ONEV_LOG_DEBUG)      \
        onev_log_format(ONEV_LOG_DEBUG, __FILE__, __LINE__, __FUNCTION__, format, ## args)
#define onev_trace_log(format, args...) if(onev_log_level>=ONEV_LOG_TRACE)      \
        onev_log_format(ONEV_LOG_TRACE, __FILE__, __LINE__, __FUNCTION__, format, ## args)

        
extern onev_log_level_t onev_log_level;
extern onev_log_format_pe onev_log_format;

/**
 * @brief Write all content to file.
 * @param[in] message content
 */
extern void onev_log_print_default(const char *message);

/**
 * Add log.
 */
extern void onev_log_format_default(int level, const char *file, int line, const char *function, const char *fmt, ...);


ONEV_CPP_END

#endif
