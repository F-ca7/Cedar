#include "ob_physical_plan_cache_manager.h"
#include "common/hash/ob_hashmap.h"
#include "common/hash/ob_hashtable.h"
#include "common/hash/ob_hashutils.h"
#include "common/ob_rpc_stub.h"
#include "ob_merge_server.h"

#define NAME_CACHE_MAP_BUCKET_NUM 100
#define THREAD_SLEEP_UTIME 1000000

using namespace oceanbase::mergeserver;
ObPhysicalPlanManager::ObPhysicalPlanManager() : has_init_(false)
{
}

ObPhysicalPlanManager::~ObPhysicalPlanManager()
{
}
int ObPhysicalPlanManager::init()
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

//int ObPhysicalPlanManager::serialize(char* buf, const int64_t buf_len, int64_t& pos) const
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
//int ObPhysicalPlanManager::deserialize(const char* buf, const int64_t buf_len, int64_t& pos)
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

hash::ObHashMap<ObString, sql::ObSQLResultSet *> * ObPhysicalPlanManager::get_name_cache_map()
{
    return &name_cache_map_;
}

ObNameCodeMap * ObPhysicalPlanManager::get_name_code_map()
{
    return &(name_code_map_);
}

void ObPhysicalPlanManager::run(tbsys::CThread *thread, void *arg)
{
    UNUSED(thread);
    UNUSED(arg);
    bool stop = false;
    while(!stop)
    {
        TBSYS_LOG(INFO, "test procedure cache alive, name code map size [%ld]", name_code_map_.get_name_code_map()->size());
        int ret = OB_SUCCESS;
        ret = mergeserver_service_->fetch_source(&name_code_map_);
        if(OB_SUCCESS == ret)
        {
            TBSYS_LOG(INFO, "fetch procedure info success!");
        }
        else
        {
            usleep(THREAD_SLEEP_UTIME);
            continue;
        }

        //travel the name_code_map to get proc_name and proc_source_code and generate physical plan
        common::hash::ObHashMap<common::ObString, common::ObString >::const_iterator iter = name_code_map_.get_name_code_map()->begin();
        for(;iter != name_code_map_.get_name_code_map()->end(); iter++)
        {
             const ObString proc_name = iter->first;
             const ObString proc_source_code = iter->second;

             TBSYS_LOG(INFO, "proc name[%p], source code[%p]", proc_name.ptr(), proc_source_code.ptr());
             TBSYS_LOG(INFO, "before direct execute proc name[%p][%.*s]", proc_name.ptr(), proc_name.length(), proc_name.ptr());
             TBSYS_LOG(INFO, "before direct execute source code[%p][%.*s]",proc_source_code.ptr(), proc_source_code.length(), proc_source_code.ptr());
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
                     TBSYS_LOG(INFO, "ms execute sql succ!!");
                     TBSYS_LOG(TRACE, "MS ExecutionPlan: \n%s", to_cstring(*(rs.get_result_set().get_physical_plan())));
                     int hash_ret = name_cache_map_.set(proc_name, &rs);
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
             if(OB_SUCCESS != ret)
             {
                 break;
             }
        }
        if(OB_SUCCESS == ret)
        {
            stop = true;
            TBSYS_LOG(INFO, "physical plan compile completed!!");
        }
        else
        {
            usleep(THREAD_SLEEP_UTIME);
        }
    }

}

int ObPhysicalPlanManager::do_execute(const ObString & proc_name, const ObString & proc_source_code)
{
     TBSYS_LOG(INFO, "do execute [%.*s]", proc_name.length(),proc_name.ptr());
     int ret = OB_SUCCESS;
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
             TBSYS_LOG(INFO, "ms execute sql succ!!");
             TBSYS_LOG(TRACE, "MS ExecutionPlan: \n%s", to_cstring(*(rs.get_result_set().get_physical_plan())));
             int hash_ret = name_cache_map_.set(proc_name, &rs);
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
         session_.get_parser_mem_pool().reuse();
    }
    return ret;
}
