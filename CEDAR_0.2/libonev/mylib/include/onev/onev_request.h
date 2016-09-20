#ifndef ONEV_REQUEST_H_
#define ONEV_REQUEST_H_

#include <onev_defines.h>
#include "onev_struct.h"

/**
 * 一个request对象
 */

ONEV_CPP_START

void onev_request_server_done(onev_request_e *r);
void onev_request_client_done(onev_request_e *r);
void onev_request_set_cleanup(onev_request_e *r, onev_list_e *output);


ONEV_CPP_END

#endif
