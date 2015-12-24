#ifndef OB_INDEX_SERVICE_H
#define OB_INDEX_SERVICE_H
#include "common/ob_define.h"
#include "common/ob_packet.h"
#include "common/roottable/ob_scan_helper.h"
#include "common/nb_accessor/ob_nb_accessor.h"
#include "common/nb_accessor/nb_query_res.h"


#define UPDATE_INT(table_name, rowkey, column_name, value) \
if(OB_SUCCESS == ret) \
{ \
  ObObj int_value; \
  int_value.set_int(value); \
  ret = mutator->update(table_name, rowkey, OB_STR(column_name), int_value); \
  if(OB_SUCCESS != ret) \
  { \
    TBSYS_LOG(WARN, "update value to mutator fail:column_name[%s], ret[%d]", column_name, ret); \
  } \
}

#define OB_STR(str) \
  ObString(0, static_cast<int32_t>(strlen(str)), const_cast<char *>(str))

using namespace oceanbase::common;
using namespace oceanbase::common::nb_accessor;
namespace oceanbase
{

  namespace rootserver
  {
    class ObRootWorker;
    class ObIndexService
    {
      public:
        ObIndexService();
        ~ObIndexService();

        void init(ObRootWorker* worker);
        int  set_env(ObScanHelper* client_proxy);
        void set_index_tid(uint64_t idx){index_tid_ = idx;}

      public:
        int fetch_index_stat(const uint64_t table_id, const int64_t cluster_id, int64_t &stat);
        int submit_job(const common::PacketCode pc);
        int modify_index_process_info(const uint64_t index_tid, const IndexStatus stat);
        int modify_index_stat_ddl(ObString index_table_name, uint64_t index_table_id, int stat);
        int create_index_status_mutator(ObString index_table_name, int status, ObMutator* mutator);
        int get_index_stat(const uint64_t table_id, const int64_t cluster_count, IndexStatus &stat);
      private:

        uint64_t        index_tid_;
        ObRootWorker    *root_worker_;
        ObScanHelper    *client_proxy_;
        nb_accessor::ObNbAccessor nb_accessor_;
        tbsys::CThreadMutex mutex_;

    };

  }   //rootserver
}     //oceanbase
#endif // OB_INDEX_SERVICE_H

