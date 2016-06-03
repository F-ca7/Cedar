#ifndef OBPROCEDURESTATICDATAMGR_H
#define OBPROCEDURESTATICDATAMGR_H

#include "ob_physical_plan.h"

using namespace oceanbase::common;

namespace oceanbase
{
  namespace sql
  {
    struct StaticData {
        uint64_t id;
        ObRowStore store;
    };

    class ObProcedureStaticDataMgr
    {
      public:
        ObProcedureStaticDataMgr();


        virtual int get_static_data_by_idx(int64_t idx, const StaticData *& static_data) const;
      private:

    };

  }
}


#endif // OBPROCEDURESTATICDATAMGR_H
