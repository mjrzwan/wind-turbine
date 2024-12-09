/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Wind_Turbine/Solver Configuration'.
 */

#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"

PmfMessageId sm_ssci_recordRunTimeError(
  const char *errorId, const char *errorMsg, NeuDiagnosticManager* mgr);

#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))

PmIntVector *pm_create_int_vector(size_t, PmAllocator *);
int_T pm_create_int_vector_fields (PmIntVector *, size_t, PmAllocator *);
int_T pm_create_real_vector_fields(PmRealVector *, size_t, PmAllocator *);
int_T pm_create_char_vector_fields(PmCharVector *, size_t, PmAllocator *);
int_T pm_create_bool_vector_fields(PmBoolVector *, size_t, PmAllocator *);
void pm_rv_equals_rv(const PmRealVector *, const PmRealVector *);
void sm_ssci_setupLoggerFcn_codeGen(const NeDae *dae,
  NeLoggerBuilder *neLoggerBuilder);
int32_T sm_ssci_logFcn_codeGen(const NeDae *dae,
  const NeSystemInput *systemInput,
  PmRealVector *output);
extern const NeAssertData Wind_Turbine_31c4daf8_6_assertData[];
extern const NeZCData Wind_Turbine_31c4daf8_6_ZCData[];
void Wind_Turbine_31c4daf8_6_computeRuntimeParameters(
  const double *runtimeRootVariables,
  double *runtimeParameters);
void Wind_Turbine_31c4daf8_6_validateRuntimeParameters(
  const double *runtimeParameters,
  int32_T *assertSatisfactionFlags);
void Wind_Turbine_31c4daf8_6_computeAsmRuntimeDerivedValues(
  const double *runtimeParameters,
  RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle);
void Wind_Turbine_31c4daf8_6_computeSimRuntimeDerivedValues(
  const double *runtimeParameters,
  RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle);
