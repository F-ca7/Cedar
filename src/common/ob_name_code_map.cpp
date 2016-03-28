#include "ob_name_code_map.h"
#include "common/hash/ob_hashmap.h"
#include "common/hash/ob_hashtable.h"
#include "common/hash/ob_hashutils.h"

#define NAME_CODE_MAP_BUCKET_NUM 100

using namespace oceanbase::common;
ObNameCodeMap::ObNameCodeMap()
{
}
ObNameCodeMap::~ObNameCodeMap()
{
}
int ObNameCodeMap::init()
{
    int ret = OB_SUCCESS;
    ret = name_code_map_.create(NAME_CODE_MAP_BUCKET_NUM);
    if(OB_SUCCESS != ret)
    {
        TBSYS_LOG(WARN, "create name code map fail:ret=[%d]", ret);
    }
    else
    {
        is_ready_ = false;
        TBSYS_LOG(INFO, "create name code map succ");
    }
    return ret;
}
hash::ObHashMap<ObString,ObString>* ObNameCodeMap::get_name_code_map()
{
    return &name_code_map_;
}

int ObNameCodeMap::serialize(char* buf, const int64_t buf_len, int64_t& pos) const
{
    int ret = OB_SUCCESS;
    TBSYS_LOG(INFO, "the name code map[%p] size is %ld", &name_code_map_, name_code_map_.size());
    if(OB_SUCCESS != (ret = serialization::encode_vi64(buf, buf_len, pos, name_code_map_.size())))
    {
        TBSYS_LOG(WARN, "failed to serialize size, err=%d buf_len=%ld pos=%ld",
                  ret, buf_len, pos);
    }
    if(OB_SUCCESS == ret)
    {
        common::hash::ObHashMap<common::ObString, common::ObString >::const_iterator iter = name_code_map_.begin();
        for(;iter != name_code_map_.end(); iter++)
        {
          ObString proc_name = iter->first;
          ObString proc_source_code = iter->second;
          TBSYS_LOG(INFO, "serialize proc name %.*s", proc_name.length(), proc_name.ptr());
          TBSYS_LOG(INFO, "serialize proc source code %.*s", proc_source_code.length(), proc_source_code.ptr());
          if(OB_SUCCESS != (ret = proc_name.serialize(buf, buf_len, pos)))
          {
              TBSYS_LOG(WARN, "failed to serialize proc_name, err=%d buf_len=%ld pos=%ld",
                        ret, buf_len, pos);
          }
          else if(OB_SUCCESS != (ret = proc_source_code.serialize(buf, buf_len, pos)))
          {
              TBSYS_LOG(WARN, "failed to serialize proc_source_code, err=%d buf_len=%ld pos=%ld",
                        ret, buf_len, pos);
          }
        }
    }
    return ret;
}
int ObNameCodeMap::deserialize(const char* buf, const int64_t buf_len, int64_t& pos)
{
    int ret = OB_SUCCESS;
    int64_t size = 0;
    ObString proc_source_code;
    ObString proc_name;
    if(OB_SUCCESS != (ret = serialization::decode_vi64(buf, buf_len, pos, &size)))
    {
        TBSYS_LOG(WARN, "failed to decode size, err=%d buf_len=%ld pos=%ld",
                  ret, buf_len, pos);
    }
    else
    {
        TBSYS_LOG(INFO, "the name code map size is %ld", size);
        for(int64_t i = 0; i < size; i ++)
        {
          //ObString &proc_name = *(this->malloc_string());
          //ObString &proc_source_code = *(this->malloc_string());
          if(OB_SUCCESS != (ret = proc_name.deserialize(buf, buf_len, pos)))
          {
              TBSYS_LOG(WARN, "failed to deserialize proc_name, err=%d buf_len=%ld pos=%ld",
                        ret, buf_len, pos);
          }
          else if(OB_SUCCESS != (ret = proc_source_code.deserialize(buf, buf_len, pos)))
          {
              TBSYS_LOG(WARN, "failed to deserialize proc_source_code, err=%d buf_len=%ld pos=%ld",
                        ret, buf_len, pos);
          }
          else
          {
              TBSYS_LOG(INFO, "deserialize proc name %.*s", proc_name.length(), proc_name.ptr());
              TBSYS_LOG(INFO, "deserialize proc source code %.*s", proc_source_code.length(), proc_source_code.ptr());
              ob_write_string(arena_, proc_source_code, proc_source_code);
              ob_write_string(arena_, proc_name, proc_name);
              name_code_map_.set(proc_name, proc_source_code);
          }
        }
    }
    return ret;
}
