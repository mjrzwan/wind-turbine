/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_1_ds_mode.h"
#include "Wind_Turbine_31c4daf8_1_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_1_ds_externals.h"
#include "Wind_Turbine_31c4daf8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_1_ds_mode(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t25, NeDsMethodOutput *t26)
{
  PmIntVector out;
  real_T nonscalar0[7];
  real_T nonscalar1[7];
  real_T intrm_sf_mf_13;
  real_T t7[1];
  real_T t13;
  real_T t14;
  real_T t15;
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
  for (b = 0; b < 110; b++) {
    X[b] = t25->mX.mX[b];
  }

  out = t26->mMODE;
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
  if (X[5ULL] > 0.0) {
    intrm_sf_mf_13 = 1.0;
  } else {
    intrm_sf_mf_13 = X[5ULL] < 0.0 ? -1.0 : 0.0;
  }

  t7[0ULL] = intrm_sf_mf_13 * X[49ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&efOut.mField0, (void *)&efOut.mField1,
    (void *)&efOut.mField2, (void *)nonscalar0, (void *)t7, (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_value((void *)&b_efOut, (void *)efOut.mField0, (void *)
    efOut.mField1, (void *)efOut.mField2, (void *)nonscalar1, (void *)&_in1ivar);
  if (X[7ULL] > 0.0) {
    t13 = 1.0;
  } else {
    t13 = X[7ULL] < 0.0 ? -1.0 : 0.0;
  }

  t7[0ULL] = t13 * X[64ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&c_efOut.mField0, (void *)
    &c_efOut.mField1, (void *)&c_efOut.mField2, (void *)nonscalar0, (void *)t7,
    (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_value((void *)&d_efOut, (void *)c_efOut.mField0, (void *)
    c_efOut.mField1, (void *)c_efOut.mField2, (void *)nonscalar1, (void *)
    &_in1ivar);
  if (X[1ULL] > 0.0) {
    t14 = 1.0;
  } else {
    t14 = X[1ULL] < 0.0 ? -1.0 : 0.0;
  }

  t7[0ULL] = t14 * X[12ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&e_efOut.mField0, (void *)
    &e_efOut.mField1, (void *)&e_efOut.mField2, (void *)nonscalar0, (void *)t7,
    (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_value((void *)&f_efOut, (void *)e_efOut.mField0, (void *)
    e_efOut.mField1, (void *)e_efOut.mField2, (void *)nonscalar1, (void *)
    &_in1ivar);
  if (X[3ULL] > 0.0) {
    t15 = 1.0;
  } else {
    t15 = X[3ULL] < 0.0 ? -1.0 : 0.0;
  }

  t7[0ULL] = t15 * X[34ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&g_efOut.mField0, (void *)
    &g_efOut.mField1, (void *)&g_efOut.mField2, (void *)nonscalar0, (void *)t7,
    (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_value((void *)&h_efOut, (void *)g_efOut.mField0, (void *)
    g_efOut.mField1, (void *)g_efOut.mField2, (void *)nonscalar1, (void *)
    &_in1ivar);
  out.mX[0] = (int32_T)(X[1ULL] * t14 > f_efOut[0]);
  out.mX[1] = (int32_T)(X[3ULL] * t15 > h_efOut[0]);
  out.mX[2] = (int32_T)(X[5ULL] * intrm_sf_mf_13 > b_efOut[0]);
  out.mX[3] = (int32_T)(X[7ULL] * t13 > d_efOut[0]);
  out.mX[4] = (int32_T)(X[11ULL] > 0.0);
  out.mX[5] = (int32_T)(X[33ULL] > 0.0);
  out.mX[6] = (int32_T)(X[48ULL] > 0.0);
  out.mX[7] = (int32_T)(X[63ULL] > 0.0);
  (void)sys;
  (void)t26;
  return 0;
}
