

#ifndef OB_BUFFER_SIZE_DEFINE_H
#define OB_BUFFER_SIZE_DEFINE_H

#include "stdint.h"

namespace oceanbase {
  namespace common {

    extern int64_t OB_MAX_LOG_BUFFER_SIZE;
    extern int64_t OB_LOG_BUFFER_MAX_SIZE;
    extern int64_t OB_DEFAULT_BLOCK_BITS;
    extern int32_t OB_MAX_THREAD_BUFFER_SIZE;
    extern int32_t OB_RPC_BUFFER_SIZE;
    extern int64_t OB_FLUSH_DISK_BUFFER_SIZE;

  }
}


#endif // OB_BUFFER_SIZE_DEFINE_H
