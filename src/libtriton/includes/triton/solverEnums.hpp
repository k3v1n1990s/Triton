//! \file
/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the Apache License 2.0.
*/

#ifndef TRITON_SOLVERENUMS_HPP
#define TRITON_SOLVERENUMS_HPP

#include <triton/config.hpp>



//! The Triton namespace
namespace triton {
/*!
 *  \addtogroup triton
 *  @{
 */

  //! The Engines namespace
  namespace engines {
  /*!
   *  \ingroup triton
   *  \addtogroup engines
   *  @{
   */

    //! The Solver namespace
    namespace solver {
    /*!
     *  \ingroup engines
     *  \addtogroup solver
     *  @{
     */

      /*! The different kind of solvers */
      enum solver_e {
        SOLVER_INVALID = 0, /*!< invalid solver. */
        SOLVER_CUSTOM,      /*!< custom solver. */
        #ifdef TRITON_Z3_INTERFACE
        SOLVER_Z3,          /*!< z3 solver. */
        #endif
      };

    /*! @} End of solver namespace */
    };
  /*! @} End of engines namespace */
  };
/*! @} End of triton namespace */
};

#endif /* TRITON_SOLVERENUMS_HPP */
