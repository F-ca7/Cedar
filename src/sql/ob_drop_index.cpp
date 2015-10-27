/*
 * ob_drop_index.cpp
 *
 *  Created on: 2015年10月26日
 *      Author: longfei
 */

#include "sql/ob_drop_index.h"
#include "common/utility.h"
#include "mergeserver/ob_rs_rpc_proxy.h"

using namespace oceanbase::sql;
using namespace oceanbase::common;
using namespace oceanbase::mergeserver;

ObDropIndex::ObDropIndex()
    :ObDropTable()
{
}

ObDropIndex::~ObDropIndex()
{
}

int ObDropIndex::add_index_name(const common::ObString &tname)
{
  return indexs_.add_string(tname);
}

int ObDropIndex::open()
{
  int ret = OB_SUCCESS;
  ObMergerRootRpcProxy* rpc_ = get_rpc_stub();
  if(NULL == rpc_)
  {
    ret=OB_NOT_INIT;
    TBSYS_LOG(ERROR,"not init,prc_=%p",rpc_);
  }
  else if(0 >= indexs_.count())
  {
    ret=OB_INDEX_NOT_EXIST;
    TBSYS_LOG(WARN,"not index to drop");
  }
  //modify e
  else if(OB_SUCCESS != (ret = rpc_->drop_index(get_if_exists(), indexs_)))
  {
    TBSYS_LOG(WARN,"failed to drop index,err=%d",ret);
  }
  else
  {
    TBSYS_LOG(INFO,"drop index succ,tables=[%s]",
                  to_cstring(indexs_));
  }
  return ret;
}

int ObDropIndex::close()
{
  int ret=OB_SUCCESS;
  return ret;
}

namespace oceanbase{
  namespace sql{
    REGISTER_PHY_OPERATOR(ObDropIndex, PHY_DROP_INDEX);
  }
}

int64_t ObDropIndex::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "DropIndexs");
  pos += indexs_.to_string(buf+pos, buf_len-pos);
  databuff_printf(buf, buf_len, pos, "])\n");
  return pos;
}


