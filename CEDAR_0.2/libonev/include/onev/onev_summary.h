/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_summary.h
 * @brief Interface of summary information on node.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef  ONEV_SUMMARY_H
#define  ONEV_SUMMARY_H

#include <onev_define.h>
#include "onev_struct.h"
#include "onev_log.h"

ONEV_CPP_START

// interfaces
extern onev_summary_e          *onev_create_summary();
extern onev_summary_node_e     *onev_summary_locate_node(int fd, onev_summary_e *sum, int hidden);

/**
 * destroy summary pool
 */
extern void                     onev_destroy_summary(onev_summary_e *sum);

/**
 * clean and destroy node
 */
extern void                     onev_destroy_summary_node(int fd, onev_summary_e *sum);

ONEV_CPP_END

#endif
