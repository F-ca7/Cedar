#ifndef OBPROCEDUREOPTIMIZER_H
#define OBPROCEDUREOPTIMIZER_H

#include "ob_procedure.h"

namespace oceanbase
{
  namespace sql
  {

    class ObProcDepGraph
    {
      public:
        const static int MAX_GRAPH_SIZE = 256;
        enum GraphType {
          Forward,
          Backward
        };

        struct SpNode
        {
            SpNode() : id_(0), next_(NULL) {}
            SpNode(int64_t id, SpNode *nxt) : id_(id), next_(nxt) {}
            int64_t id_;
            SpNode *next_;
        };

        int set_insts(ObIArray<SpInst*> &insts);


        int reorder_for_group(ObSEArray<int64_t, MAX_GRAPH_SIZE> &seq);

        int64_t to_string(char *buf, const int64_t buf_len) const;

      private:
        void build_dep_graph(GraphType type = Forward);
        void mark_done(int64_t id, GraphType type = Forward);

        bool is_leaf(int64_t id) const;
        bool is_root(int64_t id) const;
        bool is_done(int64_t id) const;
        bool is_stype(int64_t id) const;
        bool is_ttype(int64_t id) const;

        static bool check_dep(SpInst *in_node, SpInst *out_node);

        void add_edge(int64_t i, int64_t j);

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

        int group(ObProcedure &proc, ObIArray<int64_t> &seq);

      private:
        ObProcDepGraph graph_;

    };
  }
}

#endif // OBPROCEDUREOPTIMIZER_H
