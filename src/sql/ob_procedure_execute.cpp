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
  //inner_result_set_ has a physical plan from assign, we need to clear it
  inner_result_set_.reset();
}

int ObProcedureExecute::set_proc_name(const ObString &proc_name)
{
	proc_name_=proc_name;
	return OB_SUCCESS;
}
int ObProcedureExecute::set_stmt_id(uint64_t stmt_id)
{
	stmt_id_=stmt_id;
	return OB_SUCCESS;
}

int ObProcedureExecute::add_param_name(const ObString& name)
{
  return param_names_.push_back(name);
}

int ObProcedureExecute::add_param_expr(ObSqlExpression& expr)
{
  expr.set_owner_op(this);
  return param_list_.push_back(expr);
}

int64_t ObProcedureExecute::get_param_num() const
{
	return param_names_.count();
}

int64_t ObProcedureExecute::get_param_size() const
{
	return param_list_.count();
}

void ObProcedureExecute::reset()
{
	param_names_.clear();
  stmt_id_=common::OB_INVALID_ID;
  ObSingleChildPhyOperator::reset();
}

void ObProcedureExecute::reuse()
{
	param_names_.clear();
  stmt_id_=common::OB_INVALID_ID;
  ObSingleChildPhyOperator::reuse();
}

int ObProcedureExecute::close()
{
//  int ret = OB_SUCCESS;
//  if( NULL != child_op_ && OB_SUCCESS != (ret = child_op_->close()) )
//  {
//    if( stmt_id_ != OB_INVALID_ID )
//    {
//      my_phy_plan_->get_result_set()->get_session()->remove_plan(stmt_id_);
//    }
//  }
//  return ret;
  return ObSingleChildPhyOperator::close();
}

int ObProcedureExecute::get_row_desc(const common::ObRowDesc *&row_desc) const
{
	int ret = OB_SUCCESS;
	if (OB_UNLIKELY(NULL == child_op_))
	{
    ret = OB_NOT_INIT;
    TBSYS_LOG(WARN, "child_op_ is NULL");
	}
	else
	{
		ret = child_op_->get_row_desc(row_desc);
	}
	return ret;
}

int ObProcedureExecute::get_next_row(const common::ObRow *&row)
{
  int ret = OB_ITER_END;
  UNUSED(row);
//	if (NULL == child_op_)
//	{
//		ret = OB_ERR_UNEXPECTED;
//    TBSYS_LOG(WARN, "child_op_ is NULL");
//	}
//	else
//	{
//	  ret = child_op_->get_next_row(row);
//	}
	return ret;
}

