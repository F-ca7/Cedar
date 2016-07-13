#include "ob_ups_procedure.h"
#include "common/ob_common_stat.h"
#include "common/ob_row_fuse.h"
#include "ob_table_mgr.h"
#include "ob_ups_table_mgr.h"
#include "ob_update_server_main.h"
using namespace oceanbase::updateserver;
using namespace oceanbase::sql;

SpUpsInstExecStrategy::SpUpsInstExecStrategy()
{
  inst_handler[SP_E_INST] = pexecute_expr;
  inst_handler[SP_C_INST] = pexecute_if_ctrl;
  inst_handler[SP_L_INST] = pexecute_loop;
  inst_handler[SP_B_INST] = NULL;
  inst_handler[SP_D_INST] = pexecute_rw_delta;
  inst_handler[SP_DE_INST] = pexecute_rw_delta_into_var;
  inst_handler[SP_A_INST] = NULL;
  inst_handler[SP_GROUP_INST] = pexecute_block;
  inst_handler[SP_CW_INST] = pexecute_casewhen;
}

int SpUpsInstExecStrategy::pexecute_expr(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_expr(static_cast<SpExprInst*>(inst));
}

int SpUpsInstExecStrategy::pexecute_rw_delta(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_rw_delta(static_cast<SpRwDeltaInst*>(inst));
}

int SpUpsInstExecStrategy::pexecute_rw_delta_into_var(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_rw_delta_into_var(static_cast<SpRwDeltaIntoVarInst*>(inst));
}

int SpUpsInstExecStrategy::pexecute_if_ctrl(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_if_ctrl(static_cast<SpIfCtrlInsts*>(inst));
}

int SpUpsInstExecStrategy::pexecute_loop(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_loop(static_cast<SpLoopInst*>(inst));
}

int SpUpsInstExecStrategy::pexecute_casewhen(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_casewhen(static_cast<SpCaseInst*>(inst));
}

int SpUpsInstExecStrategy::pexecute_block(SpUpsInstExecStrategy *host, SpInst *inst)
{
  return host->execute_block(static_cast<SpGroupInsts*>(inst));
}

int64_t SpUpsInstExecStrategy::hkey(int64_t sdata_id) const
{
  return SpInstExecStrategy::sdata_mgr_hash(sdata_id, loop_counter_);
}

int SpUpsInstExecStrategy::execute_expr(SpExprInst *inst)
{
  int ret = OB_SUCCESS;
  int64_t start_ts = tbsys::CTimeUtil::getTime();
//  TBSYS_LOG(TRACE, "expr plan: \n%s", to_cstring(inst->get_val()));
  common::ObRow &input_row = curr_row_;
  const ObObj *val = NULL;
  input_row.clear();
  if((ret= inst->get_val().calc(input_row, val))!=OB_SUCCESS)
  {
//    TBSYS_LOG(WARN, "sp expr compute failed");
  }
  //update the varialbe here
  else if ( OB_SUCCESS != (ret = inst->get_ownner()->write_variable(inst->get_var(), *val)) )
  {}
  OB_STAT_INC(UPDATESERVER, UPS_PROC_E, tbsys::CTimeUtil::getTime() - start_ts);
  return ret;
}

int SpUpsInstExecStrategy::execute_rw_delta(SpRwDeltaInst *inst)
{
  int ret = OB_SUCCESS;
  int err = OB_SUCCESS;
  //it should be a ObUpsModify
//  TBSYS_LOG(TRACE, "rw delta inst plan: \n%s", to_cstring(*(inst->get_rwdelta_op())));
  int64_t start_ts = tbsys::CTimeUtil::getTime();
  if( OB_SUCCESS != (ret = inst->get_rwdelta_op()->open()) )
  {
//    TBSYS_LOG(WARN, "execute rw_delta_inst on ups");
  }

  if ( OB_SUCCESS != (err = inst->get_rwdelta_op()->close() ))
  {
    if( OB_SUCCESS == ret )
    {
      ret = err;
    }
  }

  OB_STAT_INC(UPDATESERVER, UPS_PROC_D, tbsys::CTimeUtil::getTime() - start_ts);
  return ret;
}

