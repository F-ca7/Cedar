#ifndef  EATY_SUMMARY_H
#define  ONEV_SUMMARY_H

#include <onev_defines.h>

#include "onev_struct.h"
#include "onev_log.h"

ONEV_CPP_START
//////////////////////////////////////////////////////////////////////////////////
//接口函数

extern onev_summary_e          *onev_summary_create();
extern void                     onev_summary_destroy(onev_summary_e *sum);
extern onev_summary_node_t     *onev_summary_locate_node(int fd, onev_summary_e *sum, int hidden);
extern void                     onev_summary_destroy_node(int fd, onev_summary_e *sum);
/////////////////////////////////////////////////////////////////////////////////

ONEV_CPP_END

#endif
