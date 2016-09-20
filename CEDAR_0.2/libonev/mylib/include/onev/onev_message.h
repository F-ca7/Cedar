#ifndef ONEV_MESSAGE_H_
#define ONEV_MESSAGE_H_

#include <onev_defines.h>
#include "onev_struct.h"

/**
 * 接收message
 */

ONEV_CPP_START
onev_message_e *onev_message_create(onev_connection_e *c);
int onev_message_destroy(onev_message_e *m, int del);
int onev_session_process(onev_session_e *s, int stop);

ONEV_CPP_END

#endif
