#include "ob_procedure_execute.h"
#include "ob_procedure_stmt.h"
#include "ob_procedure.h"
#include "ob_result_set.h"
#include "ob_physical_plan.h"
#include "parse_malloc.h"
#include "ob_cursor_close.h"
#include "ob_phy_operator.h"
#include "ob_single_child_phy_operator.h"
#include "ob_deallocate.h"
using namespace oceanbase::sql;
using namespace oceanbase::common;

ObProcedureExecute::ObProcedureExecute()
{
	stmt_id_=common::OB_INVALID_ID;
}

ObProcedureExecute::~ObProcedureExecute()
{
}

int ObProcedureExecute::set_proc_name(ObString &proc_name)
{
	proc_name_=proc_name;
	return OB_SUCCESS;
}
int ObProcedureExecute::set_stmt_id(uint64_t &stmt_id)
{
	stmt_id_=stmt_id;
	return OB_SUCCESS;
}
int ObProcedureExecute::add_param_name(common::ObString& name)
{
      return param_names_.push_back(name);
}

int ObProcedureExecute::add_param_expr(ObSqlExpression& expr)
{
	  expr.set_owner_op(this);
      return param_list_.push_back(expr);
}

int64_t ObProcedureExecute::get_param_num()
{
	return param_names_.count();
}
int64_t ObProcedureExecute::get_param_size()
{
	return param_list_.count();
}
void ObProcedureExecute::reset()
{
	param_names_.clear();
	stmt_id_=common::OB_INVALID_ID;
}
void ObProcedureExecute::reuse()
{
	param_names_.clear();
	stmt_id_=common::OB_INVALID_ID;
}
int ObProcedureExecute::close()
{
	return OB_SUCCESS;
}

int ObProcedureExecute::get_row_desc(const common::ObRowDesc *&row_desc) const
{
	int ret = OB_SUCCESS;
	if (OB_UNLIKELY(NULL == child_op_))
	{
		ret = OB_NOT_INIT;
		TBSYS_LOG(ERROR, "child_op_ is NULL");
	}
	else
	{
		ret = child_op_->get_row_desc(row_desc);
	}
	return ret;
}
int ObProcedureExecute::get_next_row(const common::ObRow *&row)
{
	int ret = OB_SUCCESS;
	if (NULL == child_op_)
	{
		ret = OB_ERR_UNEXPECTED;
		TBSYS_LOG(ERROR, "child_op_ is NULL");
	}
	else
	{
	  ret = child_op_->get_next_row(row);
	}
	return ret;
}

