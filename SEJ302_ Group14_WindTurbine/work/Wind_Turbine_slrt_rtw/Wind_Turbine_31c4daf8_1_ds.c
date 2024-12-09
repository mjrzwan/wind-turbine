/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */
/* Wind_Turbine_31c4daf8_1_ds.c - body for module Wind_Turbine_31c4daf8_1_ds */

#include "ne_ds.h"
#include "Wind_Turbine_31c4daf8_1_ds_zc.h"
#include "Wind_Turbine_31c4daf8_1_ds_tdxy_p.h"
#include "Wind_Turbine_31c4daf8_1_ds_dxy_p.h"
#include "Wind_Turbine_31c4daf8_1_ds_obs_all.h"
#include "Wind_Turbine_31c4daf8_1_ds_obs_act.h"
#include "Wind_Turbine_31c4daf8_1_ds_obs_exp.h"
#include "Wind_Turbine_31c4daf8_1_ds_log.h"
#include "Wind_Turbine_31c4daf8_1_ds_dnf_v_x.h"
#include "Wind_Turbine_31c4daf8_1_ds_lv.h"
#include "Wind_Turbine_31c4daf8_1_ds_tdxf_p.h"
#include "Wind_Turbine_31c4daf8_1_ds_a_p.h"
#include "Wind_Turbine_31c4daf8_1_ds_obs_il.h"
#include "Wind_Turbine_31c4daf8_1_ds_a.h"
#include "Wind_Turbine_31c4daf8_1_ds_slv.h"
#include "Wind_Turbine_31c4daf8_1_ds_dxf_p.h"
#include "Wind_Turbine_31c4daf8_1_ds_vmf.h"
#include "Wind_Turbine_31c4daf8_1_ds_dxf.h"
#include "Wind_Turbine_31c4daf8_1_ds_mode.h"
#include "Wind_Turbine_31c4daf8_1_ds_f.h"
#include "Wind_Turbine_31c4daf8_1_ds_assert.h"
#include "Wind_Turbine_31c4daf8_1_ds.h"
#include "ssc_ml_fun.h"
#include "Wind_Turbine_31c4daf8_1_ds_external_struct.h"
#include "Wind_Turbine_31c4daf8_1_ds_sys_struct.h"
#include "Wind_Turbine_31c4daf8_1_ds_externals.h"

