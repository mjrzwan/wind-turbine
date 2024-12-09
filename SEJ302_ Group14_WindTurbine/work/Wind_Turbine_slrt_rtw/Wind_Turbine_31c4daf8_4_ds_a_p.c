/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_4_ds_a_p.h"
#include "Wind_Turbine_31c4daf8_4_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_4_ds_externals.h"
#include "Wind_Turbine_31c4daf8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_4_ds_a_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 18ULL;
  out.mNumRow = 18ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 4;
  out.mJc[2] = 5;
  out.mJc[3] = 5;
  out.mJc[4] = 8;
  out.mJc[5] = 9;
  out.mJc[6] = 9;
  out.mJc[7] = 9;
  out.mJc[8] = 10;
  out.mJc[9] = 11;
  out.mJc[10] = 12;
  out.mJc[11] = 13;
  out.mJc[12] = 14;
  out.mJc[13] = 16;
  out.mJc[14] = 17;
  out.mJc[15] = 19;
  out.mJc[16] = 20;
  out.mJc[17] = 22;
  out.mJc[18] = 24;
  out.mIr[0] = 1;
  out.mIr[1] = 13;
  out.mIr[2] = 14;
  out.mIr[3] = 17;
  out.mIr[4] = 11;
  out.mIr[5] = 12;
  out.mIr[6] = 14;
  out.mIr[7] = 16;
  out.mIr[8] = 12;
  out.mIr[9] = 0;
  out.mIr[10] = 11;
  out.mIr[11] = 8;
  out.mIr[12] = 10;
  out.mIr[13] = 9;
  out.mIr[14] = 2;
  out.mIr[15] = 15;
  out.mIr[16] = 15;
  out.mIr[17] = 3;
  out.mIr[18] = 15;
  out.mIr[19] = 4;
  out.mIr[20] = 13;
  out.mIr[21] = 14;
  out.mIr[22] = 5;
  out.mIr[23] = 16;
  (void)sys;
  (void)t2;
  return 0;
}
