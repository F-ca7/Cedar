#include "ob_procedure_optimizer.h"
#include "ob_procedure.h"
using namespace oceanbase::sql;


#define CHECK_PROC_NAME(S) ( 0 == proc_name.compare( #S ) )

#define ADD_INST(A, B) ((A).push_back(inst_list.at(B)))
#define ADD_INST_WITH_SOUR(A, B, C) ((A).push_back((B).at(C)))
#define PREP_PROC(A) \
  SpInstList &exec_list = (A).exec_list_;  \
  ObIArray<SpInst *> &inst_list = (A).inst_list_;  \
  const ObString &proc_name = proc.get_proc_name();

#define ADD_MULTI_INST(A, B...) \
  do {   \
  const int array[] = { B }; \
  for(uint32_t i = 0; i < sizeof(array)/sizeof(int); ++i) \
  ADD_INST(A, array[i]); \
  }while(0);

#define ADD_MULTI_INST_WITH_SOUR(A, B, C...) \
  do {   \
  const int array[] = { C }; \
  for(uint32_t i = 0; i < sizeof(array)/sizeof(int); ++i) \
  ADD_INST_WITH_SOUR(A, B, array[i]); \
  }while(0);

#define CHECK_TYPE(A, B) \
    A->get_type() == B \

ObProcedureOptimizer::ObProcedureOptimizer()
{

}

int ObProcedureOptimizer::test_optimize(ObProcedure &proc)
{
  PREP_PROC(proc);
  bool opted = false;
  if( CHECK_PROC_NAME(ups_proc_test) )
  {
    ADD_MULTI_INST(exec_list, 0, 2, 1, 3, 4, 5, 6, 8, 10, 12);

    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);

    ADD_MULTI_INST(*group, 7, 9, 11, 13);

    exec_list.push_back(group);
    opted = true;
  }
  else if( CHECK_PROC_NAME(if_test) )
  {
//    SpInstList temp_exec_list;

    ADD_MULTI_INST(exec_list, 0, 1);

    static_cast<SpIfCtrlInsts*>(inst_list.at(2))->optimize(exec_list);

    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);

    ADD_INST(*group, 2);

    exec_list.push_back(group);

    opted = true;
  }
  else if( CHECK_PROC_NAME(for_test_1))
  {
    static_cast<SpLoopInst*>(inst_list.at(0))->optimize(exec_list);
    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);
    group->add_inst(inst_list.at(0));
    exec_list.push_back(group);
    opted = true;
  }
  else if( CHECK_PROC_NAME(for_test_2) )
  {
    static_cast<SpLoopInst*>(inst_list.at(0))->optimize(exec_list);
    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);
    group->add_inst(inst_list.at(0));
    exec_list.push_back(group);
    opted = true;
  }
  else if( CHECK_PROC_NAME(for_test_3) )
  {
    static_cast<SpLoopInst*>(inst_list.at(1))->optimize(exec_list);

    exec_list.push_back(inst_list.at(0));

    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);

    group->add_inst(inst_list.at(1));

    exec_list.push_back(group);
    opted = true;
  }
  else if( CHECK_PROC_NAME(loopdep0) )
  {
    ADD_MULTI_INST(exec_list, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18);

    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);

    ADD_MULTI_INST(*group, 11, 13, 15, 17, 19);

    exec_list.push_back(group);

    group->set_name(proc.arena_, ObString::make_string("dep"));
    exec_list.push_back(group);
    opted = true;
  }
  else if ( CHECK_PROC_NAME(loopdep1) )
  {
    ADD_MULTI_INST(exec_list, 0, 1, 2, 4, 6, 8, 10, 12, 14, 16, 18);

    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);

//    ADD_MULTI_INST(group, 3, 5, 7, 9);
    ADD_MULTI_INST(*group, 11, 13, 15, 17, 19);

    group->set_name(proc.arena_, ObString::make_string("dep"));
    exec_list.push_back(group);
    opted = true;
  }
  else if ( CHECK_PROC_NAME(loopdep2) )
  {
    ADD_MULTI_INST(exec_list, 0, 1, 2, 3, 4, 6, 8, 10, 12, 14, 16, 18);

    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);

