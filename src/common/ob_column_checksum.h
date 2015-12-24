/*
 * ob_column_checksum.h
 *
 *  Created on: 2015年12月7日
 *      Author: maoxiaoxiao
 */

#ifndef OB_COLUMN_CHECKSUM_H
#define OB_COLUMN_CHECKSUM_H

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <openssl/md5.h>
#include <map>
#include <vector>
#include <string.h>

namespace oceanbase
{
  namespace common
  {
    static const int64_t OB_MAX_COL_CHECKSUM_COLUMN_COUNT = 100;
    static const int64_t OB_MAX_COL_CHECKSUM_STR_LEN = 2560;
    struct Token
    {
      Token() : token(NULL), len(0) {}
      const char *token;
      int64_t len;
    };

    class ObColumnChecksum
    {
    public:
      ObColumnChecksum()
      {
        memset(checksum_str, 0, OB_MAX_COL_CHECKSUM_STR_LEN);
      }
      inline void reset()
      {
        memset(checksum_str, 0, OB_MAX_COL_CHECKSUM_STR_LEN);
      }
      inline char* get_str()
      {
        return checksum_str;
      }
      inline const char* get_str_const() const
      {
        return checksum_str;
      }
      void deepcopy(const char* col, const int32_t len);
      void deepcopy(const char* col);
      int add(const ObColumnChecksum &col);
      int equal(const ObColumnChecksum &col, bool &is_equal);

    private:
      int transform_str_to_int(const char* data, const int64_t &dlen, uint64_t &value);
      int tokenize(const char *data, int64_t dlen, char delima, int &token_nr, Token *tokens);

    private:
      char checksum_str[OB_MAX_COL_CHECKSUM_STR_LEN];
    };
  }
}

#endif // OB_COLUMN_CHECKSUM_H
