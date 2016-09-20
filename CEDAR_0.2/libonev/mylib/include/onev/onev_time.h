#ifndef ONEV_TIME_H_
#define ONEV_TIME_H_

/**
 * time的通用函数
 */
#include "onev_defines.h"

ONEV_CPP_START

int onev_localtime(const time_t *t, struct tm *tp);

ONEV_CPP_END

#endif
