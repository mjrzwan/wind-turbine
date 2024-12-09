/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_1_ds_dxf.h"
#include "Wind_Turbine_31c4daf8_1_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_1_ds_externals.h"
#include "Wind_Turbine_31c4daf8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_1_ds_dxf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t89, NeDsMethodOutput *t90)
{
  PmRealVector out;
  real_T nonscalar0[7];
  real_T nonscalar1[7];
  real_T t5;
  real_T t7;
  real_T t9;
  real_T t23[1];
  real_T t45;
  real_T t46;
  real_T t47;
  real_T t75;
  real_T t76;
  real_T t78;
  real_T X[110];
  ETTS0 efOut;
  size_t _in1ivar;
  real_T b_efOut[1];
  ETTS0 c_efOut;
  real_T d_efOut[1];
  ETTS0 e_efOut;
  real_T f_efOut[1];
  ETTS0 g_efOut;
  real_T h_efOut[1];
  int32_T b;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_2;
  int32_T M_idx_3;
  M_idx_0 = t89->mM.mX[0];
  M_idx_1 = t89->mM.mX[1];
  M_idx_2 = t89->mM.mX[2];
  M_idx_3 = t89->mM.mX[3];
  for (b = 0; b < 110; b++) {
    X[b] = t89->mX.mX[b];
  }

  out = t90->mDXF;
  nonscalar0[0] = -147.65485471872026;
  nonscalar0[1] = -125.66370614359172;
  nonscalar0[2] = -62.831853071795862;
  nonscalar0[3] = -0.0;
  nonscalar0[4] = 62.831853071795862;
  nonscalar0[5] = 125.66370614359172;
  nonscalar0[6] = 147.65485471872026;
  nonscalar1[0] = 0.0;
  nonscalar1[1] = 700.0;
  nonscalar1[2] = 800.0;
  nonscalar1[3] = 900.0;
  nonscalar1[4] = 800.0;
  nonscalar1[5] = 700.0;
  nonscalar1[6] = 0.0;
  if (X[1ULL] > 0.0) {
    t7 = 1.0;
  } else {
    t7 = X[1ULL] < 0.0 ? -1.0 : 0.0;
  }

  if (X[3ULL] > 0.0) {
    t45 = 1.0;
  } else {
    t45 = X[3ULL] < 0.0 ? -1.0 : 0.0;
  }

  if (X[5ULL] > 0.0) {
    t46 = 1.0;
  } else {
    t46 = X[5ULL] < 0.0 ? -1.0 : 0.0;
  }

  if (X[7ULL] > 0.0) {
    t47 = 1.0;
  } else {
    t47 = X[7ULL] < 0.0 ? -1.0 : 0.0;
  }

  t23[0ULL] = t7 * X[12ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&efOut.mField0, (void *)&efOut.mField1,
    (void *)&efOut.mField2, (void *)nonscalar0, (void *)t23, (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_derivatives((void *)&b_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)nonscalar1, (void *)
    &_in1ivar);
  t23[0ULL] = t45 * X[34ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&c_efOut.mField0, (void *)
    &c_efOut.mField1, (void *)&c_efOut.mField2, (void *)nonscalar0, (void *)t23,
    (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_derivatives((void *)&d_efOut, (void *)c_efOut.mField0,
    (void *)c_efOut.mField1, (void *)c_efOut.mField2, (void *)nonscalar1, (void *)
    &_in1ivar);
  t23[0ULL] = t46 * X[49ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&e_efOut.mField0, (void *)
    &e_efOut.mField1, (void *)&e_efOut.mField2, (void *)nonscalar0, (void *)t23,
    (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_derivatives((void *)&f_efOut, (void *)e_efOut.mField0,
    (void *)e_efOut.mField1, (void *)e_efOut.mField2, (void *)nonscalar1, (void *)
    &_in1ivar);
  t23[0ULL] = t47 * X[64ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&g_efOut.mField0, (void *)
    &g_efOut.mField1, (void *)&g_efOut.mField2, (void *)nonscalar0, (void *)t23,
    (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_derivatives((void *)&h_efOut, (void *)g_efOut.mField0,
    (void *)g_efOut.mField1, (void *)g_efOut.mField2, (void *)nonscalar1, (void *)
    &_in1ivar);
  t75 = X[11ULL] * X[11ULL];
  if (M_idx_0 != 0) {
    t5 = -(b_efOut[0] * t7 * t7);
  } else {
    t5 = 0.0;
  }

  t76 = X[33ULL] * X[33ULL];
  if (M_idx_1 != 0) {
    t9 = -(d_efOut[0] * t45 * t45);
  } else {
    t9 = 0.0;
  }

  t78 = X[48ULL] * X[48ULL];
  if (M_idx_2 != 0) {
    t45 = -(f_efOut[0] * t46 * t46);
  } else {
    t45 = 0.0;
  }

  t46 = X[63ULL] * X[63ULL];
  if (M_idx_3 != 0) {
    t7 = -(h_efOut[0] * t47 * t47);
  } else {
    t7 = 0.0;
  }

  out.mX[0] = M_idx_0 != 0 ? 0.0 : -1.0;
  out.mX[1] = M_idx_1 != 0 ? 0.0 : -1.0;
  out.mX[2] = M_idx_2 != 0 ? 0.0 : -1.0;
  out.mX[3] = M_idx_3 != 0 ? 0.0 : -1.0;
  out.mX[4] = -(-(X[12ULL] * X[13ULL] * 0.001) / (t75 == 0.0 ? 1.0E-16 : t75) *
                1000.0);
  out.mX[5] = t5;
  out.mX[6] = -(1.0 / (X[11ULL] == 0.0 ? 1.0E-16 : X[11ULL]) * (X[13ULL] * 0.001)
                * 1000.0);
  out.mX[7] = 1.0;
  out.mX[8] = -(1.0 / (X[11ULL] == 0.0 ? 1.0E-16 : X[11ULL]) * (X[12ULL] * 0.001)
                * 1000.0);
  out.mX[9] = -(-(X[34ULL] * X[35ULL] * 0.001) / (t76 == 0.0 ? 1.0E-16 : t76) *
                1000.0);
  out.mX[10] = t9;
  out.mX[11] = -(1.0 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]) * (X[35ULL] *
    0.001) * 1000.0);
  out.mX[12] = 1.0;
  out.mX[13] = -(1.0 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]) * (X[34ULL] *
    0.001) * 1000.0);
  out.mX[14] = -(-(X[49ULL] * X[50ULL] * 0.001) / (t78 == 0.0 ? 1.0E-16 : t78) *
                 1000.0);
  out.mX[15] = t45;
  out.mX[16] = -(1.0 / (X[48ULL] == 0.0 ? 1.0E-16 : X[48ULL]) * (X[50ULL] *
    0.001) * 1000.0);
  out.mX[17] = 1.0;
  out.mX[18] = -(1.0 / (X[48ULL] == 0.0 ? 1.0E-16 : X[48ULL]) * (X[49ULL] *
    0.001) * 1000.0);
  out.mX[19] = -(-(X[64ULL] * X[65ULL] * 0.001) / (t46 == 0.0 ? 1.0E-16 : t46) *
                 1000.0);
  out.mX[20] = t7;
  out.mX[21] = -(1.0 / (X[63ULL] == 0.0 ? 1.0E-16 : X[63ULL]) * (X[65ULL] *
    0.001) * 1000.0);
  out.mX[22] = 1.0;
  out.mX[23] = -(1.0 / (X[63ULL] == 0.0 ? 1.0E-16 : X[63ULL]) * (X[64ULL] *
    0.001) * 1000.0);
  (void)sys;
  (void)t90;
  return 0;
}