PmfMessageId Wind_Turbine_31c4daf8_6_compDerivs(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Wind_Turbine_31c4daf8_6_numJacPerturbLoBounds(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Wind_Turbine_31c4daf8_6_numJacPerturbHiBounds(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Wind_Turbine_31c4daf8_6_checkDynamics(
  const RuntimeDerivedValuesBundle *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Wind_Turbine_31c4daf8_6_compOutputsDyn(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  int *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Wind_Turbine_31c4daf8_6_compOutputsKin(
  const RuntimeDerivedValuesBundle *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Wind_Turbine_31c4daf8_6_compOutputs (
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  int *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Wind_Turbine_31c4daf8_6_computeAsmModeVector(
  const double *, const double *, const double *,
  int *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Wind_Turbine_31c4daf8_6_computeSimModeVector(
  const double *, const double *, const double *,
  int *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Wind_Turbine_31c4daf8_6_computeZeroCrossings(
  const RuntimeDerivedValuesBundle *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
void Wind_Turbine_31c4daf8_6_setTargets(
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  CTarget *targets);
void Wind_Turbine_31c4daf8_6_resetAsmStateVector(const void *mech, double
  *stateVector);
void Wind_Turbine_31c4daf8_6_resetSimStateVector(const void *mech, double
  *stateVector);
void Wind_Turbine_31c4daf8_6_initializeTrackedAngleState(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *modeVector,
  const double *motionData,
  double *stateVector,
  void *neDiagMgr);
void Wind_Turbine_31c4daf8_6_computeDiscreteState(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  double *stateVector);
void Wind_Turbine_31c4daf8_6_adjustPosition(
  const void *mech,
  const double *dofDeltas,
  double *stateVector);
void Wind_Turbine_31c4daf8_6_perturbAsmJointPrimitiveState(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  double magnitude,
  boolean_T doPerturbVelocity,
  double *stateVector);
void Wind_Turbine_31c4daf8_6_perturbSimJointPrimitiveState(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  double magnitude,
  boolean_T doPerturbVelocity,
  double *stateVector);
void Wind_Turbine_31c4daf8_6_perturbFlexibleBodyState(
  const void *mech,
  size_t stageIdx,
  double magnitude,
  boolean_T doPerturbVelocity,
  double *stateVector);
void Wind_Turbine_31c4daf8_6_computePosDofBlendMatrix(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *stateVector,
  int partialType,
  double *matrix);
void Wind_Turbine_31c4daf8_6_computeVelDofBlendMatrix(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *stateVector,
  int partialType,
  double *matrix);
void Wind_Turbine_31c4daf8_6_projectPartiallyTargetedPos(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *origStateVector,
  int partialType,
  double *stateVector);
void Wind_Turbine_31c4daf8_6_propagateMotion(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const double *stateVector,
  double *motionData);
size_t Wind_Turbine_31c4daf8_6_computeAssemblyError(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  size_t constraintIdx,
  const double *stateVector,
  const int *modeVector,
  const double *motionData,
  double *error);
size_t Wind_Turbine_31c4daf8_6_computeAssemblyJacobian(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  size_t constraintIdx,
  boolean_T forVelocitySatisfaction,
  const double *stateVector,
  const int *modeVector,
  const double *motionData,
  double *J);
size_t Wind_Turbine_31c4daf8_6_computeFullAssemblyJacobian(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const double *stateVector,
  const int *modeVector,
  const double *motionData,
  double *J);
int Wind_Turbine_31c4daf8_6_isInKinematicSingularity(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  size_t constraintIdx,
  const int *modeVector,
  const double *motionData);
PmfMessageId Wind_Turbine_31c4daf8_6_convertStateVector(
  const void *asmMech,
  const RuntimeDerivedValuesBundle *asmRuntimeDerivedValuesBundle,
  const void *simMech,
  const double *asmStateVector,
  const int *asmModeVector,
  const int *simModeVector,
  double *simStateVector,
  void *neDiagMgr);
void Wind_Turbine_31c4daf8_6_constructStateVector(
  const void *mech,
  const double *solverStateVector,
  const double *u,
  const double *uDot,
  const double *discreteStateVector,
  double *fullStateVector);
void Wind_Turbine_31c4daf8_6_extractSolverStateVector(
  const void *mech,
  const double *fullStateVector,
  double *solverStateVector);
int Wind_Turbine_31c4daf8_6_isPositionViolation(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *constraintEqnEnableFlags,
  const double *stateVector,
  const int *modeVector);
int Wind_Turbine_31c4daf8_6_isVelocityViolation(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *constraintEqnEnableFlags,
  const double *stateVector,
  const int *modeVector);
PmfMessageId Wind_Turbine_31c4daf8_6_projectStateSim(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *constraintEqnEnableFlags,
  const int *modeVector,
  const double *inputVector,
  double *stateVector,
  void *neDiagMgr);
void Wind_Turbine_31c4daf8_6_computeConstraintError(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const double *stateVector,
  const int *modeVector,
  double *error);
void Wind_Turbine_31c4daf8_6_resetModeVector(const void *mech, int *modeVector);
boolean_T Wind_Turbine_31c4daf8_6_hasJointDisToNormModeChange(
  const void *mech,
  const int *prevModeVector,
  const int *modeVector);
PmfMessageId Wind_Turbine_31c4daf8_6_performJointDisToNormModeChange(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *prevModeVector,
  const int *modeVector,
  const double *inputVector,
  double *stateVector,
  void *neDiagMgr);
PmfMessageId Wind_Turbine_31c4daf8_6_onModeChangedCutJoints(
  const void *mech,
  const int *prevModeVector,
  int *modeVector,
  double *stateVector,
  void *neDiagMgr);
PmfMessageId Wind_Turbine_31c4daf8_6_assemble(const double *u, double *udot,
  double *x,
  NeuDiagnosticManager *neDiagMgr)
{
  (void) x;
  (void) u;
  (void) udot;
  (void) neDiagMgr;
  return NULL;
}

static
  void dae_cg_setParameters_function(const NeDae *dae,
  const NeParameterBundle *paramBundle)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  const double *runtimeRootVariables = paramBundle->mRealParameters.mX;
  if (smData->mRuntimeParameterScalars.mN == 0)
    return;
  Wind_Turbine_31c4daf8_6_computeRuntimeParameters(
    runtimeRootVariables,
    smData->mRuntimeParameterScalars.mX);
  Wind_Turbine_31c4daf8_6_computeAsmRuntimeDerivedValues(
    smData->mRuntimeParameterScalars.mX,
    &dae->mPrivateData->mAsmRuntimeDerivedValuesBundle);
  Wind_Turbine_31c4daf8_6_computeSimRuntimeDerivedValues(
    smData->mRuntimeParameterScalars.mX,
    &dae->mPrivateData->mSimRuntimeDerivedValuesBundle);
  sm_core_computeRedundantConstraintEquations(
    &dae->mPrivateData->mSimulationDelegate,
    &smData->mSimRuntimeDerivedValuesBundle);

#if 0

  {
    size_t i;
    const size_t n = smData->mSimulationDelegate.mRunTimeEnabledEquations.mSize;
    pmf_printf("\nRuntime Enabled Equations (%lu)\n", n);
    for (i = 0; i < n; ++i)
      pmf_printf("  %2lu:  %d\n", i,
                 smData->mSimulationDelegate.mRunTimeEnabledEquations.mValues[i]);
  }

#endif

}

static
  PmfMessageId dae_cg_pAssert_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  const double *runtimeParams = smData->mRuntimeParameterScalars.mX;
  int32_T *assertSatisfactionFlags = daeMethodOutput->mPASSERT.mX;
  (void) systemInput;
  (void) neDiagMgr;
  Wind_Turbine_31c4daf8_6_validateRuntimeParameters(
    runtimeParams, assertSatisfactionFlags);
  return NULL;
}

static
  PmfMessageId dae_cg_deriv_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  if (smData->mCachedDerivativesAvailable)
    memcpy(daeMethodOutput->mXP0.mX, smData->mCachedDerivatives.mX,
           28 * sizeof(real_T));
  else
    errorId = Wind_Turbine_31c4daf8_6_compDerivs(
      &smData->mSimRuntimeDerivedValuesBundle,
      smData->mSimulationDelegate
      .mRunTimeEnabledEquations.mValues,
      systemInput->mX.mX,
      systemInput->mM.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 14,
      systemInput->mV.mX + 14,
      systemInput->mD.mX,
      daeMethodOutput->mXP0.mX,
      &errorResult,
      neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_numJacPerturbLoBounds_method(
  const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  errorId = Wind_Turbine_31c4daf8_6_numJacPerturbLoBounds(
    &smData->mSimRuntimeDerivedValuesBundle,
    smData->mSimulationDelegate
    .mRunTimeEnabledEquations.mValues,
    systemInput->mX.mX,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 14,
    systemInput->mV.mX + 14,
    systemInput->mD.mX,
    daeMethodOutput->mNUMJAC_DX_LO.mX,
    &errorResult,
    neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_numJacPerturbHiBounds_method(
  const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  errorId = Wind_Turbine_31c4daf8_6_numJacPerturbHiBounds(
    &smData->mSimRuntimeDerivedValuesBundle,
    smData->mSimulationDelegate
    .mRunTimeEnabledEquations.mValues,
    systemInput->mX.mX,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 14,
    systemInput->mV.mX + 14,
    systemInput->mD.mX,
    daeMethodOutput->mNUMJAC_DX_HI.mX,
    &errorResult,
    neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_compOutputs_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  PmfMessageId errorId = NULL;
  NeDaePrivateData *smData = dae->mPrivateData;
  if (smData->mDoComputeDynamicOutputs) {
    int derivErr = 0;
    double errorResult = 0.0;
    errorId = Wind_Turbine_31c4daf8_6_compOutputsDyn(
      &smData->mSimRuntimeDerivedValuesBundle,
      smData->mSimulationDelegate
      .mRunTimeEnabledEquations.mValues,
      systemInput->mX.mX,
      systemInput->mM.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 14,
      systemInput->mV.mX + 14,
      systemInput->mD.mX,
      smData->mCachedDerivatives.mX, daeMethodOutput->mY.mX,
      &derivErr, &errorResult, neDiagMgr);
    smData->mCachedDerivativesAvailable = (derivErr == 0);
  } else
    errorId = Wind_Turbine_31c4daf8_6_compOutputsKin(
      &smData->mSimRuntimeDerivedValuesBundle,
      systemInput->mX.mX,
      systemInput->mM.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 14,
      systemInput->mV.mX + 14,
      systemInput->mD.mX,
      daeMethodOutput->mY.mX, neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_mode_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  errorId = Wind_Turbine_31c4daf8_6_computeSimModeVector(
    systemInput->mU.mX,
    systemInput->mU.mX + 14,
    systemInput->mV.mX + 14,
    daeMethodOutput->mMODE.mX,
    &errorResult,
    neDiagMgr);
  memcpy(smData->mCachedModeVector.mX, daeMethodOutput->mMODE.mX,
         0 * sizeof(int32_T));
  return errorId;
}

static
  PmfMessageId dae_cg_zeroCrossing_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  double errorResult = 0.0;
  return
    Wind_Turbine_31c4daf8_6_computeZeroCrossings(
    &smData->mSimRuntimeDerivedValuesBundle,
    systemInput->mX.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 14,
    systemInput->mV.mX + 14,
    systemInput->mD.mX,
    daeMethodOutput->mZC.mX,
    &errorResult,
    neDiagMgr);
}

static
  PmfMessageId dae_cg_project_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  return
    sm_core_projectState(
    false,
    &smData->mSimulationDelegate,
    &smData->mSimRuntimeDerivedValuesBundle,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 14,
    systemInput->mD.mX,
    systemInput->mX.mX, neDiagMgr);
}

static
  PmfMessageId dae_cg_check_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  if (smData->mNumConstraintEqns > 0)
    errorId = sm_core_projectState(
      false,
      &smData->mSimulationDelegate,
      &smData->mSimRuntimeDerivedValuesBundle,
      systemInput->mM.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 14,
      systemInput->mD.mX,
      systemInput->mX.mX, neDiagMgr);
  if (errorId == NULL && smData->mDoCheckDynamics) {
    double result = 0.0;
    errorId = Wind_Turbine_31c4daf8_6_checkDynamics(
      &smData->mSimRuntimeDerivedValuesBundle,
      systemInput->mX.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 14,
      systemInput->mV.mX + 14,
      systemInput->mD.mX,
      &result, neDiagMgr);
  }

  return errorId;
}

static
  PmfMessageId dae_cg_CIC_MODE_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  const size_t mvSize = smData->mModeVectorSize;
  boolean_T modeChanged = false;
  if (mvSize > 0) {
    errorId = Wind_Turbine_31c4daf8_6_computeSimModeVector(
      systemInput->mU.mX,
      systemInput->mU.mX + 14,
      systemInput->mV.mX + 14,
      systemInput->mM.mX,
      &errorResult,
      neDiagMgr);
    if (errorId != NULL)
      return errorId;

    {
      size_t i;
      for (i = 0; i < mvSize; ++i)
        if (systemInput->mM.mX[i] != smData->mCachedModeVector.mX[i]) {
          modeChanged = true;
          break;
        }
    }
  }

  if (modeChanged) {
    errorId = sm_core_onModeChanged(
      &smData->mSimulationDelegate,
      &smData->mSimRuntimeDerivedValuesBundle,
      systemInput->mU.mX,
      systemInput->mU.mX + 14,
      systemInput->mD.mX,
      smData->mCachedModeVector.mX,
      systemInput->mM.mX,
      systemInput->mX.mX,
      neDiagMgr);
    if (errorId != NULL)
      return errorId;
    memcpy(smData->mCachedModeVector.mX, systemInput->mM.mX,
           0 * sizeof(int32_T));
  }

  errorId =
    sm_core_projectState(
    true,
    &smData->mSimulationDelegate,
    &smData->mSimRuntimeDerivedValuesBundle,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 14,
    systemInput->mD.mX,
    systemInput->mX.mX, neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_assemble_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  const SmMechanismDelegate *delegate = &smData->mAssemblyDelegate;
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle =
    &smData->mAsmRuntimeDerivedValuesBundle;
  PmfMessageId errorId = NULL;
  size_t i;
  double errorResult = 0.0;
  const size_t numTargets = 34;
  unsigned int asmStatus = 0;
  double *assemblyFullStateVector = smData->mAssemblyFullStateVector.mX;
  double *simulationFullStateVector = smData->mSimulationFullStateVector.mX;
  (*delegate->mSetTargets)(runtimeDerivedValuesBundle, smData->mTargets);

  {
    const double *u = systemInput->mU.mX;
    const double *uDot = u + smData->mInputVectorSize;
    CTarget *target = smData->mTargets + smData->mNumInternalTargets;
    for (i = 0; i < smData->mNumInputMotionPrimitives; ++i) {
      const size_t inputOffset = smData->mMotionInputOffsets.mX[i];
      (target++)->mValue[0] = u [inputOffset];
      (target++)->mValue[0] = uDot[inputOffset];
    }
  }

  if (smData->mAssemblyModeVector.mN > 0) {
    errorId = Wind_Turbine_31c4daf8_6_computeAsmModeVector(
      systemInput->mU.mX,
      systemInput->mU.mX + 14,
      systemInput->mV.mX + 14,
      smData->mAssemblyModeVector.mX,
      &errorResult,
      neDiagMgr);
    if (errorId != NULL)
      return errorId;
  }

  errorId = sm_core_computeStateVector(
    delegate, runtimeDerivedValuesBundle, smData->mAssemblyModeVector.mX,
    numTargets, smData->mTargets,
    assemblyFullStateVector, neDiagMgr);
  if (errorId != NULL)
    return errorId;
  asmStatus = sm_core_checkAssembly(
    delegate, runtimeDerivedValuesBundle, assemblyFullStateVector,
    smData->mAssemblyModeVector.mX,
    NULL, NULL, NULL);
  if (asmStatus != 1) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:AssemblyFailure",
      asmStatus == 2 ?
      "Model not assembled due to a position violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
      :
      (asmStatus == 3 ?
       "Model not assembled due to a velocity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
       :
       "Model not assembled due to a singularity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."),
      neDiagMgr);
  }

#if 0

  Wind_Turbine_31c4daf8_6_checkTargets(
    &smData->mSimRuntimeDerivedValuesBundle,
    assemblyFullStateVector);

#endif

  if (smData->mModeVectorSize > 0) {
    errorId = Wind_Turbine_31c4daf8_6_computeSimModeVector(
      systemInput->mU.mX,
      systemInput->mU.mX + 14,
      systemInput->mV.mX + 14,
      systemInput->mM.mX,
      &errorResult,
      neDiagMgr);
    if (errorId != NULL)
      return errorId;
    memcpy(smData->mCachedModeVector.mX, systemInput->mM.mX,
           0 * sizeof(int32_T));
  }

  errorId =
    (*delegate->mConvertStateVector)(
    NULL, runtimeDerivedValuesBundle, NULL, assemblyFullStateVector,
    smData->mAssemblyModeVector.mX, systemInput->mM.mX,
    simulationFullStateVector, neDiagMgr);
  for (i = 0; i < smData->mStateVectorSize; ++i)
    systemInput->mX.mX[i] = simulationFullStateVector[smData->
      mStateVectorMap.mX[i]];
  memcpy(systemInput->mD.mX,
         simulationFullStateVector +
         smData->mFullStateVectorSize - smData->mDiscreteStateSize,
         smData->mDiscreteStateSize * sizeof(double));
  return errorId;
}

typedef struct {
  size_t first;
  size_t second;
} SizePair;

static void checkMemAllocStatus(int_T status)
{
  (void) status;
}

static
  PmCharVector cStringToCharVector(const char *src)
{
  const size_t n = strlen(src);
  PmCharVector charVect;
  const int_T status =
    pm_create_char_vector_fields(&charVect, n + 1, pm_default_allocator());
  checkMemAllocStatus(status);
  strcpy(charVect.mX, src);
  return charVect;
}

static
  void initBasicAttributes(NeDaePrivateData *smData)
{
  size_t i;
  smData->mStateVectorSize = 28;
  smData->mFullStateVectorSize = 28;
  smData->mDiscreteStateSize = 0;
  smData->mModeVectorSize = 0;
  smData->mNumZeroCrossings = 0;
  smData->mInputVectorSize = 14;
  smData->mOutputVectorSize = 27;
  smData->mNumConstraintEqns = 9;
  smData->mDoCheckDynamics = true;
  for (i = 0; i < 4; ++i)
    smData->mChecksum[i] = 0;
}

static
  void initStateVector(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T stateVectorMap[28] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 27
  };

  const CTarget targets[34] = {
    { 0, 241, 0, false, 0, 2, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 241, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 310, 0, false, 0, 1, "m", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 310, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 320, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 320, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 321, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 321, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 321, 1, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 321, 1, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 340, 0, false, 0, 1, "m", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 340, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 350, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 350, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 351, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 351, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 351, 1, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 351, 1, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 370, 0, false, 0, 1, "m", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 370, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 380, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 380, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 381, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 381, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 381, 1, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 381, 1, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 387, 0, false, 0, 2, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 387, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 393, 0, false, 0, 2, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 393, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 399, 0, false, 0, 2, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 399, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 447, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 447, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } }
  };

  const size_t numTargets = 34;
  int_T status;
  size_t i;
  status = pm_create_real_vector_fields(
    &smData->mAssemblyFullStateVector, 28, alloc);
  checkMemAllocStatus(status);
  status = pm_create_real_vector_fields(
    &smData->mSimulationFullStateVector, 28, alloc);
  checkMemAllocStatus(status);
  status = pm_create_int_vector_fields(
    &smData->mStateVectorMap, smData->mStateVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mStateVectorMap.mX, stateVectorMap,
         smData->mStateVectorSize * sizeof(int32_T));
  smData->mNumInternalTargets = 34;
  smData->mNumInputMotionPrimitives = 0;
  PM_ALLOCATE_ARRAY(smData->mTargets, CTarget, numTargets, alloc);
  for (i = 0; i < numTargets; ++i)
    sm_compiler_CTarget_copy(targets + i, smData->mTargets + i);
}

static void initAsserts(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  int_T status = 0;
  smData->mNumParamAsserts = 0;
  smData->mParamAssertObjects = NULL;
  smData->mParamAssertPaths = NULL;
  smData->mParamAssertDescriptors = NULL;
  smData->mParamAssertMessages = NULL;
  smData->mParamAssertMessageIds = NULL;
  status = pm_create_bool_vector_fields(
    &smData->mParamAssertIsWarnings, smData->mNumParamAsserts, alloc);
  checkMemAllocStatus(status);
  if (smData->mNumParamAsserts > 0) {
    const NeAssertData *ad = Wind_Turbine_31c4daf8_6_assertData;
    size_t i;
    PM_ALLOCATE_ARRAY(smData->mParamAssertObjects,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertPaths,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertDescriptors,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertMessages,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertMessageIds,
                      PmCharVector, 0, alloc);
    for (i = 0; i < smData->mNumParamAsserts; ++i, ++ad) {
      smData->mParamAssertObjects [i] = cStringToCharVector(ad->mObject );
      smData->mParamAssertPaths [i] = cStringToCharVector(ad->mPath );
      smData->mParamAssertDescriptors[i] = cStringToCharVector(ad->mDescriptor);
      smData->mParamAssertMessages [i] = cStringToCharVector(ad->mMessage );
      smData->mParamAssertMessageIds [i] = cStringToCharVector(ad->mMessageID );
      smData->mParamAssertIsWarnings.mX[i] = ad->mIsWarn;
    }
  }
}

static
  void initModeVector(NeDaePrivateData *smData)
{
  {
    size_t i;
    const int_T status = pm_create_int_vector_fields(
      &smData->mAssemblyModeVector, 0,
      pm_default_allocator());
    checkMemAllocStatus(status);
    for (i = 0; i < smData->mAssemblyModeVector.mN; ++i)
      smData->mAssemblyModeVector.mX[i] = 0;
  }

  {
    size_t i;
    const int_T status = pm_create_int_vector_fields(
      &smData->mCachedModeVector, 0, pm_default_allocator());
    checkMemAllocStatus(status);
    for (i = 0; i < smData->mModeVectorSize; ++i)
      smData->mCachedModeVector.mX[i] = 0;
  }
}

static void initZeroCrossings(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  int_T status = 0;
  smData->mZeroCrossingObjects = NULL;
  smData->mZeroCrossingPaths = NULL;
  smData->mZeroCrossingDescriptors = NULL;
  status = pm_create_int_vector_fields(
    &smData->mZeroCrossingTypes, 0, alloc);
  checkMemAllocStatus(status);
  if (smData->mNumZeroCrossings > 0) {
    const NeZCData *zcd = Wind_Turbine_31c4daf8_6_ZCData;
    size_t i;
    PM_ALLOCATE_ARRAY(smData->mZeroCrossingObjects,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mZeroCrossingPaths,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mZeroCrossingDescriptors,
                      PmCharVector, 0, alloc);
    for (i = 0; i < smData->mNumZeroCrossings; ++i, ++zcd) {
      smData->mZeroCrossingObjects [i] = cStringToCharVector(zcd->mObject);
      smData->mZeroCrossingPaths [i] = cStringToCharVector(zcd->mPath );
      smData->mZeroCrossingDescriptors[i] = cStringToCharVector(zcd->mDescriptor);
      smData->mZeroCrossingTypes.mX[i] = zcd->mType;
    }
  }
}

static
  void initVariables(NeDaePrivateData *smData)
{
  const char *varFullPaths[28] = {
    "Nacelle.Yaw_System.Servomotor.Revolute_Joint.Rz.q",
    "Nacelle.Yaw_System.Servomotor.Revolute_Joint.Rz.w",
    "Nacelle.Hub_Axis.Rotate.Revolute_Joint.Rz.q",
    "Nacelle.Hub_Axis.Rotate.Revolute_Joint.Rz.w",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB1.Revolute_Joint.Rz.q",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB1.Revolute_Joint.Rz.w",
    "Nacelle.Pitch_System.Hydraulic.Linkage1.Universal_Joint.Rx.q",
    "Nacelle.Pitch_System.Hydraulic.Linkage1.Universal_Joint.Ry.q",
    "Nacelle.Pitch_System.Hydraulic.Linkage1.Universal_Joint.Rx.w",
    "Nacelle.Pitch_System.Hydraulic.Linkage1.Universal_Joint.Ry.w",
    "Nacelle.Pitch_System.Hydraulic.Linkage1.Prismatic_Joint.Pz.p",
    "Nacelle.Pitch_System.Hydraulic.Linkage1.Prismatic_Joint.Pz.v",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB2.Revolute_Joint.Rz.q",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB2.Revolute_Joint.Rz.w",
    "Nacelle.Pitch_System.Hydraulic.Linkage2.Universal_Joint.Rx.q",
    "Nacelle.Pitch_System.Hydraulic.Linkage2.Universal_Joint.Ry.q",
    "Nacelle.Pitch_System.Hydraulic.Linkage2.Universal_Joint.Rx.w",
    "Nacelle.Pitch_System.Hydraulic.Linkage2.Universal_Joint.Ry.w",
    "Nacelle.Pitch_System.Hydraulic.Linkage2.Prismatic_Joint.Pz.p",
    "Nacelle.Pitch_System.Hydraulic.Linkage2.Prismatic_Joint.Pz.v",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB3.Revolute_Joint.Rz.q",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB3.Revolute_Joint.Rz.w",
    "Nacelle.Pitch_System.Hydraulic.Linkage3.Universal_Joint.Rx.q",
    "Nacelle.Pitch_System.Hydraulic.Linkage3.Universal_Joint.Ry.q",
    "Nacelle.Pitch_System.Hydraulic.Linkage3.Universal_Joint.Rx.w",
    "Nacelle.Pitch_System.Hydraulic.Linkage3.Universal_Joint.Ry.w",
    "Nacelle.Pitch_System.Hydraulic.Linkage3.Prismatic_Joint.Pz.p",
    "Nacelle.Pitch_System.Hydraulic.Linkage3.Prismatic_Joint.Pz.v"
  };

  const char *varObjects[28] = {
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Revolute Joint",
    "Wind_Turbine/Nacelle/Yaw System/Servomotor/Revolute Joint",
    "Wind_Turbine/Nacelle/Hub Axis/Rotate/Revolute Joint",
    "Wind_Turbine/Nacelle/Hub Axis/Rotate/Revolute Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB1/Revolute Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB1/Revolute Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage1/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage1/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage1/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage1/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage1/Prismatic  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage1/Prismatic  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB2/Revolute Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB2/Revolute Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage2/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage2/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage2/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage2/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage2/Prismatic  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage2/Prismatic  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB3/Revolute Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB3/Revolute Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage3/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage3/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage3/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage3/Universal  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage3/Prismatic  Joint",
    "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage3/Prismatic  Joint"
  };

  smData->mNumVarScalars = 28;
  smData->mVarFullPaths = NULL;
  smData->mVarObjects = NULL;
  if (smData->mNumVarScalars > 0) {
    size_t s;
    PmAllocator *alloc = pm_default_allocator();
    PM_ALLOCATE_ARRAY(smData->mVarFullPaths, PmCharVector, 28, alloc);
    PM_ALLOCATE_ARRAY(smData->mVarObjects, PmCharVector, 28, alloc);
    for (s = 0; s < smData->mNumVarScalars; ++s) {
      smData->mVarFullPaths[s] = cStringToCharVector(varFullPaths[s]);
      smData->mVarObjects[s] = cStringToCharVector(varObjects[s]);
    }
  }
}

static
  void initRuntimeParameters(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  int_T status = 0;
  size_t i = 0;
  const int32_T *rtpRootVarRows = NULL;
  const int32_T *rtpRootVarCols = NULL;
  const char **rtpFullPaths = NULL;
  smData->mNumRtpRootVars = 0;
  status = pm_create_int_vector_fields(
    &smData->mRtpRootVarRows, smData->mNumRtpRootVars, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mRtpRootVarRows.mX, rtpRootVarRows,
         smData->mNumRtpRootVars * sizeof(int32_T));
  status = pm_create_int_vector_fields(
    &smData->mRtpRootVarCols, smData->mNumRtpRootVars, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mRtpRootVarCols.mX, rtpRootVarCols,
         smData->mNumRtpRootVars * sizeof(int32_T));
  smData->mRtpFullPaths = NULL;
  if (smData->mNumRtpRootVars > 0) {
    size_t v;
    PM_ALLOCATE_ARRAY(smData->mRtpFullPaths, PmCharVector, 0, alloc);
    for (v = 0; v < smData->mNumRtpRootVars; ++v) {
      smData->mRtpFullPaths[v] = cStringToCharVector(rtpFullPaths[v]);
    }
  }

  smData->mNumRuntimeRootVarScalars = 0;
  status = pm_create_real_vector_fields(
    &smData->mRuntimeParameterScalars, 0,
    alloc);
  checkMemAllocStatus(status);
  for (i = 0; i < smData->mRuntimeParameterScalars.mN; ++i)
    smData->mRuntimeParameterScalars.mX[i] = 0.0;
  sm_core_RuntimeDerivedValuesBundle_create(
    &smData->mAsmRuntimeDerivedValuesBundle,
    0,
    0);
  sm_core_RuntimeDerivedValuesBundle_create(
    &smData->mSimRuntimeDerivedValuesBundle,
    0,
    0);
}

static
  void initIoInfoHelper(
  size_t n,
  const char *portPathsSource[],
  const char *unitsSource[],
  const SizePair dimensions[],
  boolean_T doInputs,
  NeDaePrivateData *smData)
{
  PmCharVector *portPaths = NULL;
  PmCharVector *units = NULL;
  NeDsIoInfo *infos = NULL;
  if (n > 0) {
    size_t s;
    PmAllocator *alloc = pm_default_allocator();
    PM_ALLOCATE_ARRAY(portPaths, PmCharVector, n, alloc);
    PM_ALLOCATE_ARRAY(units, PmCharVector, n, alloc);
    PM_ALLOCATE_ARRAY(infos, NeDsIoInfo, n, alloc);
    for (s = 0; s < n; ++s) {
      portPaths[s] = cStringToCharVector(portPathsSource[s]);
      units[s] = cStringToCharVector(unitsSource[s]);

      {
        NeDsIoInfo *info = infos + s;
        info->mName = info->mIdentifier = portPaths[s].mX;
        info->mM = dimensions[s].first;
        info->mN = dimensions[s].second;
        info->mUnit = units[s].mX;
      }
    }
  }

  if (doInputs) {
    smData->mNumInputs = n;
    smData->mInputPortPaths = portPaths;
    smData->mInputUnits = units;
    smData->mInputInfos = infos;
  } else {
    smData->mNumOutputs = n;
    smData->mOutputPortPaths = portPaths;
    smData->mOutputUnits = units;
    smData->mOutputInfos = infos;
  }
}

static
  void initIoInfo(NeDaePrivateData *smData)
{
  const char *inputPortPaths[14] = {
    "Nacelle.Hub_Axis.Rotate.Revolute_Joint.ti",
    "Nacelle.Pitch_System.Hydraulic.Linkage1.Prismatic_Joint.fi",
    "Nacelle.Pitch_System.Hydraulic.Linkage2.Prismatic_Joint.fi",
    "Nacelle.Pitch_System.Hydraulic.Linkage3.Prismatic_Joint.fi",
    "Nacelle.Yaw_System.Servomotor.Revolute_Joint.ti",
    "Blade_Load.Lift_and_Drag.Apply_Moments.External_Force_and_Torque1.tx",
    "Blade_Load.Lift_and_Drag.Apply_Moments.External_Force_and_Torque1.ty",
    "Blade_Load.Lift_and_Drag.Apply_Moments.External_Force_and_Torque1.tz",
    "Blade_Load.Lift_and_Drag.Apply_Moments.External_Force_and_Torque2.tx",
    "Blade_Load.Lift_and_Drag.Apply_Moments.External_Force_and_Torque2.ty",
    "Blade_Load.Lift_and_Drag.Apply_Moments.External_Force_and_Torque2.tz",
    "Blade_Load.Lift_and_Drag.Apply_Moments.External_Force_and_Torque3.tx",
    "Blade_Load.Lift_and_Drag.Apply_Moments.External_Force_and_Torque3.ty",
    "Blade_Load.Lift_and_Drag.Apply_Moments.External_Force_and_Torque3.tz"
  };

  const char *inputUnits[14] = {
    "m^2*kg/s^2",
    "m*kg/s^2",
    "m*kg/s^2",
    "m*kg/s^2",
    "m^2*kg/s^2",
    "m^2*kg/s^2",
    "m^2*kg/s^2",
    "m^2*kg/s^2",
    "m^2*kg/s^2",
    "m^2*kg/s^2",
    "m^2*kg/s^2",
    "m^2*kg/s^2",
    "m^2*kg/s^2",
    "m^2*kg/s^2"
  };

  const SizePair inputDimensions[14] = {
    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }
  };

  const char *outputPortPaths[15] = {
    "Nacelle.Hub_Axis.Rotate.Revolute_Joint.q",
    "Nacelle.Hub_Axis.Rotate.Revolute_Joint.w",
    "Nacelle.Pitch_System.Hydraulic.Linkage1.Prismatic_Joint.v",
    "Nacelle.Pitch_System.Hydraulic.Linkage2.Prismatic_Joint.v",
    "Nacelle.Pitch_System.Hydraulic.Linkage3.Prismatic_Joint.v",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB1.Revolute_Joint.q",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB1.Revolute_Joint.fc",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB1.Revolute_Joint.tc",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB2.Revolute_Joint.q",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB2.Revolute_Joint.fc",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB2.Revolute_Joint.tc",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB3.Revolute_Joint.q",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB3.Revolute_Joint.fc",
    "Nacelle.Pitch_System.Hydraulic.Rev_RB3.Revolute_Joint.tc",
    "Nacelle.Yaw_System.Servomotor.Revolute_Joint.w"
  };

  const char *outputUnits[15] = {
    "rad",
    "rad/s",
    "m/s",
    "m/s",
    "m/s",
    "rad",
    "m*kg/s^2",
    "m^2*kg/s^2",
    "rad",
    "m*kg/s^2",
    "m^2*kg/s^2",
    "rad",
    "m*kg/s^2",
    "m^2*kg/s^2",
    "rad/s"
  };

  const SizePair outputDimensions[15] = {
    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }, { 3, 1 }, { 3, 1 },

    { 1, 1 }, { 3, 1 }, { 3, 1 }, { 1, 1 },

    { 3, 1 }, { 3, 1 }, { 1, 1 }
  };

  initIoInfoHelper(14, inputPortPaths, inputUnits, inputDimensions,
                   true, smData);
  initIoInfoHelper(15, outputPortPaths, outputUnits, outputDimensions,
                   false, smData);
}

static
  void initInputDerivs(NeDaePrivateData *smData)
{
  const int32_T numInputDerivs[14] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
  };

  PmAllocator *alloc = pm_default_allocator();
  const int_T status = pm_create_int_vector_fields(
    &smData->mNumInputDerivs, smData->mInputVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mNumInputDerivs.mX, numInputDerivs,
         14 * sizeof(int32_T));
  smData->mInputOrder = 1;
}

static
  void initDirectFeedthrough(NeDaePrivateData *smData)
{
  const boolean_T directFeedthroughVector[14] = {
    false, false, false, false, false, false, false, false, false, false,
    false, false, false, false
  };

  const boolean_T directFeedthroughMatrix[378] = {
    false, false, false, false, false, false, true, true, true, true,
    true, true, false, true, true, true, true, true, true, false,
    true, true, true, true, true, true, false, false, false, false,
    false, false, false, true, true, true, true, true, true, false,
    true, true, true, true, true, true, false, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, false, true, true, true,
    true, true, true, false, true, true, true, true, true, true,
    false, false, false, false, false, false, false, true, true, true,
    true, true, true, false, true, true, true, true, true, true,
    false, true, true, true, true, true, true, false, false, false,
    false, false, false, false, true, true, true, true, true, true,
    false, true, true, true, true, true, true, false, true, true,
    true, true, true, true, false, false, false, false, false, false,
    false, true, true, true, true, true, true, false, true, true,
    true, true, true, true, false, true, true, true, true, true,
    true, false, false, false, false, false, false, false, true, true,
    true, true, true, true, false, true, true, true, true, true,
    true, false, true, true, true, true, true, true, false, false,
    false, false, false, false, false, true, true, true, true, true,
    true, false, true, true, true, true, true, true, false, true,
    true, true, true, true, true, false, false, false, false, false,
    false, false, true, true, true, true, true, true, false, true,
    true, true, true, true, true, false, true, true, true, true,
    true, true, false, false, false, false, false, false, false, true,
    true, true, true, true, true, false, true, true, true, true,
    true, true, false, true, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, true,
    true, true, false, true, true, true, true, true, true, false,
    true, true, true, true, true, true, false, false, false, false,
    false, false, false, true, true, true, true, true, true, false,
    true, true, true, true, true, true, false, true, true, true,
    true, true, true, false, false, false, false, false, false, false,
    true, true, true, true, true, true, false, true, true, true,
    true, true, true, false, true, true, true, true, true, true,
    false, false, false, false, false, false, false, true, true, true,
    true, true, true, false, true, true, true, true, true, true,
    false, true, true, true, true, true, true, false
  };

  PmAllocator *alloc = pm_default_allocator();

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughVector, 14, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughVector.mX, directFeedthroughVector,
           14 * sizeof(boolean_T));
  }

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughMatrix, 378, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughMatrix.mX, directFeedthroughMatrix,
           378 * sizeof(boolean_T));
  }
}

