#ifndef OCEANBASE_SQL_OB_PROCEDURE_H
#define OCEANBASE_SQL_OB_PROCEDURE_H
#include "ob_multi_children_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"
#include "ob_procedure_stmt.h"
using namespace oceanbase::common;
namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
		class ObProcedure : public ObMultiChildrenPhyOperator
		{
		public:
			ObProcedure();
			virtual ~ObProcedure();
			virtual void reset();
			virtual void reuse();
			virtual int open();
			virtual int close();
			virtual ObPhyOperatorType get_type() const
			{
				return PHY_PROCEDURE;
			}
			virtual int64_t to_string(char* buf, const int64_t buf_len) const;
			virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
			virtual int get_next_row(const common::ObRow *&row);
			virtual int set_child(int32_t child_idx, ObPhyOperator &child_operator);
			virtual int32_t get_child_num() const;

			int set_proc_name(ObString &proc_name);/*设置存储过程名*/
			int add_param(ObParamDef &proc_param);
			int set_params(ObArray<ObParamDef*> &params);/*存储过程参数*/
			int add_declare_var(ObString &var);/*添加一个变量*/

			ObArray<ObParamDef*>& get_params();

			ObParamDef* get_param(int64_t index);
			ObString& get_declare_var(int64_t index);
			int64_t get_param_num();
			int64_t get_declare_var_num();
		private:
			//disallow copy
			ObProcedure(const ObProcedure &other);
			ObProcedure& operator=(const ObProcedure &other);
			//function members

		private:
			//data members
			int32_t child_num_;
			ObString proc_name_;
			ObArray<ObParamDef*> params_;/*存储过程参数*/
			ObArray<ObString> declare_variable_;
		};



	}
}

#endif



