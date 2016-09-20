/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_message.h
 * @brief Message & Session for receiving.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_MESSAGE_H_
#define ONEV_MESSAGE_H_

#include <onev_define.h>
#include "onev_struct.h"

ONEV_CPP_START
onev_message_e *onev_create_message(onev_connection_e *c);

/**
 * Destroy message object.
 */
int            onev_destroy_message(onev_message_e *m, int del);
int            onev_process_session(onev_session_e *s, int stop);

ONEV_CPP_END

#endif
