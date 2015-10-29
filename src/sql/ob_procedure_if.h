#ifndef OCEANBASE_SQL_OB_PROCEDURE_IF_H
#define OCEANBASE_SQL_OB_PROCEDURE_IF_H
#include "ob_multi_children_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"


namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
		class ObProcedureIf : public ObMultiChildrenPhyOperator
		{
		public:
			ObProcedureIf();
			virtual ~ObProcedureIf();
			virtual void reset();
			virtual void reuse();
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const
			{
				return PHY_PROCEDURE_IF;
			}
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);
			virtual int set_child(int32_t child_idx, ObPhyOperator &child_operator);
			virtual int32_t get_child_num() const;

			int set_expr(ObSqlExpression& expr);

			int set_have_elseif(bool flag);

			int add_elseif_op(ObPhyOperator &elseif_op);

			int set_have_else(bool flag);

			int set_else_op(ObPhyOperator &else_op);

			bool is_have_elseif();

			bool is_have_else();


		private:
			//disallow copy
			ObProcedureIf(const ObProcedureIf &other);
			ObProcedureIf& operator=(const ObProcedureIf &other);
			//function members

		private:
			//data members
			ObSqlExpression expr_;		/*if语句的表达式*/

			int32_t child_num_;			/*if then语句下的操作符数量*/

			bool have_elseif_;			/*是否有else if物理操作符*/

			ObArray<ObPhyOperator*> elseif_ops_;/*else if 物理操作符列表*/

			bool have_else_;			/*是否有else物理操作符*/

			ObPhyOperator *else_op_;	/*else物理操作符*/

		};



	}
}

#endif



