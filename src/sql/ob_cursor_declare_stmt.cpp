/*
 * ob_declare_stmt.cpp

 *
 *  Created on: 2014年8月3日
 *      Author: zhounan
 */
#include "ob_cursor_declare_stmt.h"

using namespace oceanbase::common;
using namespace oceanbase::sql;

void ObCursorDeclareStmt::print(FILE* fp,int32_t level,int32_t index)
{
	UNUSED(index);
	print_indentation(fp,level);
	fprintf(fp,"<ObCursorDeclareStmt %d begin>\n",index);
	 print_indentation(fp, level + 1);
	fprintf(fp, "Statement name ::= %.*s\n", cursor_name_.length(), cursor_name_.ptr());
	print_indentation(fp,level+1);
	 fprintf(fp, "Prepared Query Id ::= <%ld>\n", declare_query_id_);
	print_indentation(fp,level);
	fprintf(fp,"<ObCursorDeclareStmt %d End>\n",index);
}


