#include "ob_procedure.h"
#include "ob_result_set.h"
#include "ob_physical_plan.h"
#include "ob_ups_executor.h"
#include "parse_malloc.h"
using namespace oceanbase::sql;
using namespace oceanbase::common;

/*==================================================================
 *							Instruction Execution Strategy
 * ================================================================*/
int SpMsInstExecStrategy::execute_expr(SpExprInst *inst)
{
 int ret = OB_SUCCESS;
  TBSYS_LOG(TRACE, "sp expr inst exec()");
  common::ObRow input_row; //fake paramters
  const ObObj *val = NULL;
  if((ret=inst->var_val_.var_value_->calc(input_row, val))!=OB_SUCCESS)
  {
    TBSYS_LOG(WARN, "sp expr compute failed");
  }
  //update the varialbe here
  else if ( OB_SUCCESS != (ret = inst->proc_->write_variable(inst->var_val_.variable_name_, *val)) )
  {

  }
  return ret;
}

int SpMsInstExecStrategy::execute_rd_base(SpRdBaseInst *inst)
{
  int ret = OB_SUCCESS;
  ObPhyOperator *op_ = inst->op_; //op_ is in the UpsExecutor::inner_plan, that is different from the procedure->my_phy_plan_
  ObPhysicalPlan *phy_plan = inst->proc_->get_phy_plan();
  //table rpc scan is in the ups_executor's inner plan that is different from the current plan
  op_->get_phy_plan()->set_curr_frozen_version(phy_plan->get_curr_frozen_version());
  op_->get_phy_plan()->set_result_set(phy_plan->get_result_set());

  ret = op_->open();
  return ret;
}

int SpMsInstExecStrategy::execute_rw_delta(SpRwDeltaInst *inst)
{
  int ret = OB_SUCCESS;
  ObPhyOperator *op = inst->ups_exec_op_;
  if( OB_SUCCESS != (ret = op->open()) )
  {
    TBSYS_LOG(WARN, "execute rw_delta_inst fail");
  }
  return ret;
}

int SpMsInstExecStrategy::execute_rw_comp(SpRwCompInst *inst)
{
  int ret = OB_SUCCESS;
  const ObRow *row;
  ObPhyOperator* op_ = inst->op_;
  ObArray<ObString> &var_list = inst->var_list_;
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
    for(int64_t var_name_it = 0; var_name_it < var_list.count(); ++var_name_it)
    {
      const ObString &var_name = var_list.at(var_name_it);
      const ObObj *cell = NULL;
      if(OB_SUCCESS !=(ret=row->raw_get_cell(var_name_it, cell)))//取出一列
      {
        TBSYS_LOG(WARN, "raw_get_cell %ld failed",var_name_it);
      }
      else if(OB_SUCCESS !=(inst->proc_->write_variable(var_name, *cell)))
      {
        TBSYS_LOG(WARN, "write into variables fail");
      }
    }
  }
  return ret;

}

