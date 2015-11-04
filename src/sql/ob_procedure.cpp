#include "ob_procedure.h"
#include "ob_result_set.h"
#include "ob_physical_plan.h"
#include "parse_malloc.h"
using namespace oceanbase::sql;
using namespace oceanbase::common;


int SpExprInst::set_var_val(ObVarAssignVal &var)
{
  var_val_ = var;
  ws_.addVariable(var.variable_name_);
  return OB_SUCCESS;
}

const VariableSet &SpExprInst::get_read_variable_set() const
{
  return var_val_.rs_;
}

const VariableSet &SpExprInst::get_write_variable_set() const
{
  return ws_;
}

int SpExprInst::exec()
{
  int ret = OB_SUCCESS;
  TBSYS_LOG(TRACE, "sp expr inst exec()");
  common::ObRow input_row; //fake paramters
  const ObObj *val = NULL;
  if((ret=var_val_.var_value_->calc(input_row, val))!=OB_SUCCESS)
  {
    TBSYS_LOG(WARN, "sp expr compute failed");
  }
  //update the varialbe here
  else if ( OB_SUCCESS != (ret = proc_->update_variable(var_val_.variable_name_, *val)) )
  {

  }
  return ret;
}

const VariableSet& SpRdBaseInst::get_read_variable_set() const
{
  return rs_;
}

const VariableSet& SpRdBaseInst::get_write_variable_set() const
{
  OB_ASSERT(ws_.var_set_.count() == 0);
  return ws_;
}

int SpRdBaseInst::set_rdbase_op(ObPhyOperator *op)
{
  int ret = OB_SUCCESS;
  OB_ASSERT(op->get_type() == PHY_VALUES);
  op_ = op;
  return ret;
}

int SpRdBaseInst::exec()
{
  int ret = OB_SUCCESS;

  return ret;
}


//int SpExprsInst::split(SpBlockInst &block_inst)
//{
//  int ret = OB_SUCCESS;
//  for(int64_t i = 0; i < var_val_list_.count(); ++i)
//  {
//    ObVariableSetVal &var_val = var_val_list_.at(i);
//    SpExprInst expr_inst(var_val);
//    block_inst.add_inst(expr_inst);
//  }
//  return ret;
//}


ObProcedure::ObProcedure()
{
//  child_num_ = 0;
}

ObProcedure::~ObProcedure()
{
}
int ObProcedure::set_proc_name(ObString &proc_name)
{
  proc_name_=proc_name;
  return OB_SUCCESS;
}
int ObProcedure::set_params(ObArray<ObParamDef*> &params)
{
  params_=params;
  return OB_SUCCESS;
}

int ObProcedure::add_param(ObParamDef &proc_param)
{
  return params_.push_back(&proc_param);
}

int ObProcedure::add_declare_var(ObString &var)
{
  int ret=OB_SUCCESS;
  for (int64_t i = 0;i < declare_variable_.count();i++)//判断变量是否重复定义了
  {
    TBSYS_LOG(TRACE, "declare %ld %.*s compare with %.*s  ret=%d",i,declare_variable_.at(i).length(),declare_variable_.at(i).ptr(),var.length(),var.ptr(),declare_variable_.at(i).compare(var));
    if(declare_variable_.at(i).compare(var)==0)
    {
      TBSYS_LOG(WARN, "same variable");
      ret=OB_ENTRY_EXIST;
      break;
    }
  }
  if(ret==OB_SUCCESS)
  {
    declare_variable_.push_back(var);
  }
  return ret;
}


ObString& ObProcedure::get_declare_var(int64_t index)
{
  return declare_variable_.at(index);
}
ObArray<ObParamDef*>& ObProcedure::get_params()
{
  return params_;
}
ObParamDef* ObProcedure::get_param(int64_t index)
{
  return params_.at(index);
}
int64_t ObProcedure::get_param_num()
{
  return params_.count();
}
int64_t ObProcedure::get_declare_var_num()
{
  return declare_variable_.count();
}
void ObProcedure::reset()
{
//  child_num_ = 0;
//  ObMultiChildrenPhyOperator::reset();
}
void ObProcedure::reuse()
{
//  child_num_ = 0;
//  ObMultiChildrenPhyOperator::reset();
}
int ObProcedure::close()
{
//  return ObMultiChildrenPhyOperator::close();
  return OB_SUCCESS;
}

