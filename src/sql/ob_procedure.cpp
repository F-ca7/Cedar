#include "ob_procedure.h"
#include "ob_result_set.h"
#include "ob_physical_plan.h"
#include "ob_ups_executor.h"
#include "common/ob_common_stat.h"
using namespace oceanbase::sql;
using namespace oceanbase::common;

/*==================================================================
 *							Instruction Execution Strategy
 * ================================================================*/
int SpMsInstExecStrategy::execute_inst(SpInst *inst)
{
  int ret = OB_SUCCESS;
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
  case SP_C_INST:
    ret = execute_if_ctrl(static_cast<SpIfCtrlInsts*>(inst));
    break;
  case SP_L_INST:
    ret = execute_loop(static_cast<SpLoopInst*>(inst));
    break;
  case SP_CW_INST:
    ret = execute_casewhen(static_cast<SpCaseInst*>(inst));
    break;
  case SP_W_INST:
    ret = execute_while(static_cast<SpWhileInst*>(inst));
    break;
  default:
    TBSYS_LOG(WARN, "Unsupport execute inst[%d] on mergeserver", type);
    ret = OB_NOT_SUPPORTED;
    break;
  }
  return ret;
}


int SpMsInstExecStrategy::execute_expr(SpExprInst *inst)
{
  int ret = OB_SUCCESS;
  TBSYS_LOG(TRACE, "sp expr inst exec()");
  common::ObRow input_row; //fake paramters
  const ObObj *val = NULL;
  if( OB_SUCCESS != (ret = inst->get_val().calc(input_row, val)) )
  {
    TBSYS_LOG(WARN, "sp expr compute failed");
  }
  else if( OB_SUCCESS != (ret = inst->get_ownner()->write_variable(inst->get_var(), *val)))
  {
    TBSYS_LOG(WARN, "write variables fail");
  }
  return ret;
}

int SpMsInstExecStrategy::execute_rd_base(SpRdBaseInst *inst)
{
  int ret = OB_SUCCESS;
  ObPhyOperator *op = inst->get_rd_op(); //op_ is in the UpsExecutor::inner_plan, that is different from the procedure->my_phy_plan_

  ObPhysicalPlan *phy_plan = inst->get_ownner()->get_phy_plan();
  //table rpc scan is in the ups_executor's inner plan that is different from the current plan
  op->get_phy_plan()->set_curr_frozen_version(phy_plan->get_curr_frozen_version());
  op->get_phy_plan()->set_result_set(phy_plan->get_result_set());

  if( OB_SUCCESS !=  (ret = op->open()) )
  {
    TBSYS_LOG(WARN, "rd_base fail, sp rdbase inst exec(proc_op: %p, phy_plan: %p, result_set: %p)", inst->get_ownner(), phy_plan, phy_plan->get_result_set());
  }
  return ret;
}

int SpMsInstExecStrategy::execute_rw_delta(SpRwDeltaInst *inst)
{
  int ret = OB_SUCCESS;
  ObPhyOperator *op = inst->get_ups_exec_op();
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
  ObPhyOperator* op_ = inst->get_rwcomp_op();
  const ObIArray<SpVar> &var_list = inst->get_var_list();
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
    for(int64_t var_it = 0; OB_SUCCESS == ret && var_it < var_list.count(); ++var_it)
    {
      const SpVar &var = var_list.at(var_it);
      const ObObj *cell = NULL;
      if(OB_SUCCESS !=(ret = row->raw_get_cell(var_it, cell)))
      {
        TBSYS_LOG(WARN, "raw_get_cell %ld failed",var_it);
      }
      else if(OB_SUCCESS !=(ret = inst->get_ownner()->write_variable(var, *cell)))
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
  TBSYS_LOG(TRACE, "sp rwintovar inst exec()");
  ObRowDesc fake_desc;
  fake_desc.reset();
  const ObIArray<SpVar> &var_list = inst->get_var_list();
  ObPhyOperator *op = inst->get_ups_exec_op();
  SpProcedure *proc = inst->get_ownner();

  /**
   * we expect the select list has the same length with the variable list
   * ups use a fake desc to deserialize the result from the ups
  */
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
    for(int64_t var_it = 0; var_it < var_list.count(); ++var_it)
    {
      const SpVar &var = var_list.at(var_it);
      const ObObj *cell = NULL;
      if(OB_SUCCESS !=(ret=row->raw_get_cell(var_it, cell)))
      {
        TBSYS_LOG(WARN, "raw_get_cell %ld failed",var_it);
      }
      else if(OB_SUCCESS !=(proc->write_variable(var, *cell)))
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
  start_new_trans = false; //a hack for payment test
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

int SpMsInstExecStrategy::execute_loop(SpLoopInst *inst)
{
  int ret = OB_SUCCESS;
  const ObObj *lowest_value, *highest_value;
  ObObj itr_var;
  common::ObRow fake_row;

  SpProcedure *proc = inst->get_ownner();

  if( OB_SUCCESS != (ret = inst->get_lowest_expr().calc(fake_row, lowest_value)) ||  lowest_value->get_type() != ObIntType )
  {
    TBSYS_LOG(WARN, "unsupported loop range type: %d", lowest_value->get_type());
    ret = OB_NOT_SUPPORTED;
  }
  else
  {
    int64_t itr = 0, itr_end = -1;
    if( OB_SUCCESS!= (ret = inst->get_highest_expr().calc(fake_row, highest_value)) )
    {
      TBSYS_LOG(WARN, "highest value calculate failed");
    }
    else if( OB_SUCCESS != lowest_value->get_int(itr) || OB_SUCCESS != highest_value->get_int(itr_end) )
    {
      TBSYS_LOG(WARN, "unsupported loop range type");
    }
    else
    {
      for(; itr < itr_end && OB_SUCCESS == ret; itr ++)
      {
        itr_var.set_int(itr);
        if( OB_SUCCESS != (ret = proc->write_variable(inst->get_loop_var(), itr_var )))
        {
          TBSYS_LOG(WARN, "update iterate variable fail");
        }
        else if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_body_block())) )
        {
          TBSYS_LOG(WARN, "execute loop body fail");
        }
        else if( OB_SUCCESS != (ret = close(inst)) ) //close body inst operation
        {
          TBSYS_LOG(WARN, "reset loop body inst operation fail");
        }
        else if( OB_SUCCESS != (ret = inst->get_highest_expr().calc(fake_row, highest_value)))
        {
          TBSYS_LOG(WARN, "calculate highest value fail");
        }
        else
        {
          highest_value->get_int(itr_end);
        }
      }
    }
  }
  return ret;
}

