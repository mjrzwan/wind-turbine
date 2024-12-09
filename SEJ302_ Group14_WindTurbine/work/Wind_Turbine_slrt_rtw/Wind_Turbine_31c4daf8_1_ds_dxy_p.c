/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_1_ds_dxy_p.h"
#include "Wind_Turbine_31c4daf8_1_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_1_ds_externals.h"
#include "Wind_Turbine_31c4daf8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_1_ds_dxy_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_1[111] = { 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 6, 6, 7,
    7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 11, 11, 12,
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 15, 15, 16, 17, 17, 17, 17,
    17, 17, 17, 17, 17, 17, 18, 18, 19, 19, 20, 21, 21, 21, 21, 21, 21, 21, 21,
    21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
    21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21 };

  (void)t1;
  out = t2->mDXY_P;
  out.mNumCol = 110ULL;
  out.mNumRow = 17ULL;
  for (b = 0; b < 111; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 1;
  out.mIr[1] = 5;
  out.mIr[2] = 9;
  out.mIr[3] = 13;
  out.mIr[4] = 2;
  out.mIr[5] = 0;
  out.mIr[6] = 3;
  out.mIr[7] = 4;
  out.mIr[8] = 4;
  out.mIr[9] = 6;
  out.mIr[10] = 7;
  out.mIr[11] = 8;
  out.mIr[12] = 8;
  out.mIr[13] = 10;
  out.mIr[14] = 11;
  out.mIr[15] = 12;
  out.mIr[16] = 12;
  out.mIr[17] = 14;
  out.mIr[18] = 15;
  out.mIr[19] = 16;
  out.mIr[20] = 16;
  (void)sys;
  (void)t2;
  return 0;
}
