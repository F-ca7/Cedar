#ifndef ONEV_CLIENT_H_
#define ONEV_CLIENT_H_

#include <onev_defines.h>
#include "onev_struct.h"

/**
 * 主动连接管理
 */

ONEV_CPP_START

void *onev_client_list_find(onev_hash_e *table, onev_addr_e *addr);
int onev_client_list_add(onev_hash_e *table, onev_addr_e *addr, onev_hash_bucket_e *list);

ONEV_CPP_END

#endif
