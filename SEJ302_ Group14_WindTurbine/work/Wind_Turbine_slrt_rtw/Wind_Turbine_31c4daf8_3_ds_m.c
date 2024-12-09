/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_3_ds_m.h"
#include "Wind_Turbine_31c4daf8_3_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_3_ds_externals.h"
#include "Wind_Turbine_31c4daf8_3_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Wind_Turbine_31c4daf8_3_ds_m(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t13, NeDsMethodOutput *t14)
{
  PmRealVector out;
  real_T t7;
  real_T t12;
  real_T X_idx_1;
  real_T X_idx_0;
  real_T X_idx_16;
  real_T X_idx_17;
  X_idx_0 = t13->mX.mX[0];
  X_idx_1 = t13->mX.mX[1];
  X_idx_16 = t13->mX.mX[16];
  X_idx_17 = t13->mX.mX[17];
  out = t14->mM;
  t7 = exp(-X_idx_1 / 12428.460456240617);
  t12 = (pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 +
           1.01325), 1.7142857142857144) * 0.0035424381432735568 + t7 /
         12428.460456240617) * 1.0000062909088354;
  t7 = (pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_1 +
          1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_1 /
         12428.460456240617)) * (pmf_pow(1.01325 / (X_idx_1 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_1 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_1 / 12428.460456240617));
  X_idx_1 = t12 / (t7 == 0.0 ? 1.0E-16 : t7);
  t12 = exp(-X_idx_0 / 12428.460456240617);
  t7 = (pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 +
          1.01325), 1.7142857142857144) * 0.0035424381432735568 + t12 /
        12428.460456240617) * 1.0000062909088354;
  t12 = (pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ? 1.0E-16 : X_idx_0 +
           1.01325), 0.7142857142857143) * 0.0050251256281407036 + exp(-X_idx_0 /
          12428.460456240617)) * (pmf_pow(1.01325 / (X_idx_0 + 1.01325 == 0.0 ?
    1.0E-16 : X_idx_0 + 1.01325), 0.7142857142857143) * 0.0050251256281407036 +
    exp(-X_idx_0 / 12428.460456240617));
  out.mX[0] = -(X_idx_16 * (t7 / (t12 == 0.0 ? 1.0E-16 : t12)) *
                999999.99999999988) * 0.00020100376062929444;
  out.mX[1] = -(X_idx_17 * X_idx_1 * 999999.99999999988) *
    0.00020100376062929444;
  out.mX[2] = 1.0;
  out.mX[3] = 1.0;
  out.mX[4] = 1.0;
  out.mX[5] = 1.0;
  out.mX[6] = 1.0;
  out.mX[7] = 1.0;
  out.mX[8] = -1.0;
  (void)sys;
  (void)t14;
  return 0;
}