//    ADD_MULTI_INST(group, 5, 7, 9);

    ADD_MULTI_INST(*group, 11, 13, 15, 17, 19);

    group->set_name(proc.arena_, ObString::make_string("dep"));
    exec_list.push_back(group);
    opted = true;
  }
  else if ( CHECK_PROC_NAME(loopdep3) )
  {
    ADD_MULTI_INST(exec_list, 0, 1, 2, 3, 4, 5, 6, 8, 10, 12, 14, 16, 18);

    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);

//    ADD_MULTI_INST(group, 7, 9);

    ADD_MULTI_INST(*group, 11, 13, 15, 17, 19);

    group->set_name(proc.arena_, ObString::make_string("dep"));

    exec_list.push_back(group);
    opted = true;
  }
  else if ( CHECK_PROC_NAME(loopdep4) )
  {
    ADD_MULTI_INST(exec_list, 0, 1, 2, 3, 4, 5, 6, 7, 8);

    ADD_MULTI_INST(exec_list, 10, 12, 14, 16, 18);

    //one phase write
    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);

//    ADD_MULTI_INST(group, 9);
    ADD_MULTI_INST(*group, 11, 13, 15, 17, 19);

    group->set_name(proc.arena_, ObString::make_string("dep"));
    exec_list.push_back(group);
    opted = true;
  }
  else if( CHECK_PROC_NAME(ins_loop) )
  {
    SpGroupInsts * group = proc.create_inst<SpGroupInsts>(NULL);

    SpLoopInst *ins_loop = static_cast<SpLoopInst*>(inst_list.at(0));

    ins_loop->optimize(exec_list);

    group->add_inst(ins_loop);
    exec_list.push_back(group);
    opted = true;
  }
  else if( CHECK_PROC_NAME(rep_loop) )
  {
    SpGroupInsts * group = proc.create_inst<SpGroupInsts>(NULL);

    SpLoopInst *rep_loop = static_cast<SpLoopInst*>(inst_list.at(0));

    group->add_inst(rep_loop);

    exec_list.push_back(group);
    opted = true;
  }
  else if(
          CHECK_PROC_NAME(small1) ||
          CHECK_PROC_NAME(small2) ||
          CHECK_PROC_NAME(small3) ||
          CHECK_PROC_NAME(samll4) ||
          CHECK_PROC_NAME(small5) ||
          CHECK_PROC_NAME(small6) ||
          CHECK_PROC_NAME(small7) ||
          CHECK_PROC_NAME(small8)
          )
  {
    ADD_INST(exec_list, 0);
    opted = true;
  }
  if( opted ) return OB_SUCCESS;
  else return OB_NOT_SUPPORTED;
}

