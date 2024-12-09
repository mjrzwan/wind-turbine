/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_1_ds_f.h"
#include "Wind_Turbine_31c4daf8_1_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_1_ds_externals.h"
#include "Wind_Turbine_31c4daf8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_1_ds_f(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t37, NeDsMethodOutput *t38)
{
  PmRealVector out;
  real_T nonscalar0[7];
  real_T nonscalar1[7];
  real_T t4;
  real_T t6;
  real_T t16[110];
  real_T t20[1];
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t28;
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
  int32_T M_idx_3;
  int32_T M_idx_2;
  int32_T M_idx_1;
  int32_T M_idx_0;
  M_idx_0 = t37->mM.mX[0];
  M_idx_1 = t37->mM.mX[1];
  M_idx_2 = t37->mM.mX[2];
  M_idx_3 = t37->mM.mX[3];
  for (b = 0; b < 110; b++) {
    X[b] = t37->mX.mX[b];
  }

  out = t38->mF;
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
    t28 = 1.0;
  } else {
    t28 = X[1ULL] < 0.0 ? -1.0 : 0.0;
  }

  t20[0ULL] = t28 * X[12ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&efOut.mField0, (void *)&efOut.mField1,
    (void *)&efOut.mField2, (void *)nonscalar0, (void *)t20, (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_value((void *)&b_efOut, (void *)efOut.mField0, (void *)
    efOut.mField1, (void *)efOut.mField2, (void *)nonscalar1, (void *)&_in1ivar);
  if (X[3ULL] > 0.0) {
    t27 = 1.0;
  } else {
    t27 = X[3ULL] < 0.0 ? -1.0 : 0.0;
  }

  t20[0ULL] = t27 * X[34ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&c_efOut.mField0, (void *)
    &c_efOut.mField1, (void *)&c_efOut.mField2, (void *)nonscalar0, (void *)t20,
    (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_value((void *)&d_efOut, (void *)c_efOut.mField0, (void *)
    c_efOut.mField1, (void *)c_efOut.mField2, (void *)nonscalar1, (void *)
    &_in1ivar);
  if (X[5ULL] > 0.0) {
    t26 = 1.0;
  } else {
    t26 = X[5ULL] < 0.0 ? -1.0 : 0.0;
  }

  t20[0ULL] = t26 * X[49ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&e_efOut.mField0, (void *)
    &e_efOut.mField1, (void *)&e_efOut.mField2, (void *)nonscalar0, (void *)t20,
    (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_value((void *)&f_efOut, (void *)e_efOut.mField0, (void *)
    e_efOut.mField1, (void *)e_efOut.mField2, (void *)nonscalar1, (void *)
    &_in1ivar);
  if (X[7ULL] > 0.0) {
    t25 = 1.0;
  } else {
    t25 = X[7ULL] < 0.0 ? -1.0 : 0.0;
  }

  t20[0ULL] = t25 * X[64ULL];
  _in1ivar = 7ULL;
  tlu2_linear_nearest_prelookup((void *)&g_efOut.mField0, (void *)
    &g_efOut.mField1, (void *)&g_efOut.mField2, (void *)nonscalar0, (void *)t20,
    (void *)&_in1ivar);
  _in1ivar = 7ULL;
  tlu2_1d_linear_nearest_value((void *)&h_efOut, (void *)g_efOut.mField0, (void *)
    g_efOut.mField1, (void *)g_efOut.mField2, (void *)nonscalar1, (void *)
    &_in1ivar);
  if (M_idx_3 != 0) {
    t4 = X[65ULL] - t25 * h_efOut[0];
  } else {
    t4 = X[65ULL] - X[7ULL];
  }

  if (M_idx_2 != 0) {
    t6 = X[50ULL] - t26 * f_efOut[0];
  } else {
    t6 = X[50ULL] - X[5ULL];
  }

  if (M_idx_1 != 0) {
    t26 = X[35ULL] - t27 * d_efOut[0];
  } else {
    t26 = X[35ULL] - X[3ULL];
  }

  if (M_idx_0 != 0) {
    t25 = X[13ULL] - t28 * b_efOut[0];
  } else {
    t25 = X[13ULL] - X[1ULL];
  }

  t16[0ULL] = -0.0;
  t16[1ULL] = -0.0;
  t16[2ULL] = -0.0;
  t16[3ULL] = -0.0;
  t16[4ULL] = -0.0;
  t16[5ULL] = -0.0;
  t16[6ULL] = -0.0;
  t16[7ULL] = -0.0;
  t16[8ULL] = -0.0;
  t16[9ULL] = 0.0;
  t16[10ULL] = 0.0;
  t16[11ULL] = 0.0;
  t16[12ULL] = 0.0;
  t16[13ULL] = 0.0;
  t16[14ULL] = 0.0;
  t16[15ULL] = 0.0;
  t16[16ULL] = 0.0;
  t16[17ULL] = 0.0;
  t16[18ULL] = 0.0;
  t16[19ULL] = 0.0;
  t16[20ULL] = 0.0;
  t16[21ULL] = 0.0;
  t16[22ULL] = 0.0;
  t16[23ULL] = 0.0;
  t16[24ULL] = 0.0;
  t16[25ULL] = 0.0;
  t16[26ULL] = 0.0;
  t16[27ULL] = 0.0;
  t16[28ULL] = 0.0;
  t16[29ULL] = 0.0;
  t16[30ULL] = 0.0;
  t16[31ULL] = 0.0;
  t16[32ULL] = 0.0;
  t16[33ULL] = 0.0;
  t16[34ULL] = 0.0;
  t16[35ULL] = 0.0;
  t16[36ULL] = 0.0;
  t16[37ULL] = 0.0;
  t16[38ULL] = 0.0;
  t16[39ULL] = 0.0;
  t16[40ULL] = 0.0;
  t16[41ULL] = 0.0;
  t16[42ULL] = 0.0;
  t16[43ULL] = 0.0;
  t16[44ULL] = 0.0;
  t16[45ULL] = 0.0;
  t16[46ULL] = 0.0;
  t16[47ULL] = 0.0;
  t16[48ULL] = 0.0;
  t16[49ULL] = 0.0;
  t16[50ULL] = 0.0;
  t16[51ULL] = 0.0;
  t16[52ULL] = 0.0;
  t16[53ULL] = 0.0;
  t16[54ULL] = 0.0;
  t16[55ULL] = 0.0;
  t16[56ULL] = t4;
  t16[57ULL] = 0.0;
  t16[58ULL] = 0.0;
  t16[59ULL] = 0.0;
  t16[60ULL] = 0.0;
  t16[61ULL] = 137.14285714285714 + -(X[64ULL] * X[65ULL] * 0.001 / (X[63ULL] ==
    0.0 ? 1.0E-16 : X[63ULL]) * 1000.0);
  t16[62ULL] = 0.0;
  t16[63ULL] = 0.0;
  t16[64ULL] = 0.0;
  t16[65ULL] = 0.0;
  t16[66ULL] = 0.0;
  t16[67ULL] = 0.0;
  t16[68ULL] = 0.0;
  t16[69ULL] = 0.0;
  t16[70ULL] = 0.0;
  t16[71ULL] = 0.0;
  t16[72ULL] = t6;
  t16[73ULL] = 0.0;
  t16[74ULL] = 0.0;
  t16[75ULL] = 0.0;
  t16[76ULL] = 0.0;
  t16[77ULL] = 137.14285714285714 + -(X[49ULL] * X[50ULL] * 0.001 / (X[48ULL] ==
    0.0 ? 1.0E-16 : X[48ULL]) * 1000.0);
  t16[78ULL] = 0.0;
  t16[79ULL] = 0.0;
  t16[80ULL] = 0.0;
  t16[81ULL] = 0.0;
  t16[82ULL] = 0.0;
  t16[83ULL] = 0.0;
  t16[84ULL] = 0.0;
  t16[85ULL] = 0.0;
  t16[86ULL] = 0.0;
  t16[87ULL] = 0.0;
  t16[88ULL] = t26;
  t16[89ULL] = 0.0;
  t16[90ULL] = 0.0;
  t16[91ULL] = 0.0;
  t16[92ULL] = 0.0;
  t16[93ULL] = 137.14285714285714 + -(X[34ULL] * X[35ULL] * 0.001 / (X[33ULL] ==
    0.0 ? 1.0E-16 : X[33ULL]) * 1000.0);
  t16[94ULL] = 0.0;
  t16[95ULL] = 0.0;
  t16[96ULL] = 0.0;
  t16[97ULL] = 0.0;
  t16[98ULL] = 0.0;
  t16[99ULL] = 0.0;
  t16[100ULL] = 0.0;
  t16[101ULL] = 0.0;
  t16[102ULL] = 0.0;
  t16[103ULL] = 0.0;
  t16[104ULL] = t25;
  t16[105ULL] = 0.0;
  t16[106ULL] = 0.0;
  t16[107ULL] = 0.0;
  t16[108ULL] = 0.0;
  t16[109ULL] = 137.14285714285714 + -(X[12ULL] * X[13ULL] * 0.001 / (X[11ULL] ==
    0.0 ? 1.0E-16 : X[11ULL]) * 1000.0);
  for (b = 0; b < 110; b++) {
    out.mX[b] = t16[b];
  }

  (void)sys;
  (void)t38;
  return 0;
}