int SpMsInstExecStrategy::execute_rw_delta_into_var(SpRwDeltaIntoVarInst *inst)
{
  int ret = OB_SUCCESS;
  const ObRow *row;

  ObRowDesc fake_desc;
  fake_desc.reset();
  const ObArray<ObString> &var_list = inst->var_list_;
  ObPhyOperator *op = inst->ups_exec_op_;
  SpProcedure *proc = inst->proc_;
  //we expect the select list has the same length with the variable list
  //ups use a fake desc to deserialize the result from the ups
  for(int64_t i = 0; ret == OB_SUCCESS && i < var_list.count(); ++i)
  {
    if ((ret = fake_desc.add_column_desc(OB_INVALID_ID, OB_APP_MIN_COLUMN_ID + i)) != OB_SUCCESS)
    {
      TBSYS_LOG(WARN, "Generate row descriptor of RwDeltaIntoVar failed, err=%d", ret);
      break;
    }
  }
  if( (OB_SUCCESS == ret) && OB_SUCCESS != (ret = op->open()) )
  {
    TBSYS_LOG(WARN, "open rw_delta_into_inst fail");
  }
  else if( OB_SUCCESS != (ret = (((ObUpsExecutor *)op)->get_next_row_for_sp(row, fake_desc)))) //properly we need to check only one row is got
  {
    TBSYS_LOG(WARN, "get next_row fail, %d", ret);
  }
  else
  {
    for(int64_t var_name_it = 0; var_name_it < var_list.count(); ++var_name_it)
    {
      const ObString &var_name = var_list.at(var_name_it);
      const ObObj *cell = NULL;
      if(OB_SUCCESS !=(ret=row->raw_get_cell(var_name_it, cell)))//取出一列
      {
        TBSYS_LOG(WARN, "raw_get_cell %ld failed",var_name_it);
      }
      else if(OB_SUCCESS !=(proc->write_variable(var_name, *cell)))
      {
        TBSYS_LOG(WARN, "write into variables fail");
      }
    }
  }
  return ret;
}

int SpMsInstExecStrategy::init_physical_plan(ObPhysicalPlan &exec_plan, ObPhysicalPlan &out_plan)
{
  bool start_new_trans = false;
  ObSQLSessionInfo *session = out_plan.get_result_set()->get_session();

  exec_plan.set_result_set(out_plan.get_result_set()); //need when serialize

  start_new_trans = (!session->get_autocommit() && !session->get_trans_id().is_valid());
  exec_plan.set_start_trans(start_new_trans);

//  common::ObTransReq &start_trans_req = exec_plan.get_trans_req();
  return set_trans_params(session, exec_plan.get_trans_req());
}

int SpMsInstExecStrategy::set_trans_params(ObSQLSessionInfo *session, common::ObTransReq &req)
{
  int ret = OB_SUCCESS;
  // get isolation level etc. from session
  ObObj val;
  ObString isolation_str;
  int64_t tx_timeout_val = 0;
  int64_t tx_idle_timeout = 0;
  if (OB_SUCCESS != (ret = session->get_sys_variable_value(ObString::make_string("tx_isolation"), val)))
  {
    TBSYS_LOG(WARN, "failed to get tx_isolation value, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = val.get_varchar(isolation_str)))
  {
    TBSYS_LOG(WARN, "wrong obj type, err=%d", ret);
    ret = OB_ERR_UNEXPECTED;
  }
  else if (OB_SUCCESS != (ret = req.set_isolation_by_name(isolation_str)))
  {
    TBSYS_LOG(WARN, "failed to set isolation level, err=%d", ret);
    ret = OB_ERR_UNEXPECTED;
  }
  else if (OB_SUCCESS != (ret = session->get_sys_variable_value(ObString::make_string("ob_tx_timeout"), val)))
  {
    TBSYS_LOG(WARN, "failed to get tx_timeout value, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = val.get_int(tx_timeout_val)))
  {
    TBSYS_LOG(WARN, "wrong obj type, err=%d", ret);
    ret = OB_ERR_UNEXPECTED;
  }
  else if (OB_SUCCESS != (ret = session->get_sys_variable_value(ObString::make_string("ob_tx_idle_timeout"), val)))
  {
    TBSYS_LOG(WARN, "failed to get tx_idle_timeout value, err=%d", ret);
  }
  else if (OB_SUCCESS != (ret = val.get_int(tx_idle_timeout)))
  {
    TBSYS_LOG(WARN, "wrong obj type, err=%d", ret);
    ret = OB_ERR_UNEXPECTED;
  }
  else
  {
    req.timeout_ = tx_timeout_val;
    req.idle_time_ = tx_idle_timeout;
  }
  return ret;
}

int SpMsInstExecStrategy::execute_if_ctrl(SpIfCtrlInsts *inst)
{
  int ret = OB_SUCCESS;
  common::ObRow fake_row;
  const ObObj *flag = NULL;
  if(OB_SUCCESS != (ret = inst->get_if_expr().calc(fake_row, flag)) )
  {
    TBSYS_LOG(WARN, "if expr evalute failed");
  }
  else if( flag->is_true() )
  { //execute the then branch
    if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_then_block())) )
    {
      TBSYS_LOG(WARN, "execute then block fail");
    }
  }
  else
  { //execute the fail branch
    if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_else_block())) )
    {
      TBSYS_LOG(WARN, "execute else block fail");
    }
  }
  return ret;
}

