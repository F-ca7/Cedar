/*
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *
 *
 *
 *
 * Authors:
 * add by wangdonghui 20160227 [physical plan cache]
 *
 *
 */


#ifndef OB_MERGESERVER_PHYSICAL_PLAN_CAHCE_MANAGER_H_
#define OB_MERGESERVER_PHYSICAL_PLAN_CAHCE_MANAGER_H_

#include <pthread.h>
#include "tbsys.h"
#include "common/ob_string.h"
#include "common/hash/ob_hashmap.h"
#include "sql/ob_sql_result_set.h"
#include "common/ob_name_code_map.h"
#include "ob_merge_server_service.h"

namespace oceanbase
{
  namespace mergeserver
  {
    class ObMergerAsyncRpcStub;
    class ObProcedureManager : public tbsys::CDefaultRunnable
    {
    public:

      virtual void run(tbsys::CThread* thread, void * arg);

      ObProcedureManager();
      virtual ~ObProcedureManager();

      int init();

      void set_ms_service(ObMergeServerService *msservice)
      {
          mergeserver_service_ = msservice;
      }

      mergeserver::ObMergeServerService * get_ms_service()
      {
          return mergeserver_service_;
      }

//      hash::ObHashMap<ObString, sql::ObSQLResultSet *> * get_name_cache_map();

//      ObNameCodeMap * get_name_code_map();

      int update_procedure(const ObString &proc_name, const ObString &proc_source_code);

      int delete_procedure(const ObString &proc_name);

      int get_procedure_plan(const ObString &proc_name, ObSQLResultSet *& result_set);


      int update_procedure_lazy(const ObString &proc_name, const ObString &proc_source_code);

      int get_procedure_plan_lazy(const ObString &proc_name, ObSQLResultSet *&result_set);

//      int serialize(char* buf, const int64_t data_len, int64_t& pos) const;
//      int deserialize(const char* buf, const int64_t data_len, int64_t& pos);
    private:
      int compile_procedure(const ObString &proc_name);

      sql::ObSQLResultSet * malloc_result_set()
      {
        void* ptr = arena_.alloc(sizeof(sql::ObSQLResultSet));
        sql::ObSQLResultSet *ret = NULL;
        ret = new(ptr) sql::ObSQLResultSet();
        return ret;
      }

    private:
      ObProcedureManager(const ObProcedureManager &);
      const ObProcedureManager & operator = (const ObProcedureManager &);
      mutable tbsys::CThreadMutex lock_;
      ModuleArena arena_;
      mergeserver::ObMergeServerService * mergeserver_service_;
      common::DefaultBlockAllocator block_allocator_;
      ObSQLSessionInfo session_;
      hash::ObHashMap<ObString, sql::ObSQLResultSet *> name_cache_map_;
      ObNameCodeMap name_code_map_;
      bool has_init_;
    };
  }
}

#endif //OB_MERGESERVER_PHYSICAL_PLAN_CAHCE_MANAGER_H_
