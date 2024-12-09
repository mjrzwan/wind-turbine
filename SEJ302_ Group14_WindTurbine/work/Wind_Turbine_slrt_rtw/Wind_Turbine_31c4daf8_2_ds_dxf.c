/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_2_ds_dxf.h"
#include "Wind_Turbine_31c4daf8_2_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_2_ds_externals.h"
#include "Wind_Turbine_31c4daf8_2_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_2_ds_dxf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t106, NeDsMethodOutput *t107)
{
  PmRealVector out;
  real_T zc_int14;
  real_T zc_int17;
  real_T zc_int4;
  real_T intermediate_der12;
  real_T intermediate_der29;
  real_T t1;
  real_T t3[27];
  real_T t6[5];
  size_t t12;
  real_T t16;
  real_T t18;
  real_T t25;
  real_T t26;
  real_T t28;
  real_T t29;
  real_T t42;
  real_T t43;
  real_T t44;
  real_T t46;
  real_T t50;
  real_T t58;
  real_T t59;
  real_T t60;
  real_T t62;
  real_T t63;
  real_T t64;
  real_T t66;
  real_T t70;
  real_T t71;
  real_T t75;
  real_T t78;
  real_T t79;
  real_T t80;
  real_T t84;
  real_T t91;
  real_T t104;
  real_T X_idx_0;
  real_T X_idx_9;
  real_T X_idx_1;
  real_T X_idx_11;
  real_T X_idx_14;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_6;
  real_T X_idx_15;
  int32_T M_idx_6;
  int32_T M_idx_7;
  int32_T M_idx_5;
  int32_T M_idx_14;
  int32_T M_idx_15;
  int32_T M_idx_13;
  int32_T M_idx_17;
  int32_T M_idx_18;
  int32_T M_idx_16;
  int32_T M_idx_3;
  int32_T M_idx_4;
  int32_T M_idx_2;
  int32_T M_idx_10;
  int32_T M_idx_11;
  real_T X_idx_8;
  int32_T M_idx_12;
  int32_T M_idx_22;
  int32_T M_idx_8;
  int32_T M_idx_9;
  real_T DP_R_idx_2;
  real_T DP_R_idx_0;
  real_T DP_R_idx_3;
  real_T DP_R_idx_1;
  int32_T M_idx_0;
  int32_T M_idx_1;
  real_T X_idx_24;
  M_idx_0 = t106->mM.mX[0];
  M_idx_1 = t106->mM.mX[1];
  M_idx_2 = t106->mM.mX[2];
  M_idx_3 = t106->mM.mX[3];
  M_idx_4 = t106->mM.mX[4];
  M_idx_5 = t106->mM.mX[5];
  M_idx_6 = t106->mM.mX[6];
  M_idx_7 = t106->mM.mX[7];
  M_idx_8 = t106->mM.mX[8];
  M_idx_9 = t106->mM.mX[9];
  M_idx_10 = t106->mM.mX[10];
  M_idx_11 = t106->mM.mX[11];
  M_idx_12 = t106->mM.mX[12];
  M_idx_13 = t106->mM.mX[13];
  M_idx_14 = t106->mM.mX[14];
  M_idx_15 = t106->mM.mX[15];
  M_idx_16 = t106->mM.mX[16];
  M_idx_17 = t106->mM.mX[17];
  M_idx_18 = t106->mM.mX[18];
  M_idx_22 = t106->mM.mX[22];
  U_idx_1 = t106->mU.mX[1];
  U_idx_2 = t106->mU.mX[2];
  X_idx_0 = t106->mX.mX[0];
  X_idx_1 = t106->mX.mX[1];
  X_idx_6 = t106->mX.mX[6];
  X_idx_8 = t106->mX.mX[8];
  X_idx_9 = t106->mX.mX[9];
  X_idx_11 = t106->mX.mX[11];
  X_idx_14 = t106->mX.mX[14];
  X_idx_15 = t106->mX.mX[15];
  X_idx_24 = t106->mX.mX[24];
  DP_R_idx_0 = t106->mDP_R.mX[0];
  DP_R_idx_1 = t106->mDP_R.mX[1];
  DP_R_idx_2 = t106->mDP_R.mX[2];
  DP_R_idx_3 = t106->mDP_R.mX[3];
  out = t107->mDXF;
  t42 = -X_idx_0 + X_idx_9;
  t43 = -X_idx_1 + X_idx_11;
  t104 = X_idx_14 * 0.002;
  t59 = pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 +
    1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_1 /
    12428.460456240617);
  t18 = 1.0000062909088354 / (t59 == 0.0 ? 1.0E-16 : t59);
  t28 = pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 +
    1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_0 /
    12428.460456240617);
  if (M_idx_6 != 0) {
    t50 = 0.005;
  } else if (M_idx_7 != 0) {
    t50 = 1.0E-12;
  } else {
    t50 = -X_idx_6 * 1.6666666666666667;
  }

  t59 = M_idx_5 != 0 ? t50 : 1.0E-12;
  t50 = 1.1280975852233448E-5 / (t59 == 0.0 ? 1.0E-16 : t59) / 2.0 * 1.0E-5;
  if (M_idx_14 != 0) {
    t62 = 5.0E-5;
  } else if (M_idx_15 != 0) {
    t62 = 1.0E-12;
  } else {
    t62 = -(U_idx_1 + -24.0) * 0.01;
  }

  zc_int14 = M_idx_13 != 0 ? t62 : 1.0E-12;
  t62 = 1.1280975852233448E-5 / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14) / 2.0 *
    1.0E-5;
  if (M_idx_17 != 0) {
    t63 = 5.0E-5;
  } else if (M_idx_18 != 0) {
    t63 = 1.0E-12;
  } else {
    t63 = -(U_idx_2 + -24.0) * 0.01;
  }

  zc_int17 = M_idx_16 != 0 ? t63 : 1.0E-12;
  t63 = 1.1280975852233448E-5 / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) / 2.0 *
    1.0E-5;
  if (M_idx_3 != 0) {
    t64 = 0.005;
  } else if (M_idx_4 != 0) {
    t64 = 1.0E-12;
  } else {
    t64 = X_idx_6 * 1.6666666666666667;
  }

  zc_int4 = M_idx_2 != 0 ? t64 : 1.0E-12;
  t64 = 1.1280975852233448E-5 / (zc_int4 == 0.0 ? 1.0E-16 : zc_int4) / 2.0 *
    1.0E-5;
  t66 = (X_idx_1 + 1.01325) * (X_idx_1 + 1.01325);
  t70 = (pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 +
           1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_1 /
          12428.460456240617)) * (pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_1 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_1 / 12428.460456240617));
  t1 = (-1.01325 / (t66 == 0.0 ? 1.0E-16 : t66) * pmf_pow(1.01325 / (X_idx_1 +
          1.01325 == 0.0 ? 1.0E-16 : X_idx_1 + 1.01325), -0.2857142857142857) *
        0.0035893754486719313 + exp(-X_idx_1 / 12428.460456240617) *
        -8.0460488531214409E-5) * (-1.0000062909088354 / (t70 == 0.0 ? 1.0E-16 :
    t70));
  intermediate_der12 = 0.002 * t18 * 0.005;
  t18 = t104 * t1 * 0.005;
  t58 = 1.7;
  t71 = (X_idx_0 + 1.01325) * (X_idx_0 + 1.01325);
  t75 = (pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 +
           1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_0 /
          12428.460456240617)) * (pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_0 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_0 / 12428.460456240617));
  t66 = (-1.01325 / (t71 == 0.0 ? 1.0E-16 : t71) * pmf_pow(1.01325 / (X_idx_0 +
           1.01325 == 0.0 ? 1.0E-16 : X_idx_0 + 1.01325), -0.2857142857142857) *
         0.0035893754486719313 + exp(-X_idx_0 / 12428.460456240617) *
         -8.0460488531214409E-5) * (-1.0000062909088354 / (t75 == 0.0 ? 1.0E-16 :
    t75));
  t70 = 0.002 * (1.0000062909088354 / (t28 == 0.0 ? 1.0E-16 : t28)) * -0.005;
  t16 = t104 * t66 * -0.005;
  if (M_idx_6 != 0) {
    t104 = 0.0;
  } else if (M_idx_7 != 0) {
    t104 = 0.0;
  } else {
    t104 = -1.6666666666666667;
  }

  U_idx_1 = M_idx_5 != 0 ? t104 : 0.0;
  t25 = t59 * t59;
  t104 = -1.1280975852233448E-5 / (t25 == 0.0 ? 1.0E-16 : t25) * U_idx_1 *
    5.0E-6;
  if (M_idx_10 != 0) {
    t66 = (X_idx_8 - 0.1) * (real_T)(X_idx_15 > 0.0) * 10000.000000000002;
  } else if (M_idx_11 != 0) {
    t66 = -((real_T)(X_idx_15 < 0.0) * 1.0000000000000001E+9) * X_idx_8 * 1.0E-5;
  } else {
    t66 = 0.0;
  }

  if (M_idx_10 != 0) {
    intermediate_der29 = (X_idx_15 > 0.0 ? X_idx_15 : 0.0) * 10000.000000000002;
  } else if (M_idx_11 != 0) {
    intermediate_der29 = -((X_idx_15 < 0.0 ? X_idx_15 : 0.0) *
      1.0000000000000001E+9) * 1.0E-5;
  } else {
    intermediate_der29 = 0.0;
  }

  if (M_idx_3 != 0) {
    t28 = 0.0;
  } else if (M_idx_4 != 0) {
    t28 = 0.0;
  } else {
    t28 = 1.6666666666666667;
  }

  t29 = M_idx_2 != 0 ? t28 : 0.0;
  t26 = zc_int4 * zc_int4;
  t28 = -1.1280975852233448E-5 / (t26 == 0.0 ? 1.0E-16 : t26) * t29 * 5.0E-6;
  if (M_idx_12 != 0) {
    t60 = -1.0E+7;
  } else {
    t60 = M_idx_22 != 0 ? 0.0 : -1.0E+7;
  }

  if (M_idx_8 != 0) {
    t1 = 0.0;
  } else {
    t1 = (real_T)(M_idx_9 == 0);
  }

  if (M_idx_12 != 0) {
    t71 = -t58;
  } else {
    t71 = M_idx_22 != 0 ? 0.0 : -t58;
  }

  t44 = -(-(t16 * 999999.99999999988) * 0.00020100376062929444);
  t16 = pmf_sqrt(pmf_sqrt(t42 * t42 + DP_R_idx_2 * DP_R_idx_2));
  t58 = pmf_sqrt(t42 * t42 + DP_R_idx_2 * DP_R_idx_2) * pmf_sqrt(pmf_sqrt(t42 *
    t42 + DP_R_idx_2 * DP_R_idx_2));
  t78 = -(DP_R_idx_0 * t42 * 0.031919356375394323);
  t79 = pmf_sqrt(pmf_sqrt(t42 * t42 + DP_R_idx_2 * DP_R_idx_2)) * pmf_sqrt
    (pmf_sqrt(t42 * t42 + DP_R_idx_2 * DP_R_idx_2));
  t46 = -(-(t18 * 999999.99999999988) * 0.00020100376062929444);
  t18 = pmf_sqrt(pmf_sqrt(t43 * t43 + DP_R_idx_3 * DP_R_idx_3));
  t75 = pmf_sqrt(t43 * t43 + DP_R_idx_3 * DP_R_idx_3) * pmf_sqrt(pmf_sqrt(t43 *
    t43 + DP_R_idx_3 * DP_R_idx_3));
  t80 = -(DP_R_idx_1 * t43 * 0.031919356375394323);
  U_idx_2 = pmf_sqrt(pmf_sqrt(t43 * t43 + DP_R_idx_3 * DP_R_idx_3)) * pmf_sqrt
    (pmf_sqrt(t43 * t43 + DP_R_idx_3 * DP_R_idx_3));
  t25 = pmf_sqrt(pmf_sqrt(-X_idx_1 * -X_idx_1 + t63 * t63));
  t26 = pmf_sqrt(-X_idx_1 * -X_idx_1 + t63 * t63) * pmf_sqrt(pmf_sqrt(-X_idx_1 *
    -X_idx_1 + t63 * t63));
  t84 = pmf_sqrt(pmf_sqrt(-X_idx_1 * -X_idx_1 + t63 * t63)) * pmf_sqrt(pmf_sqrt(
    -X_idx_1 * -X_idx_1 + t63 * t63));
  X_idx_14 = -((-(1.0 / (t25 == 0.0 ? 1.0E-16 : t25)) * zc_int17 *
                0.031919356375394323 + -(-(-X_idx_1 * zc_int17 *
    0.031919356375394323) / (t84 == 0.0 ? 1.0E-16 : t84) * (1.0 / (t26 == 0.0 ?
    1.0E-16 : t26)) * -X_idx_1) * 0.5) * 3.1622776601683789E+8) * 0.0009618732;
  zc_int17 = pmf_sqrt(pmf_sqrt(X_idx_9 * X_idx_9 + t50 * t50));
  X_idx_6 = pmf_sqrt(X_idx_9 * X_idx_9 + t50 * t50) * pmf_sqrt(pmf_sqrt(X_idx_9 *
    X_idx_9 + t50 * t50));
  t84 = -(X_idx_9 * t59 * 0.031919356375394323);
  X_idx_0 = pmf_sqrt(pmf_sqrt(X_idx_9 * X_idx_9 + t50 * t50)) * pmf_sqrt
    (pmf_sqrt(X_idx_9 * X_idx_9 + t50 * t50));
  t6[0ULL] = -((1.0 / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) * X_idx_9 * U_idx_1
                * 0.031919356375394323 + t84 / (X_idx_0 == 0.0 ? 1.0E-16 :
    X_idx_0) * (1.0 / (X_idx_6 == 0.0 ? 1.0E-16 : X_idx_6)) * t104 * t50 * 0.5) *
               3.1622776601683789E+8);
  t63 = pmf_sqrt(pmf_sqrt(X_idx_11 * X_idx_11 + t64 * t64));
  t25 = pmf_sqrt(X_idx_11 * X_idx_11 + t64 * t64) * pmf_sqrt(pmf_sqrt(X_idx_11 *
    X_idx_11 + t64 * t64));
  X_idx_8 = -(X_idx_11 * zc_int4 * 0.031919356375394323);
  X_idx_15 = pmf_sqrt(pmf_sqrt(X_idx_11 * X_idx_11 + t64 * t64)) * pmf_sqrt
    (pmf_sqrt(X_idx_11 * X_idx_11 + t64 * t64));
  t6[1ULL] = -((1.0 / (t63 == 0.0 ? 1.0E-16 : t63) * X_idx_11 * t29 *
                0.031919356375394323 + X_idx_8 / (X_idx_15 == 0.0 ? 1.0E-16 :
    X_idx_15) * (1.0 / (t25 == 0.0 ? 1.0E-16 : t25)) * t28 * t64 * 0.5) *
               3.1622776601683789E+8);
  t26 = pmf_sqrt(pmf_sqrt((-X_idx_9 + 200.00000000000003) * (-X_idx_9 +
    200.00000000000003) + t64 * t64));
  DP_R_idx_2 = pmf_sqrt((-X_idx_9 + 200.00000000000003) * (-X_idx_9 +
    200.00000000000003) + t64 * t64) * pmf_sqrt(pmf_sqrt((-X_idx_9 +
    200.00000000000003) * (-X_idx_9 + 200.00000000000003) + t64 * t64));
  DP_R_idx_3 = -((-X_idx_9 + 200.00000000000003) * zc_int4 *
                 0.031919356375394323);
  X_idx_1 = pmf_sqrt(pmf_sqrt((-X_idx_9 + 200.00000000000003) * (-X_idx_9 +
    200.00000000000003) + t64 * t64)) * pmf_sqrt(pmf_sqrt((-X_idx_9 +
    200.00000000000003) * (-X_idx_9 + 200.00000000000003) + t64 * t64));
  t6[2ULL] = -((1.0 / (t26 == 0.0 ? 1.0E-16 : t26) * (-X_idx_9 +
    200.00000000000003) * t29 * 0.031919356375394323 + DP_R_idx_3 / (X_idx_1 ==
    0.0 ? 1.0E-16 : X_idx_1) * (1.0 / (DP_R_idx_2 == 0.0 ? 1.0E-16 : DP_R_idx_2))
                * t28 * t64 * 0.5) * 3.1622776601683789E+8);
  t28 = pmf_sqrt(pmf_sqrt((-X_idx_11 + 200.00000000000003) * (-X_idx_11 +
    200.00000000000003) + t50 * t50));
  t29 = pmf_sqrt((-X_idx_11 + 200.00000000000003) * (-X_idx_11 +
    200.00000000000003) + t50 * t50) * pmf_sqrt(pmf_sqrt((-X_idx_11 +
    200.00000000000003) * (-X_idx_11 + 200.00000000000003) + t50 * t50));
  t64 = -((-X_idx_11 + 200.00000000000003) * t59 * 0.031919356375394323);
  t91 = pmf_sqrt(pmf_sqrt((-X_idx_11 + 200.00000000000003) * (-X_idx_11 +
    200.00000000000003) + t50 * t50)) * pmf_sqrt(pmf_sqrt((-X_idx_11 +
    200.00000000000003) * (-X_idx_11 + 200.00000000000003) + t50 * t50));
  t6[3ULL] = -((1.0 / (t28 == 0.0 ? 1.0E-16 : t28) * (-X_idx_11 +
    200.00000000000003) * U_idx_1 * 0.031919356375394323 + t64 / (t91 == 0.0 ?
    1.0E-16 : t91) * (1.0 / (t29 == 0.0 ? 1.0E-16 : t29)) * t104 * t50 * 0.5) *
               3.1622776601683789E+8);
  t6[4ULL] = t1;
  U_idx_1 = -((1.0 / (t18 == 0.0 ? 1.0E-16 : t18) * DP_R_idx_1 *
               0.031919356375394323 + t80 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2)
               * (1.0 / (t75 == 0.0 ? 1.0E-16 : t75)) * t43 * 0.5) *
              3.1622776601683789E+8);
  t3[0ULL] = t44;
  t3[1ULL] = -((-(1.0 / (t16 == 0.0 ? 1.0E-16 : t16) * DP_R_idx_0) *
                0.031919356375394323 + -(t78 / (t79 == 0.0 ? 1.0E-16 : t79) *
    (1.0 / (t58 == 0.0 ? 1.0E-16 : t58)) * t42) * 0.5) * 3.1622776601683789E+8);
  t3[2ULL] = t46;
  t3[3ULL] = -((-(1.0 / (t18 == 0.0 ? 1.0E-16 : t18) * DP_R_idx_1) *
                0.031919356375394323 + -(t80 / (U_idx_2 == 0.0 ? 1.0E-16 :
    U_idx_2) * (1.0 / (t75 == 0.0 ? 1.0E-16 : t75)) * t43) * 0.5) *
               3.1622776601683789E+8);
  t3[4ULL] = X_idx_14;
  t3[5ULL] = -(M_idx_0 != 0 ? 0.005 : 0.0);
  t3[6ULL] = -(M_idx_1 != 0 ? 0.005 : 0.0);
  t3[7ULL] = t60;
  for (t12 = 0ULL; t12 < 5ULL; t12++) {
    t3[t12 + 8ULL] = t6[t12];
  }

  t3[14ULL] = -((1.0 / (t16 == 0.0 ? 1.0E-16 : t16) * DP_R_idx_0 *
                 0.031919356375394323 + t78 / (t79 == 0.0 ? 1.0E-16 : t79) *
                 (1.0 / (t58 == 0.0 ? 1.0E-16 : t58)) * t42 * 0.5) *
                3.1622776601683789E+8);
  t42 = pmf_sqrt(pmf_sqrt(X_idx_24 * X_idx_24 + t62 * t62));
  t43 = pmf_sqrt(X_idx_24 * X_idx_24 + t62 * t62) * pmf_sqrt(pmf_sqrt(X_idx_24 *
    X_idx_24 + t62 * t62));
  X_idx_14 = pmf_sqrt(pmf_sqrt(X_idx_24 * X_idx_24 + t62 * t62)) * pmf_sqrt
    (pmf_sqrt(X_idx_24 * X_idx_24 + t62 * t62));
  out.mX[0] = t3[0];
  out.mX[1] = t3[1];
  out.mX[2] = t3[2];
  out.mX[3] = t3[3];
  out.mX[4] = t3[4];
  out.mX[5] = t3[5];
  out.mX[6] = t3[6];
  out.mX[7] = t3[7];
  out.mX[8] = t3[8];
  out.mX[9] = t3[9];
  out.mX[10] = t3[10];
  out.mX[11] = t3[11];
  out.mX[12] = t3[12];
  out.mX[13] = -intermediate_der29 * 0.0009999999999999998;
  out.mX[14] = t3[14];
  out.mX[15] = -((1.0 / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) * t59 *
                  0.031919356375394323 + t84 / (X_idx_0 == 0.0 ? 1.0E-16 :
    X_idx_0) * (1.0 / (X_idx_6 == 0.0 ? 1.0E-16 : X_idx_6)) * X_idx_9 * 0.5) *
                 3.1622776601683789E+8);
  out.mX[16] = -((-(1.0 / (t26 == 0.0 ? 1.0E-16 : t26)) * zc_int4 *
                  0.031919356375394323 + -(DP_R_idx_3 / (X_idx_1 == 0.0 ?
    1.0E-16 : X_idx_1) * (1.0 / (DP_R_idx_2 == 0.0 ? 1.0E-16 : DP_R_idx_2)) *
    (-X_idx_9 + 200.00000000000003)) * 0.5) * 3.1622776601683789E+8);
  out.mX[17] = U_idx_1;
  out.mX[18] = -((1.0 / (t63 == 0.0 ? 1.0E-16 : t63) * zc_int4 *
                  0.031919356375394323 + X_idx_8 / (X_idx_15 == 0.0 ? 1.0E-16 :
    X_idx_15) * (1.0 / (t25 == 0.0 ? 1.0E-16 : t25)) * X_idx_11 * 0.5) *
                 3.1622776601683789E+8);
  out.mX[19] = -((-(1.0 / (t28 == 0.0 ? 1.0E-16 : t28)) * t59 *
                  0.031919356375394323 + -(t64 / (t91 == 0.0 ? 1.0E-16 : t91) *
    (1.0 / (t29 == 0.0 ? 1.0E-16 : t29)) * (-X_idx_11 + 200.00000000000003)) *
                  0.5) * 3.1622776601683789E+8);
  out.mX[20] = -(-(t70 * 999999.99999999988) * 0.00020100376062929444);
  out.mX[21] = -(-(intermediate_der12 * 999999.99999999988) *
                 0.00020100376062929444);
  out.mX[22] = t71;
  out.mX[23] = -t66 * 0.0009999999999999998;
  out.mX[24] = 1.0;
  out.mX[25] = 0.05;
  out.mX[26] = -((1.0 / (t42 == 0.0 ? 1.0E-16 : t42) * zc_int14 *
                  0.031919356375394323 + -(X_idx_24 * zc_int14 *
    0.031919356375394323) / (X_idx_14 == 0.0 ? 1.0E-16 : X_idx_14) * (1.0 / (t43
    == 0.0 ? 1.0E-16 : t43)) * X_idx_24 * 0.5) * 3.1622776601683789E+8);
  (void)sys;
  (void)t107;
  return 0;
}