//add hjw 20151230:b
int SpMsInstExecStrategy::execute_while(SpWhileInst *inst)
{
    int ret = OB_SUCCESS;
    common::ObRow fake_row;
    const ObObj *flag =NULL;
    TBSYS_LOG(INFO, "execute while instruction");
    while(OB_SUCCESS == (ret = inst->get_while_expr().calc(fake_row, flag)) && flag->is_true())//execute do body
      {
         TBSYS_LOG(INFO,"while expr value: %s", to_cstring(*flag));
         inst->get_ownner()->debug_status(inst);
         if(OB_SUCCESS != (ret = execute_multi_inst(inst->get_body_block())))
         {
           TBSYS_LOG(WARN,"execute do body block failed");
           break;
         }
      }

    return ret;
}
//add hjw 20151230:e

int SpMsInstExecStrategy::execute_casewhen(SpCaseInst *inst)
{
  int ret = OB_SUCCESS;
  common::ObRow fake_row;
  const ObObj *flag = NULL;
  const ObObj *when_value = NULL;
  bool else_flag = true;
  TBSYS_LOG(INFO, "execute casewhen instruction");
  if(OB_SUCCESS != (ret = inst->get_case_expr().calc(fake_row, flag)) )
  {
    TBSYS_LOG(WARN, "fail to execute case expr");
  }
  else
  {
    TBSYS_LOG(INFO, "case expr value: %s", to_cstring(*flag));
    for( int64_t i=0; i < inst->get_when_count(); i++ )
    {
      SpWhenBlock *when_block = inst->get_when_block(i);
      if(OB_SUCCESS != (ret = when_block->get_when_expr().calc(fake_row, when_value)))
      {
        TBSYS_LOG(WARN, "fail to compute when expr at %ld", i);
      }
      else if( when_value->compare(*flag) == 0 )
      {
        TBSYS_LOG(TRACE, "get into when block %ld", i);
        if( OB_SUCCESS != (ret = execute_multi_inst(when_block)) )
        {
          TBSYS_LOG(WARN, "fail to execute when block[%ld]", i);
        }
        else_flag = false;
        break;
      }
    }
    if( else_flag )
    {
      if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_else_block())) )
      {
        TBSYS_LOG(WARN, "fail to execute else block");
      }
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
      ret = execute_inst(inst);
    }
    else
    {
      ret = OB_ERR_ILLEGAL_INDEX;
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
      int64_t begin_time_us = tbsys::CTimeUtil::getTime();
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
        int64_t elapsed_us = tbsys::CTimeUtil::getTime() - begin_time_us;
        OB_STAT_INC(MERGESERVER, SQL_PROC_UPS_EXECUTE_COUNT);
        OB_STAT_INC(MERGESERVER, SQL_PROC_UPS_EXECUTE_TIME, elapsed_us);
        TBSYS_LOG(WARN, "failed to execute plan on updateserver, err=%d", ret);
        if (OB_TRANS_ROLLBACKED == ret)
        {
          TBSYS_LOG(USER_ERROR, "transaction is rolled back");
          // reset transaction id
          ObTransID invalid_trans;
          out_plan->get_result_set()->get_session()->set_trans_id(invalid_trans);
        }
      }
      else
      {
        int64_t elapsed_us = tbsys::CTimeUtil::getTime() - begin_time_us;
        OB_STAT_INC(MERGESERVER, SQL_PROC_UPS_EXECUTE_COUNT);
        OB_STAT_INC(MERGESERVER, SQL_PROC_UPS_EXECUTE_TIME, elapsed_us);
      }
    }
    //adjust the serialize methods for ObExprValues / ObPostfixExpression
    out_plan->set_proc_exec(false);
    proc.clear_inst_list(); //avoid destruction of instruction
  }
