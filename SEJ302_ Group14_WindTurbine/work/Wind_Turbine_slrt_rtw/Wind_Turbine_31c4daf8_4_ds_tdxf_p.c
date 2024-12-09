/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_4_ds_tdxf_p.h"
#include "Wind_Turbine_31c4daf8_4_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_4_ds_externals.h"
#include "Wind_Turbine_31c4daf8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_4_ds_tdxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 18ULL;
  out.mNumRow = 18ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 5;
  out.mJc[2] = 7;
  out.mJc[3] = 7;
  out.mJc[4] = 10;
  out.mJc[5] = 11;
  out.mJc[6] = 11;
  out.mJc[7] = 12;
  out.mJc[8] = 14;
  out.mJc[9] = 16;
  out.mJc[10] = 18;
  out.mJc[11] = 19;
  out.mJc[12] = 20;
  out.mJc[13] = 22;
  out.mJc[14] = 23;
  out.mJc[15] = 25;
  out.mJc[16] = 26;
  out.mJc[17] = 28;
  out.mJc[18] = 30;
  out.mIr[0] = 1;
  out.mIr[1] = 6;
  out.mIr[2] = 13;
  out.mIr[3] = 14;
  out.mIr[4] = 17;
  out.mIr[5] = 6;
  out.mIr[6] = 11;
  out.mIr[7] = 12;
  out.mIr[8] = 14;
  out.mIr[9] = 16;
  out.mIr[10] = 12;
  out.mIr[11] = 7;
  out.mIr[12] = 0;
  out.mIr[13] = 6;
  out.mIr[14] = 6;
  out.mIr[15] = 11;
  out.mIr[16] = 6;
  out.mIr[17] = 8;
  out.mIr[18] = 10;
  out.mIr[19] = 9;
  out.mIr[20] = 2;
  out.mIr[21] = 15;
  out.mIr[22] = 15;
  out.mIr[23] = 3;
  out.mIr[24] = 15;
  out.mIr[25] = 4;
  out.mIr[26] = 13;
  out.mIr[27] = 14;
  out.mIr[28] = 5;
  out.mIr[29] = 16;
  (void)sys;
  (void)t2;
  return 0;
}
