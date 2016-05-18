#include "ob_physical_plan_cache_manager.h"
#include "common/hash/ob_hashmap.h"
#include "common/hash/ob_hashtable.h"
#include "common/hash/ob_hashutils.h"
#include "common/ob_rpc_stub.h"
#include "ob_merge_server.h"

#define NAME_CACHE_MAP_BUCKET_NUM 100
#define THREAD_SLEEP_UTIME 1000000

using namespace oceanbase::mergeserver;
ObProcedureManager::ObProcedureManager() : has_init_(false)
{
}

ObProcedureManager::~ObProcedureManager()
{
}
int ObProcedureManager::init()
{
    int ret =  OB_SUCCESS;
    ret = name_cache_map_.create(NAME_CACHE_MAP_BUCKET_NUM);
    if(OB_SUCCESS != ret)
    {
        TBSYS_LOG(WARN, "create cache hash map fail:ret[%d]", ret);
    }
    else
    {
        TBSYS_LOG(INFO, "create cache hash map succ");
    }

    if( OB_SUCCESS != (ret = session_.init(block_allocator_)))
    {
        TBSYS_LOG(WARN, "failed to init session");
    }

    ret = name_code_map_.init();
    if(OB_SUCCESS != ret)
    {
        TBSYS_LOG(WARN, "create code hash map fail:ret[%d]", ret);
    }
    else
    {
        has_init_ = true;
        TBSYS_LOG(INFO, "create code hash map succ");
    }

    return ret;
}

//int ObProcedureManager::serialize(char* buf, const int64_t buf_len, int64_t& pos) const
//{
//    int ret = OB_SUCCESS;
//    TBSYS_LOG(INFO, "the name code map[%p] size is %ld", &name_code_map_, name_code_map_.size());
//    if(OB_SUCCESS != (ret = serialization::encode_vi64(buf, buf_len, pos, name_code_map_.size())))
//    {
//        TBSYS_LOG(WARN, "failed to serialize size, err=%d buf_len=%ld pos=%ld",
//                  ret, buf_len, pos);
//    }
//    if(OB_SUCCESS == ret)
//    {
//        common::hash::ObHashMap<common::ObString, common::ObString* >::const_iterator iter = name_code_map_.begin();
//        for(;iter != name_code_map_.end(); iter++)
//        {
//          ObString proc_name = iter->first;
//          ObString *proc_source_code = iter->second;
//          TBSYS_LOG(INFO, "serialize proc name %.*s", proc_name.length(), proc_name.ptr());
//          TBSYS_LOG(INFO, "serialize proc source code %.*s", proc_source_code->length(), proc_source_code->ptr());
//          if(OB_SUCCESS != (ret = proc_name.serialize(buf, buf_len, pos)))
//          {
//              TBSYS_LOG(WARN, "failed to serialize proc_name, err=%d buf_len=%ld pos=%ld",
//                        ret, buf_len, pos);
//          }
//          else if(OB_SUCCESS != (ret = proc_source_code->serialize(buf, buf_len, pos)))
//          {
//              TBSYS_LOG(WARN, "failed to serialize proc_source_code, err=%d buf_len=%ld pos=%ld",
//                        ret, buf_len, pos);
//          }
//        }
//    }
//    return ret;
//}
//int ObProcedureManager::deserialize(const char* buf, const int64_t buf_len, int64_t& pos)
//{
//    int ret = OB_SUCCESS;
//    int64_t size = 0;
//    if(OB_SUCCESS != (ret = serialization::decode_vi64(buf, buf_len, pos, &size)))
//    {
//        TBSYS_LOG(WARN, "failed to decode size, err=%d buf_len=%ld pos=%ld",
//                  ret, buf_len, pos);
//    }
//    else
//    {
//        TBSYS_LOG(INFO, "the name code map size is %ld", size);
//        for(int64_t i = 0; i < size; i ++)
//        {
//          ObString &proc_name = *(this->malloc_string());
//          ObString &proc_source_code = *(this->malloc_string());
//          if(OB_SUCCESS != (ret = proc_name.deserialize(buf, buf_len, pos)))
//          {
//              TBSYS_LOG(WARN, "failed to deserialize proc_name, err=%d buf_len=%ld pos=%ld",
//                        ret, buf_len, pos);
//          }
//          else if(OB_SUCCESS != (ret = proc_source_code.deserialize(buf, buf_len, pos)))
//          {
//              TBSYS_LOG(WARN, "failed to deserialize proc_source_code, err=%d buf_len=%ld pos=%ld",
//                        ret, buf_len, pos);
//          }
//          else
//          {
//              TBSYS_LOG(INFO, "deserialize proc name %.*s", proc_name.length(), proc_name.ptr());
//              TBSYS_LOG(INFO, "deserialize proc source code %.*s", proc_source_code.length(), proc_source_code.ptr());
//              name_code_map_.set(proc_name, &proc_source_code);
//          }
//        }
//    }
//    return ret;
//}