int ObProcedure::get_row_desc(const common::ObRowDesc *&row_desc) const
{
//  int ret = OB_SUCCESS;
//  if (OB_UNLIKELY(get_child(0) == NULL))
//  {
//    ret = OB_NOT_INIT;
//    TBSYS_LOG(ERROR, "children_ops_[0] is NULL");
//  }
//  else
//  {
//    ret = get_child(0)->get_row_desc(row_desc);
//  }
  //does not return desc now
  UNUSED(row_desc);
  return OB_SUCCESS;
//  return ret;
}
int ObProcedure::get_next_row(const common::ObRow *&row)
{
  int ret = OB_SUCCESS;
  UNUSED(row);
//  if (OB_UNLIKELY(ObMultiChildrenPhyOperator::get_child_num() <= 0))
//  {
//    ret = OB_NOT_INIT;
//    TBSYS_LOG(WARN, "ObProcedureCreate has no child, ret=%d", ret);
//  }
//  else
//  {
//    /*返回第一个操作符的next_row*/
//    ret = get_child(0)->get_next_row(row);
//  }
  return ret;
}

//int ObProcedure::set_child(int32_t child_idx, ObPhyOperator &child_operator)
//{
//  int ret = OB_SUCCESS;
//  UNUSED(child_idx);
//  UNUSED(child_operator);
//  if ((ret = ObMultiChildrenPhyOperator::set_child(child_idx, child_operator)) == OB_SUCCESS)
//  {
//    if (ObMultiChildrenPhyOperator::get_child_num() > child_num_)
//    {
//      child_num_++;
//    }
//  }
//  return ret;
//}

//int32_t ObProcedure::get_child_num() const
//{
//  int child_num = child_num_;
//  if (child_num_ < ObMultiChildrenPhyOperator::get_child_num())
//  {
//    child_num = ObMultiChildrenPhyOperator::get_child_num();
//  }
//  return child_num;
//  return 0;
//}

/**
  create declared variables for the procedure
 * @brief ObProcedure::create_variables
 * @return
 */
int ObProcedure::create_variables()
{
  int ret = OB_SUCCESS;
  if( defs_.count() > 0 )
  {
    ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();
    for (int64_t i = 0; i < defs_.count() && OB_SUCCESS == ret; ++i)
    {
      ObVariableDef &var= defs_.at(i);

      if(var.is_default_)
      {
        if((ret=session->replace_variable(var.variable_name_,var.default_value_))!=OB_SUCCESS)
        {
          TBSYS_LOG(WARN, "replace_variable default_value_  ERROR");
        }
        else
        {
          TBSYS_LOG(TRACE, "declare %.*s and set default_value",
                    var.variable_name_.length(),var.variable_name_.ptr());
        }
      }
      else
      {
        ObObj new_value_obj;
        new_value_obj.set_null();
        new_value_obj.set_type(var.variable_type_);
        if((ret=session->replace_variable(var.variable_name_,new_value_obj))!=OB_SUCCESS)
        {
          TBSYS_LOG(WARN, "replace_variable default_value_  ERROR");
        }
        else
        {
          TBSYS_LOG(TRACE, "declare %.*s and set  default_value null",
                    var.variable_name_.length(),var.variable_name_.ptr());
        }
      }
    }
  }
  return ret;
}

int ObProcedure::open()
{
  int ret = OB_SUCCESS;

  if( OB_SUCCESS != (ret = create_variables()))
  {

  }
  else
  {
    pc_ = 0;
    for(; pc_ < inst_seq_.count(); ++pc_)
    {
      SpPtr ptr = inst_seq_.at(pc_);
      switch(ptr.type_)
      {
      case SP_E_INST:
        inst_e_.at(ptr.idx_).exec(); //either descripe the execution method, or ?
        break;
      case SP_A_INST:
        break;
      case SP_D_INST:
        break;
      case SP_B_INST:
        break;
      case SP_C_INST:
        break;
      default:
        break;
      }
      debug_status();
    }
  }
  return ret;
}

