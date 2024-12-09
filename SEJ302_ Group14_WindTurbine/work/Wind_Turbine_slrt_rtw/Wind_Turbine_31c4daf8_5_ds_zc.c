/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_5_ds_zc.h"
#include "Wind_Turbine_31c4daf8_5_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_5_ds_externals.h"
#include "Wind_Turbine_31c4daf8_5_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_5_ds_zc(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t15, NeDsMethodOutput *t16)
{
  PmRealVector out;
  real_T Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_1_Ideal_Prop7;
  real_T intrm_sf_mf_17;
  real_T intrm_sf_mf_21;
  real_T intrm_sf_mf_37;
  real_T intrm_sf_mf_41;
  real_T t0;
  real_T t1;
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T X_idx_6;
  real_T U_idx_0;
  real_T X_idx_0;
  real_T X_idx_24;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_3;
  real_T X_idx_2;
  int32_T M_idx_16;
  int32_T M_idx_14;
  int32_T M_idx_13;
  int32_T M_idx_3;
  int32_T M_idx_2;
  int32_T M_idx_8;
  int32_T M_idx_6;
  int32_T M_idx_5;
  int32_T M_idx_17;
  int32_T M_idx_12;
  real_T X_idx_4;
  real_T X_idx_1;
  int32_T M_idx_10;
  real_T X_idx_8;
  M_idx_2 = t15->mM.mX[2];
  M_idx_3 = t15->mM.mX[3];
  M_idx_5 = t15->mM.mX[5];
  M_idx_6 = t15->mM.mX[6];
  M_idx_8 = t15->mM.mX[8];
  M_idx_10 = t15->mM.mX[10];
  M_idx_12 = t15->mM.mX[12];
  M_idx_13 = t15->mM.mX[13];
  M_idx_14 = t15->mM.mX[14];
  M_idx_16 = t15->mM.mX[16];
  M_idx_17 = t15->mM.mX[17];
  U_idx_0 = t15->mU.mX[0];
  U_idx_1 = t15->mU.mX[1];
  U_idx_2 = t15->mU.mX[2];
  X_idx_0 = t15->mX.mX[0];
  X_idx_1 = t15->mX.mX[1];
  X_idx_2 = t15->mX.mX[2];
  X_idx_3 = t15->mX.mX[3];
  X_idx_4 = t15->mX.mX[4];
  X_idx_6 = t15->mX.mX[6];
  X_idx_8 = t15->mX.mX[8];
  X_idx_24 = t15->mX.mX[24];
  out = t16->mZC;
  Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_1_Ideal_Prop7 = -X_idx_6 +
    U_idx_0;
  if (-X_idx_6 > 0.003) {
    intrm_sf_mf_17 = 0.005;
  } else if (-X_idx_6 < 6.0E-13) {
    intrm_sf_mf_17 = 1.0E-12;
  } else {
    intrm_sf_mf_17 = -X_idx_6 * 1.6666666666666667;
  }

  if (X_idx_6 > 0.003) {
    intrm_sf_mf_21 = 0.005;
  } else if (X_idx_6 < 6.0E-13) {
    intrm_sf_mf_21 = 1.0E-12;
  } else {
    intrm_sf_mf_21 = X_idx_6 * 1.6666666666666667;
  }

  if (-(U_idx_1 + -24.0) > 0.005) {
    intrm_sf_mf_37 = 5.0E-5;
  } else if (-(U_idx_1 + -24.0) < 9.9999999999999991E-11) {
    intrm_sf_mf_37 = 1.0E-12;
  } else {
    intrm_sf_mf_37 = -(U_idx_1 + -24.0) * 0.01;
  }

  if (-(U_idx_2 + -24.0) > 0.005) {
    intrm_sf_mf_41 = 5.0E-5;
  } else if (-(U_idx_2 + -24.0) < 9.9999999999999991E-11) {
    intrm_sf_mf_41 = 1.0E-12;
  } else {
    intrm_sf_mf_41 = -(U_idx_2 + -24.0) * 0.01;
  }

  if (M_idx_16 != 0) {
    t0 = -(U_idx_2 + -24.0) - 0.005;
  } else {
    t0 = 0.0;
  }

  if ((M_idx_14 == 0) && (M_idx_13 != 0)) {
    t1 = 9.9999999999999991E-11 - (-(U_idx_1 + -24.0));
  } else {
    t1 = 0.0;
  }

  if (M_idx_13 != 0) {
    t2 = -(U_idx_1 + -24.0) - 0.005;
  } else {
    t2 = 0.0;
  }

  if ((M_idx_3 == 0) && (M_idx_2 != 0)) {
    t3 = 6.0E-13 - X_idx_6;
  } else {
    t3 = 0.0;
  }

  if (M_idx_8 == 0) {
    t4 = -0.3 - Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_1_Ideal_Prop7;
  } else {
    t4 = 0.0;
  }

  if (M_idx_2 != 0) {
    t5 = X_idx_6 - 0.003;
  } else {
    t5 = 0.0;
  }

  if ((M_idx_6 == 0) && (M_idx_5 != 0)) {
    t6 = 6.0E-13 - (-X_idx_6);
  } else {
    t6 = 0.0;
  }

  if ((M_idx_6 == 0) && (M_idx_5 != 0)) {
    t7 = 6.0E-13 - (-X_idx_6);
  } else {
    t7 = 0.0;
  }

  if (M_idx_5 != 0) {
    t8 = -X_idx_6 - 0.003;
  } else {
    t8 = 0.0;
  }

  if (M_idx_5 != 0) {
    t9 = -X_idx_6 - 0.003;
  } else {
    t9 = 0.0;
  }

  if (M_idx_2 != 0) {
    t10 = X_idx_6 - 0.003;
  } else {
    t10 = 0.0;
  }

  if ((M_idx_3 == 0) && (M_idx_2 != 0)) {
    X_idx_6 = 6.0E-13 - X_idx_6;
  } else {
    X_idx_6 = 0.0;
  }

  if ((M_idx_17 == 0) && (M_idx_16 != 0)) {
    U_idx_0 = 9.9999999999999991E-11 - (-(U_idx_2 + -24.0));
  } else {
    U_idx_0 = 0.0;
  }

  if (M_idx_12 == 0) {
    U_idx_1 = X_idx_4 - -1.4967;
  } else {
    U_idx_1 = 0.0;
  }

  out.mX[0] = X_idx_1 - -1.01325;
  out.mX[1] = (real_T)(X_idx_0 + X_idx_24 > -1.01325);
  out.mX[2] = t0;
  out.mX[3] = intrm_sf_mf_41 - 1.0E-12;
  out.mX[4] = t1;
  out.mX[5] = t2;
  out.mX[6] = intrm_sf_mf_37 - 1.0E-12;
  out.mX[7] = M_idx_10 == 0 ? -X_idx_8 : 0.0;
  out.mX[8] = X_idx_8 - 0.1;
  out.mX[9] = t3;
  out.mX[10] = intrm_sf_mf_21 - 1.0E-12;
  out.mX[11] = X_idx_0 - -1.01325;
  out.mX[12] = t4;
  out.mX[13] = intrm_sf_mf_21 - 1.0E-12;
  out.mX[14] = t5;
  out.mX[15] = t6;
  out.mX[16] = t7;
  out.mX[17] = t8;
  out.mX[18] = t9;
  out.mX[19] = t10;
  out.mX[20] = X_idx_6;
  out.mX[21] = U_idx_0;
  out.mX[22] = intrm_sf_mf_17 - 1.0E-12;
  out.mX[23] = intrm_sf_mf_17 - 1.0E-12;
  out.mX[24] = U_idx_1;
  out.mX[25] = X_idx_4;
  out.mX[26] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_1_Ideal_Prop7 -
    0.3;
  out.mX[27] = (X_idx_3 * 0.005 + 0.0001) - 0.0001;
  out.mX[28] = (X_idx_2 * 0.005 + 0.0001) - 0.0001;
  (void)sys;
  (void)t16;
  return 0;
}
