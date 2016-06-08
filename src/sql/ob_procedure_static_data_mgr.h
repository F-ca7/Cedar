#ifndef OBPROCEDURESTATICDATAMGR_H
#define OBPROCEDURESTATICDATAMGR_H

#include "ob_physical_plan.h"
#include "ob_sp_procedure.h"
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

        int store(StaticData *&sdata, int64_t sdata_id,
                  const SpInstExecStrategy::ObLoopCounter &loop_counter);

        int get(const StaticData *&sdata, int64_t sdata_id,
                const SpInstExecStrategy::ObLoopCounter &loop_counter);

//        int create_static_data(StaticData *&sdata);

//        int put_static_data(int64_t hk, StaticData *sdata);

        //use static_idx + iteration_counter to locate typical static data on the ups
//        int get_static_data(int64_t hk, const StaticData *&sdata) const;
      private:

        int64_t hash(int64_t sdata_id, const SpInstExecStrategy::ObLoopCounter &loop_counter);
    };
  }
}


#endif // OBPROCEDURESTATICDATAMGR_H
