#ifndef OCEANBASE_SQL_OB_PROCEDURE_EXECUTE_H
#define OCEANBASE_SQL_OB_PROCEDURE_EXECUTE_H
#include "sql/ob_single_child_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"
#include "ob_procedure_execute_stmt.h"
#include "build_plan.h"

namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
		class ObProcedureExecute : public ObSingleChildPhyOperator
		{
		public:
			ObProcedureExecute();
			virtual ~ObProcedureExecute();
			virtual void reset();
			virtual void reuse();
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const
			{
				return PHY_PROCEDURE_EXEC;
			}
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);

			int set_proc_name(ObString &proc_name);/*设置存储过程名*/
			int set_stmt_id(uint64_t &stmt_id);
			int64_t get_param_num();

			int add_param_name(common::ObString& name);

			int add_param_expr(ObSqlExpression& expr);

			int64_t get_param_size();
		private:
			//disallow copy
			ObProcedureExecute(const ObProcedureExecute &other);
			ObProcedureExecute& operator=(const ObProcedureExecute &other);
			//function members

		private:
			//data members
			ObString proc_name_;
			common::ObArray<common::ObString> param_names_;
			common::ObArray<ObSqlExpression> param_list_;
			uint64_t stmt_id_;
		};



	}
}

#endif



