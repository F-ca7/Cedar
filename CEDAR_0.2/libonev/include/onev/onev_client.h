/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_client.h
 * @brief Management of client connection.
 * Hash operation inside.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_CLIENT_H_
#define ONEV_CLIENT_H_

#include <onev_define.h>
#include "onev_struct.h"

ONEV_CPP_START

void *onev_client_list_find(onev_hash_e *table, onev_addr_e *addr);
int onev_client_list_add(onev_hash_e *table, onev_addr_e *addr, onev_hash_bucket_e *list);

ONEV_CPP_END

#endif