int ObProcedureOptimizer::tpcc_optimize(ObProcedure &proc)
{
  PREP_PROC(proc);
  bool opted = false;
//  if( CHECK_PROC_NAME(payment2) )
//  {
//    ADD_MULTI_INST(exec_list, 0, 2, 4, 6);

//    static_cast<SpIfCtrlInsts*>(inst_list.at(12))->optimize(exec_list);

//    ADD_MULTI_INST(exec_list, 8, 9, 10, 11, 12);

//    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);

//    ADD_MULTI_INST(*group, 5, 7, 1, 3, 13, 14);
//    exec_list.push_back(group);
//    opted = true;
//  }
  if( CHECK_PROC_NAME(payment) )
  {
    ADD_MULTI_INST(exec_list, 0, 2, 4, 6, 8);

    static_cast<SpIfCtrlInsts*>(inst_list.at(13))->optimize(exec_list);

    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);
    group->set_name(proc.arena_, ObString::make_string("payment"));

    ADD_MULTI_INST(*group, 9, 10, 11, 12, 13, 5, 7, 1, 3, 14, 15);

    exec_list.push_back(group);
    opted = true;
  }
  else if( CHECK_PROC_NAME(order3) )
  {
    ADD_MULTI_INST(exec_list, 0, 1, 2, 3, 5);

    SpLoopInst *ol_loop = static_cast<SpLoopInst*>(inst_list.at(10));

    SpLoopInst *ol_static_data_loop = proc.create_inst<SpLoopInst>(NULL);
    SpMultiInsts* ol_static_data_loop_body = ol_static_data_loop->get_body_block();

    ol_static_data_loop->assign_template(ol_loop);

    ol_static_data_loop_body->add_inst(ol_loop->get_body_block()->get_inst(0LL));
    ol_static_data_loop_body->add_inst(ol_loop->get_body_block()->get_inst(1LL));

    SpInstList ol_static_inst_list;
    ol_loop->optimize(ol_static_inst_list);

    for(int64_t i = 0; i < ol_static_inst_list.count(); ++i)
    {
      ol_static_data_loop_body->add_inst(ol_static_inst_list.at(i));
    }
    exec_list.push_back(ol_static_data_loop);

    SpGroupInsts* group = proc.create_inst<SpGroupInsts>(NULL);

    ADD_MULTI_INST(*group, 4, 6, 7, 8, 9);
    group->add_inst(ol_loop);

    exec_list.push_back(group);

    ADD_INST(exec_list, 11);
    opted = true;
  }
  else if( CHECK_PROC_NAME(order4) )
  {

    ADD_MULTI_INST(exec_list, 0, 1, 2, 4);

    SpLoopInst *ol_loop = static_cast<SpLoopInst*>(inst_list.at(9));

    SpLoopInst *ol_static_data_loop = proc.create_inst<SpLoopInst>(NULL);
    SpMultiInsts* ol_static_data_loop_body = ol_static_data_loop->get_body_block();

    ol_static_data_loop->assign_template(ol_loop);

    ol_static_data_loop_body->add_inst(ol_loop->get_body_block()->get_inst(0LL));
    ol_static_data_loop_body->add_inst(ol_loop->get_body_block()->get_inst(1LL));

    SpInstList ol_static_inst_list;
    ol_loop->optimize(ol_static_inst_list);

    for(int64_t i = 0; i < ol_static_inst_list.count(); ++i)
    {
      ol_static_data_loop_body->add_inst(ol_static_inst_list.at(i));
    }
    exec_list.push_back(ol_static_data_loop);

    SpGroupInsts* group = proc.create_inst<SpGroupInsts>(NULL);

    ADD_MULTI_INST(*group, 3, 5, 6, 7, 8);

    group->add_inst(ol_loop);

    exec_list.push_back(group);
    ADD_INST(exec_list, 10);
    opted = true;
  }
  else if( CHECK_PROC_NAME(neworder6) ||
           CHECK_PROC_NAME(order5)    ||
           CHECK_PROC_NAME(order6) )
  {
    ADD_MULTI_INST(exec_list, 0, 1);

    SpLoopInst *item_loop = static_cast<SpLoopInst*>(inst_list.at(2));

    SpLoopInst *static_item_loop = proc.create_inst<SpLoopInst>(NULL);
    static_item_loop->assign_template(item_loop);
    SpMultiInsts* static_item_loop_body = static_item_loop->get_body_block();

    static_item_loop_body->add_inst(item_loop->get_body_block()->get_inst(0LL));
    static_item_loop_body->add_inst(item_loop->get_body_block()->get_inst(1LL));

    SpInstList item_static_inst_list;
    item_loop->optimize(item_static_inst_list);
    for(int64_t i = 0 ; i < item_static_inst_list.count(); ++i)
    {
      static_item_loop_body->add_inst(item_static_inst_list.at(i));
    }
    exec_list.push_back(static_item_loop);

    SpGroupInsts* group = proc.create_inst<SpGroupInsts>(NULL);

    group->set_name(proc.arena_, proc_name);
    group->add_inst(item_loop);

    ADD_MULTI_INST(exec_list, 3, 5);

    ADD_MULTI_INST(*group, 4, 6, 7, 8, 9, 10);

    exec_list.push_back(group);
    ADD_INST(exec_list, 11);
    opted = true;
  }
  if( opted ) return OB_SUCCESS;
  else return OB_NOT_SUPPORTED;
}

