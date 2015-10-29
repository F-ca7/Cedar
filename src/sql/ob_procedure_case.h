#ifndef OCEANBASE_SQL_OB_PROCEDURE_CASE_H
#define OCEANBASE_SQL_OB_PROCEDURE_CASE_H
#include "ob_multi_children_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"


namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
		class ObProcedureCase : public ObMultiChildrenPhyOperator
		{
		public:
			ObProcedureCase();
			virtual ~ObProcedureCase();
			virtual void reset();
			virtual void reuse();
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const
			{
				return PHY_PROCEDURE_CASE;
			}
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);
			virtual int set_child(int32_t child_idx, ObPhyOperator &child_operator);
			virtual int32_t get_child_num() const;

			int set_expr(ObSqlExpression& expr);

			int set_have_else(bool flag);

			int set_else_op(ObPhyOperator &else_op);

			bool is_have_else();


		private:
			//disallow copy
			ObProcedureCase(const ObProcedureCase &other);
			ObProcedureCase& operator=(const ObProcedureCase &other);
			//function members

		private:
			//data members
			ObSqlExpression expr_;		/*case语句的表达式*/

			int32_t child_num_;			/*case when语句的操作符数量*/

			bool have_else_;			/*是否有else物理操作符*/

			ObPhyOperator *else_op_;	/*else物理操作符*/

		};



	}
}

#endif