//  TBSYS_LOG(INFO, "End execution of SpBlockInst, ret=%d", ret);
  return ret;
}

int SpMsInstExecStrategy::close(SpInst *inst)
{
  int ret = OB_SUCCESS;
  SpMultiInsts *mul_inst = NULL;
  switch(inst->get_type())
  {
  case SP_E_INST:
    break;
  case SP_B_INST:
    ret = static_cast<SpRdBaseInst*>(inst)->get_rd_op()->close();
    break;
  case SP_D_INST:
    ret = static_cast<SpRwDeltaInst*>(inst)->get_ups_exec_op()->close();
    break;
  case SP_DE_INST:
    ret = static_cast<SpRwDeltaIntoVarInst*>(inst)->get_ups_exec_op()->close();
    break;
  case SP_A_INST:
    ret = static_cast<SpRwCompInst*>(inst)->get_rwcomp_op()->close();
    break;
  case SP_BLOCK_INST:
    break;
  case SP_C_INST:
    mul_inst = static_cast<SpIfCtrlInsts*>(inst)->get_then_block();
    for(int64_t i = 0; OB_SUCCESS == ret && i < mul_inst->inst_count(); ++i) {
      SpInst *inner_inst = NULL;
      mul_inst->get_inst(i, inner_inst);
      if( NULL != inner_inst) ret = close(inner_inst);
    }
    mul_inst = static_cast<SpIfCtrlInsts*>(inst)->get_else_block();
    for(int64_t i = 0; OB_SUCCESS == ret && i < mul_inst->inst_count(); ++i) {
      SpInst *inner_inst = NULL;
      mul_inst->get_inst(i, inner_inst);
      if( NULL != inner_inst) ret = close(inner_inst);
    }
    break;
  case SP_L_INST:
    mul_inst = static_cast<SpLoopInst*>(inst)->get_body_block();
    for(int64_t i = 0; OB_SUCCESS == ret && i < mul_inst->inst_count(); ++i) {
      SpInst *inner_inst = NULL;
      mul_inst->get_inst(i, inner_inst);
      if( NULL != inner_inst) ret = close(inner_inst);
    }
    break;
  case SP_CW_INST:
    {
      SpCaseInst *case_inst = static_cast<SpCaseInst*>(inst);
      for(int64_t i = 0; OB_SUCCESS == ret && i < case_inst->get_when_count(); ++i)
      {
        mul_inst = case_inst->get_when_block(i);
        for(int64_t i = 0; OB_SUCCESS == ret && i < mul_inst->inst_count(); ++i) {
          SpInst *inner_inst = NULL;
          mul_inst->get_inst(i, inner_inst);
          if( NULL != inner_inst) ret = close(inner_inst);
        }
      }
      mul_inst = case_inst->get_else_block();
      for(int64_t i = 0; OB_SUCCESS == ret && i < mul_inst->inst_count(); ++i) {
        SpInst *inner_inst = NULL;
        mul_inst->get_inst(i, inner_inst);
        if( NULL != inner_inst) ret = close(inner_inst);
      }

    }
    break;
//add hjw 20151230
  case SP_W_INST:
    mul_inst =static_cast<SpWhileInst*>(inst)->get_body_block();
    for(int64_t i = 0; OB_SUCCESS == ret && i < mul_inst->inst_count(); ++i)
    {
        SpInst *inner_inst =NULL;
        mul_inst->get_inst(i, inner_inst);
        if(NULL != inner_inst) ret = close(inner_inst);
    }
    break;
  case SP_UNKOWN:
  default:
    TBSYS_LOG(WARN, "close unsupport inst[%d] on mergeserver", inst->get_type());
    ret = OB_NOT_SUPPORTED;
    break;
  }
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

int ObProcedure::set_proc_name(const ObString &proc_name)
{
  proc_name_=proc_name;
  return OB_SUCCESS;
}

int ObProcedure::add_param(const ObParamDef &proc_param)
{
  return params_.push_back(proc_param);
}

int ObProcedure::add_var_def(const ObVariableDef &def)
{
  return defs_.push_back(def);
}

const ObParamDef& ObProcedure::get_param(int64_t index) const
{
  return params_.at(index);
}

int64_t ObProcedure::get_param_num() const
{
  return params_.count();
}

void ObProcedure::reset()
{
  params_.clear();
  defs_.clear();
  exec_list_.clear();
  SpProcedure::reset();
}

void ObProcedure::reuse()
{
}

int ObProcedure::close()
{
  int ret = OB_SUCCESS;
  SpMsInstExecStrategy strategy;
  for(int64_t i = 0; i < exec_list_.count() && OB_SUCCESS == ret; ++i)
  {
    if( OB_SUCCESS != (ret = strategy.close(exec_list_.at(i))) )
    {
      TBSYS_LOG(WARN, "close inst fail[%ld], ret=%d", i, ret);
    }
  }
//  exec_list_.clear();
  my_phy_plan_->set_proc_exec(false);
  pc_ = 0;
  return ret;
}

int ObProcedure::get_row_desc(const common::ObRowDesc *&row_desc) const
{
  UNUSED(row_desc);
  return OB_SUCCESS;
}

int ObProcedure::get_next_row(const common::ObRow *&row)
{
  int ret = OB_SUCCESS;
  UNUSED(row);
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

      if( var.is_array_ ) //save the array vairable in th procedure
      {
        ObArray<ObObj> tmp_array;
        session->replace_vararray(var.variable_name_, tmp_array);
//        ObProcArray temp;
//        arrays_.push_back(temp);
//        ObProcArray &arr_var = arrays_.at(arrays_.count() - 1);
//        arr_var.array_name_ = var.variable_name_;
//        arr_var.val_type_ = var.variable_type_;
      }
      else if(var.is_default_)
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

int ObProcedure::clear_variables()
{
  int ret = OB_SUCCESS;
  if( defs_.count() > 0 )
  {
    ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();
    for (int64_t i = 0; i < defs_.count() && OB_SUCCESS == ret; ++i)
    {
      ObVariableDef &var= defs_.at(i);

      if( !var.is_array_ )
      {
        if( OB_SUCCESS != (ret=session->remove_variable(var.variable_name_)) )
        {
          TBSYS_LOG(WARN, "remove variable from sql_session[%p] fail", session);
        }
        else
        {
          TBSYS_LOG(TRACE, "remove %.*s from sql_session[%p]",
                    var.variable_name_.length(),var.variable_name_.ptr(), session);
        }
      }
      else
      {
        if( OB_SUCCESS != (ret = session->remove_vararray(var.variable_name_)))
        {
          TBSYS_LOG(WARN, "remove vararray from sql_session[%p] fail", session);
        }
        else
        {
          TBSYS_LOG(TRACE, "remove %.*s[] from sql_session[%p]",
                    var.variable_name_.length(),var.variable_name_.ptr(), session);
        }
      }
    }

/*    for(int64_t i = 0; i < arrays_.count(); ++i)
    {
      ObProcArray & arr_var = arrays_.at(i);
      arr_var.array_value_.clear();;
    }
    arrays_.clear();*/
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
  bool special_proc = true;
  if( proc_name_.compare("ups_proc_test") == 0 )
  {
    // 0 2 6 8 { 1 3 4 5 7 9 }
    exec_list_.reserve(5);
    exec_list_.push_back(inst_list_.at(0));
    exec_list_.push_back(inst_list_.at(2));

    exec_list_.push_back(inst_list_.at(1));
    exec_list_.push_back(inst_list_.at(3));

    exec_list_.push_back(inst_list_.at(4));
    exec_list_.push_back(inst_list_.at(5));

    exec_list_.push_back(inst_list_.at(6));
    exec_list_.push_back(inst_list_.at(8));
    exec_list_.push_back(inst_list_.at(10));
    exec_list_.push_back(inst_list_.at(12));

    SpBlockInsts *block_inst =  create_inst<SpBlockInsts>(NULL);
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
//      else
      temp_exec_list.push_back(inst_list_.at(i));
    }

    for(int64_t i = 0; i < temp_exec_list.count(); ++i)
    {
      TBSYS_LOG(INFO, "inst[%ld]: %s", i, to_cstring(*temp_exec_list.at(i)));
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
//    exec_list_.remove(exec_list_.count() - 1);
//    inst_list_.remove(inst_list_.count() - 1);

    SpBlockInsts *block_inst = create_inst<SpBlockInsts>(NULL);
    block_inst->add_inst(inst_list_.at(9));
    block_inst->add_inst(inst_list_.at(10));
    block_inst->add_inst(inst_list_.at(11));
    block_inst->add_inst(inst_list_.at(12));
    block_inst->add_inst(inst_list_.at(13));
    block_inst->add_inst(inst_list_.at(5));
    block_inst->add_inst(inst_list_.at(7));
    block_inst->add_inst(inst_list_.at(1));
    block_inst->add_inst(inst_list_.at(3));
    block_inst->add_inst(inst_list_.at(14));
    block_inst->add_inst(inst_list_.at(15));
    exec_list_.push_back(block_inst);

  }
  else if( proc_name_.compare("for_test_1") == 0 )
  {
    static_cast<SpLoopInst*>(inst_list_.at(0))->optimize(exec_list_);
    SpBlockInsts *block_inst = create_inst<SpBlockInsts>(NULL);
    block_inst->add_inst(inst_list_.at(0));
    exec_list_.push_back(block_inst);
  }
  else if( proc_name_.compare("for_test_2") == 0 )
  {
    static_cast<SpLoopInst*>(inst_list_.at(0))->optimize(exec_list_);
    SpBlockInsts *block_inst = create_inst<SpBlockInsts>(NULL);
    block_inst->add_inst(inst_list_.at(0));
    exec_list_.push_back(block_inst);
  }
  else if( proc_name_.compare("for_test_3") == 0 )
  {
    static_cast<SpLoopInst*>(inst_list_.at(1))->optimize(exec_list_);
    exec_list_.push_back(inst_list_.at(0));
    SpBlockInsts *block_inst = create_inst<SpBlockInsts>(NULL);
    block_inst->add_inst(inst_list_.at(1));
    exec_list_.push_back(block_inst);
  }
  else if( proc_name_.compare("neworder") == 0 )
  {
    exec_list_.push_back(inst_list_.at(0));
    exec_list_.push_back(inst_list_.at(1));
    exec_list_.push_back(inst_list_.at(2));
    exec_list_.push_back(inst_list_.at(4));

    SpBlockInsts* block_inst = create_inst<SpBlockInsts>(NULL);
    block_inst->add_inst(inst_list_.at(3));
    block_inst->add_inst(inst_list_.at(5));
    block_inst->add_inst(inst_list_.at(6));
    block_inst->add_inst(inst_list_.at(7));
    block_inst->add_inst(inst_list_.at(8));

//    SpInstList loop_base_list;
    SpLoopInst *item_loop = static_cast<SpLoopInst*>(inst_list_.at(9));
    item_loop->optimize(exec_list_);
    item_loop->add_itr_local_inst(0LL);
    item_loop->add_itr_local_inst(1LL);
    item_loop->add_itr_local_inst(2LL);

    block_inst->add_inst(item_loop);

    exec_list_.push_back(block_inst);
    exec_list_.push_back(inst_list_.at(10));
  }
  else if( proc_name_.compare("neworder_2") == 0 )
  {
    exec_list_.push_back(inst_list_.at(0));
    exec_list_.push_back(inst_list_.at(1));

    SpLoopInst *item_loop = static_cast<SpLoopInst*>(inst_list_.at(2));
    item_loop->optimize(exec_list_);
    item_loop->add_itr_local_inst(0LL);
    item_loop->add_itr_local_inst(1LL);
    item_loop->add_itr_local_inst(2LL);

    SpBlockInsts* block_inst = create_inst<SpBlockInsts>(NULL);
    block_inst->add_inst(item_loop);

    exec_list_.push_back(inst_list_.at(3));
    exec_list_.push_back(inst_list_.at(5));

    block_inst->add_inst(inst_list_.at(4));
    block_inst->add_inst(inst_list_.at(6));
    block_inst->add_inst(inst_list_.at(7));
    block_inst->add_inst(inst_list_.at(8));
    block_inst->add_inst(inst_list_.at(9));
    block_inst->add_inst(inst_list_.at(10));

    exec_list_.push_back(block_inst);
    exec_list_.push_back(inst_list_.at(11));
  }
  //else do nothing
  else
  {
    special_proc = false;
    exec_list_.reserve(inst_list_.count());
    for(int64_t i = 0; i < inst_list_.count(); ++i)
    {
      exec_list_.push_back(inst_list_.at(i));
    }
  }
  if (special_proc)
  {
    char buf[4096];
    int64_t pos = 0;
    for(int64_t i = 0; i < exec_list_.count(); ++i)
    {
      pos += exec_list_.at(i)->to_string(buf + pos, 4096 - pos);
    }
    buf[pos] = '\0';
    TBSYS_LOG(INFO, "%.*s optimize:\n%s", proc_name_.length(), proc_name_.ptr(), buf);
  }
  return OB_SUCCESS;
}

int ObProcedure::open()
{
  int ret = OB_SUCCESS;
  SpMsInstExecStrategy strategy;

  set_exec_strategy(&strategy);
  if( OB_SUCCESS != (ret = create_variables()))
  {
    TBSYS_LOG(WARN, "create varialbes fail");
  }
  else
  {
    pc_ = 0;
    for(; pc_ < exec_list_.count() && OB_SUCCESS == ret; ++pc_)
    {
      ret = strategy.execute_inst(exec_list_.at(pc_));
      if( OB_UNLIKELY(TBSYS_LOGGER._level >= TBSYS_LOG_LEVEL_TRACE))
        debug_status(exec_list_.at(pc_));
      if( OB_SUCCESS != ret )
      {
        TBSYS_LOG(WARN, "execution procedure fail at inst[%ld]:\n%s", pc_, to_cstring(*this));
      }
    }
  }
  set_exec_strategy(NULL);
  if( OB_SUCCESS != clear_variables() )
  {
    TBSYS_LOG(WARN, "clear varialbes fail");
  }
  return ret;
}

int ObProcedure::write_variable(const ObString &var_name, const ObObj &val)
{
  ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();

  return session->replace_variable(var_name, val);
}

int ObProcedure::write_variable(const ObString &array_name, int64_t idx_value, const ObObj &val)
{
  int ret = OB_SUCCESS;
//  bool find = false;

  if( OB_SUCCESS != (ret = my_phy_plan_->get_result_set()->get_session()->replace_vararray(array_name, idx_value, val)))
  {
    TBSYS_LOG(WARN, "update %.*s[%ld] = %s in sqlsession[%p] fail",
              array_name.length(), array_name.ptr(), idx_value,
              to_cstring(val), my_phy_plan_->get_result_set()->get_session());
  }
//  for(int64_t i = 0; i < arrays_.count(); ++i)
//  {
//    ObProcArray &arr = arrays_.at(i);
//    if( arr.array_name_.compare(array_name) == 0 )
//    {
//      find = true;
//      if( idx_value < 0 )
//      {
//        ret = OB_ERR_ILLEGAL_INDEX;
//      }
//      else if( val.get_type() != arr.val_type_ )
//      {
//        TBSYS_LOG(USER_ERROR, "write the wrong type into array, %.*s", arr.array_name_.length(), arr.array_name_.ptr());
//        ret = OB_ERR_ILLEGAL_TYPE;
//      }
//      else if( idx_value >= arr.array_value_.count() )
//      {
//        while( OB_SUCCESS == ret && idx_value >= arr.array_value_.count() )
//        {
//          ObObj tmp_obj;
//          tmp_obj.set_null();
//          ret = arr.array_value_.push_back(tmp_obj);
//        }
//      }
//      if( OB_SUCCESS == ret )
//      {
//        arr.array_value_.at(idx_value) = val;
//      }
//      break;
//    }
//  }
//  if ( !find ) ret = OB_ERR_VARIABLE_UNKNOWN;
  return ret;
}

int ObProcedure::write_variable(const SpVar &var, const ObObj &val)
{
  int ret = OB_SUCCESS;
//  common::ObRow input_row; //fake row
  if( var.is_array() ) //process array variable
  {
//    const ObObj *idx_obj = NULL;
//    int64_t idx = 0;
//    if( OB_SUCCESS != (ret = var.idx_value_->calc(input_row, idx_obj)) )
//    {
//      TBSYS_LOG(WARN, "idx expr calc failed, expr: %s", to_cstring(*(var.idx_value_)));
//    }
//    else if( idx_obj->get_type() != ObIntType )
//    {
//      TBSYS_LOG(WARN, "idx value type is not int, value= %s", to_cstring(*idx_obj));
//      ret = OB_ERR_ILLEGAL_INDEX;
//    }
    int64_t idx = 0;
    if(OB_SUCCESS != (ret = read_index_value(var.idx_value_, idx)) )
    {
      TBSYS_LOG(WARN, "read index value failed");
    }
    else if (OB_SUCCESS != (ret = write_variable(var.var_name_, idx, val)))
    {
      TBSYS_LOG(WARN, "write %.*s[%ld] = %s failed", var.var_name_.length(), var.var_name_.ptr(), idx, to_cstring(val));
//      idx_obj->get_int(idx);
//      if(  )
//      {}
    }
  } //process ordinary variable
  else if( OB_SUCCESS != (ret = write_variable(var.var_name_, val)) )
  {}
  return ret;
}

int ObProcedure::read_variable(const ObString &var_name, const ObObj *&val) const
{
  ObSQLSessionInfo *session = my_phy_plan_->get_result_set()->get_session();

  val = session->get_variable_value(var_name);

  return val == NULL ? OB_ENTRY_NOT_EXIST : OB_SUCCESS;
}

int ObProcedure::read_variable(const ObString &array_name, int64_t idx_value, const ObObj *&val) const
{
  int ret = OB_SUCCESS;
//  bool find = false;
//  for(int64_t i = 0; i < arrays_.count(); ++i)
//  {
//    const ObProcArray &arr = arrays_.at(i);
//    if( arr.array_name_.compare(array_name) == 0 )
//    {
//      if( idx_value >= 0 && idx_value < arr.array_value_.count() )
//      {
//        val = & (arr.array_value_.at(idx_value));
//      }
//      else
//      {
//        TBSYS_LOG(WARN, "array index is invalid, %ld", idx_value);
//        ret = OB_ERR_ILLEGAL_INDEX;
//      }
//      find = true;
//      break;
//    }
//  }

  if( OB_SUCCESS != (ret = my_phy_plan_->get_result_set()->get_session()->get_variable_value(array_name, idx_value, val)) )
  {
    TBSYS_LOG(WARN, "read %.*s[%ld] from sql_session_info[%p] fail",
              array_name.length(), array_name.ptr(), idx_value, my_phy_plan_->get_result_set()->get_session());
  }

//  if ( !find ) ret = OB_ERR_VARIABLE_UNKNOWN;
  return ret;
}

int ObProcedure::read_variable(const SpVar &var, const ObObj *&val) const
{
  int ret = OB_SUCCESS;

  if( var.is_array() )
  {
//    const ObObj *idx_obj = NULL;
//    common::ObRow input_row;
    int64_t idx = 0;
//    if( OB_SUCCESS != (ret = var.idx_value_->calc(input_row, idx_obj)) )
//    {
//      TBSYS_LOG(WARN, "idx expr calc failed");
//    }
//    else if( idx_obj->get_type() != ObIntType )
//    {
//      TBSYS_LOG(WARN, "idx value type is not int, value= %s", to_cstring(*idx_obj));
//      ret = OB_ERR_ILLEGAL_INDEX;
//    }
    if( OB_SUCCESS != (ret = read_index_value(var.idx_value_, idx)))
    {
      TBSYS_LOG(WARN, "read index value failed");
    }
    else if( OB_SUCCESS != (ret = read_variable(var.var_name_, idx, val)))
    {
      TBSYS_LOG(WARN, "read %.*s[%ld] failed", var.var_name_.length(), var.var_name_.ptr(), idx);
//      idx_obj->get_int(idx);
//      if( OB_SUCCESS != (ret = read_variable(var.var_name_, idx, val)) )
//      {}
    }
  }
  else
  {
    ret = read_variable(var.var_name_, val);
  }

  return ret;
}

int ObProcedure::read_array_size(const ObString &array_name, int64_t &size) const
{
  int ret = OB_SUCCESS;

  if( OB_SUCCESS != (ret = my_phy_plan_->get_result_set()->
                     get_session()->get_variable_array_size(array_name, size)))
  {
    TBSYS_LOG(WARN, "procedure could not read array %.*s size", array_name.length(), array_name.ptr());
  }
  return ret;
}

namespace oceanbase{
  namespace sql{
    REGISTER_PHY_OPERATOR(ObProcedure, PHY_PROCEDURE);
  }
}

int ObProcedure::set_inst_op()
{
  int ret = OB_SUCCESS;
  for(int64_t i = 0; i < exec_list_.count(); ++i)
  {
    if( OB_SUCCESS != (ret = set_inst_op(exec_list_.at(i))))
    {
      TBSYS_LOG(WARN, "set inst op fail at idx[%ld]", i);
      break;
    }
  }
  return ret;
}

/**
 * If the procedure is constructed by assign methods,
 * each instrcution only have the query_id, the op_ filed would be null
 * we need to set the op_ according to the query_id
 * @brief ObProcedure::set_inst_op
 */
int ObProcedure::set_inst_op(SpInst *inst)
{
  int ret = OB_SUCCESS;
  switch(inst->get_type())
  {
  case SP_B_INST:
    {
      SpRdBaseInst *rd_inst = static_cast<SpRdBaseInst*>(inst);
      int32_t idx = rd_inst->get_query_id();
      OB_ASSERT(my_phy_plan_->get_phy_query(idx)->get_type() == PHY_UPS_EXECUTOR);
      ObUpsExecutor *ups_exec = (ObUpsExecutor *)my_phy_plan_->get_phy_query(idx);

      ObPhysicalPlan* inner_plan = ups_exec->get_inner_plan();
      OB_ASSERT(inner_plan->get_query_size() == 3);
      for(int32_t i = 0; i < inner_plan->get_query_size(); ++i)
      {
        ObPhyOperator* aux_query = inner_plan->get_phy_query(i);
        const ObPhyOperatorType type = aux_query->get_type();
        if( PHY_VALUES == type )
        {
          rd_inst->set_rdbase_op(aux_query, idx);
          break;
        }
      }
      break;
    }
  case SP_A_INST:
    {
      SpRwCompInst *rw_comp_inst = static_cast<SpRwCompInst*>(inst);
      int32_t idx = rw_comp_inst->get_query_id();
      rw_comp_inst->set_rwcomp_op(my_phy_plan_->get_phy_query(idx), idx);
      break;
    }
  case SP_D_INST:
  case SP_DE_INST:
    {
      SpRwDeltaInst *rw_delta_inst = static_cast<SpRwDeltaInst*>(inst);
      int32_t idx = rw_delta_inst->get_query_id();

      OB_ASSERT(my_phy_plan_->get_phy_query(idx)->get_type() == PHY_UPS_EXECUTOR);
      ObUpsExecutor *ups_exec = (ObUpsExecutor *)my_phy_plan_->get_phy_query(idx);

      rw_delta_inst->set_rwdelta_op(ups_exec->get_inner_plan()->get_main_query());
      rw_delta_inst->set_ups_exec_op(ups_exec, idx);
      break;
    }
   case SP_C_INST:
    {
      SpIfCtrlInsts *if_ctrl_inst = static_cast<SpIfCtrlInsts*>(inst);
      SpMultiInsts *mul_inst = if_ctrl_inst->get_then_block();
      for(int64_t i = 0; i < mul_inst->inst_count(); ++i)
      {
        set_inst_op(mul_inst->get_inst(i));
      }
      mul_inst = if_ctrl_inst->get_else_block();
      for(int64_t i = 0; i < mul_inst->inst_count(); ++i)
      {
        set_inst_op(mul_inst->get_inst(i));
      }
      break;
    }

  case SP_W_INST:
  {
      SpWhileInst *while_inst =static_cast<SpWhileInst*>(inst);
      SpMultiInsts *mul_inst = while_inst->get_body_block();
      for(int64_t i = 0; i < mul_inst->inst_count(); ++i)
      {
          set_inst_op(mul_inst->get_inst(i));
      }
      break;
  }
  case SP_BLOCK_INST:
    {
      SpBlockInsts *block_inst = static_cast<SpBlockInsts*>(inst);
      ObIArray<SpInst *> &inst_list = block_inst->get_inst_list();
      for(int64_t i = 0; i < inst_list.count(); ++i)
      {
         set_inst_op(inst_list.at(i));
      }
      break;
    }
  case SP_L_INST:
    {
      SpMultiInsts *loop_body = static_cast<SpLoopInst*>(inst)->get_body_block();
      for(int64_t i = 0; i < loop_body->inst_count(); ++i)
      {
        set_inst_op(loop_body->get_inst(i));
      }
      break;
    }
  case SP_CW_INST:
  {
    SpCaseInst *case_inst = static_cast<SpCaseInst *>(inst);
    for(int64_t i = 0; i < case_inst->get_when_count(); ++i)
    {
      SpMultiInsts *when_block = case_inst->get_when_block(i);
      for(int64_t i = 0 ;i < when_block->inst_count(); ++i)
      {
        set_inst_op(when_block->get_inst(i));
      }
    }
    SpMultiInsts *else_block = case_inst->get_else_block();
    for(int64_t i = 0; i < else_block->inst_count(); ++i)
    {
      set_inst_op(else_block->get_inst(i));
    }
    break;
  }
  default:
    break;
  }
  return ret;
}


/**
 * @brief ObProcedure::assign
 *  reconstruct according to the execution plan
 * @param other
 * @return
 */
int ObProcedure::assign(const ObPhyOperator* other)
{
  int ret = OB_SUCCESS;
  const ObProcedure *old_proc = static_cast<const ObProcedure *>(other);

  reset();
  proc_name_ = old_proc->proc_name_;

  for(int64_t i = 0; i < old_proc->params_.count(); ++i)
  {
    const ObParamDef & param = old_proc->params_.at(i);
    params_.push_back(param); //should alloc memory for name ?
  }
  for(int64_t i = 0; i < old_proc->defs_.count(); ++i)
  {
    const ObVariableDef & def = old_proc->defs_.at(i);
    defs_.push_back(def);
  }

  for(int64_t i = 0; (OB_SUCCESS == ret) && i < old_proc->exec_list_.count(); ++i)
  {
    SpInst *inst = old_proc->exec_list_.at(i);
    SpInst *new_inst = NULL;

    new_inst = create_inst(inst->get_type(), NULL);

    if( new_inst != NULL ) 
		{
			ret = new_inst->assign(inst);
			exec_list_.push_back(new_inst);
		}
  }
  return ret;
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