int SpUpsInstExecStrategy::execute_rw_delta_into_var(SpRwDeltaIntoVarInst *inst)
{
  int ret = OB_SUCCESS, err = OB_SUCCESS;
  int64_t start_ts = tbsys::CTimeUtil::getTime();
  const common::ObRow *row;
  ObPhyOperator *op = inst->get_rwdelta_op();
  const ObIArray<SpVar> &var_list_ = inst->get_var_list();
  SpProcedure *proc = inst->get_ownner();
  //  TBSYS_LOG(TRACE, "rw_delta_into_var inst plan: \n%s", to_cstring(*op_));
  if(NULL != op)
  {
    if( OB_SUCCESS != (ret = op->open()) )
    {
      //      TBSYS_LOG(WARN, "failed to open read_delta_into_var operator");
    }
    else if( OB_SUCCESS != (ret = op->get_next_row(row)) )
    {
      //      TBSYS_LOG(WARN, "failed to get next row");
    }
    //    else
    //    {
    //      TBSYS_LOG(INFO, "read row: [%s]", to_cstring(*row));
    //    }

    OB_STAT_INC(UPDATESERVER, UPS_PROC_DW, tbsys::CTimeUtil::getTime() - start_ts);
    if( ret == OB_SUCCESS )
    {
      for(int64_t i = 0; i < var_list_.count() && OB_SUCCESS == ret; ++i)
      {
        const SpVar &var = var_list_.at(i);
        const ObObj *cell = NULL;
        if(OB_SUCCESS !=(ret=row->raw_get_cell(i, cell)))
        {
          //          TBSYS_LOG(WARN, "raw_get_cell %ld failed", i);
        }
        else if(OB_SUCCESS !=(proc->write_variable(var, *cell)))
        {
          //          TBSYS_LOG(WARN, "write into variables fail");
        }

      }
    }

    if ( OB_SUCCESS != (err = op->close() ))
    {
      if( OB_SUCCESS == ret )
      {
        ret = err;
      }
    }
  }
  return ret;
}

int SpUpsInstExecStrategy::execute_block(SpGroupInsts* inst)
{
  int ret = OB_SUCCESS;
  ObIArray<SpInst*>& inst_list_ = inst->get_inst_list();
//  const SpProcedure *proc_ = inst->get_ownner();
  for(int64_t i = 0; i < inst_list_.count() && OB_SUCCESS == ret; ++i)
  {
//    TBSYS_LOG(TRACE, "execute inst[%ld]", i);
    if( OB_SUCCESS != (ret = execute_inst(inst_list_.at(i))) )
    {
//      TBSYS_LOG(WARN, "execute instruction fail idx[%ld]", i);
    }
  }
  return ret;
}

int SpUpsInstExecStrategy::execute_if_ctrl(SpIfCtrlInsts *inst)
{
  int ret = OB_SUCCESS;
  int64_t start_ts = tbsys::CTimeUtil::getTime();
  common::ObRow &fake_row = curr_row_;
  const ObObj *flag = NULL;
  fake_row.clear();
//  TBSYS_LOG(TRACE, "if_ctrl inst:\n%s", to_cstring(inst->get_if_expr()));
  if(OB_SUCCESS != (ret = inst->get_if_expr().calc(fake_row, flag)) )
  {
//    TBSYS_LOG(WARN, "if expr evalute failed");
  }
  OB_STAT_INC(UPDATESERVER, UPS_PROC_IF, tbsys::CTimeUtil::getTime() - start_ts);
  if( OB_SUCCESS != ret ) {}
  else if( flag->is_true() )
  { //execute the then branch
    if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_then_block())) )
    {
//      TBSYS_LOG(WARN, "execute then block fail");
    }
  }
  else
  { //execute the fail branch
    if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_else_block())) )
    {
//      TBSYS_LOG(WARN, "execute else block fail");
    }
  }
  return ret;
}

//add hjw 20151231:b
/*============================================================================
 *                     SpUpsWhileInst  Definition
 * ==========================================================================*/
int SpUpsInstExecStrategy::execute_while(SpWhileInst *inst)
{
    int ret =OB_SUCCESS;
    common::ObRow &fake_row = curr_row_;
    const ObObj *flag = NULL;
    fake_row.clear();
    TBSYS_LOG(TRACE,"while inst:\n%s", to_cstring(inst->get_while_expr()));
    while(OB_SUCCESS == (ret = inst->get_while_expr().calc(fake_row, flag)) && flag->is_true())//execute do body
      {
         TBSYS_LOG(TRACE,"while expr value: %s", to_cstring(*flag));
         if(OB_SUCCESS != (ret = execute_multi_inst(inst->get_body_block())))
         {
           TBSYS_LOG(WARN,"execute do body block failed");
           break;
         }
      }
   return ret;

}
//add hjw 20151231:e


int SpUpsInstExecStrategy::execute_multi_inst(SpMultiInsts *mul_inst)
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
      ret = OB_ERR_UNEXPECTED;
//      TBSYS_LOG(WARN, "does not fetch inst[%ld]", pc);
    }
  }
  return ret;
}