static
  void initOutputDerivProc(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T outputFunctionMap[27] = {
    0, 0, 0, 0, 0, 0, 1, 1, 1, 1,
    1, 1, 0, 1, 1, 1, 1, 1, 1, 0,
    1, 1, 1, 1, 1, 1, 0
  };

  smData->mOutputFunctionMap = pm_create_int_vector(27, alloc);
  memcpy(smData->mOutputFunctionMap->mX, outputFunctionMap,
         27 * sizeof(int32_T));
  smData->mNumOutputClasses = 2;
  smData->mHasKinematicOutputs = true;
  smData->mHasDynamicOutputs = true;
  smData->mIsOutputClass0Dynamic = false;
  smData->mDoComputeDynamicOutputs = false;
  smData->mCachedDerivativesAvailable = false;

  {
    size_t i = 0;
    const int_T status = pm_create_real_vector_fields(
      &smData->mCachedDerivatives, 28, pm_default_allocator());
    checkMemAllocStatus(status);
    for (i = 0; i < smData->mCachedDerivatives.mN; ++i)
      smData->mCachedDerivatives.mX[i] = 0.0;
  }
}

#if 0

static void initializeSizePairVector(const SmSizePair *data,
  SmSizePairVector *vector)
{
  const size_t n = sm_core_SmSizePairVector_size(vector);
  size_t i;
  for (i = 0; i < n; ++i, ++data)
    sm_core_SmSizePairVector_setValue(vector, i, data++);
}

