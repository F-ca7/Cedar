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
  else if ( OB_SUCCESS != (ret = proc_->write_variable(var_val_.variable_name_, *val)) )
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


void SpRdBaseInst::add_read_var(ObArray<const ObRawExpr*> &var_list)
{
  for(int64_t i = 0; i < var_list.count(); ++i)
  {
    ObItemType raw_type = var_list.at(i)->get_expr_type();
    if( T_SYSTEM_VARIABLE == raw_type || T_TEMP_VARIABLE == raw_type )
    {
      ObString var_name;
      ((const ObConstRawExpr *)var_list.at(i))->get_value().get_varchar(var_name);
      rs_.addVariable(var_name);
//      if( iskey ) rd_base_inst.add_read_var(var_name); //rowkey would be used in read baseline
//      rw_delta_inst.add_read_var(var_name);  //other values are used in update delta
    }
//    add_read_var(var_list.at(i));
  }
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
  //table rpc scan is in the ups_executor's inner plan that is different from the current plan
//  op_->get_phy_plan()->set_curr_frozen_version(proc_->my_phy_plan_->get_curr_frozen_version());
//  op_->get_phy_plan()->set_result_set(proc_->my_phy_plan_->get_result_set());

//  ret = op_->open();
  return ret;
}

const VariableSet& SpRwDeltaInst::get_read_variable_set() const
{
  return rs_;
}

const VariableSet& SpRwDeltaInst::get_write_variable_set() const
{
//  OB_ASSERT(ws_.var_set_.count() == 0); //since select..into inst inherit this, such assert is not valid any more
  return ws_;
}

void SpRwDeltaInst::add_read_var(ObArray<const ObRawExpr*> &var_list)
{
  for(int64_t i = 0; i < var_list.count(); ++i)
  {
    ObItemType raw_type = var_list.at(i)->get_expr_type();
    if( T_SYSTEM_VARIABLE == raw_type || T_TEMP_VARIABLE == raw_type )
    {
      ObString var_name;
      ((const ObConstRawExpr *)var_list.at(i))->get_value().get_varchar(var_name);
      rs_.addVariable(var_name);
    }
  }
}

int SpRwDeltaInst::set_rwdelta_op(ObPhyOperator *op)
{
  int ret = OB_SUCCESS;
  OB_ASSERT(op->get_type() == PHY_UPS_EXECUTOR);
  op_ = op;
  return ret;
}

int SpRwDeltaInst::exec()
{
  int ret = OB_SUCCESS;

  if( OB_SUCCESS != (ret = op_->open()) )
  {
    TBSYS_LOG(WARN, "execute rw_delta_inst fail");
  }

  return ret;
}

int SpRwCompInst::exec()
{
  int ret = OB_SUCCESS;
  const ObRow *row;
  if( OB_SUCCESS != (ret = op_->open()) )
  {
    TBSYS_LOG(WARN, "open rw_com_inst fail");
  }
  else if( OB_SUCCESS != (ret = op_->get_next_row(row))) //properly we need to check only one row is got
  {
    TBSYS_LOG(WARN, "get new_row fail");
  }
  else
  {
    for(int64_t var_name_it = 0; var_name_it < var_list_.count(); ++var_name_it)
    {
      const ObString &var_name = var_list_.at(var_name_it);
      const ObObj *cell = NULL;
      if(OB_SUCCESS !=(ret=row->raw_get_cell(var_name_it, cell)))//取出一列
      {
        TBSYS_LOG(WARN, "raw_get_cell %ld failed",var_name_it);
      }
      else if(OB_SUCCESS !=(proc_->write_variable(var_name, *cell)))
      {
        TBSYS_LOG(WARN, "write into variables fail");
      }
    }
  }
  return ret;
}

int SpRwDeltaIntoVarInst::exec()
{
  int ret = OB_SUCCESS;
  const ObRow *row;
  if( OB_SUCCESS != (ret = op_->open()) )
  {
    TBSYS_LOG(WARN, "open rw_delta_into_inst fail");
  }
  else if( OB_SUCCESS != (ret = op_->get_next_row(row))) //properly we need to check only one row is got
  {
    TBSYS_LOG(WARN, "get next_row fail, %d", ret);
  }
  else
  {
    for(int64_t var_name_it = 0; var_name_it < var_list_.count(); ++var_name_it)
    {
      const ObString &var_name = var_list_.at(var_name_it);
      const ObObj *cell = NULL;
      if(OB_SUCCESS !=(ret=row->raw_get_cell(var_name_it, cell)))//取出一列
      {
        TBSYS_LOG(WARN, "raw_get_cell %ld failed",var_name_it);
      }
      else if(OB_SUCCESS !=(proc_->write_variable(var_name, *cell)))
      {
        TBSYS_LOG(WARN, "write into variables fail");
      }
    }
  }
  return ret;
}

const VariableSet& SpRwCompInst::get_read_variable_set() const
{
  return rs_;
}

const VariableSet& SpRwCompInst::get_write_variable_set() const
{
  return ws_;
}

int SpRwCompInst::set_rwcomp_op(ObPhyOperator *op)
{
  op_ = op;
  return OB_SUCCESS;
}


ObProcedure::ObProcedure()
{
//  child_num_ = 0;
}

