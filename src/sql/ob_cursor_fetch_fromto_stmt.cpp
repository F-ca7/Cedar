/*
 * ob_fetch_fromto_stmt.cpp
 *
 *  Created on: 2014年12月3日
 *      Author: ZN
 */






#include "ob_cursor_fetch_fromto_stmt.h"

using namespace oceanbase::common;
using namespace oceanbase::sql;
//add by zhounan  2014/9/17
void ObFetchFromtoStmt::print(FILE* fp, int32_t level, int32_t index)
{
  UNUSED(index);
  print_indentation(fp, level);
  fprintf(fp, "<ObFetchFromtoStmt %d Begin>\n", index);
  print_indentation(fp, level + 1);
  fprintf(fp, "\n");
  print_indentation(fp, level + 1);
  fprintf(fp, "<ObFetchFromtoStmt %d End>\n", index);

}

