/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_duf.h"
#include "Wind_Turbine_31c4daf8_3_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_3_ds_externals.h"
#include "Wind_Turbine_31c4daf8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_3_ds_duf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t14, NeDsMethodOutput *t15)
{
  PmRealVector out;
  real_T zc_int15;
  real_T intermediate_der52;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t11;
  real_T t13;
  real_T t1_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_1;
  int32_T M_idx_14;
  int32_T M_idx_15;
  int32_T M_idx_13;
  int32_T M_idx_17;
  int32_T M_idx_18;
  int32_T M_idx_16;
  int32_T M_idx_8;
  int32_T M_idx_9;
  real_T X_idx_24;
  M_idx_8 = t14->mM.mX[8];
  M_idx_9 = t14->mM.mX[9];
  M_idx_13 = t14->mM.mX[13];
  M_idx_14 = t14->mM.mX[14];
  M_idx_15 = t14->mM.mX[15];
  M_idx_16 = t14->mM.mX[16];
  M_idx_17 = t14->mM.mX[17];
  M_idx_18 = t14->mM.mX[18];
  U_idx_1 = t14->mU.mX[1];
  U_idx_2 = t14->mU.mX[2];
  X_idx_1 = t14->mX.mX[1];
  X_idx_24 = t14->mX.mX[24];
  out = t15->mDUF;
  if (M_idx_14 != 0) {
    zc_int15 = 5.0E-5;
  } else if (M_idx_15 != 0) {
    zc_int15 = 1.0E-12;
  } else {
    zc_int15 = -(U_idx_1 + -24.0) * 0.01;
  }

  t5 = M_idx_13 != 0 ? zc_int15 : 1.0E-12;
  zc_int15 = 1.1280975852233448E-5 / (t5 == 0.0 ? 1.0E-16 : t5) / 2.0 * 1.0E-5;
  if (M_idx_17 != 0) {
    t6 = 5.0E-5;
  } else if (M_idx_18 != 0) {
    t6 = 1.0E-12;
  } else {
    t6 = -(U_idx_2 + -24.0) * 0.01;
  }

  t13 = M_idx_16 != 0 ? t6 : 1.0E-12;
  t6 = 1.1280975852233448E-5 / (t13 == 0.0 ? 1.0E-16 : t13) / 2.0 * 1.0E-5;
  if (M_idx_14 != 0) {
    U_idx_1 = 0.0;
  } else if (M_idx_15 != 0) {
    U_idx_1 = 0.0;
  } else {
    U_idx_1 = -0.01;
  }

  U_idx_2 = M_idx_13 != 0 ? U_idx_1 : 0.0;
  t8 = t5 * t5;
  U_idx_1 = -1.1280975852233448E-5 / (t8 == 0.0 ? 1.0E-16 : t8) * U_idx_2 *
    5.0E-6;
  if (M_idx_17 != 0) {
    t8 = 0.0;
  } else if (M_idx_18 != 0) {
    t8 = 0.0;
  } else {
    t8 = -0.01;
  }

  intermediate_der52 = M_idx_16 != 0 ? t8 : 0.0;
  t9 = t13 * t13;
  t8 = -1.1280975852233448E-5 / (t9 == 0.0 ? 1.0E-16 : t9) * intermediate_der52 *
    5.0E-6;
  if (M_idx_8 != 0) {
    t9 = 0.0;
  } else {
    t9 = M_idx_9 != 0 ? 0.0 : -1.0;
  }

  t1_idx_0 = t9;
  t7 = pmf_sqrt(pmf_sqrt(X_idx_24 * X_idx_24 + zc_int15 * zc_int15));
  t9 = pmf_sqrt(X_idx_24 * X_idx_24 + zc_int15 * zc_int15) * pmf_sqrt(pmf_sqrt
    (X_idx_24 * X_idx_24 + zc_int15 * zc_int15));
  t11 = pmf_sqrt(pmf_sqrt(X_idx_24 * X_idx_24 + zc_int15 * zc_int15)) * pmf_sqrt
    (pmf_sqrt(X_idx_24 * X_idx_24 + zc_int15 * zc_int15));
  U_idx_1 = -((1.0 / (t7 == 0.0 ? 1.0E-16 : t7) * X_idx_24 * U_idx_2 *
               0.031919356375394323 + -(X_idx_24 * t5 * 0.031919356375394323) /
               (t11 == 0.0 ? 1.0E-16 : t11) * (1.0 / (t9 == 0.0 ? 1.0E-16 : t9))
               * U_idx_1 * zc_int15 * 0.5) * 3.1622776601683789E+8);
  zc_int15 = pmf_sqrt(pmf_sqrt(-X_idx_1 * -X_idx_1 + t6 * t6));
  t5 = pmf_sqrt(-X_idx_1 * -X_idx_1 + t6 * t6) * pmf_sqrt(pmf_sqrt(-X_idx_1 *
    -X_idx_1 + t6 * t6));
  t7 = -(-X_idx_1 * t13 * 0.031919356375394323);
  t13 = pmf_sqrt(pmf_sqrt(-X_idx_1 * -X_idx_1 + t6 * t6)) * pmf_sqrt(pmf_sqrt
    (-X_idx_1 * -X_idx_1 + t6 * t6));
  out.mX[0] = t1_idx_0;
  out.mX[1] = U_idx_1;
  out.mX[2] = -((1.0 / (zc_int15 == 0.0 ? 1.0E-16 : zc_int15) * -X_idx_1 *
                 intermediate_der52 * 0.031919356375394323 + t7 / (t13 == 0.0 ?
    1.0E-16 : t13) * (1.0 / (t5 == 0.0 ? 1.0E-16 : t5)) * t8 * t6 * 0.5) *
                3.1622776601683789E+8) * 0.0009618732;
  (void)sys;
  (void)t15;
  return 0;
}
