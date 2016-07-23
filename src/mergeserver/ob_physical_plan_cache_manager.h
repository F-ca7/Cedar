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
        typedef hash::ObHashMap<ObString, sql::ObSQLResultSet *> ObProcCache;
      virtual void run(tbsys::CThread* thread, void * arg);

      ObProcedureManager();
      virtual ~ObProcedureManager();


      int init();

      void set_ms_service(ObMergeServerService *msservice)
      {
          mergeserver_service_ = msservice;
      }

      int create_procedure(const ObString &proc_name, const ObString &proc_source_code);

      int delete_procedure(const ObString &proc_name);

      int get_procedure(const ObString &proc_name, ObSQLResultSet *& result_set);

      const ObString * get_procedure_source(const ObString &proc_name) { return name_code_map_.get_source_code(proc_name); }

      int create_procedure_lazy(const ObString &proc_name, const ObString &proc_source_code);

      /**
       * @brief get_procedure_lazy
       * try to compile procedure on behalf of session, the plan is indexed by stmt_id in session's cache pool.
       * @param proc_name
       * @param context
       * @param stmt_id
       * @return
       */
      int get_procedure_lazy(const ObString &proc_name, ObSqlContext &context, uint64_t &stmt_id );

      bool is_consisitent(const ObString &proc_name, int64_t hash_code) const
      {
        return name_code_map_.exist(proc_name, hash_code);
      }

//      int serialize(char* buf, const int64_t data_len, int64_t& pos) const;
//      int deserialize(const char* buf, const int64_t data_len, int64_t& pos);
    private:
      int compile_procedure(const ObString &proc_name);

      int compile_procedure_with_context(const ObString &proc_name, ObSqlContext &context, uint64_t &stmt_id);

      sql::ObSQLResultSet * malloc_result_set()
      {
        void* ptr = arena_.alloc(sizeof(sql::ObSQLResultSet));
        sql::ObSQLResultSet *ret = NULL;
        ret = new(ptr) sql::ObSQLResultSet();
        return ret;
      }

      int put_cache_plan(const ObString &proc_name, ObSQLResultSet *result_set);
      int del_cache_plan(const ObString &proc_name);

    private:
      ObProcedureManager(const ObProcedureManager &);
      const ObProcedureManager & operator = (const ObProcedureManager &);
      mutable tbsys::CThreadMutex lock_;
      ModuleArena arena_;
      ObStringBuf proc_name_buf_;
      mergeserver::ObMergeServerService * mergeserver_service_;
      common::DefaultBlockAllocator block_allocator_;
      ObSQLSessionInfo session_;
      ObProcCache name_cache_map_;
      ObNameCodeMap name_code_map_;
      bool has_init_;
    };
  }
}

#endif //OB_MERGESERVER_PHYSICAL_PLAN_CAHCE_MANAGER_H_
