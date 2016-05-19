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
        typedef hash::ObHashMap<ObString, int64_t> ObProcHashCache;

          class ObNameCodeIterator
          {
            public:
              ObNameCodeIterator(const ObNameCodeMap &name_code_map) : code_map_(name_code_map),
                iter_(name_code_map.name_code_map_.begin())
              {

              }

              int next()
              {
                iter_++;
                return OB_SUCCESS;
              }

              const ObString & get_proc_name() const
              {
                return iter_->first;
              }

              const ObString & get_sour_code() const
              {
                return iter_->second;
              }

              bool end()
              {
                return iter_ == code_map_.name_code_map_.end();
              }

            private:
              const ObNameCodeMap &code_map_;
              hash::ObHashMap<ObString, ObString>::const_iterator iter_;
          };

          friend class ObNameCodeIterator;

          ObNameCodeMap();
          virtual ~ObNameCodeMap();

          int init();
          int serialize(char* buf, const int64_t data_len, int64_t& pos) const;
          int deserialize(const char* buf, const int64_t data_len, int64_t& pos);

          int put_source_code(const ObString &proc_name, const ObString &sour_code);

          int del_source_code(const ObString &proc_name);

          const ObString * get_source_code(const ObString &proc_name);

          bool is_created();

          bool exist(const ObString &proc_name) const;
          bool exist(const ObString &proc_name, int64_t hash_code) const;

          int64_t size() const;

          int get_state(){
              return is_ready_;
          }
          void set_state(bool sta){
              is_ready_ = sta;
          }

      private:
          ObNameCodeMap & operator = (const ObNameCodeMap &);
          hash::ObHashMap<ObString, ObString> name_code_map_;
          ObProcHashCache name_hash_map_;
          common::ObStringBuf arena_;
          bool is_ready_;
      };
    }
}
#endif  //OB_COMMON_NAME_CODE_MAP_H_

