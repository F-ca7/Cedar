#ifndef OB_INDEX_CS_HANDLER_H
#define OB_INDEX_CS_HANDLER_H

#include "common/hash/ob_hashmap.h"
#include "common/ob_server.h"
#include "common/ob_schema_service.h"
#include "common/ob_define.h"
using namespace oceanbase::common;
using namespace oceanbase::common::hash;
namespace oceanbase
{
  namespace rootserver
  {
    enum
    {
      HASH_EXIST = 0xf,
      HASH_NOT_EXIST,
      HASH_OVERWRITE_SUCC,
      HASH_INSERT_SUCC,
     HASH_GET_TIMEOUT,
    };
    const static int MAX_CHUNKSERVER_NUM = 256;
    class ObRootWorker;
    class ObRootServer;
    class ObCSHandler
    {

      public:
        ObCSHandler();
        ~ObCSHandler();
        void reset();
        void set_index_tid(uint64_t idx);
        int  init(ObRootWorker *worker);
        int64_t get_width(){return width_;}
      public:
        int   server_off_line(ObServer &cs);
        void   set_index_beat(ConIdxStage ph);
        int   construct_handler_core(bool refresh_width = true);
        bool  cs_hit_hashmap(ObServer &cs);
        IndexBeat& get_beat();
        IndexBeat& get_default_beat();
      private:
        int fetch_tablet_info(const uint64_t table_id,
                              const ObRowkey & row_key, ObScanner & scanner);
        int fill_cm_and_calc(ObScanner &scanner, ObRowkey &row_key, uint64_t table_id, bool refresh_width = false);
      private:
        hash::ObHashMap<ObServer,bool,hash::NoPthreadDefendMode> cm_;//key chunkserver, value is_alive
        ObRootWorker *root_worker_;
        IndexBeat beat_;
        IndexBeat default_beat_;
        uint64_t index_tid_;
        int64_t  width_;
        bool     init_;
    };
  }


}


#endif // OB_INDEX_CS_HANDLER_H