static int32_T ds_m_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_m(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vpf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf0(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dwf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_tduf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ic(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_icr(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr_im(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_id(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_il(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ddicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dxicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_y(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update2_r(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_update2_i(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_lock_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock2_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_lock2_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_iassert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_var_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_eq_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_imin(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_imax(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(NeDynamicSystem *ds);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out);
static NeEquationData s_equation_data[110] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 0U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 2U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 3U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Torque Sensor",
    1U, 4U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Ideal Rotational Motion Sensor",
    2U, 5U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Ideal Rotational Motion Sensor",
    2U, 7U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Ideal Rotational Motion Sensor",
    2U, 9U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Ideal Rotational Motion Sensor",
    2U, 11U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "", 0U,
    13U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 13U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 14U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 15U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 16U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 17U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 18U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 19U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 20U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 21U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 22U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 23U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 24U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 25U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 26U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 27U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 28U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 29U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 30U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 31U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 32U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 33U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 34U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 35U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 36U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 37U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 38U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 39U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 40U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 41U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 42U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 43U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 44U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    2U, 45U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    2U, 47U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    2U, 49U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    2U, 51U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Torque Sensor",
    1U, 53U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 54U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 55U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 56U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 57U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 58U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 59U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 60U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 61U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 62U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    3U, 63U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 66U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier1",
    2U, 67U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier2",
    2U, 69U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier3",
    2U, 71U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    3U, 73U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 76U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 77U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 78U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 79U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 80U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 81U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 82U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 83U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 84U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 85U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    3U, 86U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 89U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier1",
    2U, 90U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier2",
    2U, 92U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier3",
    2U, 94U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    3U, 96U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 99U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 100U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 101U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 102U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 103U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 104U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 105U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 106U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 107U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 108U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    3U, 109U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 112U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier1",
    2U, 113U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier2",
    2U, 115U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier3",
    2U, 117U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    3U, 119U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 122U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 123U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 124U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 125U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 126U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 127U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 128U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 129U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 130U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 131U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    3U, 132U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 135U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier1",
    2U, 136U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier2",
    2U, 138U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier3",
    2U, 140U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    3U, 142U, FALSE, 1.0, "1", } };

static NeICRData s_icr_data[32] = { { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 0U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 2U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 3U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 4U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 5U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 6U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 7U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 8U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 9U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 10U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 11U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 12U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 13U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 14U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 15U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 16U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 17U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 18U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 19U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 20U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 21U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 22U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 23U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 24U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 25U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 26U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 27U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 28U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 29U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 30U, }, { "", 0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 31U, } };

static NeVariableData s_variable_data[110] = { {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.phi",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.torque_ref",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Demanded torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.phi",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.torque_ref",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Demanded torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.phi",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.torque_ref",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Demanded torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.phi",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.torque_ref",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Demanded torque", },
  { "ir_input_derivative_0", 0U, 0, "", 1.0, "1", 0.0, TRUE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.W",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "W", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.t",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Angular Velocity Source",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.v",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.torque_elec",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Electrical torque",
  }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.t",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.t",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.t",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier1.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier2.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.t",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier3.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.W",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "W", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.v",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.torque_elec",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Electrical torque",
  }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier1.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier2.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier3.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.W",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "W", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.v",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.torque_elec",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Electrical torque",
  }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier1.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier2.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier3.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.W",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Ideal Rotational Motion Sensor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "W", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.v",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.torque_elec",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Electrical torque",
  }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier1.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Carrier torque", },
  { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier2.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier3.w",
    0U, 0,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    0U, 1,
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Rotational velocity", }, { "ir_dummy_derivative_0", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_1", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_10", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_11", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_12", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_13", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_14", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_15", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_16", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_17", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_18", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_19", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_2", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_20", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_21", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_22", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_23", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_24", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_25", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_26", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_27", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_28", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_29", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_3", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_30", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_31", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_32", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_4", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_5", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_6", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_7", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "ir_dummy_derivative_8", 0U, 0, "", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "ir_dummy_derivative_9", 0U, 0, "", 1.0, "1",
    0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[806] = { {
    "Nacelle.Yaw_System.Servomotor.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Angular Velocity Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Angular Velocity Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Angular Velocity Source",
    1U, 1U, "rad/s", 1.0e-6, "rad/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Angular Velocity Source",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Angular Velocity Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Torque_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Torque_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Torque_Sensor.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Torque Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Torque_Sensor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Torque Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Torque_Sensor.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.YG1.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor", 1U, 1U, "rad/s",
    1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.A",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.W",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.phi",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.DC_Voltage_Source.i",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/DC Voltage Source",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.DC_Voltage_Source.n.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.DC_Voltage_Source.p.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.DC_Voltage_Source.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Electrical_Reference.V.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Electrical Reference",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.Omega",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "w", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.Tr",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "N*m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tr", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.Vm.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.Vp.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.faulted",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Faulted flag", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.i",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.power_dissipated",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "W", 1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.torque_elec",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Electrical torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.torque_ref",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Demanded torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.private.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.YGb.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.B.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.F.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.damperB.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.damperB.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.damperB.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.damperB.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.damperF.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.damperF.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.damperF.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.damperF.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.fault_trigger",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.tB",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Simple_Gear.tF",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Torque_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Torque_Sensor.Ideal_Torque_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Torque_Sensor.Ideal_Torque_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Torque_Sensor.Ideal_Torque_Sensor.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Torque_Sensor.Ideal_Torque_Sensor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Torque_Sensor.Ideal_Torque_Sensor.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Torque_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.YG.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier1.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier1.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier1.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier2.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier2.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier2.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier3.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier3.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Carrier3.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Motor_Shaft1.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Mechanical_Rotational_Reference1.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Mechanical Rotational Reference1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.Rotational_Damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.YG.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Yaw_Gearbox.YM.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.A",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.W",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.phi",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.DC_Voltage_Source.i",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/DC Voltage Source",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.DC_Voltage_Source.n.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.DC_Voltage_Source.p.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.DC_Voltage_Source.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Electrical_Reference.V.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Electrical Reference",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.Omega",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "w", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.Tr",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "N*m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tr", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.Vm.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.Vp.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.faulted",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Faulted flag", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.i",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.power_dissipated",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "W", 1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.torque_elec",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Electrical torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.torque_ref",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Demanded torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.private.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.YGb.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.B.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.F.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.damperB.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.damperB.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.damperB.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.damperB.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.damperF.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.damperF.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.damperF.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.damperF.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.fault_trigger",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.tB",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Simple_Gear.tF",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Torque_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Torque_Sensor.Ideal_Torque_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Torque_Sensor.Ideal_Torque_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Torque_Sensor.Ideal_Torque_Sensor.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Torque_Sensor.Ideal_Torque_Sensor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Torque_Sensor.Ideal_Torque_Sensor.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Torque_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.YG.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier1.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier1.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier1.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier2.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier2.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier2.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier3.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier3.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Carrier3.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Motor_Shaft1.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Mechanical_Rotational_Reference1.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Mechanical Rotational Reference1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.Rotational_Damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.YG.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Yaw_Gearbox.YM.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.A",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.W",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.phi",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.DC_Voltage_Source.i",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/DC Voltage Source",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.DC_Voltage_Source.n.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.DC_Voltage_Source.p.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.DC_Voltage_Source.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Electrical_Reference.V.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Electrical Reference",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.Omega",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "w", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.Tr",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "N*m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tr", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.Vm.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.Vp.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.faulted",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Faulted flag", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.i",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.power_dissipated",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "W", 1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.torque_elec",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Electrical torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.torque_ref",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Demanded torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.private.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.YGb.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.B.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.F.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.damperB.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.damperB.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.damperB.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.damperB.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.damperF.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.damperF.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.damperF.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.damperF.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.fault_trigger",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.tB",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Simple_Gear.tF",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Torque_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Torque_Sensor.Ideal_Torque_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Torque_Sensor.Ideal_Torque_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Torque_Sensor.Ideal_Torque_Sensor.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Torque_Sensor.Ideal_Torque_Sensor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Torque_Sensor.Ideal_Torque_Sensor.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Torque_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.YG.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier1.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier1.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier1.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier2.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier2.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier2.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier3.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier3.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Carrier3.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Motor_Shaft1.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Mechanical_Rotational_Reference1.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Mechanical Rotational Reference1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.Rotational_Damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.YG.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Yaw_Gearbox.YM.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.A",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.W",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.phi",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Ideal Rotational Motion Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.DC_Voltage_Source.i",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/DC Voltage Source",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.DC_Voltage_Source.n.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.DC_Voltage_Source.p.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.DC_Voltage_Source.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Electrical_Reference.V.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Electrical Reference",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.Omega",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "w", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.Tr",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "N*m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tr", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.Vm.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.Vp.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.faulted",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Faulted flag", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.i",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.power_dissipated",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "W", 1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.torque_elec",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Electrical torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.torque_ref",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Demanded torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.v",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.private.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.YGb.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.B.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.F.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.damperB.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.damperB.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.damperB.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.damperB.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.damperF.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.damperF.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.damperF.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.damperF.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.fault_trigger",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "T", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.tB",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Base torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Simple_Gear.tF",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Simple Gear",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Follower torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Torque_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Torque_Sensor.Ideal_Torque_Sensor.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Torque_Sensor.Ideal_Torque_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Torque_Sensor.Ideal_Torque_Sensor.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Torque_Sensor.Ideal_Torque_Sensor.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Torque_Sensor.Ideal_Torque_Sensor.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Torque Sensor/Ideal Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Torque_Sensor.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Torque Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.YG.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier1.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier1.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier1.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier2.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier2.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier2.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier3.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier3.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Carrier3.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Carrier3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Motor_Shaft1.I.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Motor_Shaft1.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Inertia_Motor_Shaft1.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Inertia Motor Shaft1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Mechanical_Rotational_Reference.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Mechanical_Rotational_Reference1.W.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Mechanical Rotational Reference1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear1.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear1",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear2.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear2",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear3.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear3",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.ring_planet.t_R",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ring torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.H.T",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.P.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.S.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.temperature",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "K", 1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_S",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Sun torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_C",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Carrier torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Planetary_Gear4.gear.sun_planet.t_P",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Planetary Gear4",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Planet torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.C.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.R.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.t",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.Rotational_Damper.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox/Rotational Damper",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.YG.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Yaw_Gearbox.YM.w",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[8] = { {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 0U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 1U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 2U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 3U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 4U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 5U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 6U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 7U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[8] = { {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[32] = { {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 0U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    FALSE, "Servomotor DC voltage supply must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 1U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    FALSE, "Servomotor DC voltage supply must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 2U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    FALSE, "Servomotor DC voltage supply must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 3U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    FALSE, "Servomotor DC voltage supply must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 4U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 5U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 6U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 7U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 8U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 9U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 10U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 11U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 12U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 13U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 14U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 15U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 16U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 17U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 18U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 19U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 20U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 21U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 22U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 23U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 24U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 25U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 26U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 27U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Servomotor",
    1U, 28U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Servomotor",
    1U, 29U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Servomotor",
    1U, 30U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Servomotor",
    1U, 31U,
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor",
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", } };

static NeRange s_assert_range[32] = { {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[145] = { {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/torque.ssc",
    36U, 5U, 36U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    56U, 5U, 56U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    56U, 9U, 56U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    56U, 5U, 56U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    56U, 9U, 56U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    56U, 5U, 56U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    56U, 9U, 56U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    56U, 5U, 56U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    56U, 9U, 56U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/torque.ssc",
    36U, 5U, 36U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    54U, 5U, 54U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    54U, 5U, 54U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    54U, 5U, 54U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/ring_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeRange s_icr_range[32] = { {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    100U, 96U, 100U, 102U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020a/toolbox/physmod/sdl/sdl/+sdl/+gears/compound_planetary_gear.ssc",
    97U, 96U, 97U, 102U, NE_RANGE_TYPE_NORMAL, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 110;
  out->mM_P.mNumRow = 110;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    111);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 9;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 9;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 110;
  out->mDXM_P.mNumRow = 9;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    111);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 0;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM_P.mNumCol = 0;
  out->mDDM_P.mNumRow = 9;
  out->mDDM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM.mN = 0;
  out->mDDM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 5;
  out->mDUM_P.mNumRow = 9;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mDUM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 9;
  out->mDTM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA_P.mNumCol = 110;
  out->mA_P.mNumRow = 110;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    111);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    256);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 256;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 256);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 5;
  out->mB_P.mNumRow = 110;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 6;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC_P.mNumCol = 1;
  out->mC_P.mNumRow = 110;
  out->mC_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mC_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC.mN = 0;
  out->mC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 110;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 110);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 110;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    110);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 110;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    110);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 110;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    110);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 110;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 110);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 110;
  out->mDXF_P.mNumRow = 110;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    111);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    24);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 24;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 24);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 5;
  out->mDUF_P.mNumRow = 110;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 0;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 110;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 110;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF_P.mNumCol = 0;
  out->mDWF_P.mNumRow = 110;
  out->mDWF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDWF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF.mN = 0;
  out->mDWF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 5;
  out->mTDUF_P.mNumRow = 110;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 110;
  out->mTDXF_P.mNumRow = 110;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    111);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    276);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 28;
  out->mDNF_P.mNumRow = 110;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    29);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 0;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 110;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 110);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 110;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 110);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 32;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 32);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 32;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 32;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 32);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 32;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 32);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 0;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 110;
  out->mDXICR_P.mNumRow = 32;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 111);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR.mN = 0;
  out->mDDICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR_P.mNumCol = 0;
  out->mDDICR_P.mNumRow = 32;
  out->mDDICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 5;
  out->mTDUICR_P.mNumRow = 32;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 6);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM_P.mNumCol = 110;
  out->mICRM_P.mNumRow = 32;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    111);
  out->mICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM.mN = 0;
  out->mICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM_P.mNumCol = 110;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 111);
  out->mDXICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM.mN = 0;
  out->mDXICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM_P.mNumCol = 0;
  out->mDDICRM_P.mNumRow = 0;
  out->mDDICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM.mN = 0;
  out->mDDICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 5;
  out->mMDUY_P.mNumRow = 17;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 110;
  out->mMDXY_P.mNumRow = 17;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    111);
  out->mMDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 5;
  out->mTDUY_P.mNumRow = 17;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 110;
  out->mTDXY_P.mNumRow = 17;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    111);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    21);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 17;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 17);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 110;
  out->mDXY_P.mNumRow = 17;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    111);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    21);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 21;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 21);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 5;
  out->mDUY_P.mNumRow = 17;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 0;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 17;
  out->mDTY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 8;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    8);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 8;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 8);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_R.mN = 0;
  out->mUPDATE2_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_I.mN = 0;
  out->mUPDATE2_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_R.mN = 0;
  out->mLOCK_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_I.mN = 0;
  out->mLOCK_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_R.mN = 0;
  out->mLOCK2_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_I.mN = 0;
  out->mLOCK2_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 806;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 806);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 32;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 0;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIASSERT.mN = 0;
  out->mIASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 110;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 111);
  out->mDXDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 5;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 6);
  out->mDUDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 806;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    806);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 806;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    806);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 806;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    806);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 806;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 806);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 0;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 110;
  out->mQX_P.mNumRow = 110;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    111);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 5;
  out->mQU_P.mNumRow = 110;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 110;
  out->mQT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 110;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 110;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    110);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 110;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    110);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 110;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    110);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 110;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    110);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 110;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    110);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 110;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    110);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out)
{
  (void)ds;
  memcpy(out->mX, in->mX.mX, sizeof(real_T)*out->mN);
}

