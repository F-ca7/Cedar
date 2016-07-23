#ifndef OCEANBASE_SQL_OB_PROCEDURE_DROP_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_DROP_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {

class ObProcedureDropStmt: public ObBasicStmt {
	public:
	ObProcedureDropStmt() :
				ObBasicStmt(T_PROCEDURE_DROP) {

		proc_delete_id_=common::OB_INVALID_ID;
		}
		virtual ~ObProcedureDropStmt() {
		}

		int set_proc_name(ObString &proc_name);

		ObString& get_proc_name();

		int set_proc_delete_id(uint64_t& stmt_id);

		uint64_t& get_proc_delete_id();
		void set_if_exists(bool flag);
		bool if_exists();

		virtual void print(FILE* fp, int32_t level, int32_t index);


	private:
		ObString proc_name_;
		uint64_t proc_delete_id_;/*删除存储过程数据表的语句id*/
		bool  if_exists_;/*标识是否是if exists语法*/

	};


}
}

#endif
