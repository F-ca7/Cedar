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
 * add by wangdonghui 20160320 [physical plan cache]
 *
 *
 */


#ifndef OB_COMMON_NAME_CODE_MAP_H_
#define OB_COMMON_NAME_CODE_MAP_H_

#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/hash/ob_hashmap.h"

namespace oceanbase {
    namespace common {
      class ObNameCodeMap
      {
      public:
          ObNameCodeMap();
          virtual ~ObNameCodeMap();
          hash::ObHashMap<ObString,ObString>* get_name_code_map();
          int init();
          int serialize(char* buf, const int64_t data_len, int64_t& pos) const;
          int deserialize(const char* buf, const int64_t data_len, int64_t& pos);
          common::ObString * malloc_string() {
              void * ptr = arena_.alloc(sizeof(common::ObString));
              common::ObString *ret = NULL;
              ret = new(ptr) common::ObString();
              return ret;
          }
          int get_state(){
              return is_ready_;
          }
          void set_state(bool sta){
              is_ready_ = sta;
          }

      private:
          ObNameCodeMap & operator = (const ObNameCodeMap &);
          hash::ObHashMap<ObString, ObString> name_code_map_;
          common::ObStringBuf arena_;
          bool is_ready_;
      };
    }
}
#endif  //OB_COMMON_NAME_CODE_MAP_H_