ObProcedure::~ObProcedure()
{
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    inst_list_.at(i)->~SpInst();
  }
  arena_.free();
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
    for(; pc_ < inst_list_.count(); ++pc_)
    {
      inst_list_.at(pc_)->exec();
//      SpPtr ptr = inst_seq_.at(pc_);
//      switch(ptr.type_)
//      {
//      case SP_E_INST:
//        inst_e_.at(ptr.idx_).exec(); //either descripe the execution method, or ?
//        break;
//      case SP_A_INST:
//        break;
//      case SP_D_INST:
//        inst_d_.at(ptr.idx_).exec();
//        break;
//      case SP_B_INST:
//        inst_d_.at(ptr.idx_).exec();
//        break;
//      case SP_C_INST:
//        break;
//      default:
//        break;
//      }
      debug_status();
    }
  }
  return ret;
}

int ObProcedure::write_variable(const ObString &var_name, const ObObj &val)
{
  ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();

  return session->replace_variable(var_name, val);
}

int ObProcedure::read_variable(const ObString &var_name, ObObj &val) const
{
  ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();

  return session->get_variable_value(var_name, val);
}

int ObProcedure::debug_status() const
{
  int ret = OB_SUCCESS;
//  SpPtr ptr = inst_seq_.at(pc_);
  const SpInst *inst = inst_list_.at(pc_);
//  switch(ptr.type_)
//  {
//  case SP_E_INST:
//    inst = &inst_e_.at(ptr.idx_); //either descripe the execution method, or ?
//    break;
//  case SP_A_INST:
//    break;
//  case SP_D_INST:
//    inst = &inst_d_.at(ptr.idx_);
//    break;
//  case SP_B_INST:
//    inst = &inst_b_.at(ptr.idx_);
//    break;
//  case SP_C_INST:
//    break;
//  default:
//    break;
//  }

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
      if( OB_SUCCESS == read_variable(var_name, val))
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
      if( OB_SUCCESS == read_variable(var_name, val))
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
  databuff_printf(buf, buf_len, pos, "type [B], ws [], rs [");
  const ObArray<ObString> &rs = get_read_variable_set().var_set_;
  for(int64_t i = 0; i < rs.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", rs.at(i).length(), rs.at(i).ptr(), ((i == rs.count()-1) ? ']' : ','));
  }
  if( rs.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");
  databuff_printf(buf, buf_len, pos, ", tid[%ld]\n", table_id_);
  return pos;
}

int64_t SpRwDeltaInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [D], ws [], rs [");
  const ObArray<ObString> &rs = get_read_variable_set().var_set_;
  for(int64_t i = 0; i < rs.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", rs.at(i).length(), rs.at(i).ptr(), ((i == rs.count()-1) ? ']' : ','));
  }
  if( rs.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");
  databuff_printf(buf, buf_len, pos, ", tid[%ld]\n", table_id_);
  return pos;
}


int64_t SpRwCompInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [A], ws [");

  const ObArray<ObString> &ws = get_write_variable_set().var_set_;
  for(int64_t i = 0; i < ws.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", ws.at(i).length(), ws.at(i).ptr(), ((i == ws.count()-1) ? ']' : ','));
  }
  if ( ws.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");

  databuff_printf(buf, buf_len, pos, ", rs [");

  const ObArray<ObString> &rs = get_read_variable_set().var_set_;
  for(int64_t i = 0; i < rs.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", rs.at(i).length(), rs.at(i).ptr(), ((i == rs.count()-1) ? ']' : ','));
  }
  if( rs.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");
  databuff_printf(buf, buf_len, pos, ", tid[%ld]\n", table_id_);
  return pos;
}

int64_t SpRwDeltaIntoVarInst::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "type [D], ws [");

  const ObArray<ObString> &ws = get_write_variable_set().var_set_;
  for(int64_t i = 0; i < ws.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", ws.at(i).length(), ws.at(i).ptr(), ((i == ws.count()-1) ? ']' : ','));
  }
  if ( ws.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");

  databuff_printf(buf, buf_len, pos, ", rs [");

  const ObArray<ObString> &rs = get_read_variable_set().var_set_;
  for(int64_t i = 0; i < rs.count(); ++i)
  {
    databuff_printf(buf, buf_len, pos, " %.*s%c", rs.at(i).length(), rs.at(i).ptr(), ((i == rs.count()-1) ? ']' : ','));
  }
  if( rs.count() == 0 )
    databuff_printf(buf, buf_len, pos, "]");
  databuff_printf(buf, buf_len, pos, ", tid[%ld]\n", table_id_);
  return pos;
}

int64_t ObProcedure::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "procedure ()\n");
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    SpInst *inst = inst_list_.at(i);
    databuff_printf(buf, buf_len, pos, "inst %ld: ", i);
    pos += inst->to_string(buf + pos, buf_len -pos);
  }
//  for(int64_t i = 0; i < inst_seq_.count(); ++i)
//  {
//    SpPtr ptr = inst_seq_.at(i);
//    databuff_printf(buf, buf_len, pos, "inst %ld: ", i);
//    switch(ptr.type_)
//    {
//    case SP_E_INST:
//      pos += inst_e_.at(ptr.idx_).to_string(buf + pos, buf_len - pos);
//      break;
//    case SP_A_INST:
//      break;
//    case SP_D_INST:
//      pos += inst_d_.at(ptr.idx_).to_string(buf + pos, buf_len - pos);
//      break;
//    case SP_B_INST:
//      pos += inst_b_.at(ptr.idx_).to_string(buf + pos, buf_len - pos);
//      break;
//    case SP_C_INST:
//      break;
//    default:
//      break;
//    }
//  }
  return pos;
}