#endif

static
  void initAssemblyDelegate(SmMechanismDelegate *delegate)
{
  SmMechanismDelegateScratchpad *scratchpad = NULL;
  const SmSizePair jointToStageIdx[11] = {
    { 241, 1 }, { 310, 4 }, { 321, 3 }, { 340, 7 }, { 351, 6 }, { 370, 10 },

    { 381, 9 }, { 387, 2 }, { 393, 5 }, { 399, 8 }, { 447, 0 }
  };

  const size_t primitiveIndices[11 + 1] = {
    0, 1, 2, 3, 5, 6, 7, 9, 10, 11,
    13, 14
  };

  const SmSizePair stateOffsets[14] = {
    { 0, 1 }, { 2, 3 }, { 4, 5 }, { 6, 8 }, { 7, 9 }, { 10, 11 },

    { 12, 13 }, { 14, 16 }, { 15, 17 }, { 18, 19 }, { 20, 21 }, { 22, 24 },

    { 23, 25 }, { 26, 27 }
  };

  const SmSizePair dofOffsets[14] = {
    { 0, 1 }, { 1, 2 }, { 2, 3 }, { 3, 4 }, { 4, 5 }, { 5, 6 },

    { 6, 7 }, { 7, 8 }, { 8, 9 }, { 9, 10 }, { 10, 11 }, { 11, 12 },

    { 12, 13 }, { 13, 14 }
  };

  const size_t *flexibleStages = NULL;
  const size_t remodIndices[11] = {
    0, 2, 4, 6, 7, 12, 14, 15, 20, 22,
    23
  };

  const size_t equationsPerConstraint[3] = {
    3, 3, 3
  };

  const size_t dofToVelSlot[14] = {
    1, 3, 5, 8, 9, 11, 13, 16, 17, 19,
    21, 24, 25, 27
  };

  const size_t constraintDofs[12] = {
    2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
    12, 13
  };

  const size_t constraintDofOffsets[3 + 1] = {
    0, 4, 8, 12
  };

  const size_t Jm = 9;
  const size_t Jn = 14;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  sm_core_MechanismDelegate_allocScratchpad(delegate);
  scratchpad = delegate->mScratchpad;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000062e-09;
  delegate->mTreeJointDof = 14;
  delegate->mDof = 14;
  delegate->mStateSize = 28;
  delegate->mContinuousStateSize = 28;
  delegate->mModeVectorSize = 0;
  delegate->mNumStages = 11;
  delegate->mNumConstraints = 3;
  delegate->mNumAllConstraintEquations = 9;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, 11, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, 11 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 14, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 14 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 14, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 14 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mFlexibleStages, 0, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mFlexibleStages),
         flexibleStages, 0 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 11, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 11 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mEquationsPerConstraint, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mEquationsPerConstraint),
         equationsPerConstraint, delegate->mNumConstraints * sizeof(size_t));
  sm_core_SmIntVector_create(
    &delegate->mRunTimeEnabledEquations,
    delegate->mNumAllConstraintEquations, 1);
  sm_core_SmSizeTVector_create(
    &delegate->mDofToVelSlot, delegate->mDof, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mDofToVelSlot),
         dofToVelSlot, delegate->mDof * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofs, 12, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofs),
         constraintDofs, 12 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofOffsets, delegate->mNumConstraints + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofOffsets),
         constraintDofOffsets, (delegate->mNumConstraints + 1) * sizeof(size_t));
  sm_core_SmBoundedSet_create(&scratchpad->mPosRequired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mPosDesired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggested, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mPosFree, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mPosNonRequired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggAndFree, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelRequired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelDesired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggested, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelFree, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelNonRequired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggAndFree, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mConstraintFilter, 3);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveConstraints, 3);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs0, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mNewConstraints, 3);
  sm_core_SmBoundedSet_create(&scratchpad->mNewDofs, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mUnsatisfiedConstraints, 3);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveConstraintsVect,
    3, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveDofsVect, 14, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mFullDofToActiveDof, 14, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyPosTargetedPrims, 14, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyVelTargetedPrims, 14, &zeroSizePair);
  sm_core_SmSizeTVector_create(&scratchpad->mPosPartialTypes, 14, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mVelPartialTypes, 14, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mPartiallyActivePrims, 14, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mBaseFrameVelOffsets, 0, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mCvVelOffsets, 14, &zeroSizePair);
  sm_core_SmRealVector_create(
    &scratchpad->mCvAzimuthValues, 14, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mInitialState, 28, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mStartState, 28, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mTestState, 28, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mFullStateVector, 28, 0.0);
  sm_core_SmIntVector_create(&scratchpad->mModeVector, 0, 0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianPrimSubmatrix, Jm * 6, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&scratchpad->mSvdWork, 594, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchScaledDeltaVect, 14, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchTestStateVect, 28, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mActiveDofVelsVect, 14, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mMotionData, 234, 0.0);
  delegate->mSetTargets = Wind_Turbine_31c4daf8_6_setTargets;
  delegate->mResetStateVector = Wind_Turbine_31c4daf8_6_resetAsmStateVector;
  delegate->mInitializeTrackedAngleState =
    Wind_Turbine_31c4daf8_6_initializeTrackedAngleState;
  delegate->mComputeDiscreteState = Wind_Turbine_31c4daf8_6_computeDiscreteState;
  delegate->mAdjustPosition = Wind_Turbine_31c4daf8_6_adjustPosition;
  delegate->mPerturbJointPrimitiveState =
    Wind_Turbine_31c4daf8_6_perturbAsmJointPrimitiveState;
  delegate->mPerturbFlexibleBodyState = NULL;
  delegate->mComputePosDofBlendMatrix =
    Wind_Turbine_31c4daf8_6_computePosDofBlendMatrix;
  delegate->mComputeVelDofBlendMatrix =
    Wind_Turbine_31c4daf8_6_computeVelDofBlendMatrix;
  delegate->mProjectPartiallyTargetedPos =
    Wind_Turbine_31c4daf8_6_projectPartiallyTargetedPos;
  delegate->mPropagateMotion = Wind_Turbine_31c4daf8_6_propagateMotion;
  delegate->mComputeAssemblyError = Wind_Turbine_31c4daf8_6_computeAssemblyError;
  delegate->mComputeAssemblyJacobian =
    Wind_Turbine_31c4daf8_6_computeAssemblyJacobian;
  delegate->mComputeFullAssemblyJacobian =
    Wind_Turbine_31c4daf8_6_computeFullAssemblyJacobian;
  delegate->mIsInKinematicSingularity =
    Wind_Turbine_31c4daf8_6_isInKinematicSingularity;
  delegate->mConvertStateVector = Wind_Turbine_31c4daf8_6_convertStateVector;
  delegate->mConstructStateVector = NULL;
  delegate->mExtractSolverStateVector = NULL;
  delegate->mIsPositionViolation = NULL;
  delegate->mIsVelocityViolation = NULL;
  delegate->mProjectStateSim = NULL;
  delegate->mComputeConstraintError = NULL;
  delegate->mResetModeVector = NULL;
  delegate->mHasJointDisToNormModeChange = NULL;
  delegate->mPerformJointDisToNormModeChange = NULL;
  delegate->mOnModeChangedCutJoints = NULL;
  delegate->mMech = NULL;
}