int SpUpsInstExecStrategy::execute_loop(SpLoopInst *inst)
{
  int ret = OB_SUCCESS;

  ObObj itr_obj;
  int64_t itr = 0, itr_inc = 1;
  int64_t itr_begin = inst->get_lowest_number();
  int64_t itr_end = inst->get_highest_number();
  const SpVar &loop_var = inst->get_loop_var();

  loop_counter_.push_back(0);
  int64_t &counter = loop_counter_.at(loop_counter_.count() - 1);

  if( inst->get_reverse() )
  {
    itr_inc = -1;
  }
  for(itr = itr_begin; itr != (itr_end + itr_inc) && OB_SUCCESS == ret; itr += itr_inc)
  {
    ++counter;
    itr_obj.set_int(itr);
    if( OB_SUCCESS != (ret = inst->get_ownner()->write_variable(loop_var, itr_obj)) )
    {
//      TBSYS_LOG(WARN, "update loop counter var failed");
    }
    if( OB_SUCCESS != ret ) {}
    else if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_body_block())) )
    {
//      TBSYS_LOG(WARN, "failed to execute loop body");
    }
  }

  //try to clear local variables
  inst->get_ownner()->clear_variable(loop_var);
  loop_counter_.pop_back();
  return ret;
}

/*============================================================================
 *                     SpUpsCaseInst  Definition
 * ==========================================================================*/
int SpUpsInstExecStrategy::execute_casewhen(SpCaseInst *inst)
{
  int ret = OB_SUCCESS;
  common::ObRow &fake_row = curr_row_;
  const ObObj *flag = NULL;
  const ObObj *when_value = NULL;
  bool else_flag = true;
  fake_row.clear();
  if(OB_SUCCESS != (ret = inst->get_case_expr().calc(fake_row, flag)) )
  {
    TBSYS_LOG(WARN, "fail to execute case expr");
  }
  else
  {
    for( int64_t i = 0; i < inst->get_when_count(); i++ )
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
      if( 0 == inst->get_else_block() )
      {
        TBSYS_LOG(WARN, "case-when does not hit a branch");
        ret = OB_ERR_SP_CASE_NOT_FOUND;
      }
      else if( OB_SUCCESS != (ret = execute_multi_inst(inst->get_else_block())) )
      {
        TBSYS_LOG(WARN, "fail to execute else block");
      }
    }
  }
  return ret;
}

/*============================================================================
 *                    ObUpsProcedure  Definition
 * ==========================================================================*/
ObUpsProcedure::ObUpsProcedure(BaseSessionCtx &session_ctx) :
//  is_var_tab_created(false),
//  block_allocator_(SMALL_BLOCK_SIZE, common::OB_MALLOC_BLOCK_SIZE),
//  var_name_val_map_allocer_(SMALL_BLOCK_SIZE, ObWrapperAllocator(&block_allocator_)),
//  name_pool_(),
  session_ctx_(&session_ctx)
{
//  static_data_mgr_.init();
}

ObUpsProcedure::~ObUpsProcedure()
{
  reset();
//  TBSYS_LOG(INFO, "release ob_ups_procedure");
}

//int ObUpsProcedure::create_variable_table()
//{
//  return var_name_val_map_.create(hash::cal_next_prime(16), &var_name_val_map_allocer_, &block_allocator_);
//}