int ObProcedureOptimizer::bank_optimize(ObProcedure &proc)
{
  PREP_PROC(proc);
  bool opted = false;
  if( CHECK_PROC_NAME(amalgamate) )
  {
    ADD_MULTI_INST(exec_list, 0, 1, 2, 4, 7, 9);

    SpGroupInsts* group = proc.create_inst<SpGroupInsts>(NULL);
    group->set_name(proc.arena_, proc_name);

    ADD_MULTI_INST(*group, 3, 5, 6, 8, 10);
    exec_list.push_back(group);
    opted = true;
  }
  else if( CHECK_PROC_NAME(writecheck) )
  {
    ADD_MULTI_INST(exec_list, 0, 1, 3);

    static_cast<SpIfCtrlInsts*>(inst_list.at(6))->optimize(exec_list);

    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);
    group->set_name(proc.arena_, proc_name);

    ADD_MULTI_INST(*group, 2, 4, 5, 6);

    exec_list.push_back(group);
    opted = true;
  }
  else if( CHECK_PROC_NAME(sendpayment) )
  {
    ADD_MULTI_INST(exec_list, 0, 1, 2);

    static_cast<SpIfCtrlInsts*>(inst_list.at(4))->optimize(exec_list);

    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);
    group->set_name(proc.arena_, proc_name);

    ADD_MULTI_INST(*group, 3, 4);

    exec_list.push_back(group);
    opted = true;
  }
  else if( CHECK_PROC_NAME(transactsavings) )
  {
    ADD_MULTI_INST(exec_list, 0, 1);

    static_cast<SpIfCtrlInsts*>(inst_list.at(3))->optimize(exec_list);

    SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);
    group->set_name(proc.arena_, proc_name);

    ADD_MULTI_INST(*group, 2, 3);

    exec_list.push_back(group);
    opted = true;
  }
  if( opted ) return OB_SUCCESS;
  else return OB_NOT_SUPPORTED;
}

int ObProcedureOptimizer::optimize(ObProcedure &proc)
{
  int ret = OB_SUCCESS;

//  if( OB_SUCCESS == (ret = specialize_optimize(proc)) )
//  {
//    TBSYS_LOG(INFO, "[%.*s] use special optimization", proc.get_proc_name().length(), proc.get_proc_name().ptr());
//  }
//  else
    if( OB_SUCCESS == (ret = rule_based_optimize(proc)) )
  {
    TBSYS_LOG(INFO, "[%.*s] use general optimization", proc.get_proc_name().length(), proc.get_proc_name().ptr());
  }

  proc.deter_exec_mode();

  return OB_SUCCESS;
}

/**
 * @brief ObProcedure::optimize
 *  adjust the execution path of instructions
 *  here we first try to group the instructions
 *  scan the original instructions list, and save
 *  into the real execution list
 * @return
 */
int ObProcedureOptimizer::specialize_optimize(ObProcedure &proc)
{
  int ret = OB_NOT_SUPPORTED;
  UNUSED(proc);
  if( OB_SUCCESS == (ret = test_optimize(proc)) )
  {
  }
  else if( OB_SUCCESS == (ret = tpcc_optimize(proc)))
  {

  }
  else if( OB_SUCCESS == (ret = bank_optimize(proc)))
  {

  }
  return ret;
}

