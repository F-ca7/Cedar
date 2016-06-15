#ifndef OBPROCEDURESTATICDATAMGR_H
#define OBPROCEDURESTATICDATAMGR_H

#include "common/hash/ob_hashmap.h"
#include "common/ob_row_store.h"
#include "common/ob_se_array.h"
using namespace oceanbase::common;
using namespace oceanbase::common::hash;
namespace oceanbase
{
  namespace sql
  {

    /**
     * @brief The ObProcedureStaticDataMgr class
     * Manage static data used in procedure running.
     * It keeps all static data that being used for group execution
     */
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

      private:
        struct StaticData {
            int64_t id;
            int64_t hkey;
            ObRowStore store;
        };

        ModuleArena static_store_arena_;
        ObSEArray<StaticData*, 64> static_store_;
        hash::ObHashMap<int64_t, int64_t> hkey_idx_map_;
    };
  }
}


#endif // OBPROCEDURESTATICDATAMGR_H
