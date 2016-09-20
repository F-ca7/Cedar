#ifndef ONEV_LOG_H_
#define ONEV_LOG_H_

/**
 * 简单的log输出
 */
#include <onev_defines.h>
#include <onev_string.h>
#include <onev_baseth_palloc.h>

ONEV_CPP_START

typedef void (*onev_log_print_pt)(const char *message);
typedef void (*onev_log_format_pt)(int level, const char *file, int line, const char *function, const char *fmt, ...);
typedef enum {
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
extern onev_log_format_pt onev_log_format;
extern void onev_log_print_default(const char *message);
extern void onev_log_format_default(int level, const char *file, int line, const char *function, const char *fmt, ...);


ONEV_CPP_END

#endif
