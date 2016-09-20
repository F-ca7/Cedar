/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_time.h
 * @brief Localtime.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_TIME_H_
#define ONEV_TIME_H_

#include "onev_define.h"

ONEV_CPP_START

int onev_localtime(const time_t *t, struct tm *tp);

ONEV_CPP_END

#endif
