#ifndef OCEANBASE_SQL_OB_PROCEDURE_DECLARE_H
#define OCEANBASE_SQL_OB_PROCEDURE_DECLARE_H
#include "sql/ob_single_child_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"
#include "ob_procedure_declare_stmt.h"
namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
//		class ObProcedureDeclare : public ObSingleChildPhyOperator
//		{
//		public:
//			ObProcedureDeclare();
//			virtual ~ObProcedureDeclare();
//			virtual void reset();
//			virtual void reuse();
//			virtual int open();
//			virtual int close();
//			virtual ObPhyOperatorType get_type() const
//			{
//				return PHY_PROCEDURE_DECLARE;
//			}
//			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
//			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
//			virtual int get_next_row(const common::ObRow *&row);

//			int add_proc_var(ObVariableDef &proc_var);/*添加一个变量*/

//		private:
//			//disallow copy
//			ObProcedureDeclare(const ObProcedureDeclare &other);
//			ObProcedureDeclare& operator=(const ObProcedureDeclare &other);
//			//function members

//		private:
//			ObArray<ObVariableDef> variables_;/*declare定义变量列表*/

//		};
	}
}

#endif