NeDynamicSystem *Wind_Turbine_31c4daf8_1_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[5];
  static NeDsIoInfo output_info[17];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 110;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 9;
  ds->mNumEquations = 110;
  ds->mNumICResiduals = 32;
  ds->mNumModes = 8;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 806;
  ds->mNumObservableElements = 806;
  ds->mNumZcs = 8;
  ds->mNumAsserts = 32;
  ds->mNumAssertRanges = 32;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 8;
  ds->mNumEquationRanges = 145;
  ds->mNumICRRanges = 32;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 0;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 5;
  input_info[0].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.S";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName =
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Angular_Velocity_Source.S";
  input_info[0].mUnit = "rad/s";
  input_info[1].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.Tr";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.Tr";
  input_info[1].mUnit = "N*m";
  input_info[2].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.Tr";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.Tr";
  input_info[2].mUnit = "N*m";
  input_info[3].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.Tr";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.Tr";
  input_info[3].mUnit = "N*m";
  input_info[4].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.Tr";
  input_info[4].mM = 1;
  input_info[4].mN = 1;
  input_info[4].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.Tr";
  input_info[4].mUnit = "N*m";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 17;
  output_info[0].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Torque_Sensor.T";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName =
    "Nacelle.Yaw_System.Servomotor.Rotational_Simscape_Intf.Ideal_Torque_Sensor.T";
  output_info[0].mUnit = "N*m";
  output_info[1].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.A";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.A";
  output_info[1].mUnit = "rad";
  output_info[2].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.W";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Ideal_Rotational_Motion_Sensor.W";
  output_info[2].mUnit = "rad/s";
  output_info[3].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.Omega";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Servomotor.Omega";
  output_info[3].mUnit = "rad/s";
  output_info[4].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Torque_Sensor.Ideal_Torque_Sensor.T";
  output_info[4].mM = 1;
  output_info[4].mN = 1;
  output_info[4].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Torque_Sensor.Ideal_Torque_Sensor.T";
  output_info[4].mUnit = "N*m";
  output_info[5].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.A";
  output_info[5].mM = 1;
  output_info[5].mN = 1;
  output_info[5].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.A";
  output_info[5].mUnit = "rad";
  output_info[6].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.W";
  output_info[6].mM = 1;
  output_info[6].mN = 1;
  output_info[6].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Ideal_Rotational_Motion_Sensor.W";
  output_info[6].mUnit = "rad/s";
  output_info[7].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.Omega";
  output_info[7].mM = 1;
  output_info[7].mN = 1;
  output_info[7].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Servomotor.Omega";
  output_info[7].mUnit = "rad/s";
  output_info[8].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Torque_Sensor.Ideal_Torque_Sensor.T";
  output_info[8].mM = 1;
  output_info[8].mN = 1;
  output_info[8].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Torque_Sensor.Ideal_Torque_Sensor.T";
  output_info[8].mUnit = "N*m";
  output_info[9].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.A";
  output_info[9].mM = 1;
  output_info[9].mN = 1;
  output_info[9].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.A";
  output_info[9].mUnit = "rad";
  output_info[10].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.W";
  output_info[10].mM = 1;
  output_info[10].mN = 1;
  output_info[10].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Ideal_Rotational_Motion_Sensor.W";
  output_info[10].mUnit = "rad/s";
  output_info[11].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.Omega";
  output_info[11].mM = 1;
  output_info[11].mN = 1;
  output_info[11].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Servomotor.Omega";
  output_info[11].mUnit = "rad/s";
  output_info[12].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Torque_Sensor.Ideal_Torque_Sensor.T";
  output_info[12].mM = 1;
  output_info[12].mN = 1;
  output_info[12].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Torque_Sensor.Ideal_Torque_Sensor.T";
  output_info[12].mUnit = "N*m";
  output_info[13].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.A";
  output_info[13].mM = 1;
  output_info[13].mN = 1;
  output_info[13].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.A";
  output_info[13].mUnit = "rad";
  output_info[14].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.W";
  output_info[14].mM = 1;
  output_info[14].mN = 1;
  output_info[14].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Ideal_Rotational_Motion_Sensor.W";
  output_info[14].mUnit = "rad/s";
  output_info[15].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.Omega";
  output_info[15].mM = 1;
  output_info[15].mN = 1;
  output_info[15].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Servomotor.Omega";
  output_info[15].mUnit = "rad/s";
  output_info[16].mIdentifier =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Torque_Sensor.Ideal_Torque_Sensor.T";
  output_info[16].mM = 1;
  output_info[16].mN = 1;
  output_info[16].mName =
    "Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Torque_Sensor.Ideal_Torque_Sensor.T";
  output_info[16].mUnit = "N*m";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mMethods[NE_DS_METHOD_M_P] = ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DDM_P] = ds_ddm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDM_P] = ds_output_ddm_p;
  ds->mMethods[NE_DS_METHOD_DDM] = ds_ddm;
  ds->mMakeOutput[NE_DS_METHOD_DDM] = ds_output_ddm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_A_P] = Wind_Turbine_31c4daf8_1_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = Wind_Turbine_31c4daf8_1_ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = Wind_Turbine_31c4daf8_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = Wind_Turbine_31c4daf8_1_ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_VPF] = ds_vpf;
  ds->mMakeOutput[NE_DS_METHOD_VPF] = ds_output_vpf;
  ds->mMethods[NE_DS_METHOD_SLF] = ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = Wind_Turbine_31c4daf8_1_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = Wind_Turbine_31c4daf8_1_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_DWF_P] = ds_dwf_p;
  ds->mMakeOutput[NE_DS_METHOD_DWF_P] = ds_output_dwf_p;
  ds->mMethods[NE_DS_METHOD_DWF] = ds_dwf;
  ds->mMakeOutput[NE_DS_METHOD_DWF] = ds_output_dwf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = Wind_Turbine_31c4daf8_1_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = Wind_Turbine_31c4daf8_1_ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_IC] = ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_ICR_IL] = ds_icr_il;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IL] = ds_output_icr_il;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_DDICR] = ds_ddicr;
  ds->mMakeOutput[NE_DS_METHOD_DDICR] = ds_output_ddicr;
  ds->mMethods[NE_DS_METHOD_DDICR_P] = ds_ddicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICR_P] = ds_output_ddicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_ICRM_P] = ds_icrm_p;
  ds->mMakeOutput[NE_DS_METHOD_ICRM_P] = ds_output_icrm_p;
  ds->mMethods[NE_DS_METHOD_ICRM] = ds_icrm;
  ds->mMakeOutput[NE_DS_METHOD_ICRM] = ds_output_icrm;
  ds->mMethods[NE_DS_METHOD_DXICRM_P] = ds_dxicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM_P] = ds_output_dxicrm_p;
  ds->mMethods[NE_DS_METHOD_DXICRM] = ds_dxicrm;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM] = ds_output_dxicrm;
  ds->mMethods[NE_DS_METHOD_DDICRM_P] = ds_ddicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM_P] = ds_output_ddicrm_p;
  ds->mMethods[NE_DS_METHOD_DDICRM] = ds_ddicrm;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM] = ds_output_ddicrm;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = Wind_Turbine_31c4daf8_1_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = Wind_Turbine_31c4daf8_1_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = Wind_Turbine_31c4daf8_1_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = Wind_Turbine_31c4daf8_1_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_UPDATE2_R] = ds_update2_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_R] = ds_output_update2_r;
  ds->mMethods[NE_DS_METHOD_UPDATE2_I] = ds_update2_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_I] = ds_output_update2_i;
  ds->mMethods[NE_DS_METHOD_LOCK_R] = ds_lock_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_R] = ds_output_lock_r;
  ds->mMethods[NE_DS_METHOD_LOCK_I] = ds_lock_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_I] = ds_output_lock_i;
  ds->mMethods[NE_DS_METHOD_LOCK2_R] = ds_lock2_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_R] = ds_output_lock2_r;
  ds->mMethods[NE_DS_METHOD_LOCK2_I] = ds_lock2_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_I] = ds_output_lock2_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = Wind_Turbine_31c4daf8_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = Wind_Turbine_31c4daf8_1_ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_IASSERT] = ds_iassert;
  ds->mMakeOutput[NE_DS_METHOD_IASSERT] = ds_output_iassert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = Wind_Turbine_31c4daf8_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = Wind_Turbine_31c4daf8_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = Wind_Turbine_31c4daf8_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = Wind_Turbine_31c4daf8_1_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = Wind_Turbine_31c4daf8_1_ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = Wind_Turbine_31c4daf8_1_ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;
  ds->mMethods[NE_DS_METHOD_IMIN] = ds_imin;
  ds->mMakeOutput[NE_DS_METHOD_IMIN] = ds_output_imin;
  ds->mMethods[NE_DS_METHOD_IMAX] = ds_imax;
  ds->mMakeOutput[NE_DS_METHOD_IMAX] = ds_output_imax;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* icr data */
  ds->mICRData = s_icr_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* initial assert data */
  ds->mInitialAssertData = s_initial_assert_data;

  /* initial assert ranges */
  ds->mInitialAssertRanges = s_initial_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* icr ranges */
  ds->mICRRanges = s_icr_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_passert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_iassert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_v (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mDXDELT_P;
  out.mNumCol = 110ULL;
  out.mNumRow = 0ULL;
  for (b = 0; b < 111; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUDELT_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTDELT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_cache_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_init_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_cache_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_init_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update2_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update2_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sfp (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sfo (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUF_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 110ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTF_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 110ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 110ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mB;
  out.mX[0] = -1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0;
  out.mX[3] = 1.0;
  out.mX[4] = 1.0;
  out.mX[5] = 1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mB_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 110ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 2;
  out.mJc[2] = 3;
  out.mJc[3] = 4;
  out.mJc[4] = 5;
  out.mJc[5] = 6;
  out.mIr[0] = 9;
  out.mIr[1] = 46;
  out.mIr[2] = 3;
  out.mIr[3] = 2;
  out.mIr[4] = 1;
  out.mIr[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_c (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_c_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mC_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 110ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUF_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 110ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 2;
  out.mJc[2] = 3;
  out.mJc[3] = 4;
  out.mJc[4] = 5;
  out.mJc[5] = 6;
  out.mIr[0] = 9;
  out.mIr[1] = 46;
  out.mIr[2] = 3;
  out.mIr[3] = 2;
  out.mIr[4] = 1;
  out.mIr[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dwf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dwf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDWF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 110ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_slf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[110];
  int32_T b;
  (void)t1;
  out = t2->mSLF;
  for (b = 0; b < 110; b++) {
    t0[b] = false;
  }

  for (b = 0; b < 110; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDNF_P;
  out.mNumCol = 28ULL;
  out.mNumRow = 110ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_slf0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[110];
  int32_T b;
  (void)t1;
  out = t2->mSLF0;
  for (b = 0; b < 110; b++) {
    t0[b] = false;
  }

  for (b = 0; b < 110; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vpf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[110];
  int32_T b;
  (void)t1;
  out = t2->mVPF;
  for (b = 0; b < 110; b++) {
    t0[b] = false;
  }

  for (b = 0; b < 110; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ic (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[110];
  int32_T b;
  (void)t1;
  out = t2->mIC;
  for (b = 0; b < 110; b++) {
    t0[b] = 0.0;
  }

  for (b = 0; b < 110; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mICR;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  out.mX[25] = 0.0;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = 0.0;
  out.mX[29] = 0.0;
  out.mX[30] = 0.0;
  out.mX[31] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_im (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  out = t2->mICR_IM;
  out.mX[0] = 3;
  out.mX[1] = 3;
  out.mX[2] = 3;
  out.mX[3] = 3;
  out.mX[4] = 3;
  out.mX[5] = 3;
  out.mX[6] = 3;
  out.mX[7] = 3;
  out.mX[8] = 3;
  out.mX[9] = 3;
  out.mX[10] = 3;
  out.mX[11] = 3;
  out.mX[12] = 3;
  out.mX[13] = 3;
  out.mX[14] = 3;
  out.mX[15] = 3;
  out.mX[16] = 3;
  out.mX[17] = 3;
  out.mX[18] = 3;
  out.mX[19] = 3;
  out.mX[20] = 3;
  out.mX[21] = 3;
  out.mX[22] = 3;
  out.mX[23] = 3;
  out.mX[24] = 3;
  out.mX[25] = 3;
  out.mX[26] = 3;
  out.mX[27] = 3;
  out.mX[28] = 3;
  out.mX[29] = 3;
  out.mX[30] = 3;
  out.mX[31] = 3;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_id (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mICR_ID;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  out.mX[31] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_il (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mICR_IL;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = true;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = true;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = true;
  out.mX[21] = true;
  out.mX[22] = true;
  out.mX[23] = true;
  out.mX[24] = true;
  out.mX[25] = true;
  out.mX[26] = true;
  out.mX[27] = true;
  out.mX[28] = true;
  out.mX[29] = true;
  out.mX[30] = true;
  out.mX[31] = true;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mDXICR_P;
  out.mNumCol = 110ULL;
  out.mNumRow = 32ULL;
  for (b = 0; b < 111; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDICR_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 32ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUICR_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 32ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icrm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mICRM_P;
  out.mNumCol = 110ULL;
  out.mNumRow = 32ULL;
  for (b = 0; b < 111; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mDXICRM_P;
  out.mNumCol = 110ULL;
  out.mNumRow = 0ULL;
  for (b = 0; b < 111; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDICRM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_imin (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[110];
  int32_T b;
  (void)t1;
  out = t2->mIMIN;
  for (b = 0; b < 110; b++) {
    t0[b] = -pmf_get_inf();
  }

  for (b = 0; b < 110; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_imax (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[110];
  int32_T b;
  (void)t1;
  out = t2->mIMAX;
  for (b = 0; b < 110; b++) {
    t0[b] = pmf_get_inf();
  }

  for (b = 0; b < 110; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_m (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mM;
  out.mX[0] = 1.0;
  out.mX[1] = 0.0002;
  out.mX[2] = 1.0;
  out.mX[3] = 0.0002;
  out.mX[4] = 1.0;
  out.mX[5] = 0.0002;
  out.mX[6] = 1.0;
  out.mX[7] = 0.0002;
  out.mX[8] = 1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_m_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_1[111] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9,
    9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
    9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
    9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
    9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9 };

  (void)t1;
  out = t2->mM_P;
  out.mNumCol = 110ULL;
  out.mNumRow = 110ULL;
  for (b = 0; b < 111; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 8;
  out.mIr[1] = 3;
  out.mIr[2] = 7;
  out.mIr[3] = 2;
  out.mIr[4] = 6;
  out.mIr[5] = 1;
  out.mIr[6] = 5;
  out.mIr[7] = 0;
  out.mIr[8] = 4;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mDXM_P;
  out.mNumCol = 110ULL;
  out.mNumRow = 9ULL;
  for (b = 0; b < 111; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dum (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dum_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUM_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTM_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 9ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vmm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMM;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_l (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_j (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qx (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qu (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qt (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_q1 (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qx_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mQX_P;
  out.mNumCol = 110ULL;
  out.mNumRow = 110ULL;
  for (b = 0; b < 111; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qu_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQU_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 110ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qt_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 110ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_q1_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQ1_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 110ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_var_tol (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[110];
  int32_T b;
  (void)t1;
  out = t2->mVAR_TOL;
  for (b = 0; b < 110; b++) {
    t0[b] = 1.0E-9;
  }

  for (b = 0; b < 110; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_eq_tol (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[110];
  int32_T b;
  (void)t1;
  out = t2->mEQ_TOL;
  for (b = 0; b < 110; b++) {
    t0[b] = 1.0E-9;
  }

  for (b = 0; b < 110; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T X[110];
  int32_T b;
  for (b = 0; b < 110; b++) {
    X[b] = t1->mX.mX[b];
  }

  out = t2->mY;
  out.mX[0] = X[10ULL];
  out.mX[1] = X[0ULL];
  out.mX[2] = X[9ULL];
  out.mX[3] = X[12ULL];
  out.mX[4] = -(-X[14ULL] + X[15ULL] * 0.39999999999999997);
  out.mX[5] = X[2ULL];
  out.mX[6] = X[32ULL];
  out.mX[7] = X[34ULL];
  out.mX[8] = -(-X[36ULL] + X[37ULL] * 0.39999999999999997);
  out.mX[9] = X[4ULL];
  out.mX[10] = X[47ULL];
  out.mX[11] = X[49ULL];
  out.mX[12] = -(-X[51ULL] + X[52ULL] * 0.39999999999999997);
  out.mX[13] = X[6ULL];
  out.mX[14] = X[62ULL];
  out.mX[15] = X[64ULL];
  out.mX[16] = -(-X[66ULL] + X[67ULL] * 0.39999999999999997);
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDXY;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0;
  out.mX[3] = 1.0;
  out.mX[4] = 1.0;
  out.mX[5] = 1.0;
  out.mX[6] = 1.0;
  out.mX[7] = 1.0;
  out.mX[8] = -0.39999999999999997;
  out.mX[9] = 1.0;
  out.mX[10] = 1.0;
  out.mX[11] = 1.0;
  out.mX[12] = -0.39999999999999997;
  out.mX[13] = 1.0;
  out.mX[14] = 1.0;
  out.mX[15] = 1.0;
  out.mX[16] = -0.39999999999999997;
  out.mX[17] = 1.0;
  out.mX[18] = 1.0;
  out.mX[19] = 1.0;
  out.mX[20] = -0.39999999999999997;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUY_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 17ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_mduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mMDUY_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 17ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_mdxy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mMDXY_P;
  out.mNumCol = 110ULL;
  out.mNumRow = 17ULL;
  for (b = 0; b < 111; b++) {
    out.mJc[b] = 0;
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUY_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 17ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dty (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dty_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTY_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 17ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