int SpMsInstExecStrategy::execute_multi_inst(SpMultiInsts *mul_inst)
{
  int ret = OB_SUCCESS;
  int64_t pc = 0;
  for(; pc < mul_inst->inst_count() && OB_SUCCESS == ret; ++pc)
  {
    SpInst *inst = NULL;
    mul_inst->get_inst(pc, inst);
    if( inst != NULL )
    {
      SpInstType type = inst->get_type();
      switch(type)
      {
      case SP_E_INST:
        ret = execute_expr(static_cast<SpExprInst*>(inst));
        break;
      case SP_B_INST:
        ret = execute_rd_base(static_cast<SpRdBaseInst*>(inst));
        break;
      case SP_D_INST:
        ret = execute_rw_delta(static_cast<SpRwDeltaInst*>(inst));
        break;
      case SP_DE_INST:
        ret = execute_rw_delta_into_var(static_cast<SpRwDeltaIntoVarInst*>(inst));
        break;
      case SP_A_INST:
        ret = execute_rw_comp(static_cast<SpRwCompInst*>(inst));
        break;
      case SP_BLOCK_INST:
        ret = execute_block(static_cast<SpBlockInsts*>(inst));
        break;
      default:
        TBSYS_LOG(WARN, "Unsupport execute inst[%d] on mergeserver", type);
        break;
      }
    }
    else
    {
      ret = OB_ERROR;
      TBSYS_LOG(WARN, "does not fetch inst[%ld]", pc);
    }
  }
  return ret;
}


/**
 * @brief SpBlockInsts::exec
 * important protocal, a group of instructions would be sent to ups
 * @return
 */
//int SpBlockInsts::exec()
int SpMsInstExecStrategy::execute_block(SpBlockInsts *inst)
{
  int ret = OB_SUCCESS;

  /**
    * proc should be serializable and deserializable
    * local_result_ should contains variables calculated by ups
    */
  ObPhysicalPlan exec_plan;
  SpProcedure proc;
  ObUpsResult result;

  ObPhysicalPlan *out_plan = inst->proc_->get_phy_plan();
  if( NULL == out_plan )
  {
    ret = OB_ERROR;
    TBSYS_LOG(WARN, "procedure does not have physical plan");
  }
  else
  {
    /**
   *  set the execution context variables for the exec_plan
   * */
    init_physical_plan(exec_plan, *out_plan);

    /**
   * build the relationship between block_inst <----> proc <----> exec_plan
   * */
    proc.add_inst(inst);
    exec_plan.add_phy_query(&proc, NULL, true);

    //adjust the serialize methods for ObExprValues/ ObPostfixExpression
    out_plan->set_proc_exec(true);

    /******************************************************
    * the procedure rpc call protocal should be modified
    *****************************************************/
    int64_t remain_us = 0;
    if (OB_LIKELY(OB_SUCCESS == ret))
    {
      if (out_plan->is_timeout(&remain_us))
      {
        ret = OB_PROCESS_TIMEOUT;
        TBSYS_LOG(WARN, "ups execute timeout. remain_us[%ld]", remain_us);
      }
      else if (OB_UNLIKELY(NULL != out_plan && out_plan->is_terminate(ret)))
      {
        TBSYS_LOG(WARN, "execution was terminated ret is %d", ret);
      }
      else if (OB_SUCCESS != (ret = static_cast<ObProcedure *>(inst->proc_)->get_rpc_stub()->ups_plan_execute(remain_us, exec_plan, result)))
      {
        TBSYS_LOG(WARN, "failed to execute plan on updateserver, err=%d", ret);
        if (OB_TRANS_ROLLBACKED == ret)
        {
          TBSYS_LOG(USER_ERROR, "transaction is rolled back");
          // reset transaction id
          ObTransID invalid_trans;
          out_plan->get_result_set()->get_session()->set_trans_id(invalid_trans);
        }
      }
    }
    //adjust the serialize methods for ObExprValues / ObPostfixExpression
    out_plan->set_proc_exec(false);
    proc.clear_inst_list(); //avoid destruction of instruction
  }
  TBSYS_LOG(INFO, "End execution of SpBlockInst, ret=%d", ret);
  return ret;
}

