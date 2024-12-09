/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_4_ds_qx_p.h"
#include "Wind_Turbine_31c4daf8_4_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_4_ds_externals.h"
#include "Wind_Turbine_31c4daf8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_4_ds_qx_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQX_P;
  out.mNumCol = 18ULL;
  out.mNumRow = 18ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 4;
  out.mJc[9] = 8;
  out.mJc[10] = 8;
  out.mJc[11] = 8;
  out.mJc[12] = 8;
  out.mJc[13] = 10;
  out.mJc[14] = 15;
  out.mJc[15] = 16;
  out.mJc[16] = 20;
  out.mJc[17] = 20;
  out.mJc[18] = 20;
  out.mIr[0] = 7;
  out.mIr[1] = 8;
  out.mIr[2] = 13;
  out.mIr[3] = 15;
  out.mIr[4] = 7;
  out.mIr[5] = 8;
  out.mIr[6] = 13;
  out.mIr[7] = 15;
  out.mIr[8] = 12;
  out.mIr[9] = 13;
  out.mIr[10] = 7;
  out.mIr[11] = 8;
  out.mIr[12] = 12;
  out.mIr[13] = 13;
  out.mIr[14] = 15;
  out.mIr[15] = 14;
  out.mIr[16] = 7;
  out.mIr[17] = 8;
  out.mIr[18] = 13;
  out.mIr[19] = 15;
  (void)sys;
  (void)t2;
  return 0;
}
