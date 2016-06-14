#ifndef OBPROCEDURESTATICDATAMGR_H
#define OBPROCEDURESTATICDATAMGR_H

#include "common/hash/ob_hashmap.h"
#include "ob_physical_plan.h"
#include "ob_sp_procedure.h"
using namespace oceanbase::common;
using namespace oceanbase::common::hash;
namespace oceanbase
{
  namespace sql
  {
    struct StaticData {
        int64_t id;
        int64_t hkey;
        ObRowStore store;
    };

    class ObProcedureStaticDataMgr
    {
      public:
        ObProcedureStaticDataMgr();

        int init();

        int store(int64_t sdata_id, int64_t hkey, ObRowStore *&p_row_store);

        int get(int64_t sdata_id, int64_t hkey, ObRowStore *&p_row_store);

        int get(int64_t idx, int64_t &sdata_id, int64_t &hkey, const ObRowStore *&p_row_store) const;

        int64_t get_static_data_count() const;

        int clear();


        //use static_idx + iteration_counter to locate typical static data on the ups
//        int get_static_data(int64_t hk, const StaticData *&sdata) const;
      private:

        ModuleArena static_store_arena_;
        ObSEArray<StaticData*, 64> static_store_;
        hash::ObHashMap<int64_t, int64_t> hkey_idx_map_;
    };
  }
}


#endif // OBPROCEDURESTATICDATAMGR_H