/*=================================================
 *           ObProcedure Definition
===================================================*/
ObProcedure::ObProcedure()
{
//  child_num_ = 0;
}

ObProcedure::~ObProcedure()
{}

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

/**
 * @brief ObProcedure::optimize
 *  adjust the execution path of instructions
 *  here we first try to group the instructions
 *  scan the original instructions list, and save
 *  into the real execution list
 * @return
 */
int ObProcedure::optimize()
{
  if( proc_name_.compare("ups_proc_test") == 0 )
  {
    // 0 2 6 8 { 1 3 4 5 7 9 }
    exec_list_.reserve(5);
    exec_list_.push_back(inst_list_.at(0));
    exec_list_.push_back(inst_list_.at(2));
    exec_list_.push_back(inst_list_.at(6));
    exec_list_.push_back(inst_list_.at(8));
    exec_list_.push_back(inst_list_.at(10));
    exec_list_.push_back(inst_list_.at(12));

    SpBlockInsts *block_inst =  create_inst<SpBlockInsts>(NULL);
    block_inst->add_inst(inst_list_.at(1));
    block_inst->add_inst(inst_list_.at(3));
    block_inst->add_inst(inst_list_.at(4));
    block_inst->add_inst(inst_list_.at(5));
    block_inst->add_inst(inst_list_.at(7));
    block_inst->add_inst(inst_list_.at(9));
    block_inst->add_inst(inst_list_.at(11));
    block_inst->add_inst(inst_list_.at(13));
    exec_list_.push_back(block_inst);
  }
  else if( proc_name_.compare("if_test") == 0 )
  {
    SpInstList temp_exec_list;
    for(int64_t i = 0; i < inst_list_.count(); ++i)
    {
      if( inst_list_.at(i)->get_type() == SP_C_INST )
        static_cast<SpIfCtrlInsts*>(inst_list_.at(i))->optimize(temp_exec_list);
      else
        temp_exec_list.push_back(inst_list_.at(i));
    }

    for(int64_t i = 0; i < temp_exec_list.count(); ++i)
    {
      TBSYS_LOG(INFO, "inst[%ld]\n:%s", i, to_cstring(*temp_exec_list.at(i)));
    }

    exec_list_.push_back(temp_exec_list.at(0));
    exec_list_.push_back(temp_exec_list.at(1));
    exec_list_.push_back(temp_exec_list.at(2));
    exec_list_.push_back(temp_exec_list.at(3));

    SpBlockInsts *block_inst = create_inst<SpBlockInsts>(NULL);
    block_inst->add_inst(temp_exec_list.at(4));
    exec_list_.push_back(block_inst);
  }
  else if( proc_name_.compare("payment") == 0 )
  {
    exec_list_.push_back(inst_list_.at(0));
    exec_list_.push_back(inst_list_.at(2));
    exec_list_.push_back(inst_list_.at(4));
    exec_list_.push_back(inst_list_.at(6));
    exec_list_.push_back(inst_list_.at(8));

    static_cast<SpIfCtrlInsts*>(inst_list_.at(13))->optimize(exec_list_);
    exec_list_.remove(exec_list_.count() - 1);
//    inst_list_.remove(inst_list_.count() - 1);

    SpBlockInsts *block_inst = create_inst<SpBlockInsts>(NULL);
    block_inst->add_inst(inst_list_.at(1));
    block_inst->add_inst(inst_list_.at(3));
    block_inst->add_inst(inst_list_.at(5));
    block_inst->add_inst(inst_list_.at(7));
    block_inst->add_inst(inst_list_.at(9));
    block_inst->add_inst(inst_list_.at(10));
    block_inst->add_inst(inst_list_.at(11));
    block_inst->add_inst(inst_list_.at(12));
    block_inst->add_inst(inst_list_.at(13));

    exec_list_.push_back(block_inst);

    exec_list_.push_back(inst_list_.at(14));
    exec_list_.push_back(inst_list_.at(15));
    exec_list_.push_back(inst_list_.at(16));

    char buf[4096];
    int64_t pos = 0;
    for(int64_t i = 0; i < exec_list_.count(); ++i) {
      pos += exec_list_.at(i)->to_string(buf + pos, 4096 - pos);
    }
    buf[pos] = '\0';
    TBSYS_LOG(INFO, "Payment optimize:\n%s", buf);
  }
  //else do nothing
  else
  {
    exec_list_.reserve(inst_list_.count());
    for(int64_t i = 0; i < inst_list_.count(); ++i)
    {
      exec_list_.push_back(inst_list_.at(i));
    }

  }
//  TBSYS_LOG(INFO, "Procedure optimized\n: %s", to_cstring(*this));
  return OB_SUCCESS;
}