static
  void initSimulationDelegate(SmMechanismDelegate *delegate)
{
  SmMechanismDelegateScratchpad *scratchpad = NULL;
  const SmSizePair jointToStageIdx[11] = {
    { 241, 1 }, { 310, 4 }, { 321, 3 }, { 340, 7 }, { 351, 6 }, { 370, 10 },

    { 381, 9 }, { 387, 2 }, { 393, 5 }, { 399, 8 }, { 447, 0 }
  };

  const size_t primitiveIndices[11 + 1] = {
    0, 1, 2, 3, 5, 6, 7, 9, 10, 11,
    13, 14
  };

  const SmSizePair stateOffsets[14] = {
    { 0, 1 }, { 2, 3 }, { 4, 5 }, { 6, 8 }, { 7, 9 }, { 10, 11 },

    { 12, 13 }, { 14, 16 }, { 15, 17 }, { 18, 19 }, { 20, 21 }, { 22, 24 },

    { 23, 25 }, { 26, 27 }
  };

  const SmSizePair dofOffsets[14] = {
    { 0, 1 }, { 1, 2 }, { 2, 3 }, { 3, 4 }, { 4, 5 }, { 5, 6 },

    { 6, 7 }, { 7, 8 }, { 8, 9 }, { 9, 10 }, { 10, 11 }, { 11, 12 },

    { 12, 13 }, { 13, 14 }
  };

  const size_t *flexibleStages = NULL;
  const size_t remodIndices[11] = {
    0, 2, 4, 6, 7, 12, 14, 15, 20, 22,
    23
  };

  const size_t equationsPerConstraint[3] = {
    3, 3, 3
  };

  const size_t dofToVelSlot[14] = {
    1, 3, 5, 8, 9, 11, 13, 16, 17, 19,
    21, 24, 25, 27
  };

  const size_t constraintDofs[12] = {
    2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
    12, 13
  };

  const size_t constraintDofOffsets[3 + 1] = {
    0, 4, 8, 12
  };

  const size_t Jm = 9;
  const size_t Jn = 14;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  sm_core_MechanismDelegate_allocScratchpad(delegate);
  scratchpad = delegate->mScratchpad;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000062e-09;
  delegate->mTreeJointDof = 14;
  delegate->mDof = 14;
  delegate->mStateSize = 28;
  delegate->mContinuousStateSize = 28;
  delegate->mModeVectorSize = 0;
  delegate->mNumStages = 11;
  delegate->mNumConstraints = 3;
  delegate->mNumAllConstraintEquations = 9;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, 11, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, 11 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 14, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 14 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 14, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 14 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mFlexibleStages, 0, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mFlexibleStages),
         flexibleStages, 0 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 11, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 11 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mEquationsPerConstraint, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mEquationsPerConstraint),
         equationsPerConstraint, delegate->mNumConstraints * sizeof(size_t));
  sm_core_SmIntVector_create(
    &delegate->mRunTimeEnabledEquations,
    delegate->mNumAllConstraintEquations, 1);
  sm_core_SmSizeTVector_create(
    &delegate->mDofToVelSlot, delegate->mDof, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mDofToVelSlot),
         dofToVelSlot, delegate->mDof * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofs, 12, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofs),
         constraintDofs, 12 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofOffsets, delegate->mNumConstraints + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofOffsets),
         constraintDofOffsets, (delegate->mNumConstraints + 1) * sizeof(size_t));
  sm_core_SmBoundedSet_create(&scratchpad->mPosRequired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mPosDesired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggested, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mPosFree, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mPosNonRequired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggAndFree, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelRequired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelDesired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggested, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelFree, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelNonRequired, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggAndFree, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mConstraintFilter, 3);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveConstraints, 3);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs0, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mNewConstraints, 3);
  sm_core_SmBoundedSet_create(&scratchpad->mNewDofs, 14);
  sm_core_SmBoundedSet_create(&scratchpad->mUnsatisfiedConstraints, 3);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveConstraintsVect,
    3, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveDofsVect, 14, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mFullDofToActiveDof, 14, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyPosTargetedPrims, 14, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyVelTargetedPrims, 14, &zeroSizePair);
  sm_core_SmSizeTVector_create(&scratchpad->mPosPartialTypes, 14, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mVelPartialTypes, 14, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mPartiallyActivePrims, 14, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mBaseFrameVelOffsets, 0, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mCvVelOffsets, 14, &zeroSizePair);
  sm_core_SmRealVector_create(
    &scratchpad->mCvAzimuthValues, 14, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mInitialState, 28, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mStartState, 28, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mTestState, 28, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mFullStateVector, 28, 0.0);
  sm_core_SmIntVector_create(&scratchpad->mModeVector, 0, 0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianPrimSubmatrix, Jm * 6, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&scratchpad->mSvdWork, 594, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchScaledDeltaVect, 14, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchTestStateVect, 28, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mActiveDofVelsVect, 14, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mMotionData, 234, 0.0);
  delegate->mSetTargets = NULL;
  delegate->mResetStateVector = Wind_Turbine_31c4daf8_6_resetSimStateVector;
  delegate->mInitializeTrackedAngleState = NULL;
  delegate->mComputeDiscreteState = NULL;
  delegate->mAdjustPosition = NULL;
  delegate->mPerturbJointPrimitiveState =
    Wind_Turbine_31c4daf8_6_perturbSimJointPrimitiveState;
  delegate->mPerturbFlexibleBodyState =
    Wind_Turbine_31c4daf8_6_perturbFlexibleBodyState;
  delegate->mComputePosDofBlendMatrix = NULL;
  delegate->mComputeVelDofBlendMatrix = NULL;
  delegate->mProjectPartiallyTargetedPos = NULL;
  delegate->mPropagateMotion = NULL;
  delegate->mComputeAssemblyError = NULL;
  delegate->mComputeAssemblyJacobian = NULL;
  delegate->mComputeFullAssemblyJacobian = NULL;
  delegate->mIsInKinematicSingularity = NULL;
  delegate->mConvertStateVector = NULL;
  delegate->mConstructStateVector = Wind_Turbine_31c4daf8_6_constructStateVector;
  delegate->mExtractSolverStateVector =
    Wind_Turbine_31c4daf8_6_extractSolverStateVector;
  delegate->mIsPositionViolation = Wind_Turbine_31c4daf8_6_isPositionViolation;
  delegate->mIsVelocityViolation = Wind_Turbine_31c4daf8_6_isVelocityViolation;
  delegate->mProjectStateSim = Wind_Turbine_31c4daf8_6_projectStateSim;
  delegate->mComputeConstraintError =
    Wind_Turbine_31c4daf8_6_computeConstraintError;
  delegate->mResetModeVector = Wind_Turbine_31c4daf8_6_resetModeVector;
  delegate->mHasJointDisToNormModeChange =
    Wind_Turbine_31c4daf8_6_hasJointDisToNormModeChange;
  delegate->mPerformJointDisToNormModeChange =
    Wind_Turbine_31c4daf8_6_performJointDisToNormModeChange;
  delegate->mOnModeChangedCutJoints =
    Wind_Turbine_31c4daf8_6_onModeChangedCutJoints;
  delegate->mMech = NULL;
}

