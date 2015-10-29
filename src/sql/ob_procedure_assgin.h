#ifndef OCEANBASE_SQL_OB_PROCEDURE_ASSGIN_H
#define OCEANBASE_SQL_OB_PROCEDURE_ASSGIN_H
#include "sql/ob_single_child_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"
#include "ob_procedure_assgin_stmt.h"
namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
		class ObProcedureAssgin : public ObSingleChildPhyOperator
		{
		public:
			ObProcedureAssgin();
			virtual ~ObProcedureAssgin();
			virtual void reset();
			virtual void reuse();
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const
			{
				return PHY_PROCEDURE_DECLARE;
			}
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);

			int add_var_val(ObVariableSetVal &var_val);/*添加一个赋值*/

		private:
			//disallow copy
			ObProcedureAssgin(const ObProcedureAssgin &other);
			ObProcedureAssgin& operator=(const ObProcedureAssgin &other);
			//function members

		private:
			ObArray<ObVariableSetVal> var_val_list_;/*assgin 赋值变量列表*/

		};



	}
}

#endif