int ObUpsProcedure::open()
{
  int ret = OB_SUCCESS;
//  SpUpsInstExecStrategy strategy;
  int64_t start_proc_exec_ts = tbsys::CTimeUtil::getTime();
//  TBSYS_LOG(TRACE, "UpsProcedure open, inst list:\n %s", to_cstring(*this));
  pc_ = 0;
  //we need only to execute the block instructions

  SpGroupInsts *inst = dynamic_cast<SpGroupInsts*>(inst_list_.at(0));
  if( inst->get_name().compare(ObString::make_string("neworder")) == 0 ||
      inst->get_name().compare(ObString::make_string("order5")) == 0 ||
      inst->get_name().compare(ObString::make_string("order6")) == 0 )
  {
    int64_t tmp = 0;
    int w_id;
    int d_id;
    int c_id;
    int item_ids[16];
    double i_prices[16];
    int supplier_w_ids[16];
    int order_quantities[16];
    int o_ol_cnt;
    int o_all_local;

    const ObObj *val;
    this->read_variable(ObString::make_string("__w_id"), val);
    val->get_int(tmp); w_id = (int)tmp;
    this->read_variable(ObString::make_string("__d_id"), val);
    val->get_int(tmp); d_id = (int)tmp;
    this->read_variable(ObString::make_string("__c_id"), val);
    val->get_int(tmp); c_id = (int)tmp;
    this->read_variable(ObString::make_string("__o_ol_cnt"), val);
    val->get_int(tmp); o_ol_cnt =(int)tmp;
    this->read_variable(ObString::make_string("__o_all_local"), val);
    val->get_int(tmp); o_all_local = (int)tmp;

    for(int64_t i = 0; i < o_ol_cnt; ++i)
    {
      this->read_variable(ObString::make_string("__item_ids"), i, val);
      val->get_int(tmp); item_ids[i] = (int)tmp;
//      this->read_variable(ObString::make_string("__i_prices"), i, val);
//      val->get_double(i_prices[i]);
      this->read_variable(ObString::make_string("__supplier_wids"), i, val);
      val->get_int(tmp); supplier_w_ids[i] = (int)tmp;
      this->read_variable(ObString::make_string("__order_quantities"), i, val);
      val->get_int(tmp); order_quantities[i] = (int)tmp;
    }
    ObUpsTpcc neworder(this);
    if( inst->get_name().compare(ObString::make_string("order5")) == 0 )
      ret = neworder.execute_neworder_strict_order(w_id, d_id, c_id, item_ids, i_prices, supplier_w_ids, order_quantities, o_ol_cnt, o_all_local);
    else
      ret = neworder.execute_neworder(w_id, d_id, c_id, item_ids, i_prices, supplier_w_ids, order_quantities, o_ol_cnt, o_all_local);
  }
  else if( inst->get_name().compare(ObString::make_string("payment")) == 0 )
  {
    int64_t tmp = 0;
    int w_id;
    int d_id;
    int c_id;
    int c_w_id;
    int c_d_id;
    double h_amount = 0;

    const ObObj *val;
    this->read_variable(ObString::make_string("__w_id"), val);
    val->get_int(tmp); w_id = (int)tmp;
    this->read_variable(ObString::make_string("__d_id"), val);
    val->get_int(tmp); d_id = (int)tmp;
    this->read_variable(ObString::make_string("__c_id"), val);
    val->get_int(tmp); c_id = (int)tmp;
    this->read_variable(ObString::make_string("__c_w_id"), val);
    val->get_int(tmp); c_w_id = (int)tmp;
    this->read_variable(ObString::make_string("__c_d_id"), val);
    val->get_int(tmp); c_d_id = (int)tmp;
    this->read_variable(ObString::make_string("__h_amount"), val);
    val->get_double(h_amount);
    ObUpsTpcc payment(this);
    ret = payment.execute_payment_merge_sql(w_id, d_id, c_id, c_w_id, c_d_id, h_amount);
    //  ret = payment.execute_payment(w_id, d_id, c_id, c_w_id, c_d_id, h_amount);

  }
  else if ( inst->get_name().compare(ObString::make_string("loopdep")) == 0 ) 
  {
    int a_id, b_id, c_id, d_id, e_id, value;
    int64_t tmp = 0;
    const ObObj *val;
    this->read_variable(ObString::make_string("__a_id"), val);
    val->get_int(tmp); a_id = (int)tmp;
    this->read_variable(ObString::make_string("__b_id"), val);
    val->get_int(tmp); b_id = (int)tmp;
    this->read_variable(ObString::make_string("__c_id"), val);
    val->get_int(tmp); c_id = (int)tmp;
    this->read_variable(ObString::make_string("__d_id"), val);
    val->get_int(tmp); d_id = (int)tmp;
    this->read_variable(ObString::make_string("__e_id"), val);
    val->get_int(tmp); e_id = (int)tmp;
    this->read_variable(ObString::make_string("__value"), val);
    val->get_int(tmp); value = (int)tmp; 

    ObUpsTpcc dep(this);
    ret = dep.execute_update(a_id, b_id, c_id, d_id, e_id, value);
  }
  else if ( inst->get_name().compare(ObString::make_string("amalgamate")) == 0 )
  {
    int acct_id0, acct_id1;
    int64_t tmp = 0;
    const ObObj *val;
    this->read_variable(ObString::make_string("__acctId0"), val);
    val->get_int(tmp); acct_id0 = (int)tmp;
    this->read_variable(ObString::make_string("__acctId1"), val);
    val->get_int(tmp); acct_id1 = (int)tmp;

    ObUpsTpcc smallbank(this);
    ret = smallbank.execute_amalgamate(acct_id0, acct_id1);
  }
  else if( inst->get_name().compare(ObString::make_string("writecheck")) == 0 )
  {
    int acct_id;
    double amount = 0;
    int64_t tmp = 0;
    const ObObj *val;
    this->read_variable(ObString::make_string("__acctId"), val);
    val->get_int(tmp); acct_id = (int)tmp;
    this->read_variable(ObString::make_string("__amount"), val);
    val->get_double(amount);

    ObUpsTpcc smallbank(this);
    ret = smallbank.execute_write_check(acct_id, amount);
  }
  else if( inst->get_name().compare(ObString::make_string("sendpayment")) == 0 )
  {
    int sendAcct, destAcct;
    double amount = 0;
    int64_t tmp = 0;
    const ObObj *val;
    this->read_variable(ObString::make_string("__sendAcct"), val);
    val->get_int(tmp); sendAcct = (int)tmp;
    this->read_variable(ObString::make_string("__destAcct"), val);
    val->get_int(tmp); destAcct = (int)tmp;
    this->read_variable(ObString::make_string("__amount"), val);
    val->get_double(amount);

    ObUpsTpcc smallbank(this);
    ret = smallbank.execute_send_payment(sendAcct, destAcct, amount);
  }
  else if( inst->get_name().compare(ObString::make_string("transactsavings")) == 0 )
  {
    int acctId;
    double amount = 0;
    int64_t tmp = 0;
    const ObObj *val;
    this->read_variable(ObString::make_string("__acctId"), val);
    val->get_int(tmp); acctId = (int)tmp;
    this->read_variable(ObString::make_string("__amount"), val);
    val->get_double(amount);

    ObUpsTpcc smallbank(this);
    ret = smallbank.execute_transact_savings(acctId, amount);
  }
  else
  {
    ret = strategy_.execute_block(inst);
  }

  int64_t cost_ts = tbsys::CTimeUtil::getTime() - start_proc_exec_ts;
  OB_STAT_INC(UPDATESERVER, UPS_PROC_EXEC_COUNT, 1);
  OB_STAT_INC(UPDATESERVER, UPS_PROC_EXEC_TIME, cost_ts);

  var_iter_ = var_name_val_map_.begin();
  make_fake_desc();
  return ret;
}

