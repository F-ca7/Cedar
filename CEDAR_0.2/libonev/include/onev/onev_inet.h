/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_inet.h
 * @brief General inet functions.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_INET_H_
#define ONEV_INET_H_

#include "onev_define.h"

ONEV_CPP_START

/**
 * @brief Convert onev address to string.
 * Under Ipv4 and Ipv6 domain separately.
 * @param[in] addr   onev address
 * @param[in] buffer for print
 * @param[in] len    buffer size
 * @return char* string
 */
extern char *onev_inet_addr_to_str(onev_addr_e *addr, char *buffer, int len);
extern onev_addr_e onev_inet_str_to_addr(const char *host, int port);
extern int onev_inet_parse_host(onev_addr_e *address, const char *host, int port);
extern int onev_inet_is_ipaddr(const char *host);
extern onev_addr_e onev_inet_add_port(onev_addr_e *addr, int diff);
extern onev_addr_e onev_inet_getpeername(int s);
extern void onev_inet_atoe(void *a, onev_addr_e *e);
extern void onev_inet_etoa(onev_addr_e *e, void *a);
extern int onev_inet_myip(onev_addr_e *addr);

ONEV_CPP_END


#endif