static
  void initMechanismDelegates(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T *motionInputOffsets = NULL;
  int_T status = 0;
  initAssemblyDelegate(&smData->mAssemblyDelegate);
  initSimulationDelegate(&smData->mSimulationDelegate);
  status = pm_create_int_vector_fields(
    &smData->mMotionInputOffsets, smData->mNumInputMotionPrimitives, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mMotionInputOffsets.mX, motionInputOffsets,
         0 * sizeof(int32_T));
}

static
  void initComputationFcnPtrs(NeDaePrivateData *smData)
{
  smData->mSetParametersFcn = dae_cg_setParameters_function;
  smData->mPAssertFcn = dae_cg_pAssert_method;
  smData->mDerivativeFcn = dae_cg_deriv_method;
  smData->mNumJacPerturbLoBoundsFcn = dae_cg_numJacPerturbLoBounds_method;
  smData->mNumJacPerturbHiBoundsFcn = dae_cg_numJacPerturbHiBounds_method;
  smData->mOutputFcn = dae_cg_compOutputs_method;
  smData->mModeFcn = dae_cg_mode_method;
  smData->mZeroCrossingFcn = dae_cg_zeroCrossing_method;
  smData->mProjectionFcn = dae_cg_project_solve;
  smData->mCIC_MODE_Fcn = dae_cg_CIC_MODE_solve;
  smData->mCheckFcn =
    (smData->mStateVectorSize == 0) ? dae_cg_check_solve : NULL;
  smData->mAssemblyFcn = dae_cg_assemble_solve;
  smData->mSetupLoggerFcn = sm_ssci_setupLoggerFcn_codeGen;
  smData->mLogFcn = sm_ssci_logFcn_codeGen;
  smData->mResidualsFcn = NULL;
  smData->mLinearizeFcn = NULL;
  smData->mGenerateFcn = NULL;
}

static
  void initLiveLinkToSm(NeDaePrivateData *smData)
{
  smData->mLiveSmLink = NULL;
  smData->mLiveSmLink_destroy = NULL;
  smData->mLiveSmLink_copy = NULL;
}

void Wind_Turbine_31c4daf8_6_NeDaePrivateData_create(NeDaePrivateData *smData)
{
  initBasicAttributes (smData);
  initStateVector (smData);
  initAsserts (smData);
  initModeVector (smData);
  initZeroCrossings (smData);
  initVariables (smData);
  initRuntimeParameters (smData);
  initIoInfo (smData);
  initInputDerivs (smData);
  initDirectFeedthrough (smData);
  initOutputDerivProc (smData);
  initMechanismDelegates (smData);
  initComputationFcnPtrs (smData);
  initLiveLinkToSm (smData);
}
