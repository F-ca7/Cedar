/*
 * ob_fetch_first.cpp
 *
 *  Created on: 2014年12月1日
 *      Author: ZN
 */






#include "ob_cursor_fetch_first_stmt.h"

using namespace oceanbase::common;
using namespace oceanbase::sql;
//add by zhounan  2014/9/17
void ObFetchFirstStmt::print(FILE* fp, int32_t level, int32_t index)
{
  UNUSED(index);
  print_indentation(fp, level);
  fprintf(fp, "<ObFetchFirstStmt %d Begin>\n", index);
  print_indentation(fp, level + 1);
  fprintf(fp, "\n");
  print_indentation(fp, level + 1);
  fprintf(fp, "<ObFetchFirstStmt %d End>\n", index);

}

