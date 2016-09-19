#ifndef TASK_SERVER_CALLBACK_H_
#define TASK_SERVER_CALLBACK_H_

#include "onev_struct.h"
namespace oceanbase
{
  namespace tools
  {
    class TaskServerCallback
    {
    public:
      static int process(onev_request_e* req);
    };
  }
}
#endif
