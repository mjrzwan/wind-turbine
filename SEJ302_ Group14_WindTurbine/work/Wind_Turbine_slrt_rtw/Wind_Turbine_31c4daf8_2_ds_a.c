/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_a.h"
#include "Wind_Turbine_31c4daf8_2_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_externals.h"
#include "Wind_Turbine_31c4daf8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_2_ds_a(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mA;
  out.mX[0] = 0.0009999999999999998;
  out.mX[1] = 1.0;
  out.mX[2] = -1.0;
  out.mX[3] = 1.0;
  out.mX[4] = -1.0;
  out.mX[5] = -0.99999999999999989;
  out.mX[6] = -0.00020100376062929444;
  out.mX[7] = 1.0;
  out.mX[8] = -1.0;
  out.mX[9] = 1.0;
  out.mX[10] = -1.0;
  out.mX[11] = -0.0009618732;
  out.mX[12] = -0.00020100376062929444;
  out.mX[13] = 0.0009618732;
  out.mX[14] = -0.002;
  out.mX[15] = 0.002;
  out.mX[16] = 0.002;
  out.mX[17] = -0.002;
  out.mX[18] = 0.002;
  out.mX[19] = 0.00020100376062929444;
  out.mX[20] = -1.0000000000000002E-6;
  out.mX[21] = -1.0;
  out.mX[22] = 1.0;
  out.mX[23] = 1.0;
  out.mX[24] = 0.002;
  out.mX[25] = 1.0;
  out.mX[26] = 1.0;
  out.mX[27] = 1.0;
  out.mX[28] = 1.0;
  out.mX[29] = 1.0;
  out.mX[30] = 1.0;
  out.mX[31] = -0.002;
  out.mX[32] = -0.002;
  out.mX[33] = 0.0009999999999999998;
  (void)sys;
  (void)t2;
  return 0;
}