int ObUpsProcedure::close()
{
//  static_data_mgr_.clear();
  return SpProcedure::close();
}

void ObUpsProcedure::reset()
{
  pc_ = 0;

//  static_data_mgr_.clear();
  var_row_.clear();
  SpProcedure::reset();
//  name_pool_.clear();
//  var_name_val_map_.destroy();
}

void ObUpsProcedure::reuse()
{
  pc_ = 0;
}

int64_t ObUpsProcedure::hkey(int64_t sdata_id) const
{
  return strategy_.hkey(sdata_id);
}

//SpInst * ObUpsProcedure::create_inst(SpInstType type, SpMultiInsts *mul_inst)
//{
//  SpInst *new_inst = NULL;
//  new_inst = SpProcedure::create_inst(type, mul_inst);
//  return new_inst;
//}

int64_t ObUpsProcedure::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "Procedure instruction list:\n");
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    SpInst *inst = inst_list_.at(i);
    databuff_printf(buf, buf_len, pos, "inst %ld: ", i);
    pos += inst->to_string(buf + pos, buf_len -pos);
  }
  databuff_printf(buf, buf_len, pos, "Procedure variable status:\n");
  return pos;
}

/**
 * @brief ObUpsProcedure::get_next_row
 *  Used to return modified variables back to mergeserver
 * @param row
 * @return
 */
int ObUpsProcedure::get_next_row(const common::ObRow *&row)
{
  int ret = OB_SUCCESS;

  if( var_iter_ != var_name_val_map_.end() )
  {
    const ObString &name = var_iter_->first;
    const ObObj &val = var_iter_->second;
    ObObj var;
    var.set_varchar(name);

    var_row_.set_cell(FAKE_TABLE_ID, ROW_VAR_CID, var);
    var_row_.set_cell(FAKE_TABLE_ID, ROW_VAL_CID, val);
    row = &var_row_;

    TBSYS_LOG(TRACE, "row: %s", to_cstring(*row));
    var_iter_ ++;
  }
  else
  {
    row = NULL;
    ret = OB_ITER_END;
  }
  return ret;
}

int ObUpsProcedure::make_fake_desc()
{
  fake_desc_.reset();
  fake_desc_.add_column_desc(FAKE_TABLE_ID, ROW_VAR_CID);
  fake_desc_.add_column_desc(FAKE_TABLE_ID, ROW_VAL_CID);
  var_row_.set_row_desc(fake_desc_);
  return OB_SUCCESS;
}

int ObUpsProcedure::get_row_desc(const ObRowDesc *&row_desc) const
{
   row_desc = & fake_desc_;
   return OB_SUCCESS;
}
