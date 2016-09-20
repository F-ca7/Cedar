#ifndef ONEV_SOCKET_H_
#define ONEV_SOCKET_H_

#include <onev_defines.h>
#include "onev_struct.h"
#include "onev_log.h"
#include <netinet/in.h>

/**
 * socket处理
 */

ONEV_CPP_START

#define ONEV_FLAGS_DEFERACCEPT 0x001
#define ONEV_FLAGS_REUSEPORT   0x002
#define ONEV_FLAGS_SREUSEPORT  0x004
#define ONEV_FLAGS_NOLISTEN    0x008
#define SO_REUSEPORT 15

int onev_socket_listen(int udp, onev_addr_e *address, int *flags, int backlog);
int onev_socket_write(onev_connection_e *c, onev_list_e *l);
int onev_socket_read(onev_connection_e *c, char *buf, int size, int *pending);
int onev_socket_non_blocking(int fd);
int onev_socket_set_tcpopt(int fd, int option, int value);
int onev_socket_set_opt(int fd, int option, int value);
int onev_socket_support_ipv6();
int onev_socket_usend(onev_connection_e *c, onev_list_e *l);
int onev_socket_error(int fd);
int onev_socket_set_linger(int fd, int t);

int onev_socket_udpwrite(int fd, struct sockaddr *addr, onev_list_e *l);
int onev_socket_tcpwrite(int fd, onev_list_e *l);

ONEV_CPP_END

#endif