//hash::ObHashMap<ObString, sql::ObSQLResultSet *> * ObProcedureManager::get_name_cache_map()
//{
//    return &name_cache_map_;
//}

//ObNameCodeMap * ObProcedureManager::get_name_code_map()
//{
//    return &(name_code_map_);
//}

/**
 * @brief ObProcedureManager::run
 * at the start of mergeserver, it will try to fetch the whole name_code_map from rootserver.
 * @param thread
 * @param arg
 */
void ObProcedureManager::run(tbsys::CThread *thread, void *arg)
{
    UNUSED(thread);
    UNUSED(arg);
    bool stop = false;

    int ret = OB_SUCCESS;
    while(!stop)
    {
      TBSYS_LOG(INFO, "begin to create procedure cache, name code map size [%ld]", name_code_map_.size());
      if( OB_SUCCESS != (ret = mergeserver_service_->fetch_source(&name_code_map_)) )
      {
        TBSYS_LOG(WARN, "fail to fecth procedure source, retry after 1 seconds");
      }
      else
      {
        TBSYS_LOG(INFO, "fecth procedure source codes successfully");
        for(common::ObNameCodeMap::ObNameCodeIterator iter(name_code_map_); OB_SUCCESS == ret && !iter.end(); iter.next())
        {
          const ObString &proc_name = iter.get_proc_name();
//          const ObString &proc_sour_code = iter.get_sour_code();
//          TBSYS_LOG(TRACE, "proc name[%.*s], source code[%.*s]", proc_name.length(), proc_name.ptr(),
//                    proc_sour_code.length(), proc_sour_code.ptr());
//          TBSYS_LOG(INFO, "before direct execute proc name[%p][%.*s]", proc_name.ptr(), proc_name.length(), proc_name.ptr());
//          TBSYS_LOG(INFO, "before direct execute source code[%p][%.*s]",proc_source_code.ptr(), proc_source_code.length(), proc_source_code.ptr());

          if( OB_SUCCESS != (ret = compile_procedure(proc_name)) )
          {
            TBSYS_LOG(WARN, "fail to compile procedure[ %s ]", to_cstring(proc_name));
            break;
          }
        }
      }

      if( OB_SUCCESS != ret )
      {
        usleep(THREAD_SLEEP_UTIME);
      }
      else
      {
        stop = true;
        TBSYS_LOG(INFO, "fetch procedure codes completed!");
      }
    }

}

/**
 * @brief ObProcedureManager::do_execute
 * only update a procedure
 * @param name
 * @param source_code
 * @return
 */
int ObProcedureManager::update_procedure(const ObString  &name, const ObString &source_code)
{
  int ret = OB_SUCCESS;
  lock_.lock();
  delete_procedure(name); //clear old one
  name_code_map_.put_source_code(name, source_code);
  TBSYS_LOG(INFO, "update procedure [%.*s]", name.length(), name.ptr());

  if( OB_SUCCESS != (ret = compile_procedure(name)))
  {
    TBSYS_LOG(WARN, "compilation fails during updating procedure");
  }
  lock_.unlock();
  return ret;
}

int ObProcedureManager::delete_procedure(const ObString &proc_name)
{
  name_code_map_.del_source_code(proc_name);
  name_cache_map_.erase(proc_name);
  return OB_SUCCESS;
}

