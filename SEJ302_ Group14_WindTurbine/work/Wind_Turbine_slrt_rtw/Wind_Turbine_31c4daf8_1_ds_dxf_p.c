/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_1_ds_dxf_p.h"
#include "Wind_Turbine_31c4daf8_1_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_1_ds_externals.h"
#include "Wind_Turbine_31c4daf8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_1_ds_dxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_1[111] = { 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 7,
    9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 12, 14, 14,
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 17, 19, 19, 19, 19, 19, 19,
    19, 19, 19, 19, 19, 19, 19, 20, 22, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24 };

  (void)t1;
  out = t2->mDXF_P;
  out.mNumCol = 110ULL;
  out.mNumRow = 110ULL;
  for (b = 0; b < 111; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 104;
  out.mIr[1] = 88;
  out.mIr[2] = 72;
  out.mIr[3] = 56;
  out.mIr[4] = 109;
  out.mIr[5] = 104;
  out.mIr[6] = 109;
  out.mIr[7] = 104;
  out.mIr[8] = 109;
  out.mIr[9] = 93;
  out.mIr[10] = 88;
  out.mIr[11] = 93;
  out.mIr[12] = 88;
  out.mIr[13] = 93;
  out.mIr[14] = 77;
  out.mIr[15] = 72;
  out.mIr[16] = 77;
  out.mIr[17] = 72;
  out.mIr[18] = 77;
  out.mIr[19] = 61;
  out.mIr[20] = 56;
  out.mIr[21] = 61;
  out.mIr[22] = 56;
  out.mIr[23] = 61;
  (void)sys;
  (void)t2;
  return 0;
}
