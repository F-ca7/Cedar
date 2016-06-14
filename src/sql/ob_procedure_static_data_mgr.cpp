#include "ob_procedure_static_data_mgr.h"

namespace oceanbase
{
  namespace sql
  {
    ObProcedureStaticDataMgr::ObProcedureStaticDataMgr()
    {

    }

    int ObProcedureStaticDataMgr::store(int64_t sdata_id, int64_t hkey, ObRowStore *&p_row_store)
    {
      int64_t idx = -1;
      if ( HASH_NOT_EXIST != hkey_idx_map_.get(hkey, idx))
      {
        TBSYS_LOG(ERROR, "static data has been created, sdata_id:%ld, hkey: %ld", sdata_id, hkey);
      }
      else
      {
        StaticData *item = (StaticData*)static_store_arena_.alloc(sizeof(StaticData));
        item = new(item) StaticData();
        ret = static_store_.push_back(item);
        idx = static_store_.count() - 1;

        item->id = sdata_id;
        item->hkey = hkey;
        p_row_store = &(item->store);

        hkey_idx_map_.set(hkey, idx);
      }
    }

    int ObProcedureStaticDataMgr::get(int64_t idx, int64_t &sdata_id, int64_t &hkey, const ObRowStore *&p_row_store) const
    {
      int ret = (static_store_.count() > 0 && static_store_.count() < idx) ?
            OB_SUCCESS :
            OB_ERROR;

      if( OB_SUCCESS == ret )
      {
        const StaticData *item = static_store_.at(idx);
        sdata_id = item->id;
        hkey = item->hkey;
        p_row_store = &(item->store);
      }
      else
      {
        sdata_id = -1;
        hkey = -1;
        p_row_store = NULL;
      }
      return ret;
    }

    int ObProcedureStaticDataMgr::get(int64_t sdata_id, int64_t hkey, const ObRowStore *&p_row_store) const
    {
      int ret = OB_SUCCESS;
      int64_t idx = -1;
      if( HASH_NOT_EXIST != hkey_idx_map_.get(hkey, idx) )
      {
        TBSYS_LOG(WARN, "static data does not exists, hkey: %ld", hkey);
      }
      else
      {
        const StaticData *item = static_store_.at(idx);
        if( item->id == sdata_id )
        {
          p_row_store = &(item->store);
        }
        else
        {
          TBSYS_LOG(WARN, "sdata_id is not consistent, real: %ld, expected: %ld", item->id, sdata_id);
          p_row_store = NULL;
        }
      }
      return ret;
    }

    int64_t ObProcedureStaticDataMgr::get_static_data_count() const
    {
      static_store_.count();
    }

    int ObProcedureStaticDataMgr::clear()
    {
      for(int64_t i = 0; i < static_store_.count(); ++i)
      {
        static_store_.at(i)->store.clear();
      }
      static_store_.clear();
      static_store_arena_.free();
      hkey_idx_map_.clear();
    }
  }
}