int ObProcedureExecute::open()
{
	TBSYS_LOG(INFO, "zz:ObProcedureExecute::open");
	int ret = OB_SUCCESS;
	int clear_ret = OB_SUCCESS;
	if (stmt_id_ == OB_INVALID_ID)
	{
		TBSYS_LOG(INFO, "procedure not in session");
		if(child_op_!=NULL)
		{
			TBSYS_LOG(INFO, "child_op_ is not NULL");
			ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();
			ObProcedure *proc=static_cast<ObProcedure*>(child_op_);
			int64_t num1=proc->get_param_num();//获得定义的存储过程参数数量
			int64_t num2=get_param_size();//获得调用存储过程时的参数数量
			if(num1!=num2)
			{
				ret =OB_INPUT_PARAM_ERROR;
			}
			else
			{
				for(int64_t i=0;i<num1;++i)
				{


					ObString* param_name=proc->get_param(i)->param_name_;//存储过程的形式参数名称
					ObSqlExpression& expr=param_list_.at(i);//获取对应位置的表达式
					common::ObRow tmp_row;
					const ObObj *result = NULL;

					// 如果是输出参数则
					if(proc->get_param(i)->out_type_==OUT_TYPE)
					{
						const ObObj nullValue;
						if((ret=session->replace_variable(*param_name,nullValue))!=OB_SUCCESS)
						{
							TBSYS_LOG(ERROR, "replace_variable ERROR");
						}
						continue;
					}

					if((ret=expr.calc(tmp_row, result))!=OB_SUCCESS)
					{
						TBSYS_LOG(ERROR, "ObProcedureExecute expr compute failed");
					}
					else if((ret=session->replace_variable(*param_name,*result))!=OB_SUCCESS)//取出这个的值，|赋给形式参数|
					{
						 TBSYS_LOG(WARN, "zz:replace_variable ERROR");
					}
					/*
					ObString* param_name=proc->get_param(i)->param_name_;//存储过程的形式参数名称
					ObObj val;
					ObString var_name=param_names_.at(i);//赋值的参数名
					TBSYS_LOG(INFO, "zz:param_name=%s var_name=%s",param_name->ptr(),var_name.ptr());
					if ((ret = session->get_variable_value(var_name, val)) != OB_SUCCESS)//|取出这个的值|，赋给形式参数
					{
						 TBSYS_LOG(WARN, "zz:Get variable %.*s faild. ret=%d", param_name->length(), param_name->ptr(), ret);
					}
					else if((ret=session->replace_variable(*param_name,val))!=OB_SUCCESS)//取出这个的值，|赋给形式参数|
					{
						 TBSYS_LOG(WARN, "zz:replace_variable ERROR");
					}
					else
					{
						TBSYS_LOG(INFO, "zz:replace param_name=%s value become var_name=%s de value",param_name->ptr(),var_name.ptr());
					}*/
				}
			}
			if(ret==OB_SUCCESS)
			{
				if((ret=child_op_->open())!=OB_SUCCESS)
				{
					TBSYS_LOG(ERROR, "procedure execute error!");
				}
				else
				{
					TBSYS_LOG(INFO, "procedure execute success!");


				}
			}
		}
		else
		{
			ret = OB_NOT_INIT;
			TBSYS_LOG(ERROR, "child_op_ is NULL");
		}
	}
	else
	{
		ObResultSet *result_set = NULL;
		ObPhysicalPlan *physical_plan = NULL;
		ObPhyOperator *main_query = NULL;
		ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();
		if ((result_set = session->get_plan(stmt_id_)) == NULL
		 || (physical_plan = result_set->get_physical_plan()) == NULL
		 || (main_query = physical_plan->get_main_query()) == NULL)
		{
		 ret = OB_NOT_INIT;
		 TBSYS_LOG(WARN, "Stored session plan can not be found or not correct, result_set=%p main_query=%p phy_plan=%p",
				   result_set, main_query, physical_plan);
		}
		else if ((ret = set_child(0, *main_query)) != OB_SUCCESS)
		{
			TBSYS_LOG(ERROR, "Find stored executing plan failed");
		}

		//这段代码占时没有用
//		if(ret==OB_SUCCESS&&get_param_num()>0)
//		{
//			ObIArray<ObObj*>& param_values = result_set->get_params();
//			if (param_values.count() != param_names_.count())
//			{
//			  ret = OB_ERR_WRONG_DYNAMIC_PARAM;
//			  TBSYS_LOG(USER_ERROR, "Incorrect arguments number to EXECUTE, need %ld arguments", param_values.count());
//			}
//			for (int64_t i = 0; ret == OB_SUCCESS && i < param_names_.count(); i++)
//			{
//			  ObObj val;
//			  ObString param_name = param_names_.at(i);
//			  if ((ret = session->get_variable_value(param_name, val)) != OB_SUCCESS)
//			  {
//				TBSYS_LOG(WARN, "Get variable %.*s faild. ret=%d", param_name.length(), param_name.ptr(), ret);
//			  }
//			  else
//			  {
//				TBSYS_LOG(DEBUG, "execute using variables, i=%ld val=%s stmt_id=%ld",
//						  i, to_cstring(val), stmt_id_);
//				ObObj *stored_val = param_values.at(i);
//				*stored_val = val;
//			  }
//			}
//		}

		if((ret = result_set->open()) != OB_SUCCESS)
		{
			TBSYS_LOG(ERROR, "zz:result_set->open failed");
		}
		else
		{
			TBSYS_LOG(INFO, "zz:execute procedure success!");
		}
	}
	//移除内部定义变量（输出变量的话，需要把最终值替换给外部变量）
	ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();
	ObProcedure *proc=static_cast<ObProcedure*>(child_op_);
	int var_index=0;
	for(int64_t i=0;i<proc->get_param_num();++i)
	{
		ObParamDef* param=proc->get_param(i);
		ObString* param_name=param->param_name_;//存储过程的形式参数名称
		if(param->out_type_==OUT_TYPE||param->out_type_==INOUT_TYPE)
		{
			ObObj val;
			ObString var_name=param_names_.at(var_index++);//赋值的参数名
			//应该从这里面获取变量名ObSqlExpression& expr= param_list_.at(i)
			if ((clear_ret = session->get_variable_value(*param_name, val)) != OB_SUCCESS)//|取出这个的值|，赋给形式参数
			{
				 TBSYS_LOG(WARN, "zz:Get variable %.*s faild. ret=%d", param_name->length(), param_name->ptr(), ret);
			}
			else if((clear_ret=session->replace_variable(var_name,val))!=OB_SUCCESS)
			{
				 TBSYS_LOG(WARN, "zz:replace_variable ERROR");
			}
//			else if ((clear_ret = session->remove_variable(*param_name)) != OB_SUCCESS)
//			{
//				 TBSYS_LOG(WARN, "zz:Remove variable %.*s faild. ret=%d", param_name->length(), param_name->ptr(), ret);
//			}
			else
			{
				if(var_name.compare(*param_name)!=0)//如果形参和实参名字一样则不用移除
				{
					//名称不一样，移除形参，保留实参
					if ((clear_ret = session->remove_variable(*param_name)) != OB_SUCCESS)
					{
						 TBSYS_LOG(WARN, "zz:Remove variable %.*s faild. ret=%d", param_name->length(), param_name->ptr(), ret);
					}
					else
					{
						TBSYS_LOG(INFO,"zz:remove %.*s  assign %.*s",param_name->length(),param_name->ptr(),var_name.length(),var_name.ptr());
					}
				}
				else
				{
					TBSYS_LOG(INFO,"zz:param1 %.*s  param2 %.*s",param_name->length(),param_name->ptr(),var_name.length(),var_name.ptr());
				}

			}
			//param_names_.remove(i);
		}
		else
		{
			ObString var_name=param_names_.at(var_index++);//赋值的参数名 取出占位的变量名
			TBSYS_LOG(INFO,"zz:varname is %.*s",var_name.length(),var_name.ptr());
			if ((clear_ret = session->remove_variable(*param_name)) != OB_SUCCESS)
			{
				 TBSYS_LOG(WARN, "zz:Remove variable %.*s faild. ret=%d", param_name->length(), param_name->ptr(), ret);
			}
			else
			{
				TBSYS_LOG(INFO,"zz:remove %.*s success",param_name->length(),param_name->ptr());
			}
		}
		delete param->param_name_;
		delete param;


	}
	//清除所有的变量（除了传进来的变量）
	//TODO

	ObProcedure *ps=static_cast<ObProcedure*>(child_op_);
	for(int64_t i=0;i<ps->get_declare_var_num();i++)
	{
		if ((clear_ret = session->remove_variable(ps->get_declare_var(i))) != OB_SUCCESS)
		{
			TBSYS_LOG(WARN, "zz:Remove variable %.*s faild. ret=%d", ps->get_declare_var(i).length(), ps->get_declare_var(i).ptr(), ret);
		}
		else
		{
			TBSYS_LOG(INFO,"zz:Remove variable success var_name=%s",ps->get_declare_var(i).ptr());
		}
	}
	if(clear_ret==OB_SUCCESS)
		return ret;
	else
		return clear_ret;

	ObDeallocate np;
	np.open();
	session->remove_plan(stmt_id_);
}


namespace oceanbase{
  namespace sql{
    REGISTER_PHY_OPERATOR(ObProcedureExecute, PHY_PROCEDURE_EXEC);
  }
}

int64_t ObProcedureExecute::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "procedure execute(stmt_id=%ld)\n", stmt_id_);
  int64_t pos_temp=child_op_->to_string(buf+pos,buf_len-pos);
  pos+=pos_temp;
  return pos;
}
