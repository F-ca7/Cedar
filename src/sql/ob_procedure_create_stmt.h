#ifndef OCEANBASE_SQL_OB_PROCEDURE_CREATE_STMT_H_
#define OCEANBASE_SQL_OB_PROCEDURE_CREATE_STMT_H_
#include "common/ob_string.h"
#include "common/ob_string_buf.h"
#include "common/ob_array.h"
#include "ob_basic_stmt.h"
#include "parse_node.h"
#include <map>
using namespace oceanbase::common;

namespace oceanbase {
namespace sql {

class ObProcedureCreateStmt: public ObBasicStmt {
	public:
	ObProcedureCreateStmt() :
				ObBasicStmt(T_PROCEDURE_CREATE) {
		proc_id_=common::OB_INVALID_ID;
		proc_insert_id_=common::OB_INVALID_ID;
		}
		virtual ~ObProcedureCreateStmt() {
		}

		int set_proc_name(ObString &proc_name);

		ObString& get_proc_name();

		int set_proc_id(uint64_t& stmt_id);

		uint64_t& get_proc_id();

		int set_proc_insert_id(uint64_t& stmt_id);

		uint64_t& get_proc_insert_id();


		virtual void print(FILE* fp, int32_t level, int32_t index);


	private:
		ObString proc_name_;
		uint64_t proc_id_;
		uint64_t proc_insert_id_;/*插入到存储过程数据表的语句id*/

	};


}
}

#endif
