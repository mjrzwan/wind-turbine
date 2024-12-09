/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "Wind_Turbine_31c4daf8_6_geometries.h"

PmfMessageId Wind_Turbine_31c4daf8_6_checkDynamics(const
  RuntimeDerivedValuesBundle *rtdv, const double *state, const double *input,
  const double *inputDot, const double *inputDdot, const double *discreteState,
  double *result, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[16];
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 0.9999999999999301;
  xx[1] = - 1.933705068580764e-7;
  xx[2] = - 3.203773950295217e-7;
  xx[3] = 5.118166157175713e-12;
  xx[4] = input[5];
  xx[5] = input[6];
  xx[6] = input[7];
  pm_math_Quaternion_xform_ra(xx + 0, xx + 4, xx + 7);
  xx[4] = input[8];
  xx[5] = input[9];
  xx[6] = input[10];
  pm_math_Quaternion_xform_ra(xx + 0, xx + 4, xx + 10);
  xx[4] = input[11];
  xx[5] = input[12];
  xx[6] = input[13];
  pm_math_Quaternion_xform_ra(xx + 0, xx + 4, xx + 13);
  xx[0] = xx[7] + xx[10] + xx[13];
  xx[1] = xx[8] + xx[11] + xx[14];
  xx[2] = xx[9] + xx[12] + xx[15];
  result[0] = xx[0] * xx[0] + xx[1] * xx[1] + xx[2] * xx[2];
  return NULL;
}
