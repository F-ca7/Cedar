#ifndef M_ONEV_INET_H_
#define M_ONEV_INET_H_
/**
 * inet的通用函数
 */
#include "onev_defines.h"

ONEV_CPP_START
///convert net address to string
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