int ObProcedureOptimizer::rule_based_optimize(ObProcedure &proc)
{
  PREP_PROC(proc);
  UNUSED(proc_name);
  UNUSED(exec_list);
  TBSYS_LOG(INFO, "rule_base_optimize: %.*s", proc_name.length(), proc_name.ptr());

  SpInstList expand_list;
  SpInstList seq_list;

  expand_list.clear();

  for(int64_t i = 0; i < inst_list.count(); ++i)
  {
    seq_list.push_back(inst_list.at(i));
  }

  for(int64_t i = 0; i < seq_list.count(); ++i)
  {
    if( seq_list.at(i)->get_type() == SP_C_INST)
    {
      ctrl_split(static_cast<SpIfCtrlInsts*>(seq_list.at(i)), expand_list);
    }
    else if( seq_list.at(i)->get_type() == SP_L_INST &&
             static_cast<SpLoopInst*>(seq_list.at(i))->is_simple_loop() )
    {
      loop_split(static_cast<SpLoopInst*>(seq_list.at(i)), expand_list);
    }
    else
    {
      expand_list.push_back(seq_list.at(i));
    }
  }

  group(proc, expand_list);
  return OB_SUCCESS;
}


int ObProcedureOptimizer::group(ObProcedure &proc, SpInstList &expand_list)
{
  int64_t group_range_start, group_range_end;
  ObProcDepGraph graph;
  ObSEArray<int64_t, ObProcDepGraph::MAX_GRAPH_SIZE> seq;
  SpInstList &exec_list = proc.exec_list_;
  graph.set_insts(expand_list);
  graph.reorder_for_group(seq);

  for(int64_t start = seq.count() - 1; start >= 0; --start)
  {
    if( expand_list.at(seq.at(start))->is_trpc() )
    {
      group_range_start = start;
      group_range_end = start;
      for(int64_t cur = start - 1; cur >= 0; --cur)
      {
        if( S_RPC == (S_RPC & expand_list.at(seq.at(cur))->get_call_type()) )
        {
          break;
        }
        else if( expand_list.at(seq.at(cur))->is_trpc() )
        {
          group_range_end = cur;
        }
      }
      //try to group operations [start_id, end_id]
      if( group_range_start != group_range_end ||
          (expand_list.at(seq.at(start))->get_type() == SP_L_INST))
      {
        SpGroupInsts *group = proc.create_inst<SpGroupInsts>(NULL);
        for(int64_t i = group_range_start; i >= group_range_end; --i)
        {
          ADD_INST_WITH_SOUR(*group, expand_list, seq.at(i));
        }
        exec_list.push_back(group);
        start = group_range_end;
      }
      else
      {
        ADD_INST_WITH_SOUR(exec_list, expand_list, seq.at(start));
      }
    }
    else
    {
      ADD_INST_WITH_SOUR(exec_list, expand_list, seq.at(start));
    }
  }
  return OB_SUCCESS;
}

int ObProcedureOptimizer::loop_split(SpLoopInst *loop_inst, SpInstList &inst_list)
{
  int ret = OB_SUCCESS;

  SpInstList pre_inst, post_inst;

  pre_inst.clear();
  post_inst.clear();

  do_loop_split(loop_inst->get_body_block()->inst_list_, pre_inst, post_inst);

  if( pre_inst.count() != 0 )
  {
    SpLoopInst *new_loop = loop_inst->get_ownner()->create_inst<SpLoopInst>(NULL);

    new_loop->assign_template(loop_inst);

    for(int64_t i = 0; i < pre_inst.count(); ++i)
    {
      new_loop->get_body_block()->add_inst(pre_inst.at(i));
    }
    inst_list.push_back(new_loop);
  }

  loop_inst->get_body_block()->inst_list_.clear();
  for(int64_t i = 0; i < post_inst.count(); ++i)
  {
    loop_inst->get_body_block()->add_inst(post_inst.at(i));
  }

  inst_list.push_back(loop_inst);
  return ret;
}

/**
 * @brief ObProcedureOptimizer::ctrl_split
 * @param inst
 * @param inst_list
 *  upper level inst_list?
 * @return
 */