int ObProcedureManager::get_procedure_plan(const ObString &proc_name, ObSQLResultSet * &result_set)
{
  TBSYS_LOG(INFO, "cache_size: %ld", name_cache_map_.size());

  for(hash::ObHashMap<ObString, sql::ObSQLResultSet*>::const_iterator cit = name_cache_map_.begin(); cit != name_cache_map_.end();
      cit++)
  {
    TBSYS_LOG(INFO, "cache proc: %.*s", cit->first.length(), cit->first.ptr());
  }
  return name_cache_map_.get(proc_name, result_set);
}


//may be need to synchronize between multiple clients
int ObProcedureManager::compile_procedure(const ObString &proc_name)
{
  int ret = OB_SUCCESS;
  const ObString * psource_code = name_code_map_.get_source_code(proc_name);

  if( psource_code == NULL )
  {
    ret = OB_ENTRY_NOT_EXIST;
  }
  else
  {
    const ObString &proc_source_code = *psource_code;
    sql::ObSQLResultSet &rs = *(this->malloc_result_set());
    sql::ObSqlContext context;
    int64_t schema_version = 0;
    if (OB_SUCCESS !=(ret = mergeserver_service_->get_sql_proxy_().init_sql_env_for_cache(context, schema_version, rs, session_)))
    {
      TBSYS_LOG(WARN, "init sql env error.");
    }
    else
    {
      context.session_info_->get_transformer_mem_pool().end_batch_alloc(true);
      context.session_info_->get_transformer_mem_pool().start_batch_alloc();
      context.is_prepare_protocol_ = true;
      TBSYS_LOG(INFO, "before execute source code[%.*s]",proc_source_code.length(), proc_source_code.ptr());
      if (OB_SUCCESS != (ret = mergeserver_service_->get_sql_proxy_().execute(proc_source_code, rs, context, schema_version)))
      {
        TBSYS_LOG(WARN, "ms execute sql failed. ret = [%d]", ret);
        context.session_info_->get_transformer_mem_pool().end_batch_alloc(true);
      }
      else
      {
        TBSYS_LOG(TRACE, "MS ExecutionPlan: \n%s", to_cstring(*(rs.get_result_set().get_physical_plan())));
        int hash_ret = name_cache_map_.set(proc_name, &rs, 0, 0, 1);
        if(hash::HASH_INSERT_SUCC != hash_ret)
        {
          if(hash::HASH_EXIST == hash_ret)
          {
            TBSYS_LOG(WARN, "proc physic al plan has existed! proc name: [%s]", proc_name.ptr());
          }
          else
          {
            ret = OB_ERROR;
            TBSYS_LOG(WARN, "gen physical plan and insert into physical plan manager fail! proc name: [%s]",
                      proc_name.ptr());
          }
        }
        else
        {
          TBSYS_LOG(INFO, "proc physical plan insert hashmap succ!");
        }
        context.session_info_->get_transformer_mem_pool().end_batch_alloc(false);
      }
      context.is_prepare_protocol_ = false;
      context.session_info_->get_transformer_mem_pool().start_batch_alloc();
    }
  }
  return ret;
}

int ObProcedureManager::update_procedure_lazy(const ObString &proc_name, const ObString &proc_source_code)
{
  int ret = OB_SUCCESS;
  if( name_code_map_.exist(proc_name) )
  {
    if( OB_SUCCESS != (ret = delete_procedure(proc_name)))
    {
      TBSYS_LOG(WARN, "fail to delete expired procedure");
    }
  }
  if( OB_SUCCESS == ret )
  {
    ret = name_code_map_.put_source_code(proc_name, proc_source_code);
  }
  return ret;
}

int ObProcedureManager::get_procedure_plan_lazy(const ObString &proc_name, ObSQLResultSet *& result_set)
{
  int ret = OB_SUCCESS;
  if( !name_code_map_.exist(proc_name))
  {
    ret = OB_ENTRY_NOT_EXIST;
    TBSYS_LOG(WARN, "procedure %*.s does not exist", proc_name.length(), proc_name.ptr());
  }
  else if( NULL == name_cache_map_.get(proc_name) )
  {
    ret = compile_procedure(proc_name);
  }

  if( OB_SUCCESS == ret )
  {
    ret = get_procedure_plan(proc_name, result_set);
  }
  return ret;
}
