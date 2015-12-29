/*
 * ob_fetch_last_stmt.cpp
 *
 *  Created on: 2014年12月1日
 *      Author: ZN
 */





#include "ob_cursor_fetch_last_stmt.h"

using namespace oceanbase::common;
using namespace oceanbase::sql;
//add by zhounan  2014/9/17
void ObFetchLastStmt::print(FILE* fp, int32_t level, int32_t index)
{
  UNUSED(index);
  print_indentation(fp, level);
  fprintf(fp, "<ObFetchLastStmt %d Begin>\n", index);
  print_indentation(fp, level + 1);
  fprintf(fp, "\n");
  print_indentation(fp, level + 1);
  fprintf(fp, "<ObFetchLastStmt %d End>\n", index);

}