int ObProcedureOptimizer::ctrl_split(SpIfCtrlInsts *if_inst, SpInstList &inst_list)
{
  int ret = OB_SUCCESS;

  SpInstList post_inst, pre_inst;

  pre_inst.clear();
  post_inst.clear();

  do_split(if_inst->get_then_block()->inst_list_, pre_inst, post_inst);

  for(int64_t i = 0; i < pre_inst.count(); ++i)
  {
    inst_list.push_back(pre_inst.at(i));
  }

  if_inst->get_then_block()->inst_list_.clear();
  for(int64_t i = 0; i < post_inst.count(); ++i)
  {
    if_inst->get_then_block()->inst_list_.push_back(post_inst.at(i));
  }

  pre_inst.clear();
  post_inst.clear();
  do_split(if_inst->get_else_block()->inst_list_, pre_inst, post_inst);

  for(int64_t i = 0; i < pre_inst.count(); ++i)
  {
    inst_list.push_back(pre_inst.at(i));
  }

  if_inst->get_else_block()->inst_list_.clear();
  for(int64_t i = 0; i < post_inst.count(); ++i)
  {
    if_inst->get_else_block()->inst_list_.push_back(post_inst.at(i));
  }

  inst_list.push_back(if_inst);
  return ret;
}

int ObProcedureOptimizer::do_split(SpInstList &inst_list, SpInstList &pre_inst, SpInstList &post_inst)
{
  int ret = OB_SUCCESS;
  ObSEArray<int64_t, ObProcDepGraph::MAX_GRAPH_SIZE> seq;
  int64_t pre_count = 0;
  ObProcDepGraph graph;
  graph.set_insts(inst_list);
  graph.split(seq, pre_count);
  //pre-execute all s-rpc
  /**
      * Maybe we need use a speical instructions to wrap
      */
  if( pre_count == inst_list.count() )
  {
    pre_count = 0;
  }
  for(int64_t i = 0; i < pre_count; ++i)
  {
    pre_inst.push_back(inst_list.at(seq.at(i)));
  }
  for(int64_t i = pre_count; i < inst_list.count(); ++i)
  {
    post_inst.push_back(inst_list.at(seq.at(i)));
  }
  return ret;
}

int ObProcedureOptimizer::do_loop_split(SpInstList &inst_list, SpInstList &pre_inst, SpInstList &post_inst)
{
  int ret = OB_SUCCESS;
  ObSEArray<int64_t, ObProcDepGraph::MAX_GRAPH_SIZE> seq;
  int64_t pre_count = 0;
  ObProcDepGraph graph;

  SpInstList expand_list;

  for(int64_t i = 0; i < inst_list.count(); ++i)
  {
    expand_list.push_back(inst_list.at(i));
  }

  for(int64_t i = 0; i < inst_list.count(); ++i)
  {
    expand_list.push_back(inst_list.at(i));
  }

  graph.set_insts(expand_list);
  graph.split(seq, pre_count);

  if( pre_count == 2 * inst_list.count() )
  {
    pre_count = 0;
  }

  for(int64_t i = 0; i < pre_count; ++i)
  {
    if( seq.at(i) < inst_list.count() )
    {
      pre_inst.push_back(inst_list.at(seq.at(i)));
    }
  }

  for(int64_t i = pre_count; i < seq.count(); ++i)
  {
    if( seq.at(i) < inst_list.count() )
    {
      post_inst.push_back(inst_list.at(seq.at(i)));
    }
  }
  return ret;
}

int ObProcDepGraph::check_dep(SpInst *in_node, SpInst *out_node)
{
  //check dependence between instructions
  return SpInst::check_dep(*in_node, *out_node);
}

