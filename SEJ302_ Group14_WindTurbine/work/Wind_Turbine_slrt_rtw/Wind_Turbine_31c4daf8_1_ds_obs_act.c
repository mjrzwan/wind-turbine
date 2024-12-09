/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_1_ds_obs_act.h"
#include "Wind_Turbine_31c4daf8_1_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_1_ds_externals.h"
#include "Wind_Turbine_31c4daf8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_1_ds_obs_act(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t39, NeDsMethodOutput *t40)
{
  PmRealVector out;
  real_T Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  real_T Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Servomoto3;
  real_T Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Simple_Ge0;
  real_T Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_2_Simple_Gea;
  real_T Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_3_Servomoto2;
  real_T Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_3_Simple_Gea;
  real_T Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_4_Servomoto2;
  real_T piece1;
  real_T piece3;
  real_T piece5;
  real_T piece7;
  real_T t0;
  real_T t1;
  real_T t2;
  real_T t3;
  real_T t4[806];
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t9;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t17;
  real_T t23;
  real_T t25;
  real_T t30;
  real_T t31;
  real_T t33;
  real_T X[110];
  int32_T b;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  U_idx_0 = t39->mU.mX[0];
  U_idx_1 = t39->mU.mX[1];
  U_idx_2 = t39->mU.mX[2];
  U_idx_3 = t39->mU.mX[3];
  U_idx_4 = t39->mU.mX[4];
  for (b = 0; b < 110; b++) {
    X[b] = t39->mX.mX[b];
  }

  out = t40->mOBS_ACT;
  Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w = X[9ULL] * -0.16;
  Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Servomoto3 = X[11ULL] *
    0.2857142857142857 + -137.14285714285714;
  Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Servomoto3 =
    -(Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Servomoto3 *
      Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Servomoto3 * 0.0035) /
    -1.0;
  t0 = -X[14ULL] + X[15ULL] * 0.39999999999999997;
  Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Simple_Ge0 =
    -(Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w * -6.25) / -1.0;
  t5 = -Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w / -1.0;
  t6 = (((((X[10ULL] * 0.16 + X[16ULL] * 2.0) + X[18ULL] * 2.0) + X[20ULL] * 2.0)
         + X[17ULL]) + X[19ULL]) + X[21ULL];
  t7 = X[15ULL] * 0.99999999999999989;
  t9 = X[22ULL] * 0.99999999999999978;
  t13 = ((((((X[10ULL] * -0.08 + X[26ULL] * -0.5) + -X[16ULL]) + X[17ULL] * -0.5)
           + -X[18ULL]) + X[19ULL] * -0.5) + -X[20ULL]) + X[21ULL] * -0.5;
  t14 = X[33ULL] * 0.2857142857142857 + -137.14285714285714;
  t14 = -(t14 * t14 * 0.0035) / -1.0;
  t1 = -X[36ULL] + X[37ULL] * 0.39999999999999997;
  Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_2_Simple_Gea = X[16ULL] *
    -2.0 + -X[17ULL];
  t15 = X[37ULL] * 0.99999999999999989;
  t17 = X[38ULL] * 0.99999999999999978;
  Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_3_Servomoto2 = X[48ULL] *
    0.2857142857142857 + -137.14285714285714;
  Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_3_Servomoto2 =
    -(Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_3_Servomoto2 *
      Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_3_Servomoto2 * 0.0035) /
    -1.0;
  t2 = -X[51ULL] + X[52ULL] * 0.39999999999999997;
  Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_3_Simple_Gea = X[18ULL] *
    -2.0 + -X[19ULL];
  t23 = X[52ULL] * 0.99999999999999989;
  t25 = X[53ULL] * 0.99999999999999978;
  t30 = X[63ULL] * 0.2857142857142857 + -137.14285714285714;
  Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_4_Servomoto2 = -(t30 * t30 *
    0.0035) / -1.0;
  t30 = -X[66ULL] + X[67ULL] * 0.39999999999999997;
  t3 = X[20ULL] * -2.0 + -X[21ULL];
  t31 = X[67ULL] * 0.99999999999999989;
  t33 = X[68ULL] * 0.99999999999999978;
  piece1 = X[63ULL] * 0.2857142857142857;
  piece3 = X[48ULL] * 0.2857142857142857;
  piece5 = X[33ULL] * 0.2857142857142857;
  piece7 = X[11ULL] * 0.2857142857142857;
  t4[0ULL] = 0.0;
  t4[1ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[2ULL] = -U_idx_0;
  t4[3ULL] = 0.0;
  t4[4ULL] = U_idx_0;
  t4[5ULL] = X[10ULL];
  t4[6ULL] = U_idx_0;
  t4[7ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[8ULL] = -U_idx_0;
  t4[9ULL] = X[10ULL];
  t4[10ULL] = X[10ULL];
  t4[11ULL] = 0.0;
  t4[12ULL] = 0.0;
  t4[13ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[14ULL] = X[0ULL];
  t4[15ULL] = 0.0;
  t4[16ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w * -6.25;
  t4[17ULL] = X[9ULL];
  t4[18ULL] = X[0ULL];
  t4[19ULL] = 0.0;
  t4[20ULL] = X[9ULL];
  t4[21ULL] = 0.0;
  t4[22ULL] = -137.14285714285714 + piece7;
  t4[23ULL] = 0.0;
  t4[24ULL] = 480.0;
  t4[25ULL] = 480.0;
  t4[26ULL] = 0.0;
  t4[27ULL] = 0.0;
  t4[28ULL] = X[12ULL];
  t4[29ULL] = X[12ULL];
  t4[30ULL] = U_idx_1;
  t4[31ULL] = 0.0;
  t4[32ULL] = 480.0;
  t4[33ULL] = 0.0;
  t4[34ULL] = 0.0;
  t4[35ULL] = 137.14285714285714 + -piece7;
  t4[36ULL] = Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Servomoto3 *
    1000.0;
  t4[37ULL] = t0;
  t4[38ULL] = X[13ULL];
  t4[39ULL] = X[1ULL];
  t4[40ULL] = X[11ULL];
  t4[41ULL] = X[12ULL];
  t4[42ULL] = X[12ULL];
  t4[43ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w * -6.25;
  t4[44ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[45ULL] = 0.0;
  t4[46ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w * -6.25;
  t4[47ULL] = 0.0;
  t4[48ULL] = Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Simple_Ge0;
  t4[49ULL] = 0.0;
  t4[50ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[51ULL] = 0.0;
  t4[52ULL] = t5;
  t4[53ULL] = 0.0;
  t4[54ULL] = t6;
  t4[55ULL] = t6 * 6.25;
  t4[56ULL] = X[12ULL];
  t4[57ULL] = X[12ULL];
  t4[58ULL] = X[12ULL];
  t4[59ULL] = -t0;
  t4[60ULL] = -t0;
  t4[61ULL] = 0.0;
  t4[62ULL] = X[12ULL];
  t4[63ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[64ULL] = X[23ULL];
  t4[65ULL] = X[15ULL] * -2.0 + X[22ULL] * 0.44444444444444448;
  t4[66ULL] = X[23ULL];
  t4[67ULL] = X[25ULL];
  t4[68ULL] = X[22ULL] * -1.9999999999999998 + X[24ULL] * 0.5;
  t4[69ULL] = X[25ULL];
  t4[70ULL] = X[27ULL];
  t4[71ULL] = (((((((X[10ULL] * -0.05333333333333333 + X[24ULL] * -2.0) + X
                    [26ULL] * -0.33333333333333331) + X[16ULL] *
                   -0.66666666666666663) + X[17ULL] * -0.33333333333333331) + X
                 [18ULL] * -0.66666666666666663) + X[19ULL] *
                -0.33333333333333331) + X[20ULL] * -0.66666666666666663) + X
    [21ULL] * -0.33333333333333331;
  t4[72ULL] = X[27ULL];
  t4[73ULL] = X[12ULL];
  t4[74ULL] = X[14ULL];
  t4[75ULL] = X[12ULL];
  t4[76ULL] = 0.0;
  t4[77ULL] = 0.0;
  t4[78ULL] = X[23ULL];
  t4[79ULL] = 0.0;
  t4[80ULL] = 0.0;
  t4[81ULL] = X[12ULL];
  t4[82ULL] = X[23ULL];
  t4[83ULL] = 0.0;
  t4[84ULL] = 0.0;
  t4[85ULL] = X[12ULL];
  t4[86ULL] = X[23ULL];
  t4[87ULL] = 0.0;
  t4[88ULL] = X[28ULL];
  t4[89ULL] = 0.0;
  t4[90ULL] = 300.0;
  t4[91ULL] = t7 * 0.60000000000000009;
  t4[92ULL] = X[23ULL];
  t4[93ULL] = X[28ULL];
  t4[94ULL] = 0.0;
  t4[95ULL] = -(X[28ULL] - X[23ULL]) / -1.0;
  t4[96ULL] = t7;
  t4[97ULL] = t7 * -1.6;
  t4[98ULL] = X[23ULL];
  t4[99ULL] = 0.0;
  t4[100ULL] = X[28ULL];
  t4[101ULL] = X[12ULL];
  t4[102ULL] = 300.0;
  t4[103ULL] = X[15ULL] * -0.39999999999999997;
  t4[104ULL] = X[23ULL];
  t4[105ULL] = X[12ULL];
  t4[106ULL] = 0.0;
  t4[107ULL] = -(X[12ULL] - X[23ULL]) / -1.0;
  t4[108ULL] = X[15ULL];
  t4[109ULL] = X[15ULL] * -0.6;
  t4[110ULL] = X[25ULL];
  t4[111ULL] = 0.0;
  t4[112ULL] = 0.0;
  t4[113ULL] = X[23ULL];
  t4[114ULL] = X[25ULL];
  t4[115ULL] = 0.0;
  t4[116ULL] = 0.0;
  t4[117ULL] = X[23ULL];
  t4[118ULL] = X[25ULL];
  t4[119ULL] = 0.0;
  t4[120ULL] = X[29ULL];
  t4[121ULL] = 0.0;
  t4[122ULL] = 300.0;
  t4[123ULL] = t9 * 0.55555555555555569;
  t4[124ULL] = X[25ULL];
  t4[125ULL] = X[29ULL];
  t4[126ULL] = 0.0;
  t4[127ULL] = -(X[29ULL] - X[25ULL]) / -1.0;
  t4[128ULL] = t9;
  t4[129ULL] = t9 * -1.5555555555555558;
  t4[130ULL] = X[25ULL];
  t4[131ULL] = 0.0;
  t4[132ULL] = X[29ULL];
  t4[133ULL] = X[23ULL];
  t4[134ULL] = 300.0;
  t4[135ULL] = X[22ULL] * -0.44444444444444448;
  t4[136ULL] = X[25ULL];
  t4[137ULL] = X[23ULL];
  t4[138ULL] = 0.0;
  t4[139ULL] = -(X[23ULL] - X[25ULL]) / -1.0;
  t4[140ULL] = X[22ULL];
  t4[141ULL] = X[22ULL] * -0.55555555555555558;
  t4[142ULL] = X[27ULL];
  t4[143ULL] = 0.0;
  t4[144ULL] = 0.0;
  t4[145ULL] = X[25ULL];
  t4[146ULL] = X[27ULL];
  t4[147ULL] = 0.0;
  t4[148ULL] = 0.0;
  t4[149ULL] = X[25ULL];
  t4[150ULL] = X[27ULL];
  t4[151ULL] = 0.0;
  t4[152ULL] = X[30ULL];
  t4[153ULL] = 0.0;
  t4[154ULL] = 300.0;
  t4[155ULL] = X[24ULL] * 0.5;
  t4[156ULL] = X[27ULL];
  t4[157ULL] = X[30ULL];
  t4[158ULL] = 0.0;
  t4[159ULL] = -(X[30ULL] - X[27ULL]) / -1.0;
  t4[160ULL] = X[24ULL];
  t4[161ULL] = X[24ULL] * -1.5;
  t4[162ULL] = X[27ULL];
  t4[163ULL] = 0.0;
  t4[164ULL] = X[30ULL];
  t4[165ULL] = X[25ULL];
  t4[166ULL] = 300.0;
  t4[167ULL] = X[24ULL] * -0.5;
  t4[168ULL] = X[27ULL];
  t4[169ULL] = X[25ULL];
  t4[170ULL] = 0.0;
  t4[171ULL] = -(X[25ULL] - X[27ULL]) / -1.0;
  t4[172ULL] = X[24ULL];
  t4[173ULL] = X[24ULL] * -0.5;
  t4[174ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[175ULL] = 0.0;
  t4[176ULL] = 0.0;
  t4[177ULL] = X[27ULL];
  t4[178ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[179ULL] = 0.0;
  t4[180ULL] = 0.0;
  t4[181ULL] = X[27ULL];
  t4[182ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[183ULL] = 0.0;
  t4[184ULL] = X[31ULL];
  t4[185ULL] = 0.0;
  t4[186ULL] = 300.0;
  t4[187ULL] = t13 * 0.33333333333333331;
  t4[188ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[189ULL] = X[31ULL];
  t4[190ULL] = 0.0;
  t4[191ULL] = -(X[31ULL] -
                 Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
                 -6.25) / -1.0;
  t4[192ULL] = t13;
  t4[193ULL] = t13 * -1.3333333333333333;
  t4[194ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[195ULL] = 0.0;
  t4[196ULL] = X[31ULL];
  t4[197ULL] = X[27ULL];
  t4[198ULL] = 300.0;
  t4[199ULL] = t13 * -0.66666666666666663;
  t4[200ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[201ULL] = X[27ULL];
  t4[202ULL] = 0.0;
  t4[203ULL] = -(X[27ULL] -
                 Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
                 -6.25) / -1.0;
  t4[204ULL] = t13;
  t4[205ULL] = t13 * -0.33333333333333331;
  t4[206ULL] = 0.0;
  t4[207ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[208ULL] = X[26ULL];
  t4[209ULL] = X[26ULL] * 1.0E-5;
  t4[210ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[211ULL] = X[12ULL];
  t4[212ULL] = X[2ULL];
  t4[213ULL] = 0.0;
  t4[214ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[215ULL] = X[32ULL];
  t4[216ULL] = X[2ULL];
  t4[217ULL] = 0.0;
  t4[218ULL] = X[32ULL];
  t4[219ULL] = 0.0;
  t4[220ULL] = -137.14285714285714 + piece5;
  t4[221ULL] = 0.0;
  t4[222ULL] = 480.0;
  t4[223ULL] = 480.0;
  t4[224ULL] = 0.0;
  t4[225ULL] = 0.0;
  t4[226ULL] = X[34ULL];
  t4[227ULL] = X[34ULL];
  t4[228ULL] = U_idx_2;
  t4[229ULL] = 0.0;
  t4[230ULL] = 480.0;
  t4[231ULL] = 0.0;
  t4[232ULL] = 0.0;
  t4[233ULL] = 137.14285714285714 + -piece5;
  t4[234ULL] = t14 * 1000.0;
  t4[235ULL] = t1;
  t4[236ULL] = X[35ULL];
  t4[237ULL] = X[3ULL];
  t4[238ULL] = X[33ULL];
  t4[239ULL] = X[34ULL];
  t4[240ULL] = X[34ULL];
  t4[241ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[242ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[243ULL] = 0.0;
  t4[244ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[245ULL] = 0.0;
  t4[246ULL] = Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Simple_Ge0;
  t4[247ULL] = 0.0;
  t4[248ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[249ULL] = 0.0;
  t4[250ULL] = t5;
  t4[251ULL] = 0.0;
  t4[252ULL] = Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_2_Simple_Gea;
  t4[253ULL] = Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_2_Simple_Gea *
    6.25;
  t4[254ULL] = X[34ULL];
  t4[255ULL] = X[34ULL];
  t4[256ULL] = X[34ULL];
  t4[257ULL] = -t1;
  t4[258ULL] = -t1;
  t4[259ULL] = 0.0;
  t4[260ULL] = X[34ULL];
  t4[261ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[262ULL] = X[39ULL];
  t4[263ULL] = X[37ULL] * -2.0 + X[38ULL] * 0.44444444444444448;
  t4[264ULL] = X[39ULL];
  t4[265ULL] = X[41ULL];
  t4[266ULL] = X[38ULL] * -1.9999999999999998 + X[40ULL] * 0.5;
  t4[267ULL] = X[41ULL];
  t4[268ULL] = X[42ULL];
  t4[269ULL] = X[40ULL] * -2.0 + X[16ULL] * 0.66666666666666663;
  t4[270ULL] = X[42ULL];
  t4[271ULL] = X[34ULL];
  t4[272ULL] = X[36ULL];
  t4[273ULL] = X[34ULL];
  t4[274ULL] = 0.0;
  t4[275ULL] = 0.0;
  t4[276ULL] = X[39ULL];
  t4[277ULL] = 0.0;
  t4[278ULL] = 0.0;
  t4[279ULL] = X[34ULL];
  t4[280ULL] = X[39ULL];
  t4[281ULL] = 0.0;
  t4[282ULL] = 0.0;
  t4[283ULL] = X[34ULL];
  t4[284ULL] = X[39ULL];
  t4[285ULL] = 0.0;
  t4[286ULL] = X[43ULL];
  t4[287ULL] = 0.0;
  t4[288ULL] = 300.0;
  t4[289ULL] = t15 * 0.60000000000000009;
  t4[290ULL] = X[39ULL];
  t4[291ULL] = X[43ULL];
  t4[292ULL] = 0.0;
  t4[293ULL] = -(X[43ULL] - X[39ULL]) / -1.0;
  t4[294ULL] = t15;
  t4[295ULL] = t15 * -1.6;
  t4[296ULL] = X[39ULL];
  t4[297ULL] = 0.0;
  t4[298ULL] = X[43ULL];
  t4[299ULL] = X[34ULL];
  t4[300ULL] = 300.0;
  t4[301ULL] = X[37ULL] * -0.39999999999999997;
  t4[302ULL] = X[39ULL];
  t4[303ULL] = X[34ULL];
  t4[304ULL] = 0.0;
  t4[305ULL] = -(X[34ULL] - X[39ULL]) / -1.0;
  t4[306ULL] = X[37ULL];
  t4[307ULL] = X[37ULL] * -0.6;
  t4[308ULL] = X[41ULL];
  t4[309ULL] = 0.0;
  t4[310ULL] = 0.0;
  t4[311ULL] = X[39ULL];
  t4[312ULL] = X[41ULL];
  t4[313ULL] = 0.0;
  t4[314ULL] = 0.0;
  t4[315ULL] = X[39ULL];
  t4[316ULL] = X[41ULL];
  t4[317ULL] = 0.0;
  t4[318ULL] = X[44ULL];
  t4[319ULL] = 0.0;
  t4[320ULL] = 300.0;
  t4[321ULL] = t17 * 0.55555555555555569;
  t4[322ULL] = X[41ULL];
  t4[323ULL] = X[44ULL];
  t4[324ULL] = 0.0;
  t4[325ULL] = -(X[44ULL] - X[41ULL]) / -1.0;
  t4[326ULL] = t17;
  t4[327ULL] = t17 * -1.5555555555555558;
  t4[328ULL] = X[41ULL];
  t4[329ULL] = 0.0;
  t4[330ULL] = X[44ULL];
  t4[331ULL] = X[39ULL];
  t4[332ULL] = 300.0;
  t4[333ULL] = X[38ULL] * -0.44444444444444448;
  t4[334ULL] = X[41ULL];
  t4[335ULL] = X[39ULL];
  t4[336ULL] = 0.0;
  t4[337ULL] = -(X[39ULL] - X[41ULL]) / -1.0;
  t4[338ULL] = X[38ULL];
  t4[339ULL] = X[38ULL] * -0.55555555555555558;
  t4[340ULL] = X[42ULL];
  t4[341ULL] = 0.0;
  t4[342ULL] = 0.0;
  t4[343ULL] = X[41ULL];
  t4[344ULL] = X[42ULL];
  t4[345ULL] = 0.0;
  t4[346ULL] = 0.0;
  t4[347ULL] = X[41ULL];
  t4[348ULL] = X[42ULL];
  t4[349ULL] = 0.0;
  t4[350ULL] = X[45ULL];
  t4[351ULL] = 0.0;
  t4[352ULL] = 300.0;
  t4[353ULL] = X[40ULL] * 0.5;
  t4[354ULL] = X[42ULL];
  t4[355ULL] = X[45ULL];
  t4[356ULL] = 0.0;
  t4[357ULL] = -(X[45ULL] - X[42ULL]) / -1.0;
  t4[358ULL] = X[40ULL];
  t4[359ULL] = X[40ULL] * -1.5;
  t4[360ULL] = X[42ULL];
  t4[361ULL] = 0.0;
  t4[362ULL] = X[45ULL];
  t4[363ULL] = X[41ULL];
  t4[364ULL] = 300.0;
  t4[365ULL] = X[40ULL] * -0.5;
  t4[366ULL] = X[42ULL];
  t4[367ULL] = X[41ULL];
  t4[368ULL] = 0.0;
  t4[369ULL] = -(X[41ULL] - X[42ULL]) / -1.0;
  t4[370ULL] = X[40ULL];
  t4[371ULL] = X[40ULL] * -0.5;
  t4[372ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[373ULL] = 0.0;
  t4[374ULL] = 0.0;
  t4[375ULL] = X[42ULL];
  t4[376ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[377ULL] = 0.0;
  t4[378ULL] = 0.0;
  t4[379ULL] = X[42ULL];
  t4[380ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[381ULL] = 0.0;
  t4[382ULL] = X[46ULL];
  t4[383ULL] = 0.0;
  t4[384ULL] = 300.0;
  t4[385ULL] = X[16ULL] * 0.33333333333333331;
  t4[386ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[387ULL] = X[46ULL];
  t4[388ULL] = 0.0;
  t4[389ULL] = -(X[46ULL] -
                 Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
                 -6.25) / -1.0;
  t4[390ULL] = X[16ULL];
  t4[391ULL] = X[16ULL] * -1.3333333333333333;
  t4[392ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[393ULL] = 0.0;
  t4[394ULL] = X[46ULL];
  t4[395ULL] = X[42ULL];
  t4[396ULL] = 300.0;
  t4[397ULL] = X[16ULL] * -0.66666666666666663;
  t4[398ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[399ULL] = X[42ULL];
  t4[400ULL] = 0.0;
  t4[401ULL] = -(X[42ULL] -
                 Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
                 -6.25) / -1.0;
  t4[402ULL] = X[16ULL];
  t4[403ULL] = X[16ULL] * -0.33333333333333331;
  t4[404ULL] = 0.0;
  t4[405ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[406ULL] = X[17ULL];
  t4[407ULL] = X[17ULL] * 1.0E-5;
  t4[408ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[409ULL] = X[34ULL];
  t4[410ULL] = X[4ULL];
  t4[411ULL] = 0.0;
  t4[412ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[413ULL] = X[47ULL];
  t4[414ULL] = X[4ULL];
  t4[415ULL] = 0.0;
  t4[416ULL] = X[47ULL];
  t4[417ULL] = 0.0;
  t4[418ULL] = -137.14285714285714 + piece3;
  t4[419ULL] = 0.0;
  t4[420ULL] = 480.0;
  t4[421ULL] = 480.0;
  t4[422ULL] = 0.0;
  t4[423ULL] = 0.0;
  t4[424ULL] = X[49ULL];
  t4[425ULL] = X[49ULL];
  t4[426ULL] = U_idx_3;
  t4[427ULL] = 0.0;
  t4[428ULL] = 480.0;
  t4[429ULL] = 0.0;
  t4[430ULL] = 0.0;
  t4[431ULL] = 137.14285714285714 + -piece3;
  t4[432ULL] = Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_3_Servomoto2 *
    1000.0;
  t4[433ULL] = t2;
  t4[434ULL] = X[50ULL];
  t4[435ULL] = X[5ULL];
  t4[436ULL] = X[48ULL];
  t4[437ULL] = X[49ULL];
  t4[438ULL] = X[49ULL];
  t4[439ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[440ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[441ULL] = 0.0;
  t4[442ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[443ULL] = 0.0;
  t4[444ULL] = Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Simple_Ge0;
  t4[445ULL] = 0.0;
  t4[446ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[447ULL] = 0.0;
  t4[448ULL] = t5;
  t4[449ULL] = 0.0;
  t4[450ULL] = Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_3_Simple_Gea;
  t4[451ULL] = Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_3_Simple_Gea *
    6.25;
  t4[452ULL] = X[49ULL];
  t4[453ULL] = X[49ULL];
  t4[454ULL] = X[49ULL];
  t4[455ULL] = -t2;
  t4[456ULL] = -t2;
  t4[457ULL] = 0.0;
  t4[458ULL] = X[49ULL];
  t4[459ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[460ULL] = X[54ULL];
  t4[461ULL] = X[52ULL] * -2.0 + X[53ULL] * 0.44444444444444448;
  t4[462ULL] = X[54ULL];
  t4[463ULL] = X[56ULL];
  t4[464ULL] = X[53ULL] * -1.9999999999999998 + X[55ULL] * 0.5;
  t4[465ULL] = X[56ULL];
  t4[466ULL] = X[57ULL];
  t4[467ULL] = X[55ULL] * -2.0 + X[18ULL] * 0.66666666666666663;
  t4[468ULL] = X[57ULL];
  t4[469ULL] = X[49ULL];
  t4[470ULL] = X[51ULL];
  t4[471ULL] = X[49ULL];
  t4[472ULL] = 0.0;
  t4[473ULL] = 0.0;
  t4[474ULL] = X[54ULL];
  t4[475ULL] = 0.0;
  t4[476ULL] = 0.0;
  t4[477ULL] = X[49ULL];
  t4[478ULL] = X[54ULL];
  t4[479ULL] = 0.0;
  t4[480ULL] = 0.0;
  t4[481ULL] = X[49ULL];
  t4[482ULL] = X[54ULL];
  t4[483ULL] = 0.0;
  t4[484ULL] = X[58ULL];
  t4[485ULL] = 0.0;
  t4[486ULL] = 300.0;
  t4[487ULL] = t23 * 0.60000000000000009;
  t4[488ULL] = X[54ULL];
  t4[489ULL] = X[58ULL];
  t4[490ULL] = 0.0;
  t4[491ULL] = -(X[58ULL] - X[54ULL]) / -1.0;
  t4[492ULL] = t23;
  t4[493ULL] = t23 * -1.6;
  t4[494ULL] = X[54ULL];
  t4[495ULL] = 0.0;
  t4[496ULL] = X[58ULL];
  t4[497ULL] = X[49ULL];
  t4[498ULL] = 300.0;
  t4[499ULL] = X[52ULL] * -0.39999999999999997;
  t4[500ULL] = X[54ULL];
  t4[501ULL] = X[49ULL];
  t4[502ULL] = 0.0;
  t4[503ULL] = -(X[49ULL] - X[54ULL]) / -1.0;
  t4[504ULL] = X[52ULL];
  t4[505ULL] = X[52ULL] * -0.6;
  t4[506ULL] = X[56ULL];
  t4[507ULL] = 0.0;
  t4[508ULL] = 0.0;
  t4[509ULL] = X[54ULL];
  t4[510ULL] = X[56ULL];
  t4[511ULL] = 0.0;
  t4[512ULL] = 0.0;
  t4[513ULL] = X[54ULL];
  t4[514ULL] = X[56ULL];
  t4[515ULL] = 0.0;
  t4[516ULL] = X[59ULL];
  t4[517ULL] = 0.0;
  t4[518ULL] = 300.0;
  t4[519ULL] = t25 * 0.55555555555555569;
  t4[520ULL] = X[56ULL];
  t4[521ULL] = X[59ULL];
  t4[522ULL] = 0.0;
  t4[523ULL] = -(X[59ULL] - X[56ULL]) / -1.0;
  t4[524ULL] = t25;
  t4[525ULL] = t25 * -1.5555555555555558;
  t4[526ULL] = X[56ULL];
  t4[527ULL] = 0.0;
  t4[528ULL] = X[59ULL];
  t4[529ULL] = X[54ULL];
  t4[530ULL] = 300.0;
  t4[531ULL] = X[53ULL] * -0.44444444444444448;
  t4[532ULL] = X[56ULL];
  t4[533ULL] = X[54ULL];
  t4[534ULL] = 0.0;
  t4[535ULL] = -(X[54ULL] - X[56ULL]) / -1.0;
  t4[536ULL] = X[53ULL];
  t4[537ULL] = X[53ULL] * -0.55555555555555558;
  t4[538ULL] = X[57ULL];
  t4[539ULL] = 0.0;
  t4[540ULL] = 0.0;
  t4[541ULL] = X[56ULL];
  t4[542ULL] = X[57ULL];
  t4[543ULL] = 0.0;
  t4[544ULL] = 0.0;
  t4[545ULL] = X[56ULL];
  t4[546ULL] = X[57ULL];
  t4[547ULL] = 0.0;
  t4[548ULL] = X[60ULL];
  t4[549ULL] = 0.0;
  t4[550ULL] = 300.0;
  t4[551ULL] = X[55ULL] * 0.5;
  t4[552ULL] = X[57ULL];
  t4[553ULL] = X[60ULL];
  t4[554ULL] = 0.0;
  t4[555ULL] = -(X[60ULL] - X[57ULL]) / -1.0;
  t4[556ULL] = X[55ULL];
  t4[557ULL] = X[55ULL] * -1.5;
  t4[558ULL] = X[57ULL];
  t4[559ULL] = 0.0;
  t4[560ULL] = X[60ULL];
  t4[561ULL] = X[56ULL];
  t4[562ULL] = 300.0;
  t4[563ULL] = X[55ULL] * -0.5;
  t4[564ULL] = X[57ULL];
  t4[565ULL] = X[56ULL];
  t4[566ULL] = 0.0;
  t4[567ULL] = -(X[56ULL] - X[57ULL]) / -1.0;
  t4[568ULL] = X[55ULL];
  t4[569ULL] = X[55ULL] * -0.5;
  t4[570ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[571ULL] = 0.0;
  t4[572ULL] = 0.0;
  t4[573ULL] = X[57ULL];
  t4[574ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[575ULL] = 0.0;
  t4[576ULL] = 0.0;
  t4[577ULL] = X[57ULL];
  t4[578ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[579ULL] = 0.0;
  t4[580ULL] = X[61ULL];
  t4[581ULL] = 0.0;
  t4[582ULL] = 300.0;
  t4[583ULL] = X[18ULL] * 0.33333333333333331;
  t4[584ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[585ULL] = X[61ULL];
  t4[586ULL] = 0.0;
  t4[587ULL] = -(X[61ULL] -
                 Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
                 -6.25) / -1.0;
  t4[588ULL] = X[18ULL];
  t4[589ULL] = X[18ULL] * -1.3333333333333333;
  t4[590ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[591ULL] = 0.0;
  t4[592ULL] = X[61ULL];
  t4[593ULL] = X[57ULL];
  t4[594ULL] = 300.0;
  t4[595ULL] = X[18ULL] * -0.66666666666666663;
  t4[596ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[597ULL] = X[57ULL];
  t4[598ULL] = 0.0;
  t4[599ULL] = -(X[57ULL] -
                 Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
                 -6.25) / -1.0;
  t4[600ULL] = X[18ULL];
  t4[601ULL] = X[18ULL] * -0.33333333333333331;
  t4[602ULL] = 0.0;
  t4[603ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[604ULL] = X[19ULL];
  t4[605ULL] = X[19ULL] * 1.0E-5;
  t4[606ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[607ULL] = X[49ULL];
  t4[608ULL] = X[6ULL];
  t4[609ULL] = 0.0;
  t4[610ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[611ULL] = X[62ULL];
  t4[612ULL] = X[6ULL];
  t4[613ULL] = 0.0;
  t4[614ULL] = X[62ULL];
  t4[615ULL] = 0.0;
  t4[616ULL] = -137.14285714285714 + piece1;
  t4[617ULL] = 0.0;
  t4[618ULL] = 480.0;
  t4[619ULL] = 480.0;
  t4[620ULL] = 0.0;
  t4[621ULL] = 0.0;
  t4[622ULL] = X[64ULL];
  t4[623ULL] = X[64ULL];
  t4[624ULL] = U_idx_4;
  t4[625ULL] = 0.0;
  t4[626ULL] = 480.0;
  t4[627ULL] = 0.0;
  t4[628ULL] = 0.0;
  t4[629ULL] = 137.14285714285714 + -piece1;
  t4[630ULL] = Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_4_Servomoto2 *
    1000.0;
  t4[631ULL] = t30;
  t4[632ULL] = X[65ULL];
  t4[633ULL] = X[7ULL];
  t4[634ULL] = X[63ULL];
  t4[635ULL] = X[64ULL];
  t4[636ULL] = X[64ULL];
  t4[637ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[638ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[639ULL] = 0.0;
  t4[640ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[641ULL] = 0.0;
  t4[642ULL] = Nacelle_Yaw_System_Servomotor_Servomotor_Yaw_Motor_1_Simple_Ge0;
  t4[643ULL] = 0.0;
  t4[644ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[645ULL] = 0.0;
  t4[646ULL] = t5;
  t4[647ULL] = 0.0;
  t4[648ULL] = t3;
  t4[649ULL] = t3 * 6.25;
  t4[650ULL] = X[64ULL];
  t4[651ULL] = X[64ULL];
  t4[652ULL] = X[64ULL];
  t4[653ULL] = -t30;
  t4[654ULL] = -t30;
  t4[655ULL] = 0.0;
  t4[656ULL] = X[64ULL];
  t4[657ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w;
  t4[658ULL] = X[69ULL];
  t4[659ULL] = X[67ULL] * -2.0 + X[68ULL] * 0.44444444444444448;
  t4[660ULL] = X[69ULL];
  t4[661ULL] = X[71ULL];
  t4[662ULL] = X[68ULL] * -1.9999999999999998 + X[70ULL] * 0.5;
  t4[663ULL] = X[71ULL];
  t4[664ULL] = X[72ULL];
  t4[665ULL] = X[70ULL] * -2.0 + X[20ULL] * 0.66666666666666663;
  t4[666ULL] = X[72ULL];
  t4[667ULL] = X[64ULL];
  t4[668ULL] = X[66ULL];
  t4[669ULL] = X[64ULL];
  t4[670ULL] = 0.0;
  t4[671ULL] = 0.0;
  t4[672ULL] = X[69ULL];
  t4[673ULL] = 0.0;
  t4[674ULL] = 0.0;
  t4[675ULL] = X[64ULL];
  t4[676ULL] = X[69ULL];
  t4[677ULL] = 0.0;
  t4[678ULL] = 0.0;
  t4[679ULL] = X[64ULL];
  t4[680ULL] = X[69ULL];
  t4[681ULL] = 0.0;
  t4[682ULL] = X[73ULL];
  t4[683ULL] = 0.0;
  t4[684ULL] = 300.0;
  t4[685ULL] = t31 * 0.60000000000000009;
  t4[686ULL] = X[69ULL];
  t4[687ULL] = X[73ULL];
  t4[688ULL] = 0.0;
  t4[689ULL] = -(X[73ULL] - X[69ULL]) / -1.0;
  t4[690ULL] = t31;
  t4[691ULL] = t31 * -1.6;
  t4[692ULL] = X[69ULL];
  t4[693ULL] = 0.0;
  t4[694ULL] = X[73ULL];
  t4[695ULL] = X[64ULL];
  t4[696ULL] = 300.0;
  t4[697ULL] = X[67ULL] * -0.39999999999999997;
  t4[698ULL] = X[69ULL];
  t4[699ULL] = X[64ULL];
  t4[700ULL] = 0.0;
  t4[701ULL] = -(X[64ULL] - X[69ULL]) / -1.0;
  t4[702ULL] = X[67ULL];
  t4[703ULL] = X[67ULL] * -0.6;
  t4[704ULL] = X[71ULL];
  t4[705ULL] = 0.0;
  t4[706ULL] = 0.0;
  t4[707ULL] = X[69ULL];
  t4[708ULL] = X[71ULL];
  t4[709ULL] = 0.0;
  t4[710ULL] = 0.0;
  t4[711ULL] = X[69ULL];
  t4[712ULL] = X[71ULL];
  t4[713ULL] = 0.0;
  t4[714ULL] = X[74ULL];
  t4[715ULL] = 0.0;
  t4[716ULL] = 300.0;
  t4[717ULL] = t33 * 0.55555555555555569;
  t4[718ULL] = X[71ULL];
  t4[719ULL] = X[74ULL];
  t4[720ULL] = 0.0;
  t4[721ULL] = -(X[74ULL] - X[71ULL]) / -1.0;
  t4[722ULL] = t33;
  t4[723ULL] = t33 * -1.5555555555555558;
  t4[724ULL] = X[71ULL];
  t4[725ULL] = 0.0;
  t4[726ULL] = X[74ULL];
  t4[727ULL] = X[69ULL];
  t4[728ULL] = 300.0;
  t4[729ULL] = X[68ULL] * -0.44444444444444448;
  t4[730ULL] = X[71ULL];
  t4[731ULL] = X[69ULL];
  t4[732ULL] = 0.0;
  t4[733ULL] = -(X[69ULL] - X[71ULL]) / -1.0;
  t4[734ULL] = X[68ULL];
  t4[735ULL] = X[68ULL] * -0.55555555555555558;
  t4[736ULL] = X[72ULL];
  t4[737ULL] = 0.0;
  t4[738ULL] = 0.0;
  t4[739ULL] = X[71ULL];
  t4[740ULL] = X[72ULL];
  t4[741ULL] = 0.0;
  t4[742ULL] = 0.0;
  t4[743ULL] = X[71ULL];
  t4[744ULL] = X[72ULL];
  t4[745ULL] = 0.0;
  t4[746ULL] = X[75ULL];
  t4[747ULL] = 0.0;
  t4[748ULL] = 300.0;
  t4[749ULL] = X[70ULL] * 0.5;
  t4[750ULL] = X[72ULL];
  t4[751ULL] = X[75ULL];
  t4[752ULL] = 0.0;
  t4[753ULL] = -(X[75ULL] - X[72ULL]) / -1.0;
  t4[754ULL] = X[70ULL];
  t4[755ULL] = X[70ULL] * -1.5;
  t4[756ULL] = X[72ULL];
  t4[757ULL] = 0.0;
  t4[758ULL] = X[75ULL];
  t4[759ULL] = X[71ULL];
  t4[760ULL] = 300.0;
  t4[761ULL] = X[70ULL] * -0.5;
  t4[762ULL] = X[72ULL];
  t4[763ULL] = X[71ULL];
  t4[764ULL] = 0.0;
  t4[765ULL] = -(X[71ULL] - X[72ULL]) / -1.0;
  t4[766ULL] = X[70ULL];
  t4[767ULL] = X[70ULL] * -0.5;
  t4[768ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[769ULL] = 0.0;
  t4[770ULL] = 0.0;
  t4[771ULL] = X[72ULL];
  t4[772ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[773ULL] = 0.0;
  t4[774ULL] = 0.0;
  t4[775ULL] = X[72ULL];
  t4[776ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[777ULL] = 0.0;
  t4[778ULL] = X[76ULL];
  t4[779ULL] = 0.0;
  t4[780ULL] = 300.0;
  t4[781ULL] = X[20ULL] * 0.33333333333333331;
  t4[782ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[783ULL] = X[76ULL];
  t4[784ULL] = 0.0;
  t4[785ULL] = -(X[76ULL] -
                 Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
                 -6.25) / -1.0;
  t4[786ULL] = X[20ULL];
  t4[787ULL] = X[20ULL] * -1.3333333333333333;
  t4[788ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[789ULL] = 0.0;
  t4[790ULL] = X[76ULL];
  t4[791ULL] = X[72ULL];
  t4[792ULL] = 300.0;
  t4[793ULL] = X[20ULL] * -0.66666666666666663;
  t4[794ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[795ULL] = X[72ULL];
  t4[796ULL] = 0.0;
  t4[797ULL] = -(X[72ULL] -
                 Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
                 -6.25) / -1.0;
  t4[798ULL] = X[20ULL];
  t4[799ULL] = X[20ULL] * -0.33333333333333331;
  t4[800ULL] = 0.0;
  t4[801ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[802ULL] = X[21ULL];
  t4[803ULL] = X[21ULL] * 1.0E-5;
  t4[804ULL] = Nacelle_Yaw_System_Servomotor_Rotational_Simscape_Intf_C_w *
    -6.25;
  t4[805ULL] = X[64ULL];
  for (b = 0; b < 806; b++) {
    out.mX[b] = t4[b];
  }

  (void)sys;
  (void)t40;
  return 0;
}
