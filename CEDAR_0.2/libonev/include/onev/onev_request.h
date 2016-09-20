/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_request.h
 * @brief Operations on some request object.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_REQUEST_H_
#define ONEV_REQUEST_H_

#include <onev_define.h>
#include "onev_struct.h"

ONEV_CPP_START

/**
 * Destroy request object.
 */
void onev_request_server_done(onev_request_e *r);
void onev_request_client_done(onev_request_e *r);

/**
 * Set cleanup for request.
 */
void onev_request_set_cleanup(onev_request_e *r, onev_list_e *output);

ONEV_CPP_END

#endif
