/**
* Copyright (C) 2013-2016 DaSE
 *This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_procedure.h
* @brief this class if present a procedure in oceanbase
*
* Created by zhujun: support procedure
*
* @version CEDAR 0.2
* @author zhujun <51141500091@ecnu.edu.cn>
* @date 2014_11_23
*/
#ifndef OCEANBASE_SQL_OB_PROCEDURE_H
#define OCEANBASE_SQL_OB_PROCEDURE_H
#include "ob_multi_children_phy_operator.h"
#include "ob_sql_session_info.h"
#include "common/dlist.h"
#include "ob_procedure_stmt.h"
using namespace oceanbase::common;
namespace oceanbase
{
	namespace sql
	{
		class ObPhysicalPlan;
        /**
         * @brief The ObProcedure class represent a procedure physical plan Instance
         */
		class ObProcedure : public ObMultiChildrenPhyOperator
		{
            public:
                ObProcedure();
                virtual ~ObProcedure();
                virtual void reset();
                virtual void reuse();
                virtual int open();
                virtual int close();
                virtual ObPhyOperatorType get_type() const
                {
                    return PHY_PROCEDURE;
                }
                virtual int64_t to_string(char* buf, const int64_t buf_len) const;
                virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
                virtual int get_next_row(const common::ObRow *&row);
                virtual int set_child(int32_t child_idx, ObPhyOperator &child_operator);
                virtual int32_t get_child_num() const;

                /**
                 * @brief set procedure name
                 * @param proc_name the procedure name
                 * @return int
                 */
                int set_proc_name(ObString &proc_name);
                int add_param(ObParamDef &proc_param);
                /**
                 * @brief set procedure parameter
                 * @param params the procedure parameter
                 * @return int
                 */
                int set_params(ObArray<ObParamDef*> &params);
                /**
                 * @brief add a declare variable
                 * @param params type is ObString
                 * @return int
                 */
                int add_declare_var(ObString &var);

                /**
                 * @brief get the procedure parameters
                 * @return ObArray
                 */
                ObArray<ObParamDef*>& get_params();

                /**
                 * @brief gets the elements of parameters index location
                 * @param index
                 * @return
                 */
                ObParamDef* get_param(int64_t index);
                ObString& get_declare_var(int64_t index);
                int64_t get_param_num();
                int64_t get_declare_var_num();
            private:
                //disallow copy
                ObProcedure(const ObProcedure &other);
                ObProcedure& operator=(const ObProcedure &other);
                //function members

            private:
                //data members
                int32_t child_num_; ///< this procedure child ObPhyOperator number
                ObString proc_name_; ///< this procedure name
                ObArray<ObParamDef*> params_;///< this procedure procedure parameter
                ObArray<ObString> declare_variable_;///< In the procedure body declare variables
		};



	}
}

#endif