int ObProcedure::update_variable(const ObString &var_name, const ObObj &val)
{
  ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();

  return session->replace_variable(var_name, val);
}

int ObProcedure::get_var_val(const ObString &var_name, ObObj &val) const
{

  ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();

  return session->get_variable_value(var_name, val);
}

int ObProcedure::debug_status() const
{
  int ret = OB_SUCCESS;
  SpPtr ptr = inst_seq_.at(pc_);
  const SpInst *inst = NULL;
  switch(ptr.type_)
  {
  case SP_E_INST:
    inst = &inst_e_.at(ptr.idx_); //either descripe the execution method, or ?
    break;
  case SP_A_INST:
    break;
  case SP_D_INST:
    break;
  case SP_B_INST:
    break;
  case SP_C_INST:
    break;
  default:
    break;
  }

  if( inst != NULL )
  {
    const VariableSet &rs = inst->get_read_variable_set();
    const VariableSet &ws = inst->get_write_variable_set();
    char debug_buf[1024];
    int64_t buf_len = 1024, pos = 0;

    databuff_printf(debug_buf, buf_len, pos, "inst %ld\n", pc_);

    for(int64_t i = 0; i < rs.var_set_.count(); ++i)
    {
      ObObj val;
      const ObString &var_name = rs.var_set_.at(i);
      if( OB_SUCCESS == get_var_val(var_name, val))
      {
        databuff_printf(debug_buf, buf_len, pos, "\tvar [%.*s] = %s\n",
                        var_name.length(), var_name.ptr(), to_cstring(val));
      }
      else
      {
         databuff_printf(debug_buf, buf_len, pos, "\tvar [%.*s] not found.\n",
                         var_name.length(), var_name.ptr());
      }
    }

    for(int64_t i = 0; i < ws.var_set_.count(); ++i)
    {
      ObObj val;
      const ObString &var_name = ws.var_set_.at(i);
      if( OB_SUCCESS == get_var_val(var_name, val))
      {
         databuff_printf(debug_buf, buf_len, pos, "\tvar [%.*s] = %s\n",
                         var_name.length(), var_name.ptr(), to_cstring(val));
      }
      else
      {
         databuff_printf(debug_buf, buf_len, pos, "\tvar [%.*s] not found.\n",
                         var_name.length(), var_name.ptr());
      }
    }
    TBSYS_LOG(INFO, "%s", debug_buf);
  }
  return ret;
}

namespace oceanbase{
  namespace sql{
    REGISTER_PHY_OPERATOR(ObProcedure, PHY_PROCEDURE);
  }
}


int64_t SpExprInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [E], ws [%.*s], rs [", var_val_.variable_name_.length(), var_val_.variable_name_.ptr());
  const ObArray<ObString> &rs = var_val_.rs_.var_set_;
  for(int64_t i = 0; i < rs.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", rs.at(i).length(), rs.at(i).ptr(), ((i == rs.count()-1) ? ']' : ','));
  }
  if( rs.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");
  databuff_printf(buf, buf_len, pos, "\n");
  return pos;
}

int64_t SpRdBaseInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  UNUSED(buf);
  UNUSED(buf_len);
  return pos;
}

int64_t ObProcedure::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "procedure ()\n");
  for(int64_t i = 0; i < inst_seq_.count(); ++i)
  {
    SpPtr ptr = inst_seq_.at(i);
    databuff_printf(buf, buf_len, pos, "inst %ld: ", i);
    switch(ptr.type_)
    {
    case SP_E_INST:
      pos += inst_e_.at(ptr.idx_).to_string(buf + pos, buf_len - pos);
      break;
    case SP_A_INST:
      break;
    case SP_D_INST:
      break;
    case SP_B_INST:
      break;
    case SP_C_INST:
      break;
    default:
      break;
    }
  }
  return pos;
}