void ObProcDepGraph::build_dep_graph(GraphType type)
{
  int dep_type = 0;
  type_ = type;
  for(int64_t i = 0; i < inst_list_.count(); ++i)
  {
    SpInst *dep_node = inst_list_.at(i);
    for(int64_t j = 0; j < i; ++j)
    {
      SpInst *pre_node = inst_list_.at(j);
      if( 0 != (dep_type = check_dep(pre_node, dep_node)) ) //check whether dep_node depends on the output of pre_node
      {
        add_edge(j, i, dep_type);
      }
    }
  }
  TBSYS_LOG(INFO, "%s", to_cstring(*this));
  inited_ = true;
}

//build edge i ---> j  forward
//build edge i <--- j  backward
void ObProcDepGraph::add_edge(int64_t i, int64_t j, int dep_type)
{
  if( type_ == Backward )
  {
    int64_t tmp = i;
    i = j;
    j = tmp;
  }
  SpNode &node = graph_.at(i);
  SpNode *new_node = (SpNode*)arena_.alloc(sizeof(SpNode));
  new_node->id_ = j;
  new_node->dep_type_ = dep_type;
  new_node->next_ = node.next_;
  node.next_ = new_node;
  degree_.at(j)++;

  if( dep_type == Da_True_Dep )
  {
    cover_trpc_.at(i) = cover_trpc_.at(j) || cover_trpc_.at(i);
  }
}

int ObProcDepGraph::set_insts(ObIArray<SpInst *> &insts)
{
  graph_.clear();
  degree_.clear();
  cover_trpc_.clear();
  flow_srpc_.clear();
  inst_list_.clear();
  arena_.reuse();
  inited_ = false;
  for(int64_t i = 0; i < insts.count(); ++i)
  {
    inst_list_.push_back(insts.at(i));
    graph_.push_back(SpNode(i, NULL));
    degree_.push_back(0);
    cover_trpc_.push_back((T_RPC & inst_list_.at(i)->get_call_type()) == T_RPC);
    flow_srpc_.push_back(false);
  }

  TBSYS_LOG(INFO, "set_insts: %ld, inner_list_: %ld, graph_: %ld, degree_: %ld", insts.count(), inst_list_.count(),
            graph_.count(), degree_.count());
  active_node_count_ = insts.count();
  return OB_SUCCESS;
}

bool ObProcDepGraph::is_leaf(int64_t id) const
{
  return graph_.at(id).next_ == NULL;
}

bool ObProcDepGraph::is_root(int64_t id) const
{
  return degree_.at(id) == 0;
}

bool ObProcDepGraph::is_done(int64_t id) const
{
  return degree_.at(id) == -1;
}

bool ObProcDepGraph::cover_tnode(int64_t id) const
{
  return cover_trpc_.at(id);
}

void ObProcDepGraph::mark_done(int64_t id, GraphType type)
{
  OB_ASSERT(type = type_);
  degree_.at(id) = -1;

  --active_node_count_;
  const SpNode *node = &(graph_.at(id));
  const SpNode *nxt = node->next_;
  while( nxt != NULL)
  {
    degree_.at(nxt->id_)--;
    nxt = nxt->next_;
  }
}

bool ObProcDepGraph::is_stype(int64_t id) const
{
  return inst_list_.at(id)->is_srpc();
}

bool ObProcDepGraph::is_ttype(int64_t id) const
{
  return inst_list_.at(id)->is_trpc();
}