int ObProcedureExecute::open()
{
//  TBSYS_LOG(INFO, "zz:ObProcedureExecute::open");
  int ret = OB_SUCCESS;
//  int clear_ret = OB_SUCCESS;
  ObProcedure *proc = NULL;
  ObResultSet *result_set = NULL;
  ObPhysicalPlan *physical_plan = NULL;
  ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();
/** plan cache
<<<<<<< HEAD
//  ObPhysicalPlan *physical_plan = inner_result_set_.get_physical_plan();
  ObResultSet *result_set = &inner_result_set_;
  //delete by wangdonghui 20160303 :b
//  if (stmt_id_ == OB_INVALID_ID)
//  {
//    TBSYS_LOG(WARN, "procedure is not prepared");
//    ret = OB_ENTRY_NOT_EXIST;
//  }
//  else
  //delete :e
=======
*/
  if( (result_set = session->get_plan(stmt_id_)) == NULL
      ||  (physical_plan = result_set->get_physical_plan()) == NULL
      ||  (proc = dynamic_cast<ObProcedure*>(physical_plan->get_main_query())) == NULL)
  {
    ret = OB_NOT_INIT;
    TBSYS_LOG(ERROR, "Find stored procedure plan failed");
  }
  else if (OB_SUCCESS != (ret = set_child(0, *proc)) )
  {
    TBSYS_LOG(ERROR, "Failed to set main query");
  }
  else{
    result_set->set_running_procedure(proc);
  }


//  if (stmt_id_ == OB_INVALID_ID)
//  {
//    TBSYS_LOG(WARN, "procedure is not prepared");
//    ret = OB_ENTRY_NOT_EXIST;
//  }
//  else
//  {
//    ObPhyOperator *tmp_op = result_set->get_physical_plan()->get_main_query();
//    TBSYS_LOG(INFO,"get main query success");
//    if( PHY_PROCEDURE != tmp_op->get_type() )
//    {
//      TBSYS_LOG(WARN, "the procedure plan is not correct");
//      ret = OB_ENTRY_NOT_EXIST;
//    }
//    else
//    {
//      proc = static_cast<ObProcedure*>(tmp_op);
      //since the procedur comes from assign, we need to
      //set the phy_operator point
//      result_set->set_running_procedure(proc);
//      proc->set_inst_op();

//      if( result_set->get_cur_time_place() != NULL  )
//      {
//        my_phy_plan_->get_result_set()->pre_assign_cur_time_room(static_cast<ObObj*>(result_set->get_cur_time_place()));
//      }
//    }
//  }
  //fill running parameters
//  if( OB_SUCCESS == ret )
//  {
//    OB_ASSERT(proc->get_type() == PHY_PROCEDURE);
//    int64_t param_desired = proc->get_param_num();
//    int64_t param_provided = get_param_size();
//    if(param_desired != param_provided)
//    {
//      ret =OB_INPUT_PARAM_ERROR;
//    }
//    else
//    {
      //create paramaters
//      for(int64_t i=0;i < param_desired; ++i)
//      {
//        const ObParamDef &param_def = proc->get_param(i);
//        const ObString& param_name = param_def.param_name_;
//        ObSqlExpression& expr=param_list_.at(i);
//        common::ObRow tmp_row;
//        const ObObj *result = NULL;

////        TBSYS_LOG(INFO, "param %ld: %s", i, to_cstring(expr));
//        // 如果是输出参数则
//        if( param_def.out_type_ == OUT_TYPE )
//        {
//          const ObObj nullValue;
//          if((ret=session->replace_variable(param_name,nullValue))!=OB_SUCCESS)
//          {
//            TBSYS_LOG(WARN, "replace_variable ERROR");
//          }
//          continue;
//        }

//        if((ret=expr.calc(tmp_row, result))!=OB_SUCCESS)
//        {
//          TBSYS_LOG(WARN, "ObProcedureExecute expr compute failed");
//        }
//        else if((ret=session->replace_variable(param_name,*result))!=OB_SUCCESS)//取出这个的值，|赋给形式参数|
//        {
//          TBSYS_LOG(WARN, "zz:replace_variable ERROR");
//        }
//      }

//      if(ret == OB_SUCCESS)
//      {

  if( OB_SUCCESS != (ret = proc->fill_parameters(param_list_)) )
  {
    TBSYS_LOG(WARN, "fill paramters fail");
  }
  else if( OB_SUCCESS != (ret=result_set->open()) )
  {
    TBSYS_LOG(WARN, "procedure execute error!");
  }
  else
  {
    TBSYS_LOG(TRACE, "procedure execute success!");
  }
//      }
//    }

    //clear paramaters, remove input paramters, keep output paramters
//    int var_index=0;
//    for(int64_t i=0;i<proc->get_param_num();++i)
//    {
//      const ObParamDef& param=proc->get_param(i);
//      const ObString& param_name=param.param_name_;//存储过程的形式参数名称

//      if(param.out_type_==OUT_TYPE||param.out_type_==INOUT_TYPE)
//      {
//        ObObj val;
//        const ObString& var_name=param_names_.at(var_index++);//赋值的参数名
//        //应该从这里面获取变量名ObSqlExpression& expr= param_list_.at(i)
//        if ((clear_ret = session->get_variable_value(param_name, val)) != OB_SUCCESS)//|取出这个的值|，赋给形式参数
//        {
//          TBSYS_LOG(WARN, "zz:Get variable %.*s faild. ret=%d", param_name.length(), param_name.ptr(), ret);
//        }
//        else if((clear_ret=session->replace_variable(var_name,val))!=OB_SUCCESS)
//        {
//          TBSYS_LOG(WARN, "zz:replace_variable ERROR");
//        }
//        else
//        {
//          if(var_name.compare(param_name)!=0)//如果形参和实参名字一样则不用移除
//          {
//            //名称不一样，移除形参，保留实参
//            if ((clear_ret = session->remove_variable(param_name)) != OB_SUCCESS)
//            {
//              TBSYS_LOG(WARN, "zz:Remove variable %.*s faild. ret=%d", param_name.length(), param_name.ptr(), ret);
//            }
//            else
//            {
////              TBSYS_LOG(INFO,"zz:remove %.*s  assign %.*s",param_name.length(),param_name.ptr(),var_name.length(),var_name.ptr());
//            }
//          }
//          else
//          {
////            TBSYS_LOG(INFO,"zz:param1 %.*s  param2 %.*s",param_name.length(),param_name.ptr(),var_name.length(),var_name.ptr());
//          }

//        }
//        //param_names_.remove(i);
//      }
//      else
//      {
////        const ObString &var_name = param_names_.at(var_index++);//赋值的参数名 取出占位的变量名
////        TBSYS_LOG(INFO,"zz:varname is %.*s",var_name.length(),var_name.ptr());
//        if ((clear_ret = session->remove_variable(param_name)) != OB_SUCCESS)
//        {
//          TBSYS_LOG(WARN, "zz:Remove variable %.*s faild. ret=%d", param_name.length(), param_name.ptr(), ret);
//        }
//        else
//        {
//          TBSYS_LOG(TRACE,"zz:remove %.*s success",param_name.length(),param_name.ptr());
//        }
//      }
//      //		delete param->param_name_;
//      //		delete param;
//    }
//  }
//	if(clear_ret==OB_SUCCESS)
//		return ret;
//	else
//		return clear_ret;
  return ret;
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
//  int64_t pos_temp=child_op_->to_string(buf+pos,buf_len-pos);
//  pos+=pos_temp;
  return pos;
}
