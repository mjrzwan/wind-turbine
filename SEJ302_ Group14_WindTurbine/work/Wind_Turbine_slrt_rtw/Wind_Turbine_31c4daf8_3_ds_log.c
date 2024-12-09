/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_log.h"
#include "Wind_Turbine_31c4daf8_3_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_3_ds_externals.h"
#include "Wind_Turbine_31c4daf8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_3_ds_log(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Flow_Rate_1;
  real_T Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  real_T Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Position_Se;
  real_T Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Spring_Load;
  real_T Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Subsystem_I;
  real_T Nacelle_Pitch_System_Hydraulic_Linkage3_Translational_Simscape_;
  real_T t0[183];
  real_T t1;
  int32_T b;
  real_T X_idx_0;
  real_T X_idx_9;
  real_T X_idx_1;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_10;
  real_T X_idx_19;
  real_T X_idx_20;
  real_T X_idx_6;
  real_T U_idx_0;
  real_T X_idx_24;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_23;
  real_T X_idx_2;
  real_T X_idx_16;
  real_T X_idx_3;
  real_T X_idx_17;
  real_T X_idx_18;
  real_T X_idx_4;
  real_T X_idx_21;
  real_T X_idx_5;
  real_T X_idx_22;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T U_idx_3;
  U_idx_0 = t3->mU.mX[0];
  U_idx_1 = t3->mU.mX[1];
  U_idx_2 = t3->mU.mX[2];
  U_idx_3 = t3->mU.mX[3];
  X_idx_0 = t3->mX.mX[0];
  X_idx_1 = t3->mX.mX[1];
  X_idx_2 = t3->mX.mX[2];
  X_idx_3 = t3->mX.mX[3];
  X_idx_4 = t3->mX.mX[4];
  X_idx_5 = t3->mX.mX[5];
  X_idx_6 = t3->mX.mX[6];
  X_idx_7 = t3->mX.mX[7];
  X_idx_8 = t3->mX.mX[8];
  X_idx_9 = t3->mX.mX[9];
  X_idx_10 = t3->mX.mX[10];
  X_idx_11 = t3->mX.mX[11];
  X_idx_12 = t3->mX.mX[12];
  X_idx_13 = t3->mX.mX[13];
  X_idx_14 = t3->mX.mX[14];
  X_idx_15 = t3->mX.mX[15];
  X_idx_16 = t3->mX.mX[16];
  X_idx_17 = t3->mX.mX[17];
  X_idx_18 = t3->mX.mX[18];
  X_idx_19 = t3->mX.mX[19];
  X_idx_20 = t3->mX.mX[20];
  X_idx_21 = t3->mX.mX[21];
  X_idx_22 = t3->mX.mX[22];
  X_idx_23 = t3->mX.mX[23];
  X_idx_24 = t3->mX.mX[24];
  out = t4->mLOG;
  Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Flow_Rate_1 = X_idx_12 *
    0.0009618732 + X_idx_13 * -0.0009618732;
  Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0 = X_idx_14 *
    0.002;
  Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Position_Se = X_idx_14 *
    -0.002;
  Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Spring_Load = X_idx_0 +
    X_idx_24;
  Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Subsystem_I = -X_idx_0 /
    -1.0;
  t1 = -X_idx_1 / -1.0;
  Nacelle_Pitch_System_Hydraulic_Linkage3_Translational_Simscape_ = X_idx_14 +
    X_idx_23;
  t0[0ULL] = X_idx_9 * 99999.999999999985;
  t0[1ULL] = X_idx_0 * 99999.999999999985;
  t0[2ULL] = (-X_idx_0 + X_idx_9) * 99999.999999999985;
  t0[3ULL] = X_idx_10 * 1.0000000000000002E-6;
  t0[4ULL] = X_idx_11 * 99999.999999999985;
  t0[5ULL] = X_idx_1 * 99999.999999999985;
  t0[6ULL] = (-X_idx_1 + X_idx_11) * 99999.999999999985;
  t0[7ULL] = X_idx_12 * 1.0000000000000002E-6;
  t0[8ULL] = 0.0;
  t0[9ULL] = 0.0;
  t0[10ULL] = 0.0;
  t0[11ULL] = 0.0;
  t0[12ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Flow_Rate_1;
  t0[13ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Flow_Rate_1 *
    0.0010396380728769656;
  t0[14ULL] = 0.0;
  t0[15ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Flow_Rate_1 *
    0.0010396380728769656;
  t0[16ULL] = X_idx_0 * 99999.999999999985;
  t0[17ULL] = X_idx_1 * 99999.999999999985;
  t0[18ULL] = 0.0;
  t0[19ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[20ULL] = X_idx_0 * 99999.999999999985;
  t0[21ULL] = 0.0;
  t0[22ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[23ULL] = X_idx_0 * 99999.999999999985;
  t0[24ULL] = 0.0;
  t0[25ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[26ULL] = X_idx_0 * -500.0;
  t0[27ULL] = X_idx_2;
  t0[28ULL] = X_idx_0 * 99999.999999999985;
  t0[29ULL] = (-X_idx_15 + X_idx_10) * 1.0000000000000002E-6;
  t0[30ULL] = X_idx_16;
  t0[31ULL] = X_idx_1 * 99999.999999999985;
  t0[32ULL] = 0.0;
  t0[33ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[34ULL] = X_idx_1 * 99999.999999999985;
  t0[35ULL] = 0.0;
  t0[36ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[37ULL] = X_idx_1 * 500.0;
  t0[38ULL] = X_idx_3;
  t0[39ULL] = X_idx_1 * 99999.999999999985;
  t0[40ULL] = X_idx_13 * 1.0000000000000002E-6;
  t0[41ULL] = X_idx_17;
  t0[42ULL] = 0.0;
  t0[43ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[44ULL] = X_idx_18;
  t0[45ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[46ULL] = X_idx_4;
  t0[47ULL] = 0.0;
  t0[48ULL] = 0.0;
  t0[49ULL] = X_idx_9 * 99999.999999999985;
  t0[50ULL] = X_idx_11 * 99999.999999999985;
  t0[51ULL] = 2.0E+7;
  t0[52ULL] = X_idx_6;
  t0[53ULL] = 0.0;
  t0[54ULL] = X_idx_9 * 99999.999999999985;
  t0[55ULL] = 0.0;
  t0[56ULL] = X_idx_6;
  t0[57ULL] = (-X_idx_10 + X_idx_19) * 1.0000000000000002E-6;
  t0[58ULL] = X_idx_9 * 99999.999999999985;
  t0[59ULL] = X_idx_11 * 99999.999999999985;
  t0[60ULL] = 0.0;
  t0[61ULL] = X_idx_6;
  t0[62ULL] = (-X_idx_12 + X_idx_20) * 1.0000000000000002E-6;
  t0[63ULL] = X_idx_11 * 99999.999999999985;
  t0[64ULL] = 2.0E+7;
  t0[65ULL] = X_idx_9 * 99999.999999999985;
  t0[66ULL] = X_idx_6;
  t0[67ULL] = X_idx_19 * 1.0000000000000002E-6;
  t0[68ULL] = (-X_idx_9 + 200.00000000000003) * 99999.999999999985;
  t0[69ULL] = 2.0E+7;
  t0[70ULL] = X_idx_11 * 99999.999999999985;
  t0[71ULL] = X_idx_6;
  t0[72ULL] = X_idx_20 * 1.0000000000000002E-6;
  t0[73ULL] = (-X_idx_11 + 200.00000000000003) * 99999.999999999985;
  t0[74ULL] = X_idx_9 * 99999.999999999985;
  t0[75ULL] = X_idx_11 * 99999.999999999985;
  t0[76ULL] = 2.0E+7;
  t0[77ULL] = 0.0;
  t0[78ULL] = U_idx_0;
  t0[79ULL] = X_idx_6;
  t0[80ULL] = X_idx_21;
  t0[81ULL] = X_idx_5;
  t0[82ULL] = X_idx_5;
  t0[83ULL] = X_idx_22;
  t0[84ULL] = X_idx_6;
  t0[85ULL] = X_idx_6;
  t0[86ULL] = -X_idx_6 + U_idx_0;
  t0[87ULL] = X_idx_21 * 0.05;
  t0[88ULL] = 0.0;
  t0[89ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[90ULL] = 0.0;
  t0[91ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[92ULL] = X_idx_14;
  t0[93ULL] = X_idx_14 * 0.002;
  t0[94ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[95ULL] = X_idx_7;
  t0[96ULL] = 0.0;
  t0[97ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Position_Se;
  t0[98ULL] = 0.0;
  t0[99ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Position_Se;
  t0[100ULL] = X_idx_7;
  t0[101ULL] = 0.0;
  t0[102ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[103ULL] = 2.0E+7;
  t0[104ULL] = 2.0E+7;
  t0[105ULL] = 0.0;
  t0[106ULL] = 2.0E+7;
  t0[107ULL] = (-X_idx_19 + -X_idx_20) * 1.0000000000000002E-6;
  t0[108ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[109ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[110ULL] = X_idx_23;
  t0[111ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[112ULL] = X_idx_23;
  t0[113ULL] = 0.0;
  t0[114ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[115ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Spring_Load *
    99999.999999999985;
  t0[116ULL] = X_idx_15 * 1.0000000000000002E-6;
  t0[117ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Spring_Load *
    99999.999999999985;
  t0[118ULL] = X_idx_8;
  t0[119ULL] = X_idx_0 * 99999.999999999985;
  t0[120ULL] = 0.0;
  t0[121ULL] = X_idx_0 * 99999.999999999985;
  t0[122ULL] = 0.0;
  t0[123ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Subsystem_I *
    99999.999999999985;
  t0[124ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Subsystem_I *
    99999.999999999985;
  t0[125ULL] = 0.0;
  t0[126ULL] = X_idx_1 * 99999.999999999985;
  t0[127ULL] = 0.0;
  t0[128ULL] = X_idx_1 * 99999.999999999985;
  t0[129ULL] = 0.0;
  t0[130ULL] = t1 * 99999.999999999985;
  t0[131ULL] = t1 * 99999.999999999985;
  t0[132ULL] = 0.0;
  t0[133ULL] = 2.0E+7;
  t0[134ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Spring_Load *
    99999.999999999985;
  t0[135ULL] = X_idx_0 * 99999.999999999985;
  t0[136ULL] = U_idx_1 + -24.0;
  t0[137ULL] = -(U_idx_1 + -24.0);
  t0[138ULL] = U_idx_1;
  t0[139ULL] = 24.0;
  t0[140ULL] = U_idx_1 + -24.0;
  t0[141ULL] = -(U_idx_1 + -24.0);
  t0[142ULL] = 24.0;
  t0[143ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Spring_Load *
    99999.999999999985;
  t0[144ULL] = X_idx_0 * 99999.999999999985;
  t0[145ULL] = -(U_idx_1 + -24.0);
  t0[146ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Spring_Load *
    99999.999999999985;
  t0[147ULL] = X_idx_0 * 99999.999999999985;
  t0[148ULL] = -(U_idx_1 + -24.0);
  t0[149ULL] = X_idx_15 * -1.0000000000000002E-6;
  t0[150ULL] = X_idx_24 * 99999.999999999985;
  t0[151ULL] = 0.0;
  t0[152ULL] = X_idx_1 * 99999.999999999985;
  t0[153ULL] = U_idx_2 + -24.0;
  t0[154ULL] = -(U_idx_2 + -24.0);
  t0[155ULL] = U_idx_2;
  t0[156ULL] = 24.0;
  t0[157ULL] = U_idx_2 + -24.0;
  t0[158ULL] = -(U_idx_2 + -24.0);
  t0[159ULL] = 24.0;
  t0[160ULL] = 0.0;
  t0[161ULL] = X_idx_1 * 99999.999999999985;
  t0[162ULL] = -(U_idx_2 + -24.0);
  t0[163ULL] = 0.0;
  t0[164ULL] = X_idx_1 * 99999.999999999985;
  t0[165ULL] = -(U_idx_2 + -24.0);
  t0[166ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Flow_Rate_1 *
    -0.0010396380728769656;
  t0[167ULL] = -X_idx_1 * 99999.999999999985;
  t0[168ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[169ULL] = 0.0;
  t0[170ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[171ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[172ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[173ULL] = Nacelle_Pitch_System_Hydraulic_Linkage3_Translational_Simscape_;
  t0[174ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[175ULL] = Nacelle_Pitch_System_Hydraulic_Linkage3_Translational_Simscape_;
  t0[176ULL] = 0.0;
  t0[177ULL] = Nacelle_Pitch_System_Hydraulic_Hydraulic_Actuator_3_Hydraulic_0;
  t0[178ULL] = 0.0;
  t0[179ULL] = U_idx_3;
  t0[180ULL] = Nacelle_Pitch_System_Hydraulic_Linkage3_Translational_Simscape_;
  t0[181ULL] = U_idx_3;
  t0[182ULL] = 0.0;
  for (b = 0; b < 183; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t4;
  return 0;
}
