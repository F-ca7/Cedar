/**
 * Copyright (C) 2013-2015 ECNU_DaSE.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * @file onev_socket.h
 * @brief Encapsulation of socket processing.
 *
 * @version __DaSE_VERSION
 * @author bingo<51151500062@ecnu.edu.cn>
 * @date 2015_10_30
 */

#ifndef ONEV_SOCKET_H_
#define ONEV_SOCKET_H_

#include <onev_define.h>
#include "onev_struct.h"
#include "onev_log.h"
#include <netinet/in.h>

ONEV_CPP_START

#define ONEV_FLAGS_DEFERACCEPT 0x001
#define ONEV_FLAGS_REUSEPORT   0x002
#define ONEV_FLAGS_SREUSEPORT  0x004
#define ONEV_FLAGS_NOLISTEN    0x008
#define SO_REUSEPORT 15

int onev_socket_set_linger(int fd, int t);

/**
 * Check ipv6
 */
int onev_socket_support_ipv6();

/**
 * Open listen port.
 */
int onev_socket_listen(int udp, onev_addr_e *address, int *flags, int backlog);

/**
 * Unblock
 */
int onev_socket_non_blocking(int fd);

/**
 * TCP
 */
int onev_socket_set_tcpopt(int fd, int option, int value);

/**
 * Socket
 */
int onev_socket_set_opt(int fd, int option, int value);

int onev_socket_error(int fd);
int onev_socket_tcpwrite(int fd, onev_list_e *l);

/**
 * Write buffer chain to socket through writev.
 */
int onev_socket_write(onev_connection_e *c, onev_list_e *l);

/**
 * Read data to buffer from socket.
 */
int onev_socket_read(onev_connection_e *c, char *buf, int size, int *pending);

/**
 * udp send
 */
int onev_socket_usend(onev_connection_e *c, onev_list_e *l);
int onev_socket_udpwrite(int fd, struct sockaddr *addr, onev_list_e *l);

ONEV_CPP_END

#endif