int ObProcedure::open()
{
  int ret = OB_SUCCESS;
  SpMsInstExecStrategy strategy;
  optimize();
  if( OB_SUCCESS != (ret = create_variables()))
  {}
  else
  {
    pc_ = 0;
    for(; pc_ < exec_list_.count() && OB_SUCCESS == ret; ++pc_)
    {
      SpInst *inst = exec_list_.at(pc_);
      SpInstType type = inst->get_type();
      switch(type)
      {
      case SP_E_INST:
        ret = strategy.execute_expr(static_cast<SpExprInst*>(inst));
        break;
      case SP_B_INST:
        ret = strategy.execute_rd_base(static_cast<SpRdBaseInst*>(inst));
        break;
      case SP_D_INST:
        ret = strategy.execute_rw_delta(static_cast<SpRwDeltaInst*>(inst));
        break;
      case SP_DE_INST:
        ret = strategy.execute_rw_delta_into_var(static_cast<SpRwDeltaIntoVarInst*>(inst));
        break;
      case SP_A_INST:
        ret = strategy.execute_rw_comp(static_cast<SpRwCompInst*>(inst));
        break;
      case SP_BLOCK_INST:
        ret = strategy.execute_block(static_cast<SpBlockInsts*>(inst));
        break;
      case SP_C_INST:
        ret = strategy.execute_if_ctrl(static_cast<SpIfCtrlInsts*>(inst));
        break;
    default:
      TBSYS_LOG(WARN, "Unsupport execute inst[%d] on mergeserver", type);
        break;
      }
      debug_status(inst);
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

int ObProcedure::read_variable(const ObString &var_name, const ObObj *&val) const
{
  ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();

  val = session->get_variable_value(var_name);

  return val == NULL ? OB_ENTRY_NOT_EXIST : OB_SUCCESS;
}


namespace oceanbase{
  namespace sql{
    REGISTER_PHY_OPERATOR(ObProcedure, PHY_PROCEDURE);
  }
}

int64_t ObProcedure::to_string(char* buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "Procedure %.*s\n", proc_name_.length(), proc_name_.ptr());
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    SpInst *inst = inst_list_.at(i);
    databuff_printf(buf, buf_len, pos, "inst %ld: ", i);
    pos += inst->to_string(buf + pos, buf_len -pos);
  }
  return pos;
}
