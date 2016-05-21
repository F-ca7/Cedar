#ifndef OBPROCEDUREOPTIMIZER_H
#define OBPROCEDUREOPTIMIZER_H

#include "ob_procedure.h"

namespace oceanbase
{
  namespace sql
  {

    class ObProcDepGraph
    {
        enum GraphType {
          Forward,
          Backward
        };

        struct SpNode
        {
            SpNode(int64_t id, SpNode *nxt) : id_(id), next_(nxt) {}
            int64_t id_;
            SpNode *next_;
        };

        void build_dep_graph(GraphType type = Forward);

        int set_insts(SpInstList &insts);

        void reset() const;

        bool is_leaf(int64_t id) const;

        bool is_root(int64_t id) const;

        bool is_done(int64_t id) const;

        bool is_stype(int64_t id) const;
        bool is_ttype(int64_t id) const;

        void mark_done(int64_t id, GraphType type = Forward);

        int group_opt(ObSEArray<int64_t, MAX_GRAPH_SIZE> &seq);

      private:

        static bool check_dep(SpInst *in_node, SpInst *out_node);

        int add_edge(int64_t i, int64_t j);

        const static int MAX_GRAPH_SIZE = 256;
        ObSEArray<SpInst *, MAX_GRAPH_SIZE> inst_list_;
        ObSEArray<SpNode, MAX_GRAPH_SIZE> graph_;
        ObSEArray<int, MAX_GRAPH_SIZE> degree_;
        int64_t active_node_count_;
        GraphType type_;
        ModuleArena arena_;
    };

    //Optimizer should handle the following structures:
    //sequential, loop, control instructions.
    class ObProcedureOptimizer
    {
      public:
        ObProcedureOptimizer();

        static int optimize(ObProcedure &proc);

      private:

        static int rule_based_optimize(ObProcedure &proc);
        static int graph_based_optimize(ObProcedure &proc);
        static int specialize_optimize(ObProcedure &proc);

        static int tpcc_optimize(ObProcedure &proc);
        static int tatp_optimize(ObProcedure &proc);
        static int bank_optimize(ObProcedure &proc);
        static int test_optimize(ObProcedure &proc);


      private:
        /**
         * @brief is_simple_loop
         * checking the footscripts of each instructions
         * @param inst
         * @return
         */
        static bool is_simple_loop(SpLoopInst *inst);

        /**
         *
         * @brief loop_split
         *  Optimize is possible when there is no inter-loop dependence.
         *  Checking the invariant of the loop footscript.
         * @param inst
         * @param inst_list
         * @return
         */
        static int loop_split(SpLoopInst *inst, SpInstList &inst_list);

        static int ctrl_split(SpIfCtrlInsts *inst, SpInstList &inst_list);

        int split(SpInst *inst, SpInstList &inst_list);

        int reorder(SpMultiInsts &inst_list);

      private:
        ObProcDepGraph graph_;

    };
  }
}

#endif // OBPROCEDUREOPTIMIZER_H