int ObProcDepGraph::reorder_for_group(ObIArray<int64_t> &seq)
{
  build_dep_graph(Backward);
  int t_iter = -1, s_iter = -1;
  while( t_iter != 0 || s_iter != 0 )
  {
    bool find = true;
    t_iter = 0;
    s_iter = 0;
    //execute t-op at last
    while( active_node_count_ != 0 && find )
    {
      find = false;
      for(int64_t i = inst_list_.count() - 1; i >= 0; --i)
      {
        if( is_done(i) || is_stype(i) || !is_root(i) ) continue;
        else
        {
          seq.push_back(i);
          mark_done(i, Backward);
          t_iter ++;
          find = true;
          break;
        }
      }
    }

    find = true;
    //execute s-op that covered by some t-op
    while( active_node_count_ != 0 && find )
    {
      find = false;
      for(int64_t i = inst_list_.count() - 1; i >= 0; --i)
      {
        if( is_done(i) || is_ttype(i) || !is_root(i) || !cover_tnode(i) ) continue;
        else
        {
          seq.push_back(i);
          mark_done(i, Backward);
          s_iter ++;
          find = true;
          break;
        }
      }
    }
  }
  //firstly execute s-op that does not covered by any t-op
  //for such op, we can use more aggressive optimization
  while( active_node_count_ != 0 )
  {
    for(int64_t i = inst_list_.count() - 1; i >= 0; --i)
    {
      if( is_done(i) || !is_root(i) ) continue;
      else
      {
        seq.push_back(i);
        mark_done(i, Backward);
        break;
      }
    }
  }
  return OB_SUCCESS;
}

bool ObProcDepGraph::could_split() const
{
  bool ret = true;
  for(int64_t i = 0; ret && i < cover_trpc_.count(); ++i)
  {
    /**
      * If no s_rpc is covered by any t_rpc, we can use preexecute optimization
      */
    if( cover_trpc_.at(i) && (S_RPC == (inst_list_.at(i)->get_call_type() & S_RPC)))
    {
      TBSYS_LOG(INFO, "can not split[%ld, %d, %d]", i, cover_trpc_.at(i), inst_list_.at(i)->get_call_type());
      ret = false;
    }
  }
  return ret;
}

int ObProcDepGraph::split(ObIArray<int64_t> &seq, int64_t &pre_count)
{
  int ret = OB_SUCCESS;
  if( !inited_ ) build_dep_graph(Backward);
  pre_count = 0;
  if( could_split() )
  {
    for(int64_t i = 0; i < inst_list_.count(); ++i)
    {
      if( inst_list_.at(i)->get_call_type() == S_RPC )
      {
        tag_true_flow(i);
      }
    }

    for(int64_t i = 0; i < inst_list_.count(); ++i)
    {
      TBSYS_LOG(INFO, "%ld: %d", i, flow_srpc_.at(i));
      if( flow_srpc_.at(i) )
      {
        seq.push_back(i);
        pre_count ++;
      }
    }

    for(int64_t i = 0; i < inst_list_.count(); ++i)
    {
      if( inst_list_.at(i)->get_call_type() != S_RPC )
      {
        seq.push_back(i);
      }
    }
  }
  else
  {
    pre_count = 0;
    for(int64_t i = 0; i < inst_list_.count(); ++i)
    {
      seq.push_back(i);
    }
  }
  return ret;
}

int ObProcDepGraph::tag_true_flow(int64_t id)
{
  int ret = OB_SUCCESS;

  if( !flow_srpc_.at(id) )
  {
    flow_srpc_.at(id) = true;
    SpNode *nxt = graph_.at(id).next_;
    while( NULL != nxt )
    {
      if( Da_True_Dep == (nxt->dep_type_ & Da_True_Dep) )
      {
        tag_true_flow(nxt->id_);
      }
      nxt = nxt->next_;
    }
  }
  return ret;
}

int64_t ObProcDepGraph::to_string(char *buf, const int64_t buf_len) const
{
  int64_t pos = 0;
  databuff_printf(buf, buf_len, pos, "Dump dependence graph\n");
  for(int64_t i = 0; i < graph_.count(); ++i)
  {
    const SpNode &node = graph_.at(i);
    databuff_printf(buf, buf_len, pos, "%ld[%d, s:%d, t:%d]: ", node.id_, degree_.at(node.id_), is_stype(i), is_ttype(i));
    const SpNode *nxt = node.next_;
    while(nxt != NULL)
    {
      databuff_printf(buf, buf_len, pos, "%ld, ", nxt->id_);
      nxt = nxt->next_;
    }
    databuff_printf(buf, buf_len, pos, "\n");
  }
  return pos;
}
