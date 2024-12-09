/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_4_ds_cache_i.h"
#include "Wind_Turbine_31c4daf8_4_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_4_ds_externals.h"
#include "Wind_Turbine_31c4daf8_4_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_4_ds_cache_i(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_2;
  int32_T M_idx_3;
  int32_T M_idx_4;
  int32_T M_idx_5;
  int32_T M_idx_6;
  int32_T M_idx_7;
  int32_T M_idx_8;
  int32_T M_idx_9;
  int32_T M_idx_10;
  int32_T M_idx_11;
  int32_T M_idx_12;
  int32_T M_idx_13;
  int32_T M_idx_14;
  M_idx_0 = t1->mM.mX[0];
  M_idx_1 = t1->mM.mX[1];
  M_idx_2 = t1->mM.mX[2];
  M_idx_3 = t1->mM.mX[3];
  M_idx_4 = t1->mM.mX[4];
  M_idx_5 = t1->mM.mX[5];
  M_idx_6 = t1->mM.mX[6];
  M_idx_7 = t1->mM.mX[7];
  M_idx_8 = t1->mM.mX[8];
  M_idx_9 = t1->mM.mX[9];
  M_idx_10 = t1->mM.mX[10];
  M_idx_11 = t1->mM.mX[11];
  M_idx_12 = t1->mM.mX[12];
  M_idx_13 = t1->mM.mX[13];
  M_idx_14 = t1->mM.mX[14];
  out = t2->mCACHE_I;
  out.mX[0] = (int32_T)(M_idx_0 != 0);
  out.mX[1] = (int32_T)(M_idx_1 != 0);
  out.mX[2] = (int32_T)(M_idx_2 != 0);
  out.mX[3] = (int32_T)(M_idx_3 != 0);
  out.mX[4] = (int32_T)(M_idx_4 != 0);
  out.mX[5] = (int32_T)(M_idx_5 != 0);
  out.mX[6] = (int32_T)(M_idx_6 != 0);
  out.mX[7] = (int32_T)(M_idx_7 != 0);
  out.mX[8] = (int32_T)(M_idx_8 != 0);
  out.mX[9] = (int32_T)(M_idx_9 != 0);
  out.mX[10] = (int32_T)(M_idx_10 != 0);
  out.mX[11] = (int32_T)(M_idx_11 != 0);
  out.mX[12] = (int32_T)(M_idx_12 != 0);
  out.mX[13] = (int32_T)(M_idx_13 != 0);
  out.mX[14] = (int32_T)(M_idx_14 != 0);
  (void)sys;
  (void)t2;
  return 0;
}
