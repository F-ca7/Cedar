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
    class ObPhysicalPlanManager : public tbsys::CDefaultRunnable
    {
    public:

      virtual void run(tbsys::CThread* thread, void * arg);

      ObPhysicalPlanManager();
      virtual ~ObPhysicalPlanManager();

      int init();

      sql::ObSQLResultSet * malloc_result_set() {
          void* ptr = arena_.alloc(sizeof(sql::ObSQLResultSet));
          sql::ObSQLResultSet *ret = NULL;
          ret = new(ptr) sql::ObSQLResultSet();
          return ret;
      }

      common::ObString * malloc_string() {
          void * ptr = arena_.alloc(sizeof(common::ObString));
          common::ObString *ret = NULL;
          ret = new(ptr) common::ObString();
          return ret;
      }

      void set_mergeserver_service(ObMergeServerService *msservice){
          mergeserver_service_ = msservice;
      }

      mergeserver::ObMergeServerService * get_mergeserver_service(){
          return mergeserver_service_;
      }

      hash::ObHashMap<ObString, sql::ObSQLResultSet *> * get_name_cache_map();

      ObNameCodeMap * get_name_code_map();

      int do_execute(const ObString & proc_name, const ObString & proc_source_code);


//      int serialize(char* buf, const int64_t data_len, int64_t& pos) const;
//      int deserialize(const char* buf, const int64_t data_len, int64_t& pos);

    private:
      ObPhysicalPlanManager(const ObPhysicalPlanManager &);
      const ObPhysicalPlanManager & operator = (const ObPhysicalPlanManager &);
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
