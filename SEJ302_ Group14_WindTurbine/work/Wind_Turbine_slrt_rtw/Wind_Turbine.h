/*
 * Wind_Turbine.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Wind_Turbine".
 *
 * Model version              : 1.718
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Jul 14 09:44:54 2022
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Wind_Turbine_h_
#define RTW_HEADER_Wind_Turbine_h_
#include <math.h>
#include <stddef.h>
#include <float.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef Wind_Turbine_COMMON_INCLUDES_
# define Wind_Turbine_COMMON_INCLUDES_
#include <xpcdatatypes.h>
#include <xpcimports.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#include "nesl_rtw.h"
#include "Wind_Turbine_31c4daf8_2_gateway.h"
#include "Wind_Turbine_31c4daf8_3_gateway.h"
#include "Wind_Turbine_31c4daf8_5_gateway.h"
#include "Wind_Turbine_31c4daf8_6_gateway.h"
#include "nesl_rtw_rtp.h"
#include "Wind_Turbine_31c4daf8_4_gateway.h"
#include "Wind_Turbine_31c4daf8_1_gateway.h"
#endif                                 /* Wind_Turbine_COMMON_INCLUDES_ */

#include "Wind_Turbine_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "rt_look.h"
#include "rt_look1d.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
# define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
# define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
# define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
# define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
# define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
# define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
# define rtmGettimingBridge(rtm)       ()
#endif

#ifndef rtmSettimingBridge
# define rtmSettimingBridge(rtm, val)  ()
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)
#define rtModel_Wind_Turbine           RT_MODEL_Wind_Turbine_T

/* Definition for use in the target main file */
#define Wind_Turbine_rtModel           RT_MODEL_Wind_Turbine_T

/* Block signals (default storage) */
typedef struct {
  creal_T I1;                          /* '<S90>/Real-Imag to Complex' */
  creal_T RealImagtoComplex1;          /* '<S88>/Real-Imag to Complex1' */
  creal_T Sum3;                        /* '<S90>/Sum3' */
  creal_T a2;                          /* '<S90>/a^2' */
  creal_T a;                           /* '<S90>/a' */
  creal_T Sum1;                        /* '<S90>/Sum1' */
  creal_T ib[2];                       /* '<S81>/ib' */
  creal_T MagnitudeAngletoComplex[3];  /* '<S36>/Magnitude-Angle to Complex' */
  creal_T MagnitudeAngletoComplex_g[3];/* '<S37>/Magnitude-Angle to Complex' */
  creal_T Product1[3];                 /* '<S37>/Product1' */
  creal_T MagnitudeAngletoComplex_a[3];/* '<S38>/Magnitude-Angle to Complex' */
  creal_T Product1_g[3];               /* '<S38>/Product1' */
  creal_T Sum5[3];                     /* '<S36>/Sum5' */
  creal_T RealImagtoComplex[17];       /* '<S374>/Real-Imag to Complex' */
  creal_T donotdeletethisgain;         /* '<S106>/do not delete this gain' */
  creal_T donotdeletethisgain_g;       /* '<S107>/do not delete this gain' */
  creal_T donotdeletethisgain_e;       /* '<S108>/do not delete this gain' */
  creal_T Kv1[3];                      /* '<S75>/Kv1' */
  creal_T putoV[3];                    /* '<S359>/pu to V' */
  creal_T donotdeletethisgain_ee;      /* '<S103>/do not delete this gain' */
  creal_T donotdeletethisgain_g1;      /* '<S104>/do not delete this gain' */
  creal_T donotdeletethisgain_i;       /* '<S105>/do not delete this gain' */
  creal_T Kv[3];                       /* '<S75>/Kv' */
  creal_T putoA[3];                    /* '<S359>/pu to A' */
  creal_T MathFunction[3];             /* '<S360>/Math Function' */
  creal_T Product2[3];                 /* '<S360>/Product2' */
  creal_T Sum3_k;                      /* '<S360>/Sum3' */
  creal_T K;                           /* '<S360>/K' */
  creal_T u_Vb[2];                     /* '<S81>/1_Vb' */
  creal_T Gain1;                       /* '<S85>/Gain1' */
  creal_T a3;                          /* '<S85>/a//3' */
  creal_T V2;                          /* '<S85>/Sum4' */
  creal_T RealImagtoComplex_b;         /* '<S88>/Real-Imag to Complex' */
  creal_T Gain2;                       /* '<S88>/Gain2' */
  creal_T Vm2;                         /* '<S88>/Sum1' */
  creal_T Phi2;                        /* '<S88>/-pi//2  phase shift' */
  creal_T donotdeletethisgain_h;       /* '<S45>/do not delete this gain' */
  creal_T donotdeletethisgain_a;       /* '<S46>/do not delete this gain' */
  creal_T donotdeletethisgain_k;       /* '<S47>/do not delete this gain' */
  creal_T Kv_p[3];                     /* '<S35>/Kv' */
  creal_T Kv1_p[3];                    /* '<S35>/Kv1' */
  creal_T I1_c;                        /* '<S89>/Real-Imag to Complex' */
  creal_T Sum2;                        /* '<S99>/Sum2' */
  creal_T ZrZm;                        /* '<S98>/Sum1' */
  creal_T Product4;                    /* '<S98>/Product4' */
  creal_T Product3;                    /* '<S88>/Product3' */
  creal_T Gain1_e;                     /* '<S88>/Gain1' */
  creal_T Sum3_i;                      /* '<S89>/Sum3' */
  creal_T a2_k;                        /* '<S89>/a^2' */
  creal_T a_g;                         /* '<S89>/a' */
  creal_T Sum1_b;                      /* '<S89>/Sum1' */
  creal_T Sum;                         /* '<S89>/Sum' */
  creal_T ic;                          /* '<S89>/inv' */
  creal_T Sum_f;                       /* '<S90>/Sum' */
  creal_T ic_g;                        /* '<S90>/inv' */
  creal_T Gain;                        /* '<S85>/Gain' */
  creal_T a23;                         /* '<S85>/(a^2)//3' */
  creal_T V1;                          /* '<S85>/Sum3' */
  creal_T ZrZm_k;                      /* '<S98>/Product2' */
  creal_T ZrZm_m;                      /* '<S98>/Product3' */
  creal_T Z2;                          /* '<S98>/Sum2' */
  real_T Integrator;                   /* '<S176>/Integrator' */
  real_T Gain_d;                       /* '<S176>/Gain' */
  real_T INPUT_6_1_1[4];               /* '<S363>/INPUT_6_1_1' */
  real_T PitchPowerOn;                 /* '<Root>/Pitch Power On' */
  real_T INPUT_7_1_1[4];               /* '<S363>/INPUT_7_1_1' */
  real_T INPUT_8_1_1[4];               /* '<S363>/INPUT_8_1_1' */
  real_T STATE_6[28];                  /* '<S363>/STATE_6' */
  real_T OUTPUT_6_0[9];                /* '<S363>/OUTPUT_6_0' */
  real_T RATE_TRANSITION_3_1_1;        /* '<S363>/RATE_TRANSITION_3_1_1' */
  real_T INTERNAL_3_1_1[4];            /* '<S363>/INTERNAL_3_1_1' */
  real_T RTP_5;
  real_T STATE_5[48];                  /* '<S363>/STATE_5' */
  real_T OUTPUT_5_0[7];                /* '<S363>/OUTPUT_5_0' */
  real_T Integrator_i;                 /* '<S206>/Integrator' */
  real_T Gain_a;                       /* '<S206>/Gain' */
  real_T INPUT_9_1_1[4];               /* '<S363>/INPUT_9_1_1' */
  real_T INPUT_10_1_1[4];              /* '<S363>/INPUT_10_1_1' */
  real_T INPUT_11_1_1[4];              /* '<S363>/INPUT_11_1_1' */
  real_T RATE_TRANSITION_5_1_1;        /* '<S363>/RATE_TRANSITION_5_1_1' */
  real_T INTERNAL_5_1_1[4];            /* '<S363>/INTERNAL_5_1_1' */
  real_T RTP_2;
  real_T STATE_2[48];                  /* '<S363>/STATE_2' */
  real_T OUTPUT_2_0[7];                /* '<S363>/OUTPUT_2_0' */
  real_T Integrator_p;                 /* '<S236>/Integrator' */
  real_T Gain_g;                       /* '<S236>/Gain' */
  real_T INPUT_12_1_1[4];              /* '<S363>/INPUT_12_1_1' */
  real_T INPUT_13_1_1[4];              /* '<S363>/INPUT_13_1_1' */
  real_T INPUT_14_1_1[4];              /* '<S363>/INPUT_14_1_1' */
  real_T RATE_TRANSITION_7_1_1;        /* '<S363>/RATE_TRANSITION_7_1_1' */
  real_T INTERNAL_7_1_1[4];            /* '<S363>/INTERNAL_7_1_1' */
  real_T RTP_3;
  real_T STATE_3[48];                  /* '<S363>/STATE_3' */
  real_T OUTPUT_3_0[7];                /* '<S363>/OUTPUT_3_0' */
  real_T ExtensiontoAngle[3];          /* '<S51>/Extension to Angle' */
  real_T FromWs[2];                    /* '<S365>/FromWs' */
  real_T Integrator_f;                 /* '<S73>/Integrator' */
  real_T Gain_e;                       /* '<S73>/Gain' */
  real_T Gain_ax;                      /* '<S147>/Gain' */
  real_T radps2mps;                    /* '<S350>/radps2mps' */
  real_T TrigonometricFunction;        /* '<S350>/Trigonometric Function' */
  real_T rad2deg;                      /* '<S350>/rad2deg' */
  real_T radps2rpm;                    /* '<S351>/radps2rpm' */
  real_T Sum_k;                        /* '<S351>/Sum' */
  real_T ProportionalGain;             /* '<S352>/Proportional Gain' */
  real_T Integrator_m;                 /* '<S352>/Integrator' */
  real_T Sum_o;                        /* '<S352>/Sum' */
  real_T Saturation;                   /* '<S351>/Saturation' */
  real_T CheckForParkCondition;        /* '<S348>/Check For Park Condition' */
  real_T LimitPitchCommand;            /* '<S348>/Limit Pitch Command' */
  real_T Sum_g;                        /* '<S63>/Sum' */
  real_T Saturation_c;                 /* '<S63>/Saturation' */
  real_T EngagementPressure;           /* '<S63>/Engagement Pressure' */
  real_T INPUT_4_1_1[4];               /* '<S363>/INPUT_4_1_1' */
  real_T Integrator_n;                 /* '<S72>/Integrator' */
  real_T Gain_l;                       /* '<S72>/Gain' */
  real_T INPUT_5_1_1[4];               /* '<S363>/INPUT_5_1_1' */
  real_T RATE_TRANSITION_1_1_1;        /* '<S363>/RATE_TRANSITION_1_1_1' */
  real_T INTERNAL_1_1_1[4];            /* '<S363>/INTERNAL_1_1_1' */
  real_T STATE_4[38];                  /* '<S363>/STATE_4' */
  real_T OUTPUT_4_0[4];                /* '<S363>/OUTPUT_4_0' */
  real_T RATE_TRANSITION_2_1_1;        /* '<S363>/RATE_TRANSITION_2_1_1' */
  real_T INTERNAL_2_1_1[4];            /* '<S363>/INTERNAL_2_1_1' */
  real_T RATE_TRANSITION_4_1_1;        /* '<S363>/RATE_TRANSITION_4_1_1' */
  real_T INTERNAL_4_1_1[4];            /* '<S363>/INTERNAL_4_1_1' */
  real_T RATE_TRANSITION_6_1_1;        /* '<S363>/RATE_TRANSITION_6_1_1' */
  real_T INTERNAL_6_1_1[4];            /* '<S363>/INTERNAL_6_1_1' */
  real_T RATE_TRANSITION_8_1_1;        /* '<S363>/RATE_TRANSITION_8_1_1' */
  real_T INTERNAL_8_1_1[4];            /* '<S363>/INTERNAL_8_1_1' */
  real_T RATE_TRANSITION_9_1_1;        /* '<S363>/RATE_TRANSITION_9_1_1' */
  real_T INTERNAL_9_1_1[4];            /* '<S363>/INTERNAL_9_1_1' */
  real_T Integrator_if[4];             /* '<S287>/Integrator' */
  real_T Gain_lm[4];                   /* '<S287>/Gain' */
  real_T INPUT_15_1_1[4];              /* '<S363>/INPUT_15_1_1' */
  real_T INPUT_16_1_1[4];              /* '<S363>/INPUT_16_1_1' */
  real_T INPUT_17_1_1[4];              /* '<S363>/INPUT_17_1_1' */
  real_T INPUT_18_1_1[4];              /* '<S363>/INPUT_18_1_1' */
  real_T STATE_1[118];                 /* '<S363>/STATE_1' */
  real_T OUTPUT_1_0[17];               /* '<S363>/OUTPUT_1_0' */
  real_T RATE_TRANSITION_10_1_1;       /* '<S363>/RATE_TRANSITION_10_1_1' */
  real_T INTERNAL_10_1_1[4];           /* '<S363>/INTERNAL_10_1_1' */
  real_T radius;                       /* '<S13>/Point of Application' */
  real_T MathFunction2;                /* '<S16>/Math Function2' */
  real_T Integrator_k;                 /* '<S19>/Integrator' */
  real_T Gain_ep;                      /* '<S19>/Gain' */
  real_T Divide;                       /* '<S13>/Divide' */
  real_T MathFunction1;                /* '<S16>/Math Function1' */
  real_T V2_c;                         /* '<S16>/Add' */
  real_T Q;                            /* '<S16>/Divide1' */
  real_T QS;                           /* '<S16>/R*c' */
  real_T TrigonometricFunction_d;      /* '<S15>/Trigonometric Function' */
  real_T Integrator_c;                 /* '<S18>/Integrator' */
  real_T Gain_j;                       /* '<S18>/Gain' */
  real_T alpha;                        /* '<S15>/Subtract' */
  real_T MathFunction_f;               /* '<S20>/Math Function' */
  real_T Cl;                           /* '<S20>/lift polar' */
  real_T LiftForce;                    /* '<S16>/Divide4' */
  real_T TrigonometricFunction2;       /* '<S21>/Trigonometric Function2' */
  real_T Liftsinalpha;                 /* '<S21>/Divide8' */
  real_T Cd;                           /* '<S20>/drag polar' */
  real_T DragForce;                    /* '<S16>/Divide5' */
  real_T TrigonometricFunction1;       /* '<S21>/Trigonometric Function1' */
  real_T Dragcosalpha;                 /* '<S21>/Divide9' */
  real_T Z;                            /* '<S21>/Subtract2' */
  real_T L;                            /* '<S21>/Divide12' */
  real_T Gain_gi;                      /* '<S14>/Gain' */
  real_T INPUT_1_1_1[4];               /* '<S363>/INPUT_1_1_1' */
  real_T Liftcosalpha;                 /* '<S21>/Divide6' */
  real_T Dragsinalpha;                 /* '<S21>/Divide7' */
  real_T X;                            /* '<S21>/Subtract1' */
  real_T Gain_er;                      /* '<S21>/Gain' */
  real_T N;                            /* '<S21>/Divide11' */
  real_T INPUT_2_1_1[4];               /* '<S363>/INPUT_2_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S363>/INPUT_3_1_1' */
  real_T INPUT_1_2_1[4];               /* '<S363>/INPUT_1_2_1' */
  real_T INPUT_2_2_1[4];               /* '<S363>/INPUT_2_2_1' */
  real_T INPUT_3_2_1[4];               /* '<S363>/INPUT_3_2_1' */
  real_T INPUT_1_3_1[4];               /* '<S363>/INPUT_1_3_1' */
  real_T INPUT_2_3_1[4];               /* '<S363>/INPUT_2_3_1' */
  real_T INPUT_3_3_1[4];               /* '<S363>/INPUT_3_3_1' */
  real_T OUTPUT_6_1[18];               /* '<S363>/OUTPUT_6_1' */
  real_T radpstorpm;                   /* '<S51>/radps to rpm' */
  real_T Saturation_i;                 /* '<S355>/Saturation' */
  real_T TurbineSpeedrpm;              /* '<S71>/radps2rpm' */
  real_T Divide_k;                     /* '<S355>/Divide' */
  real_T rpm2radps;                    /* '<S355>/rpm2radps' */
  real_T GenSpdpu;                     /* '<S355>/radps2pu' */
  real_T integrator;                   /* '<S361>/integrator' */
  real_T TransportDelay;               /* '<S361>/Transport Delay' */
  real_T Step;                         /* '<S361>/Step' */
  real_T Switch;                       /* '<S361>/Switch' */
  real_T integrator_h;                 /* '<S362>/integrator' */
  real_T TransportDelay_l;             /* '<S362>/Transport Delay' */
  real_T Step_p;                       /* '<S362>/Step' */
  real_T Switch_c;                     /* '<S362>/Switch' */
  real_T Integrator_pj[4];             /* '<S93>/Integrator' */
  real_T Linv[16];                     /* '<S87>/Switch' */
  real_T Product3_l[4];                /* '<S87>/Product3' */
  real_T Iqds2[2];                     /* '<S88>/Integrator' */
  real_T Clock;                        /* '<S41>/Clock' */
  real_T LookUpTable;                  /* '<S41>/Look-Up Table' */
  real_T Toff;                         /* '<S40>/Step1' */
  real_T Ton;                          /* '<S40>/Step' */
  real_T Ramp;                         /* '<S40>/Integrator' */
  real_T Gain1_h;                      /* '<S40>/Gain1' */
  real_T Memory;                       /* '<S40>/Memory' */
  real_T Switch2;                      /* '<S40>/Switch2' */
  real_T Switch3;                      /* '<S40>/Switch3' */
  real_T Switch2_o;                    /* '<S36>/Switch2' */
  real_T Sum3_b;                       /* '<S36>/Sum3' */
  real_T Switch1;                      /* '<S36>/Switch1' */
  real_T Switch5[3];                   /* '<S36>/Switch5' */
  real_T Gain3;                        /* '<S36>/Gain3' */
  real_T Switch3_e;                    /* '<S36>/Switch3' */
  real_T Sum2_i[3];                    /* '<S36>/Sum2' */
  real_T Ton_h;                        /* '<S36>/Step' */
  real_T Toff_e;                       /* '<S36>/Step1' */
  real_T Sum4;                         /* '<S36>/Sum4' */
  real_T DataTypeConversion;           /* '<S36>/Data Type  Conversion' */
  real_T Gain3_j;                      /* '<S37>/Gain3' */
  real_T Sum1_d;                       /* '<S37>/Sum1' */
  real_T MultiportSwitch[3];           /* '<S37>/Multiport Switch' */
  real_T Sum_e[3];                     /* '<S37>/Sum' */
  real_T Gain3_l;                      /* '<S38>/Gain3' */
  real_T Sum1_i;                       /* '<S38>/Sum1' */
  real_T MultiportSwitch_j[3];         /* '<S38>/Multiport Switch' */
  real_T Sum_j[3];                     /* '<S38>/Sum' */
  real_T ComplextoRealImag_o1[11];     /* '<S375>/Complex to Real-Imag' */
  real_T ComplextoRealImag_o2[11];     /* '<S375>/Complex to Real-Imag' */
  real_T LogicalOperator1;             /* '<S71>/Logical Operator1' */
  real_T Clock_o;                      /* '<S133>/Clock' */
  real_T LookUpTable_i;                /* '<S133>/Look-Up Table' */
  real_T Switch3_p;                    /* '<S79>/Switch3' */
  real_T Clock_a;                      /* '<S128>/Clock' */
  real_T LookUpTable_n;                /* '<S128>/Look-Up Table' */
  real_T Switch3_d;                    /* '<S127>/Switch3' */
  real_T Clock_az;                     /* '<S130>/Clock' */
  real_T LookUpTable_k;                /* '<S130>/Look-Up Table' */
  real_T Switch3_j;                    /* '<S129>/Switch3' */
  real_T Clock_k;                      /* '<S132>/Clock' */
  real_T LookUpTable_l;                /* '<S132>/Look-Up Table' */
  real_T Switch3_dw;                   /* '<S131>/Switch3' */
  real_T Clock_e;                      /* '<S144>/Clock' */
  real_T LookUpTable_g;                /* '<S144>/Look-Up Table' */
  real_T Switch3_f;                    /* '<S80>/Switch3' */
  real_T Clock_l;                      /* '<S139>/Clock' */
  real_T LookUpTable_j;                /* '<S139>/Look-Up Table' */
  real_T Switch3_er;                   /* '<S138>/Switch3' */
  real_T Clock_f;                      /* '<S141>/Clock' */
  real_T LookUpTable_o;                /* '<S141>/Look-Up Table' */
  real_T Switch3_a;                    /* '<S140>/Switch3' */
  real_T Clock_m;                      /* '<S143>/Clock' */
  real_T LookUpTable_h;                /* '<S143>/Look-Up Table' */
  real_T Switch3_h;                    /* '<S142>/Switch3' */
  real_T StateSpace[34];               /* '<S370>/State-Space' */
  real_T ComplextoRealImag_o1_m;       /* '<S360>/Complex to Real-Imag' */
  real_T ComplextoRealImag_o2_g;       /* '<S360>/Complex to Real-Imag' */
  real_T topu[2];                      /* '<S359>/to pu' */
  real_T FixSign[2];                   /* '<S359>/Fix Sign' */
  real_T putoMW;                       /* '<S359>/pu to MW' */
  real_T putoMvar;                     /* '<S359>/pu to Mvar' */
  real_T radps2pu;                     /* '<S71>/radps2pu' */
  real_T web_psb1;                     /* '<S83>/web_psb1' */
  real_T iqsids[2];                    /* '<S91>/1-1' */
  real_T Mult1[2];                     /* '<S91>/Mult1' */
  real_T Sum2_a;                       /* '<S91>/Sum2' */
  real_T ComplextoRealImag3_o1;        /* '<S85>/Complex to Real-Imag3' */
  real_T ComplextoRealImag3_o2;        /* '<S85>/Complex to Real-Imag3' */
  real_T Phids2;                       /* '<S88>/Complex to Real-Imag' */
  real_T Phiqs2;                       /* '<S88>/Complex to Real-Imag' */
  real_T Product3_d;                   /* '<S81>/Product3' */
  real_T Product4_o;                   /* '<S81>/Product4' */
  real_T NegseqTorque;                 /* '<S81>/Sum4' */
  real_T Sum5_a;                       /* '<S81>/Sum5' */
  real_T Rotoranglethetam;             /* '<S83>/Rotor angle thetam' */
  real_T up;                           /* '<S83>/1\p' */
  real_T Gain_o[3];                    /* '<S83>/Gain' */
  real_T radps2rpm_p;                  /* '<S355>/radps2rpm' */
  real_T GAIN;                         /* '<S297>/GAIN' */
  real_T Nacelle_Yaw_Angle;    /* '<S288>/Actuator Position to Nacelle Angle' */
  real_T GAIN_f;                       /* '<S337>/GAIN' */
  real_T ActuatorSpeedtoNacelleYawRate;
                               /* '<S291>/Actuator Speed to Nacelle Yaw Rate' */
  real_T GAIN_d;                       /* '<S310>/GAIN' */
  real_T ActuatorPositiontoNacelleAngle;
                               /* '<S289>/Actuator Position to Nacelle Angle' */
  real_T GAIN_fl;                      /* '<S323>/GAIN' */
  real_T ActuatorPositiontoNacelleAngl_i;
                               /* '<S290>/Actuator Position to Nacelle Angle' */
  real_T GAIN_p;                       /* '<S336>/GAIN' */
  real_T ActuatorPositiontoNacelleAngl_k;
                               /* '<S291>/Actuator Position to Nacelle Angle' */
  real_T DerivativeControl;            /* '<S367>/Derivative Control' */
  real_T Sum3_kq[4];                   /* '<S367>/Sum3' */
  real_T Sum_gv[4];                    /* '<S367>/Sum' */
  real_T ProportionalGain_e[4];        /* '<S368>/Proportional Gain' */
  real_T Integrator_iv[4];             /* '<S368>/Integrator' */
  real_T Sum_ko[4];                    /* '<S368>/Sum' */
  real_T LimitNacelleYawRateCmd[4];    /* '<S367>/Limit Nacelle Yaw Rate Cmd' */
  real_T Sum1_g[4];                    /* '<S367>/Sum1' */
  real_T ProportionalGain_e2[4];       /* '<S369>/Proportional Gain' */
  real_T Integrator_b[4];              /* '<S369>/Integrator' */
  real_T Sum_eb[4];                    /* '<S369>/Sum' */
  real_T TorqueCommand[4];            /* '<S367>/Limit Servomotor Torque Cmd' */
  real_T Gain_ag;                      /* '<S158>/Gain' */
  real_T Sum_c;                        /* '<S18>/Sum' */
  real_T Sum_m;                        /* '<S19>/Sum' */
  real_T Derivative;                   /* '<S41>/Derivative' */
  real_T Switch1_d;                    /* '<S40>/Switch1' */
  real_T Switch_o;                     /* '<S40>/Switch' */
  real_T Magnitude[3];                 /* '<S43>/Magnitude' */
  real_T pu2rpm;                       /* '<S71>/pu2rpm' */
  real_T Derivative_m;                 /* '<S128>/Derivative' */
  real_T Derivative_o;                 /* '<S130>/Derivative' */
  real_T Derivative_f;                 /* '<S132>/Derivative' */
  real_T Derivative_p;                 /* '<S133>/Derivative' */
  real_T Derivative_pb;                /* '<S139>/Derivative' */
  real_T Derivative_m5;                /* '<S141>/Derivative' */
  real_T Derivative_j;                 /* '<S143>/Derivative' */
  real_T Derivative_i;                 /* '<S144>/Derivative' */
  real_T torque_pu2Nm;                 /* '<S71>/torque_pu2Nm' */
  real_T Sum_d;                        /* '<S72>/Sum' */
  real_T Sum_n;                        /* '<S73>/Sum' */
  real_T s2wswr;                       /* '<S81>/Sum2' */
  real_T Product2_g;                   /* '<S99>/Product2' */
  real_T irabc[3];                     /* '<S81>/Complex to Magnitude-Angle' */
  real_T isabc[3];                     /* '<S81>/Complex to Magnitude-Angle1' */
  real_T ComplextoRealImag_o1_p;       /* '<S85>/Complex to Real-Imag' */
  real_T ComplextoRealImag_o2_f;       /* '<S85>/Complex to Real-Imag' */
  real_T Switch2_a;                    /* '<S87>/Switch2' */
  real_T Gain_lj[19];                  /* '<S81>/Gain' */
  real_T RLinv[16];                    /* '<S87>/Switch1' */
  real_T A[16];                        /* '<S87>/Sum1' */
  real_T Product1_j[4];                /* '<S93>/Product1' */
  real_T sum1[4];                      /* '<S93>/sum1' */
  real_T wbase[4];                     /* '<S93>/wbase' */
  real_T ComplextoRealImag_o1_a;       /* '<S98>/Complex to Real-Imag' */
  real_T ComplextoRealImag_o2_d;       /* '<S98>/Complex to Real-Imag' */
  real_T Product1_c;                   /* '<S98>/Product1' */
  real_T Gain3_d[2];                   /* '<S88>/Gain3' */
  real_T Vqd2L2[2];                    /* '<S88>/Product2' */
  real_T Iqd2R2L2[2];                  /* '<S88>/Product1' */
  real_T Sum_df[2];                    /* '<S88>/Sum' */
  real_T Gain4[2];                     /* '<S88>/Gain4' */
  real_T web_psb;                      /* '<S83>/web_psb' */
  real_T GAIN_i;                       /* '<S150>/GAIN' */
  real_T Gain1_c;                      /* '<S147>/Gain1' */
  real_T LookupFix;                    /* '<S347>/Lookup Fix' */
  real_T AngletoExtension;             /* '<S347>/Angle to Extension' */
  real_T Derivative_Gain[3];           /* '<S347>/Derivative_Gain' */
  real_T Sum1_k[3];                    /* '<S347>/Sum1' */
  real_T Sum_l[3];                     /* '<S347>/Sum' */
  real_T ProportionalGain_b[3];        /* '<S349>/Proportional Gain' */
  real_T Integrator_l[3];              /* '<S349>/Integrator' */
  real_T Sum_e5[3];                    /* '<S349>/Sum' */
  real_T ScalingFactor[3];             /* '<S154>/Scaling Factor' */
  real_T Switch_h;                     /* '<S166>/Switch' */
  real_T Sum_gk;                       /* '<S176>/Sum' */
  real_T Switch_hx;                    /* '<S196>/Switch' */
  real_T Sum_g5;                       /* '<S206>/Sum' */
  real_T Switch_d;                     /* '<S226>/Switch' */
  real_T Sum_p;                        /* '<S236>/Sum' */
  real_T Gain_jy;                      /* '<S159>/Gain' */
  real_T Gain_i;                       /* '<S160>/Gain' */
  real_T Sum_a[4];                     /* '<S287>/Sum' */
  real_T GAIN_ds;                      /* '<S298>/GAIN' */
  real_T ActuatorSpeedtoNacelleYawRate_d;
                               /* '<S288>/Actuator Speed to Nacelle Yaw Rate' */
  real_T GAIN_dl;                      /* '<S301>/GAIN' */
  real_T GAIN_o;                       /* '<S311>/GAIN' */
  real_T ActuatorSpeedtoNacelleYawRate_a;
                               /* '<S289>/Actuator Speed to Nacelle Yaw Rate' */
  real_T GAIN_d1;                      /* '<S314>/GAIN' */
  real_T GAIN_oq;                      /* '<S324>/GAIN' */
  real_T ActuatorSpeedtoNacelleYawRate_f;
                               /* '<S290>/Actuator Speed to Nacelle Yaw Rate' */
  real_T GAIN_g;                       /* '<S327>/GAIN' */
  real_T GAIN_o1;                      /* '<S340>/GAIN' */
  real_T IntegralGain[3];              /* '<S349>/Integral Gain' */
  real_T IntegralGain_b;               /* '<S352>/Integral Gain' */
  real_T IntegralGain_l[4];            /* '<S368>/Integral Gain' */
  real_T IntegralGain_o[4];            /* '<S369>/Integral Gain' */
  real_T Sum_no;                       /* '<S362>/Sum' */
  real_T Gain_p;                       /* '<S362>/Gain' */
  real_T Sum_az;                       /* '<S361>/Sum' */
  real_T Gain_k;                       /* '<S361>/Gain' */
  real_T CheckForPitchBrakeCondition;
                                  /* '<S348>/Check For Pitch Brake Condition' */
  real_T Sum_jc;                       /* '<S348>/Sum' */
  real_T Switch2_g;                    /* '<S80>/Switch2' */
  real_T DataTypeConversion_k;         /* '<S142>/Data Type  Conversion' */
  real_T Switch1_g;                    /* '<S80>/Switch1' */
  real_T DataTypeConversion_l;         /* '<S140>/Data Type  Conversion' */
  real_T Switch_i;                     /* '<S80>/Switch' */
  real_T DataTypeConversion_f;         /* '<S138>/Data Type  Conversion' */
  real_T Switch2_ax;                   /* '<S79>/Switch2' */
  real_T DataTypeConversion_n;         /* '<S131>/Data Type  Conversion' */
  real_T Switch1_b;                    /* '<S79>/Switch1' */
  real_T DataTypeConversion_b;         /* '<S129>/Data Type  Conversion' */
  real_T Switch_j;                     /* '<S79>/Switch' */
  real_T DataTypeConversion_j;         /* '<S127>/Data Type  Conversion' */
  real_T Integrator_g;                 /* '<S96>/Integrator' */
  real_T TmpSignalConversionAtMathFuncti[3];
  real_T MathFunction_a[3];            /* '<S94>/Math Function' */
  real_T Sum2_h;                       /* '<S94>/Sum2' */
  real_T MathFunction1_m;              /* '<S94>/Math Function1' */
  real_T Product2_p[2];                /* '<S97>/Product2' */
  real_T Product[2];                   /* '<S97>/Product' */
  real_T phimq;                        /* '<S97>/Sum2' */
  real_T Product1_p[2];                /* '<S97>/Product1' */
  real_T phimd;                        /* '<S97>/Sum1' */
  real_T Phisat;                       /* '<S92>/Math Function' */
  real_T Isat;                         /* '<S92>/1-D Lookup Table' */
  real_T Lm;                           /* '<S92>/Switch' */
  real_T Lminrows13col13[16];          /* '<S95>/Lm in rows[1,3] & col[1,3]' */
  real_T Lminrows24col24[16];          /* '<S95>/Lm in rows[2,4] & col[2,4]' */
  real_T Sum2_b[16];                   /* '<S95>/Sum2' */
  real_T Linv_b[16];                   /* '<S92>/inversion' */
  real_T RLinv_n[16];                  /* '<S92>/Product1' */
  real_T Add;                          /* '<S96>/Add' */
  real_T uTT1e6s;                      /* '<S96>/1//T (T= 1e-6s)' */
  real_T Lm_l;                         /* '<S92>/Product' */
  real_T wewr;                         /* '<S84>/Sum' */
  real_T Gain2_o;                      /* '<S84>/Gain2' */
  real_T W341wr[16];                   /* '<S84>/W(3,4)=1-wr' */
  real_T W43wr1[16];                   /* '<S84>/W(4,3)=wr-1' */
  real_T pitch_brake;                  /* '<S51>/Turbine State Machine' */
  real_T parking_brake;                /* '<S51>/Turbine State Machine' */
  real_T generator_trip;               /* '<S51>/Turbine State Machine' */
  real_T turbine_state;                /* '<S51>/Turbine State Machine' */
  real_T MultiportSwitch1;             /* '<S40>/Multiport Switch1' */
  real_T Step_j;                       /* '<S40>/Product2' */
  real_T Product1_b;                   /* '<S40>/Product1' */
  real_T TrigonometricFunction1_j;     /* '<S40>/Trigonometric Function1' */
  real_T Mod;                          /* '<S40>/Product' */
  real_T Gain4_b;                      /* '<S36>/Gain4' */
  boolean_T RelationalOperator3;       /* '<S36>/Relational Operator3' */
  boolean_T Amplitude;                 /* '<S36>/Relational Operator' */
  boolean_T LogicalOperator1_j;        /* '<S36>/Logical Operator1' */
  boolean_T DataTypeConversion2;       /* '<S40>/Data Type  Conversion2' */
  boolean_T LogicalOperator1_d;        /* '<S40>/Logical Operator1' */
  boolean_T RelationalOperator1;       /* '<S40>/Relational Operator1' */
  boolean_T DataTypeConversion1;       /* '<S40>/Data Type  Conversion1' */
  boolean_T LogicalOperator;           /* '<S40>/Logical Operator' */
  boolean_T Phase;                     /* '<S36>/Relational Operator1' */
  boolean_T DataTypeConversion1_m;     /* '<S36>/Data Type  Conversion1' */
  boolean_T DataTypeConversion2_k;     /* '<S36>/Data Type  Conversion2' */
  boolean_T LogicalOperator_g;         /* '<S36>/Logical Operator' */
  boolean_T RelationalOperator;        /* '<S40>/Relational Operator' */
} B_Wind_Turbine_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T INPUT_6_1_1_Discrete[2];      /* '<S363>/INPUT_6_1_1' */
  real_T INPUT_7_1_1_Discrete[2];      /* '<S363>/INPUT_7_1_1' */
  real_T INPUT_8_1_1_Discrete[2];      /* '<S363>/INPUT_8_1_1' */
  real_T INTERNAL_3_1_1_Discrete[2];   /* '<S363>/INTERNAL_3_1_1' */
  real_T STATE_5_Discrete[25];         /* '<S363>/STATE_5' */
  real_T INPUT_9_1_1_Discrete[2];      /* '<S363>/INPUT_9_1_1' */
  real_T INPUT_10_1_1_Discrete[2];     /* '<S363>/INPUT_10_1_1' */
  real_T INPUT_11_1_1_Discrete[2];     /* '<S363>/INPUT_11_1_1' */
  real_T INTERNAL_5_1_1_Discrete[2];   /* '<S363>/INTERNAL_5_1_1' */
  real_T STATE_2_Discrete[25];         /* '<S363>/STATE_2' */
  real_T INPUT_12_1_1_Discrete[2];     /* '<S363>/INPUT_12_1_1' */
  real_T INPUT_13_1_1_Discrete[2];     /* '<S363>/INPUT_13_1_1' */
  real_T INPUT_14_1_1_Discrete[2];     /* '<S363>/INPUT_14_1_1' */
  real_T INTERNAL_7_1_1_Discrete[2];   /* '<S363>/INTERNAL_7_1_1' */
  real_T STATE_3_Discrete[25];         /* '<S363>/STATE_3' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S363>/INPUT_4_1_1' */
  real_T INPUT_5_1_1_Discrete;         /* '<S363>/INPUT_5_1_1' */
  real_T INPUT_5_1_1_FirstOutput;      /* '<S363>/INPUT_5_1_1' */
  real_T INTERNAL_1_1_1_Discrete[2];   /* '<S363>/INTERNAL_1_1_1' */
  real_T STATE_4_Discrete[37];         /* '<S363>/STATE_4' */
  real_T INTERNAL_2_1_1_Discrete[2];   /* '<S363>/INTERNAL_2_1_1' */
  real_T INTERNAL_4_1_1_Discrete[2];   /* '<S363>/INTERNAL_4_1_1' */
  real_T INTERNAL_6_1_1_Discrete[2];   /* '<S363>/INTERNAL_6_1_1' */
  real_T INTERNAL_8_1_1_Discrete[2];   /* '<S363>/INTERNAL_8_1_1' */
  real_T INTERNAL_9_1_1_Discrete[2];   /* '<S363>/INTERNAL_9_1_1' */
  real_T INPUT_15_1_1_Discrete;        /* '<S363>/INPUT_15_1_1' */
  real_T INPUT_15_1_1_FirstOutput;     /* '<S363>/INPUT_15_1_1' */
  real_T INPUT_16_1_1_Discrete;        /* '<S363>/INPUT_16_1_1' */
  real_T INPUT_16_1_1_FirstOutput;     /* '<S363>/INPUT_16_1_1' */
  real_T INPUT_17_1_1_Discrete;        /* '<S363>/INPUT_17_1_1' */
  real_T INPUT_17_1_1_FirstOutput;     /* '<S363>/INPUT_17_1_1' */
  real_T INPUT_18_1_1_Discrete;        /* '<S363>/INPUT_18_1_1' */
  real_T INPUT_18_1_1_FirstOutput;     /* '<S363>/INPUT_18_1_1' */
  real_T STATE_1_Discrete[110];        /* '<S363>/STATE_1' */
  real_T INTERNAL_10_1_1_Discrete[2];  /* '<S363>/INTERNAL_10_1_1' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S363>/INPUT_1_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S363>/INPUT_2_1_1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S363>/INPUT_3_1_1' */
  real_T INPUT_1_2_1_Discrete[2];      /* '<S363>/INPUT_1_2_1' */
  real_T INPUT_2_2_1_Discrete[2];      /* '<S363>/INPUT_2_2_1' */
  real_T INPUT_3_2_1_Discrete[2];      /* '<S363>/INPUT_3_2_1' */
  real_T INPUT_1_3_1_Discrete[2];      /* '<S363>/INPUT_1_3_1' */
  real_T INPUT_2_3_1_Discrete[2];      /* '<S363>/INPUT_2_3_1' */
  real_T INPUT_3_3_1_Discrete[2];      /* '<S363>/INPUT_3_3_1' */
  real_T STATE_6_Discrete;             /* '<S363>/STATE_6' */
  real_T OUTPUT_6_0_Discrete;          /* '<S363>/OUTPUT_6_0' */
  real_T OUTPUT_5_0_Discrete;          /* '<S363>/OUTPUT_5_0' */
  real_T OUTPUT_2_0_Discrete;          /* '<S363>/OUTPUT_2_0' */
  real_T OUTPUT_3_0_Discrete;          /* '<S363>/OUTPUT_3_0' */
  real_T OUTPUT_4_0_Discrete;          /* '<S363>/OUTPUT_4_0' */
  real_T OUTPUT_1_0_Discrete;          /* '<S363>/OUTPUT_1_0' */
  real_T OUTPUT_6_1_Discrete;          /* '<S363>/OUTPUT_6_1' */
  real_T Memory_PreviousInput;         /* '<S40>/Memory' */
  real_T TimeStampA;                   /* '<S41>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S41>/Derivative' */
  real_T TimeStampB;                   /* '<S41>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S41>/Derivative' */
  real_T TimeStampA_n;                 /* '<S128>/Derivative' */
  real_T LastUAtTimeA_l;               /* '<S128>/Derivative' */
  real_T TimeStampB_j;                 /* '<S128>/Derivative' */
  real_T LastUAtTimeB_g;               /* '<S128>/Derivative' */
  real_T TimeStampA_g;                 /* '<S130>/Derivative' */
  real_T LastUAtTimeA_h;               /* '<S130>/Derivative' */
  real_T TimeStampB_k;                 /* '<S130>/Derivative' */
  real_T LastUAtTimeB_gr;              /* '<S130>/Derivative' */
  real_T TimeStampA_o;                 /* '<S132>/Derivative' */
  real_T LastUAtTimeA_e;               /* '<S132>/Derivative' */
  real_T TimeStampB_m;                 /* '<S132>/Derivative' */
  real_T LastUAtTimeB_a;               /* '<S132>/Derivative' */
  real_T TimeStampA_f;                 /* '<S133>/Derivative' */
  real_T LastUAtTimeA_i;               /* '<S133>/Derivative' */
  real_T TimeStampB_l;                 /* '<S133>/Derivative' */
  real_T LastUAtTimeB_c;               /* '<S133>/Derivative' */
  real_T TimeStampA_fn;                /* '<S139>/Derivative' */
  real_T LastUAtTimeA_f;               /* '<S139>/Derivative' */
  real_T TimeStampB_e;                 /* '<S139>/Derivative' */
  real_T LastUAtTimeB_m;               /* '<S139>/Derivative' */
  real_T TimeStampA_p;                 /* '<S141>/Derivative' */
  real_T LastUAtTimeA_c;               /* '<S141>/Derivative' */
  real_T TimeStampB_f;                 /* '<S141>/Derivative' */
  real_T LastUAtTimeB_h;               /* '<S141>/Derivative' */
  real_T TimeStampA_na;                /* '<S143>/Derivative' */
  real_T LastUAtTimeA_is;              /* '<S143>/Derivative' */
  real_T TimeStampB_kf;                /* '<S143>/Derivative' */
  real_T LastUAtTimeB_b;               /* '<S143>/Derivative' */
  real_T TimeStampA_fy;                /* '<S144>/Derivative' */
  real_T LastUAtTimeA_p;               /* '<S144>/Derivative' */
  real_T TimeStampB_fl;                /* '<S144>/Derivative' */
  real_T LastUAtTimeB_p;               /* '<S144>/Derivative' */
  real_T inversion_DWORK1[16];         /* '<S92>/inversion' */
  real_T inversion_DWORK3[16];         /* '<S92>/inversion' */
  real_T inversion_DWORK4[16];         /* '<S92>/inversion' */
  real_T wind_speed_cut_in_lower;      /* '<S51>/Turbine State Machine' */
  real_T turbine_speed_cut_in;         /* '<S51>/Turbine State Machine' */
  real_T wind_speed_cut_out;           /* '<S51>/Turbine State Machine' */
  real_T wind_speed_cut_in_upper;      /* '<S51>/Turbine State Machine' */
  real_T turbine_speed_cut_out;        /* '<S51>/Turbine State Machine' */
  struct {
    real_T modelTStart;
    real_T TUbufferArea[2048];
  } TransportDelay_RWORK;              /* '<S361>/Transport Delay' */

  struct {
    real_T modelTStart;
    real_T TUbufferArea[2048];
  } TransportDelay_RWORK_f;            /* '<S362>/Transport Delay' */

  real_T StateSpace_RWORK[6];          /* '<S370>/State-Space' */
  void* STATE_6_Simulator;             /* '<S363>/STATE_6' */
  void* STATE_6_SimData;               /* '<S363>/STATE_6' */
  void* STATE_6_DiagMgr;               /* '<S363>/STATE_6' */
  void* STATE_6_ZcLogger;              /* '<S363>/STATE_6' */
  void* STATE_6_TsIndex;               /* '<S363>/STATE_6' */
  void* OUTPUT_6_0_Simulator;          /* '<S363>/OUTPUT_6_0' */
  void* OUTPUT_6_0_SimData;            /* '<S363>/OUTPUT_6_0' */
  void* OUTPUT_6_0_DiagMgr;            /* '<S363>/OUTPUT_6_0' */
  void* OUTPUT_6_0_ZcLogger;           /* '<S363>/OUTPUT_6_0' */
  void* OUTPUT_6_0_TsIndex;            /* '<S363>/OUTPUT_6_0' */
  void* RTP_5_RtpManager;              /* synthesized block */
  void* STATE_5_Simulator;             /* '<S363>/STATE_5' */
  void* STATE_5_SimData;               /* '<S363>/STATE_5' */
  void* STATE_5_DiagMgr;               /* '<S363>/STATE_5' */
  void* STATE_5_ZcLogger;              /* '<S363>/STATE_5' */
  void* STATE_5_TsIndex;               /* '<S363>/STATE_5' */
  void* OUTPUT_5_0_Simulator;          /* '<S363>/OUTPUT_5_0' */
  void* OUTPUT_5_0_SimData;            /* '<S363>/OUTPUT_5_0' */
  void* OUTPUT_5_0_DiagMgr;            /* '<S363>/OUTPUT_5_0' */
  void* OUTPUT_5_0_ZcLogger;           /* '<S363>/OUTPUT_5_0' */
  void* OUTPUT_5_0_TsIndex;            /* '<S363>/OUTPUT_5_0' */
  void* RTP_2_RtpManager;              /* synthesized block */
  void* STATE_2_Simulator;             /* '<S363>/STATE_2' */
  void* STATE_2_SimData;               /* '<S363>/STATE_2' */
  void* STATE_2_DiagMgr;               /* '<S363>/STATE_2' */
  void* STATE_2_ZcLogger;              /* '<S363>/STATE_2' */
  void* STATE_2_TsIndex;               /* '<S363>/STATE_2' */
  void* OUTPUT_2_0_Simulator;          /* '<S363>/OUTPUT_2_0' */
  void* OUTPUT_2_0_SimData;            /* '<S363>/OUTPUT_2_0' */
  void* OUTPUT_2_0_DiagMgr;            /* '<S363>/OUTPUT_2_0' */
  void* OUTPUT_2_0_ZcLogger;           /* '<S363>/OUTPUT_2_0' */
  void* OUTPUT_2_0_TsIndex;            /* '<S363>/OUTPUT_2_0' */
  void* RTP_3_RtpManager;              /* synthesized block */
  void* STATE_3_Simulator;             /* '<S363>/STATE_3' */
  void* STATE_3_SimData;               /* '<S363>/STATE_3' */
  void* STATE_3_DiagMgr;               /* '<S363>/STATE_3' */
  void* STATE_3_ZcLogger;              /* '<S363>/STATE_3' */
  void* STATE_3_TsIndex;               /* '<S363>/STATE_3' */
  void* OUTPUT_3_0_Simulator;          /* '<S363>/OUTPUT_3_0' */
  void* OUTPUT_3_0_SimData;            /* '<S363>/OUTPUT_3_0' */
  void* OUTPUT_3_0_DiagMgr;            /* '<S363>/OUTPUT_3_0' */
  void* OUTPUT_3_0_ZcLogger;           /* '<S363>/OUTPUT_3_0' */
  void* OUTPUT_3_0_TsIndex;            /* '<S363>/OUTPUT_3_0' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S365>/FromWs' */

  struct {
    void *LoggedData;
  } PitchCommandandAngledeg_PWORK;  /* '<S357>/Pitch Command and Angle (deg)' */

  struct {
    void *LoggedData;
  } AoA_PWORK;                         /* '<S357>/AoA' */

  struct {
    void *LoggedData[2];
  } Pitch_Pressure_Flow_PWORK;         /* '<S357>/Pitch_Pressure_Flow' */

  struct {
    void *LoggedData;
  } PADisp_PWORK;                      /* '<S357>/PA Disp' */

  struct {
    void *LoggedData;
  } PitchActuatorForce_PWORK;          /* '<S357>/Pitch Actuator Force' */

  void* STATE_4_Simulator;             /* '<S363>/STATE_4' */
  void* STATE_4_SimData;               /* '<S363>/STATE_4' */
  void* STATE_4_DiagMgr;               /* '<S363>/STATE_4' */
  void* STATE_4_ZcLogger;              /* '<S363>/STATE_4' */
  void* STATE_4_TsIndex;               /* '<S363>/STATE_4' */
  void* OUTPUT_4_0_Simulator;          /* '<S363>/OUTPUT_4_0' */
  void* OUTPUT_4_0_SimData;            /* '<S363>/OUTPUT_4_0' */
  void* OUTPUT_4_0_DiagMgr;            /* '<S363>/OUTPUT_4_0' */
  void* OUTPUT_4_0_ZcLogger;           /* '<S363>/OUTPUT_4_0' */
  void* OUTPUT_4_0_TsIndex;            /* '<S363>/OUTPUT_4_0' */
  void* STATE_1_Simulator;             /* '<S363>/STATE_1' */
  void* STATE_1_SimData;               /* '<S363>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S363>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S363>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S363>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S363>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S363>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S363>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S363>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S363>/OUTPUT_1_0' */
  void* OUTPUT_6_1_Simulator;          /* '<S363>/OUTPUT_6_1' */
  void* OUTPUT_6_1_SimData;            /* '<S363>/OUTPUT_6_1' */
  void* OUTPUT_6_1_DiagMgr;            /* '<S363>/OUTPUT_6_1' */
  void* OUTPUT_6_1_ZcLogger;           /* '<S363>/OUTPUT_6_1' */
  void* OUTPUT_6_1_TsIndex;            /* '<S363>/OUTPUT_6_1' */
  struct {
    void *LoggedData[2];
  } BladeBearingLoads_PWORK;           /* '<S353>/Blade Bearing Loads' */

  struct {
    void *LoggedData;
  } BladePitchAoAZeroPitch_PWORK;     /* '<S353>/Blade Pitch, AoA Zero Pitch' */

  struct {
    void *LoggedData;
  } CoeffApprox_PWORK;                 /* '<S353>/Coeff Approx' */

  struct {
    void *LoggedData[4];
  } DragCalculation_PWORK;             /* '<S353>/Drag Calculation' */

  struct {
    void *LoggedData[4];
  } LiftCalculation_PWORK;             /* '<S353>/Lift Calculation' */

  struct {
    void *LoggedData;
  } LiftDrag_PWORK;                    /* '<S353>/Lift, Drag' */

  struct {
    void *LoggedData;
  } GeartrainRatio_PWORK;              /* '<S355>/Geartrain Ratio' */

  struct {
    void *LoggedData[3];
  } RotorTurbineSpeedrpmpu_PWORK; /* '<S355>/Rotor, Turbine Speed  (rpm, pu)' */

  struct {
    void *TUbufferPtrs[2];
  } TransportDelay_PWORK;              /* '<S361>/Transport Delay' */

  struct {
    void *TUbufferPtrs[2];
  } TransportDelay_PWORK_h;            /* '<S362>/Transport Delay' */

  struct {
    void *LoggedData[2];
  } Power_PWORK;                       /* '<S355>/Power' */

  void *StateSpace_PWORK[15];          /* '<S370>/State-Space' */
  struct {
    void *LoggedData;
  } GeartrainInputTorque_PWORK;        /* '<S355>/Geartrain Input Torque' */

  struct {
    void *LoggedData;
  } GenTorque_PWORK;                   /* '<S355>/Gen Torque' */

  struct {
    void *LoggedData;
  } GeneratorTrip_PWORK;               /* '<S355>/Generator Trip' */

  struct {
    void *LoggedData;
  } RotorSpeedRPM_PWORK;               /* '<S355>/Rotor Speed (RPM)' */

  struct {
    void *LoggedData[2];
  } BrakeSignalClutchMode_PWORK;       /* '<S356>/Brake Signal Clutch Mode' */

  struct {
    void *LoggedData[2];
  } Wind_PWORK;                        /* '<S356>/Wind' */

  struct {
    void *LoggedData[2];
  } ParkingBrakeTurbineState_PWORK;  /* '<S356>/Parking Brake, Turbine State' */

  struct {
    void *LoggedData;
  } NacelleYaw_PWORK;                  /* '<S358>/Nacelle Yaw' */

  struct {
    void *LoggedData[2];
  } NacelleYawandYawRate_PWORK;        /* '<S358>/Nacelle Yaw and Yaw Rate' */

  struct {
    void *LoggedData;
  } TorqueCommand_PWORK;               /* '<S358>/Torque Command' */

  struct {
    void *LoggedData;
  } YawActuatorTorque_PWORK;           /* '<S358>/Yaw Actuator Torque' */

  struct {
    void *LoggedData[2];
  } BrakeSignalClutchMode_PWORK_p;     /* '<S71>/Brake Signal Clutch Mode' */

  int32_T inversion_DWORK2[4];         /* '<S92>/inversion' */
  int32_T sfEvent;                     /* '<S51>/Turbine State Machine' */
  uint32_T m_bpIndex;                  /* '<S92>/1-D Lookup Table' */
  uint32_T is_c1_Turbine_State_Machine_Lib;/* '<S51>/Turbine State Machine' */
  int_T STATE_6_Modes;                 /* '<S363>/STATE_6' */
  int_T OUTPUT_6_0_Modes;              /* '<S363>/OUTPUT_6_0' */
  int_T STATE_5_Modes[23];             /* '<S363>/STATE_5' */
  int_T OUTPUT_5_0_Modes;              /* '<S363>/OUTPUT_5_0' */
  int_T STATE_2_Modes[23];             /* '<S363>/STATE_2' */
  int_T OUTPUT_2_0_Modes;              /* '<S363>/OUTPUT_2_0' */
  int_T STATE_3_Modes[23];             /* '<S363>/STATE_3' */
  int_T OUTPUT_3_0_Modes;              /* '<S363>/OUTPUT_3_0' */
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S365>/FromWs' */

  int_T STATE_4_Modes[16];             /* '<S363>/STATE_4' */
  int_T OUTPUT_4_0_Modes;              /* '<S363>/OUTPUT_4_0' */
  int_T STATE_1_Modes[8];              /* '<S363>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S363>/OUTPUT_1_0' */
  int_T OUTPUT_6_1_Modes;              /* '<S363>/OUTPUT_6_1' */
  struct {
    int_T Tail;
    int_T Head;
    int_T Last;
    int_T CircularBufSize;
  } TransportDelay_IWORK;              /* '<S361>/Transport Delay' */

  struct {
    int_T Tail;
    int_T Head;
    int_T Last;
    int_T CircularBufSize;
  } TransportDelay_IWORK_a;            /* '<S362>/Transport Delay' */

  int_T StateSpace_IWORK[4];           /* '<S370>/State-Space' */
  int8_T Saturation_SubsysRanBC;       /* '<S87>/Saturation' */
  uint8_T is_active_c1_Turbine_State_Mach;/* '<S51>/Turbine State Machine' */
  boolean_T STATE_6_FirstOutput;       /* '<S363>/STATE_6' */
  boolean_T OUTPUT_6_0_FirstOutput;    /* '<S363>/OUTPUT_6_0' */
  boolean_T RTP_5_SetParametersNeeded; /* synthesized block */
  boolean_T STATE_5_FirstOutput;       /* '<S363>/STATE_5' */
  boolean_T OUTPUT_5_0_FirstOutput;    /* '<S363>/OUTPUT_5_0' */
  boolean_T RTP_2_SetParametersNeeded; /* synthesized block */
  boolean_T STATE_2_FirstOutput;       /* '<S363>/STATE_2' */
  boolean_T OUTPUT_2_0_FirstOutput;    /* '<S363>/OUTPUT_2_0' */
  boolean_T RTP_3_SetParametersNeeded; /* synthesized block */
  boolean_T STATE_3_FirstOutput;       /* '<S363>/STATE_3' */
  boolean_T OUTPUT_3_0_FirstOutput;    /* '<S363>/OUTPUT_3_0' */
  boolean_T STATE_4_FirstOutput;       /* '<S363>/STATE_4' */
  boolean_T OUTPUT_4_0_FirstOutput;    /* '<S363>/OUTPUT_4_0' */
  boolean_T STATE_1_FirstOutput;       /* '<S363>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S363>/OUTPUT_1_0' */
  boolean_T OUTPUT_6_1_FirstOutput;    /* '<S363>/OUTPUT_6_1' */
  boolean_T Saturation_MODE;           /* '<S87>/Saturation' */
} DW_Wind_Turbine_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S176>/Integrator' */
  real_T Wind_TurbineNacelleYaw_SystemSe[28];/* '<S363>/STATE_6' */
  real_T Integrator_CSTATE_j;          /* '<S206>/Integrator' */
  real_T Integrator_CSTATE_n;          /* '<S236>/Integrator' */
  real_T Integrator_CSTATE_m;          /* '<S73>/Integrator' */
  real_T Integrator_CSTATE_h;          /* '<S352>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S72>/Integrator' */
  real_T Wind_TurbineNacelleGeneratorFul;/* '<S363>/INPUT_5_1_1' */
  real_T Integrator_CSTATE_a[4];       /* '<S287>/Integrator' */
  real_T Wind_TurbineNacelleYaw_System_j;/* '<S363>/INPUT_15_1_1' */
  real_T Wind_TurbineNacelleYaw_System_m;/* '<S363>/INPUT_16_1_1' */
  real_T Wind_TurbineNacelleYaw_System_p;/* '<S363>/INPUT_17_1_1' */
  real_T Wind_TurbineNacelleYaw_System_a;/* '<S363>/INPUT_18_1_1' */
  real_T Integrator_CSTATE_mj;         /* '<S19>/Integrator' */
  real_T Integrator_CSTATE_mt;         /* '<S18>/Integrator' */
  real_T integrator_CSTATE;            /* '<S361>/integrator' */
  real_T integrator_CSTATE_g;          /* '<S362>/integrator' */
  real_T Integrator_CSTATE_e1[4];      /* '<S93>/Integrator' */
  real_T Integrator_CSTATE_mr[2];      /* '<S88>/Integrator' */
  real_T Integrator_CSTATE_eo;         /* '<S40>/Integrator' */
  real_T Rotoranglethetam_CSTATE;      /* '<S83>/Rotor angle thetam' */
  real_T Integrator_CSTATE_b[4];       /* '<S368>/Integrator' */
  real_T Integrator_CSTATE_bc[4];      /* '<S369>/Integrator' */
  real_T Integrator_CSTATE_i[3];       /* '<S349>/Integrator' */
  real_T Integrator_CSTATE_g;          /* '<S96>/Integrator' */
} X_Wind_Turbine_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S176>/Integrator' */
  real_T Wind_TurbineNacelleYaw_SystemSe[28];/* '<S363>/STATE_6' */
  real_T Integrator_CSTATE_j;          /* '<S206>/Integrator' */
  real_T Integrator_CSTATE_n;          /* '<S236>/Integrator' */
  real_T Integrator_CSTATE_m;          /* '<S73>/Integrator' */
  real_T Integrator_CSTATE_h;          /* '<S352>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S72>/Integrator' */
  real_T Wind_TurbineNacelleGeneratorFul;/* '<S363>/INPUT_5_1_1' */
  real_T Integrator_CSTATE_a[4];       /* '<S287>/Integrator' */
  real_T Wind_TurbineNacelleYaw_System_j;/* '<S363>/INPUT_15_1_1' */
  real_T Wind_TurbineNacelleYaw_System_m;/* '<S363>/INPUT_16_1_1' */
  real_T Wind_TurbineNacelleYaw_System_p;/* '<S363>/INPUT_17_1_1' */
  real_T Wind_TurbineNacelleYaw_System_a;/* '<S363>/INPUT_18_1_1' */
  real_T Integrator_CSTATE_mj;         /* '<S19>/Integrator' */
  real_T Integrator_CSTATE_mt;         /* '<S18>/Integrator' */
  real_T integrator_CSTATE;            /* '<S361>/integrator' */
  real_T integrator_CSTATE_g;          /* '<S362>/integrator' */
  real_T Integrator_CSTATE_e1[4];      /* '<S93>/Integrator' */
  real_T Integrator_CSTATE_mr[2];      /* '<S88>/Integrator' */
  real_T Integrator_CSTATE_eo;         /* '<S40>/Integrator' */
  real_T Rotoranglethetam_CSTATE;      /* '<S83>/Rotor angle thetam' */
  real_T Integrator_CSTATE_b[4];       /* '<S368>/Integrator' */
  real_T Integrator_CSTATE_bc[4];      /* '<S369>/Integrator' */
  real_T Integrator_CSTATE_i[3];       /* '<S349>/Integrator' */
  real_T Integrator_CSTATE_g;          /* '<S96>/Integrator' */
} XDot_Wind_Turbine_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S176>/Integrator' */
  boolean_T Wind_TurbineNacelleYaw_SystemSe[28];/* '<S363>/STATE_6' */
  boolean_T Integrator_CSTATE_j;       /* '<S206>/Integrator' */
  boolean_T Integrator_CSTATE_n;       /* '<S236>/Integrator' */
  boolean_T Integrator_CSTATE_m;       /* '<S73>/Integrator' */
  boolean_T Integrator_CSTATE_h;       /* '<S352>/Integrator' */
  boolean_T Integrator_CSTATE_e;       /* '<S72>/Integrator' */
  boolean_T Wind_TurbineNacelleGeneratorFul;/* '<S363>/INPUT_5_1_1' */
  boolean_T Integrator_CSTATE_a[4];    /* '<S287>/Integrator' */
  boolean_T Wind_TurbineNacelleYaw_System_j;/* '<S363>/INPUT_15_1_1' */
  boolean_T Wind_TurbineNacelleYaw_System_m;/* '<S363>/INPUT_16_1_1' */
  boolean_T Wind_TurbineNacelleYaw_System_p;/* '<S363>/INPUT_17_1_1' */
  boolean_T Wind_TurbineNacelleYaw_System_a;/* '<S363>/INPUT_18_1_1' */
  boolean_T Integrator_CSTATE_mj;      /* '<S19>/Integrator' */
  boolean_T Integrator_CSTATE_mt;      /* '<S18>/Integrator' */
  boolean_T integrator_CSTATE;         /* '<S361>/integrator' */
  boolean_T integrator_CSTATE_g;       /* '<S362>/integrator' */
  boolean_T Integrator_CSTATE_e1[4];   /* '<S93>/Integrator' */
  boolean_T Integrator_CSTATE_mr[2];   /* '<S88>/Integrator' */
  boolean_T Integrator_CSTATE_eo;      /* '<S40>/Integrator' */
  boolean_T Rotoranglethetam_CSTATE;   /* '<S83>/Rotor angle thetam' */
  boolean_T Integrator_CSTATE_b[4];    /* '<S368>/Integrator' */
  boolean_T Integrator_CSTATE_bc[4];   /* '<S369>/Integrator' */
  boolean_T Integrator_CSTATE_i[3];    /* '<S349>/Integrator' */
  boolean_T Integrator_CSTATE_g;       /* '<S96>/Integrator' */
} XDis_Wind_Turbine_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_Wind_Turbine_T;

/* Backward compatible GRT Identifiers */
#define rtB                            Wind_Turbine_B
#define BlockIO                        B_Wind_Turbine_T
#define rtX                            Wind_Turbine_X
#define ContinuousStates               X_Wind_Turbine_T
#define rtXdot                         Wind_Turbine_XDot
#define StateDerivatives               XDot_Wind_Turbine_T
#define tXdis                          Wind_Turbine_XDis
#define StateDisabled                  XDis_Wind_Turbine_T
#define rtY                            Wind_Turbine_Y
#define ExternalOutputs                ExtY_Wind_Turbine_T
#define rtP                            Wind_Turbine_P
#define Parameters                     P_Wind_Turbine_T
#define rtDWork                        Wind_Turbine_DW
#define D_Work                         DW_Wind_Turbine_T

/* Parameters (default storage) */
struct P_Wind_Turbine_T_ {
  struct_VxB4cZRzPu25TOKhJlNWLD WT_Params;/* Variable: WT_Params
                                           * Referenced by:
                                           *   synthesized block
                                           *   synthesized block
                                           *   synthesized block
                                           *   synthesized block
                                           *   synthesized block
                                           *   synthesized block
                                           *   synthesized block
                                           *   synthesized block
                                           *   synthesized block
                                           *   '<S13>/Blade Length'
                                           *   '<S355>/radps2pu'
                                           *   '<S367>/Derivative Control'
                                           *   '<S367>/Limit Nacelle Yaw Rate Cmd'
                                           *   '<S16>/rho'
                                           *   '<S16>/R*c'
                                           *   '<S18>/Gain'
                                           *   '<S19>/Gain'
                                           *   '<S20>/drag polar'
                                           *   '<S20>/lift polar'
                                           *   '<S71>/pu2rpm'
                                           *   '<S71>/radps2pu'
                                           *   '<S71>/torque_pu2Nm'
                                           *   '<S359>/pu to A'
                                           *   '<S359>/pu to MW'
                                           *   '<S359>/pu to Mvar'
                                           *   '<S359>/pu to V'
                                           *   '<S359>/to pu'
                                           *   '<S368>/Integral Gain'
                                           *   '<S368>/Proportional Gain'
                                           *   '<S368>/Integrator'
                                           *   '<S369>/Integral Gain'
                                           *   '<S369>/Proportional Gain'
                                           *   '<S72>/Gain'
                                           *   '<S73>/Gain'
                                           *   '<S154>/Scaling Factor'
                                           *   '<S347>/Derivative_Gain'
                                           *   '<S348>/Pitch For Braking'
                                           *   '<S348>/Pitch For Park'
                                           *   '<S348>/Limit Pitch Command'
                                           *   '<S361>/Gain'
                                           *   '<S361>/Step'
                                           *   '<S361>/Transport Delay'
                                           *   '<S362>/Gain'
                                           *   '<S362>/Step'
                                           *   '<S362>/Transport Delay'
                                           *   '<S63>/Engagement Pressure'
                                           *   '<S287>/Gain'
                                           *   '<S288>/Actuator Position to Nacelle Angle'
                                           *   '<S288>/Actuator Speed to Nacelle Yaw Rate'
                                           *   '<S289>/Actuator Position to Nacelle Angle'
                                           *   '<S289>/Actuator Speed to Nacelle Yaw Rate'
                                           *   '<S290>/Actuator Position to Nacelle Angle'
                                           *   '<S290>/Actuator Speed to Nacelle Yaw Rate'
                                           *   '<S291>/Actuator Position to Nacelle Angle'
                                           *   '<S291>/Actuator Speed to Nacelle Yaw Rate'
                                           *   '<S349>/Integral Gain'
                                           *   '<S349>/Proportional Gain'
                                           *   '<S350>/radps2mps'
                                           *   '<S351>/Nominal RPM'
                                           *   '<S351>/Saturation'
                                           *   '<S352>/Integral Gain'
                                           *   '<S352>/Proportional Gain'
                                           *   '<S352>/Integrator'
                                           *   '<S176>/Gain'
                                           *   '<S206>/Gain'
                                           *   '<S236>/Gain'
                                           */
  struct_xsORZR4HqlewCZVNsuZuW Actuator_Lookup;/* Variable: Actuator_Lookup
                                                * Referenced by:
                                                *   '<S51>/Extension to Angle'
                                                *   '<S347>/Angle to Extension'
                                                */
  real_T radps2rpm;                    /* Variable: radps2rpm
                                        * Referenced by:
                                        *   '<S51>/radps to rpm'
                                        *   '<S355>/radps2rpm'
                                        *   '<S355>/rpm2radps'
                                        *   '<S71>/pu2rpm'
                                        *   '<S71>/radps2rpm'
                                        *   '<S351>/radps2rpm'
                                        */
  real_T Grid_HarmonicGeneration;     /* Mask Parameter: Grid_HarmonicGeneration
                                       * Referenced by: '<S36>/valp_nom7'
                                       */
  real_T SeqAGeneration_Mag_Harmo;   /* Mask Parameter: SeqAGeneration_Mag_Harmo
                                      * Referenced by: '<S37>/Phase_Harmo1'
                                      */
  real_T SeqBGeneration_Mag_Harmo;   /* Mask Parameter: SeqBGeneration_Mag_Harmo
                                      * Referenced by: '<S38>/Phase_Harmo1'
                                      */
  real_T SeqAGeneration_Phase_Harmo;
                                   /* Mask Parameter: SeqAGeneration_Phase_Harmo
                                    * Referenced by: '<S37>/Phase_Harmo'
                                    */
  real_T SeqBGeneration_Phase_Harmo;
                                   /* Mask Parameter: SeqBGeneration_Phase_Harmo
                                    * Referenced by: '<S38>/Phase_Harmo'
                                    */
  real_T SeqAGeneration_Seq_Harmo;   /* Mask Parameter: SeqAGeneration_Seq_Harmo
                                      * Referenced by: '<S37>/Phase_Harmo2'
                                      */
  real_T SeqBGeneration_Seq_Harmo;   /* Mask Parameter: SeqBGeneration_Seq_Harmo
                                      * Referenced by: '<S38>/Phase_Harmo2'
                                      */
  real_T TripBreaker1_SwitchA;         /* Mask Parameter: TripBreaker1_SwitchA
                                        * Referenced by: '<S79>/Constant1'
                                        */
  real_T TripBreaker2_SwitchA;         /* Mask Parameter: TripBreaker2_SwitchA
                                        * Referenced by: '<S80>/Constant1'
                                        */
  real_T TripBreaker1_SwitchB;         /* Mask Parameter: TripBreaker1_SwitchB
                                        * Referenced by: '<S79>/Constant2'
                                        */
  real_T TripBreaker2_SwitchB;         /* Mask Parameter: TripBreaker2_SwitchB
                                        * Referenced by: '<S80>/Constant2'
                                        */
  real_T TripBreaker1_SwitchC;         /* Mask Parameter: TripBreaker1_SwitchC
                                        * Referenced by: '<S79>/Constant3'
                                        */
  real_T TripBreaker2_SwitchC;         /* Mask Parameter: TripBreaker2_SwitchC
                                        * Referenced by: '<S80>/Constant3'
                                        */
  real_T VariationSubSystem_Toff_Variati;
                              /* Mask Parameter: VariationSubSystem_Toff_Variati
                               * Referenced by: '<S40>/Step1'
                               */
  real_T VariationSubSystem_Ton_Variatio;
                              /* Mask Parameter: VariationSubSystem_Ton_Variatio
                               * Referenced by: '<S40>/Step'
                               */
  real_T Grid_VariationEntity;         /* Mask Parameter: Grid_VariationEntity
                                        * Referenced by: '<S36>/valp_nom3'
                                        */
  real_T VariationSubSystem_VariationFre;
                              /* Mask Parameter: VariationSubSystem_VariationFre
                               * Referenced by: '<S40>/valp_nom9'
                               */
  real_T VariationSubSystem_VariationMag;
                              /* Mask Parameter: VariationSubSystem_VariationMag
                               * Referenced by: '<S40>/valp_nom8'
                               */
  real_T VariationSubSystem_VariationRat;
                              /* Mask Parameter: VariationSubSystem_VariationRat
                               * Referenced by: '<S40>/valp_nom7'
                               */
  real_T VariationSubSystem_VariationSte;
                              /* Mask Parameter: VariationSubSystem_VariationSte
                               * Referenced by: '<S40>/valp_nom6'
                               */
  real_T ActuatorDynamics_x_initial;
                                   /* Mask Parameter: ActuatorDynamics_x_initial
                                    * Referenced by: '<S176>/Integrator'
                                    */
  real_T ActuatorDynamics_x_initial_o;
                                 /* Mask Parameter: ActuatorDynamics_x_initial_o
                                  * Referenced by: '<S206>/Integrator'
                                  */
  real_T ActuatorDynamics_x_initial_b;
                                 /* Mask Parameter: ActuatorDynamics_x_initial_b
                                  * Referenced by: '<S236>/Integrator'
                                  */
  real_T ActuatorDynamics1_x_initial;
                                  /* Mask Parameter: ActuatorDynamics1_x_initial
                                   * Referenced by: '<S73>/Integrator'
                                   */
  real_T ActuatorDynamics_x_initial_n;
                                 /* Mask Parameter: ActuatorDynamics_x_initial_n
                                  * Referenced by: '<S72>/Integrator'
                                  */
  real_T ActuatorDynamics_x_initial_of;
                                /* Mask Parameter: ActuatorDynamics_x_initial_of
                                 * Referenced by: '<S287>/Integrator'
                                 */
  real_T LagRotorSpd_x_initial;        /* Mask Parameter: LagRotorSpd_x_initial
                                        * Referenced by: '<S19>/Integrator'
                                        */
  real_T LagPitch_x_initial;           /* Mask Parameter: LagPitch_x_initial
                                        * Referenced by: '<S18>/Integrator'
                                        */
  real_T Gain4_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S36>/Gain4'
                                        */
  real_T Negativesequence_Value[3];    /* Expression: [0 2*pi/3 -2*pi/3]
                                        * Referenced by: '<S37>/Negative-sequence'
                                        */
  real_T Positivesequence_Value[3];    /* Expression: [0 -2*pi/3 2*pi/3]
                                        * Referenced by: '<S37>/Positive-sequence'
                                        */
  real_T Zerosequence_Value[3];        /* Expression: [0 0 0]
                                        * Referenced by: '<S37>/Zero-sequence'
                                        */
  real_T Negativesequence_Value_l[3];  /* Expression: [0 2*pi/3 -2*pi/3]
                                        * Referenced by: '<S38>/Negative-sequence'
                                        */
  real_T Positivesequence_Value_d[3];  /* Expression: [0 -2*pi/3 2*pi/3]
                                        * Referenced by: '<S38>/Positive-sequence'
                                        */
  real_T Zerosequence_Value_d[3];      /* Expression: [0 0 0]
                                        * Referenced by: '<S38>/Zero-sequence'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S40>/Constant2'
                                        */
  real_T we_Value;                     /* Expression: 1
                                        * Referenced by: '<S84>/we'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S84>/Gain2'
                                        */
  real_T u3_Value[16];
              /* Expression: [ 0 1  0  0; -1  0  0  0;  0  0  0  0;  0  0  0  0]
               * Referenced by: '<S84>/u3'
               */
  real_T u1_Value[2];                  /* Expression: [1/SM.Lls 1/SM.Llr]
                                        * Referenced by: '<S97>/u1'
                                        */
  real_T u2_Value[2];                  /* Expression: [ SM.Lls SM.Llr ]
                                        * Referenced by: '<S94>/u2'
                                        */
  real_T Integrator_IC;                /* Expression: SM.Lsat(1)
                                        * Referenced by: '<S96>/Integrator'
                                        */
  real_T uDLookupTable_tableData[2];
                           /* Expression: [ 0 SM.Phisat(2:end)./SM.Lsat(2:end) ]
                            * Referenced by: '<S92>/1-D Lookup Table'
                            */
  real_T uDLookupTable_bp01Data[2];    /* Expression: SM.Phisat
                                        * Referenced by: '<S92>/1-D Lookup Table'
                                        */
  real_T Constant1_Value;              /* Expression: SM.Lsat(1)
                                        * Referenced by: '<S92>/Constant1'
                                        */
  real_T u1_Value_b[16];               /* Expression: zeros(4,4)
                                        * Referenced by: '<S95>/u1'
                                        */
  real_T u5_Value[16];                 /* Expression: SM.Ll
                                        * Referenced by: '<S95>/u5'
                                        */
  real_T u1_Value_i[16];               /* Expression: SM.R
                                        * Referenced by: '<S92>/u1'
                                        */
  real_T uTT1e6s_Gain;                 /* Expression: 1/1e-6
                                        * Referenced by: '<S96>/1//T (T= 1e-6s)'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S79>/Switch'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S79>/Switch1'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S79>/Switch2'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0.5
                                        * Referenced by: '<S80>/Switch'
                                        */
  real_T Switch1_Threshold_b;          /* Expression: 0.5
                                        * Referenced by: '<S80>/Switch1'
                                        */
  real_T Switch2_Threshold_m;          /* Expression: 0.5
                                        * Referenced by: '<S80>/Switch2'
                                        */
  real_T PitchPowerOn_Time;            /* Expression: 20
                                        * Referenced by: '<Root>/Pitch Power On'
                                        */
  real_T PitchPowerOn_Y0;              /* Expression: 24
                                        * Referenced by: '<Root>/Pitch Power On'
                                        */
  real_T PitchPowerOn_YFinal;          /* Expression: 24
                                        * Referenced by: '<Root>/Pitch Power On'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S147>/Gain'
                                        */
  real_T rad2deg_Gain;                 /* Expression: 180/pi
                                        * Referenced by: '<S350>/rad2deg'
                                        */
  real_T Integrator_IC_d;              /* Expression: 0
                                        * Referenced by: '<S352>/Integrator'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -inf
                                        * Referenced by: '<S351>/Saturation'
                                        */
  real_T LimitPitchCommand_UpperSat;   /* Expression: max(Actuator_Lookup.angle)
                                        * Referenced by: '<S348>/Limit Pitch Command'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S63>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: 0
                                        * Referenced by: '<S63>/Saturation'
                                        */
  real_T PointofApplication_Gain;      /* Expression: 2/3
                                        * Referenced by: '<S13>/Point of Application'
                                        */
  real_T f2_Value;                     /* Expression: 1/2
                                        * Referenced by: '<S16>/f2'
                                        */
  real_T f1_Value;                     /* Expression: 2*pi
                                        * Referenced by: '<S20>/f1'
                                        */
  real_T Gain_Gain_f;                  /* Expression: -1
                                        * Referenced by: '<S14>/Gain'
                                        */
  real_T Gain_Gain_g;                  /* Expression: -1
                                        * Referenced by: '<S21>/Gain'
                                        */
  real_T PitchMoment_Value;            /* Expression: 0
                                        * Referenced by: '<S14>/Pitch Moment'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: inf
                                        * Referenced by: '<S355>/Saturation'
                                        */
  real_T Saturation_LowerSat_mc;       /* Expression: eps
                                        * Referenced by: '<S355>/Saturation'
                                        */
  real_T integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S361>/integrator'
                                        */
  real_T TransportDelay_InitOutput;    /* Expression: 0
                                        * Referenced by: '<S361>/Transport Delay'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S361>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S361>/Step'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S359>/Constant1'
                                        */
  real_T Switch_Threshold_k;           /* Expression: 0.5
                                        * Referenced by: '<S361>/Switch'
                                        */
  real_T integrator_IC_j;              /* Expression: 0
                                        * Referenced by: '<S362>/integrator'
                                        */
  real_T TransportDelay_InitOutput_e;  /* Expression: 0
                                        * Referenced by: '<S362>/Transport Delay'
                                        */
  real_T Step_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S362>/Step'
                                        */
  real_T Step_YFinal_h;                /* Expression: 1
                                        * Referenced by: '<S362>/Step'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0.5
                                        * Referenced by: '<S362>/Switch'
                                        */
  real_T Integrator_IC_j[4];           /* Expression: SM.phiqd0
                                        * Referenced by: '<S93>/Integrator'
                                        */
  real_T Constant_Value;               /* Expression: SM.ensat
                                        * Referenced by: '<S87>/Constant'
                                        */
  real_T Constant1_Value_h;            /* Expression: SM.ensat
                                        * Referenced by: '<S87>/Constant1'
                                        */
  real_T Constant2_Value_j[16];        /* Expression: SM.Linv
                                        * Referenced by: '<S87>/Constant2'
                                        */
  real_T Switch_Threshold_o;           /* Expression: 0.5
                                        * Referenced by: '<S87>/Switch'
                                        */
  real_T Integrator_IC_a[2];           /* Expression: [0 0]
                                        * Referenced by: '<S88>/Integrator'
                                        */
  real_T ib_Gain;                      /* Expression: SM.ib
                                        * Referenced by: '<S81>/ib'
                                        */
  real_T LookUpTable_XData[6];         /* Expression: sps.tv
                                        * Referenced by: '<S41>/Look-Up Table'
                                        */
  real_T LookUpTable_YData[6];         /* Expression: sps.opv
                                        * Referenced by: '<S41>/Look-Up Table'
                                        */
  real_T valp_nom5_Value;              /* Expression: VariationType
                                        * Referenced by: '<S36>/valp_nom5'
                                        */
  real_T Constant6_Value;              /* Expression: 4
                                        * Referenced by: '<S36>/Constant6'
                                        */
  real_T Constant_Value_i;             /* Expression: 2
                                        * Referenced by: '<S36>/Constant'
                                        */
  real_T Constant1_Value_n;            /* Expression: 0
                                        * Referenced by: '<S40>/Constant1'
                                        */
  real_T Step1_Y0;                     /* Expression: 1
                                        * Referenced by: '<S40>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 0
                                        * Referenced by: '<S40>/Step1'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S40>/Constant3'
                                        */
  real_T Step_Y0_e;                    /* Expression: 0
                                        * Referenced by: '<S40>/Step'
                                        */
  real_T Step_YFinal_g;                /* Expression: 1
                                        * Referenced by: '<S40>/Step'
                                        */
  real_T Integrator_IC_g;              /* Expression: 0
                                        * Referenced by: '<S40>/Integrator'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2*pi
                                        * Referenced by: '<S40>/Gain1'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S40>/Constant5'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S40>/Memory'
                                        */
  real_T Switch2_Threshold_d;          /* Expression: 0.5
                                        * Referenced by: '<S40>/Switch2'
                                        */
  real_T Constant1_Value_nt;           /* Expression: 0
                                        * Referenced by: '<S36>/Constant1'
                                        */
  real_T valp_nom2_Value;              /* Expression: MagnitudeVps
                                        * Referenced by: '<S36>/valp_nom2'
                                        */
  real_T SinglePhase_Value;            /* Expression: VariationPhaseA
                                        * Referenced by: '<S36>/SinglePhase'
                                        */
  real_T Switch5_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S36>/Switch5'
                                        */
  real_T valp_nom_Value;               /* Expression: PhaseVps
                                        * Referenced by: '<S36>/valp_nom'
                                        */
  real_T Gain3_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S36>/Gain3'
                                        */
  real_T P1_Value[3];                  /* Expression: [0  -2*pi/3  2*pi/3]
                                        * Referenced by: '<S36>/P1'
                                        */
  real_T Constant2_Value_f;            /* Expression: 3
                                        * Referenced by: '<S36>/Constant2'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S36>/Constant4'
                                        */
  real_T Step_Time;                    /* Expression: Ton_Harmo
                                        * Referenced by: '<S36>/Step'
                                        */
  real_T Step_Y0_a;                    /* Expression: 0
                                        * Referenced by: '<S36>/Step'
                                        */
  real_T Step_YFinal_c;                /* Expression: 1
                                        * Referenced by: '<S36>/Step'
                                        */
  real_T Step1_Time;                   /* Expression: Toff_Harmo
                                        * Referenced by: '<S36>/Step1'
                                        */
  real_T Step1_Y0_j;                   /* Expression: 0
                                        * Referenced by: '<S36>/Step1'
                                        */
  real_T Step1_YFinal_d;               /* Expression: -1
                                        * Referenced by: '<S36>/Step1'
                                        */
  real_T Gain3_Gain_f;                 /* Expression: pi/180
                                        * Referenced by: '<S37>/Gain3'
                                        */
  real_T valp_nom2_Value_p;            /* Expression: 1
                                        * Referenced by: '<S37>/valp_nom2'
                                        */
  real_T Gain3_Gain_c;                 /* Expression: pi/180
                                        * Referenced by: '<S38>/Gain3'
                                        */
  real_T valp_nom2_Value_a;            /* Expression: 1
                                        * Referenced by: '<S38>/valp_nom2'
                                        */
  real_T C4_Value;                     /* Expression: External
                                        * Referenced by: '<S79>/C4'
                                        */
  real_T LookUpTable_XData_p[4];       /* Expression: sps.tv
                                        * Referenced by: '<S133>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_l[4];       /* Expression: sps.opv
                                        * Referenced by: '<S133>/Look-Up Table'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S79>/Switch3'
                                        */
  real_T Constant5_Value_d;            /* Expression: InitialState
                                        * Referenced by: '<S79>/Constant5'
                                        */
  real_T C4_Value_g;                   /* Expression: BR.com
                                        * Referenced by: '<S127>/C4'
                                        */
  real_T LookUpTable_XData_l[5];       /* Expression: tv
                                        * Referenced by: '<S128>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_a[5];       /* Expression: opv
                                        * Referenced by: '<S128>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_n;          /* Expression: 0.5
                                        * Referenced by: '<S127>/Switch3'
                                        */
  real_T C4_Value_m;                   /* Expression: BR.com
                                        * Referenced by: '<S129>/C4'
                                        */
  real_T LookUpTable_XData_k[5];       /* Expression: tv
                                        * Referenced by: '<S130>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_n[5];       /* Expression: opv
                                        * Referenced by: '<S130>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_i;          /* Expression: 0.5
                                        * Referenced by: '<S129>/Switch3'
                                        */
  real_T C4_Value_o;                   /* Expression: BR.com
                                        * Referenced by: '<S131>/C4'
                                        */
  real_T LookUpTable_XData_g[5];       /* Expression: tv
                                        * Referenced by: '<S132>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_m[5];       /* Expression: opv
                                        * Referenced by: '<S132>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_o;          /* Expression: 0.5
                                        * Referenced by: '<S131>/Switch3'
                                        */
  real_T C4_Value_i;                   /* Expression: External
                                        * Referenced by: '<S80>/C4'
                                        */
  real_T LookUpTable_XData_k1[4];      /* Expression: sps.tv
                                        * Referenced by: '<S144>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_ab[4];      /* Expression: sps.opv
                                        * Referenced by: '<S144>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_f;          /* Expression: 0.5
                                        * Referenced by: '<S80>/Switch3'
                                        */
  real_T Constant5_Value_db;           /* Expression: InitialState
                                        * Referenced by: '<S80>/Constant5'
                                        */
  real_T C4_Value_d;                   /* Expression: BR.com
                                        * Referenced by: '<S138>/C4'
                                        */
  real_T LookUpTable_XData_pn[5];      /* Expression: tv
                                        * Referenced by: '<S139>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_mp[5];      /* Expression: opv
                                        * Referenced by: '<S139>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_it;         /* Expression: 0.5
                                        * Referenced by: '<S138>/Switch3'
                                        */
  real_T C4_Value_ok;                  /* Expression: BR.com
                                        * Referenced by: '<S140>/C4'
                                        */
  real_T LookUpTable_XData_le[5];      /* Expression: tv
                                        * Referenced by: '<S141>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_e[5];       /* Expression: opv
                                        * Referenced by: '<S141>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_h;          /* Expression: 0.5
                                        * Referenced by: '<S140>/Switch3'
                                        */
  real_T C4_Value_k;                   /* Expression: BR.com
                                        * Referenced by: '<S142>/C4'
                                        */
  real_T LookUpTable_XData_h[5];       /* Expression: tv
                                        * Referenced by: '<S143>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_d[5];       /* Expression: opv
                                        * Referenced by: '<S143>/Look-Up Table'
                                        */
  real_T Switch3_Threshold_hg;         /* Expression: 0.5
                                        * Referenced by: '<S142>/Switch3'
                                        */
  real_T StateSpace_P1_Size[2];        /* Computed Parameter: StateSpace_P1_Size
                                        * Referenced by: '<S370>/State-Space'
                                        */
  real_T StateSpace_P1[187];           /* Expression: real(S.H)
                                        * Referenced by: '<S370>/State-Space'
                                        */
  real_T StateSpace_P2_Size[2];        /* Computed Parameter: StateSpace_P2_Size
                                        * Referenced by: '<S370>/State-Space'
                                        */
  real_T StateSpace_P2[187];           /* Expression: imag(S.H)
                                        * Referenced by: '<S370>/State-Space'
                                        */
  real_T StateSpace_P3_Size[2];        /* Computed Parameter: StateSpace_P3_Size
                                        * Referenced by: '<S370>/State-Space'
                                        */
  real_T StateSpace_P3[6];             /* Expression: S.Rswitch
                                        * Referenced by: '<S370>/State-Space'
                                        */
  real_T StateSpace_P4_Size[2];        /* Computed Parameter: StateSpace_P4_Size
                                        * Referenced by: '<S370>/State-Space'
                                        */
  real_T StateSpace_P4[5];             /* Expression: S.InputsNonZero
                                        * Referenced by: '<S370>/State-Space'
                                        */
  real_T donotdeletethisgain_Gain;     /* Expression: 1
                                        * Referenced by: '<S106>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_o;   /* Expression: 1
                                        * Referenced by: '<S107>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_l;   /* Expression: 1
                                        * Referenced by: '<S108>/do not delete this gain'
                                        */
  real_T Kv1_Gain;                     /* Expression: Kv
                                        * Referenced by: '<S75>/Kv1'
                                        */
  real_T donotdeletethisgain_Gain_c;   /* Expression: 1
                                        * Referenced by: '<S103>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_j;   /* Expression: 1
                                        * Referenced by: '<S104>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_a;   /* Expression: 1
                                        * Referenced by: '<S105>/do not delete this gain'
                                        */
  real_T Kv_Gain;                      /* Expression: Ki
                                        * Referenced by: '<S75>/Kv'
                                        */
  real_T K_Gain;                       /* Expression: 1/2
                                        * Referenced by: '<S360>/K'
                                        */
  real_T FixSign_Gain;                 /* Expression: -1
                                        * Referenced by: '<S359>/Fix Sign'
                                        */
  real_T web_psb1_Gain;                /* Expression: 1/SM.Nb2
                                        * Referenced by: '<S83>/web_psb1'
                                        */
  real_T u1_Gain[2];                   /* Expression: [1 -1]
                                        * Referenced by: '<S91>/1-1'
                                        */
  real_T u_Vb_Gain;                    /* Expression: 1/SM.Vb
                                        * Referenced by: '<S81>/1_Vb'
                                        */
  real_T Gain1_Gain_l;                 /* Expression: 1/3
                                        * Referenced by: '<S85>/Gain1'
                                        */
  real_T Gain2_Gain_i;                 /* Expression: SM.Rs
                                        * Referenced by: '<S88>/Gain2'
                                        */
  real_T Rotoranglethetam_IC;          /* Expression: SM.tho
                                        * Referenced by: '<S83>/Rotor angle thetam'
                                        */
  real_T up_Gain;                      /* Expression: 1/SM.p
                                        * Referenced by: '<S83>/1\p'
                                        */
  real_T Gain_Gain_k[3];               /* Expression: [SM.Nb2;SM.Tb2;1]
                                        * Referenced by: '<S83>/Gain'
                                        */
  real_T GAIN_Gain;               /* Expression: pm_unit('rad', 'deg', 'linear')
                                   * Referenced by: '<S297>/GAIN'
                                   */
  real_T GAIN_Gain_e;         /* Expression: pm_unit('rad/s', 'deg/s', 'linear')
                               * Referenced by: '<S337>/GAIN'
                               */
  real_T GAIN_Gain_c;             /* Expression: pm_unit('rad', 'deg', 'linear')
                                   * Referenced by: '<S310>/GAIN'
                                   */
  real_T GAIN_Gain_cz;            /* Expression: pm_unit('rad', 'deg', 'linear')
                                   * Referenced by: '<S323>/GAIN'
                                   */
  real_T GAIN_Gain_l;             /* Expression: pm_unit('rad', 'deg', 'linear')
                                   * Referenced by: '<S336>/GAIN'
                                   */
  real_T Integrator_IC_di;             /* Expression: 0
                                        * Referenced by: '<S368>/Integrator'
                                        */
  real_T Integrator_IC_gs;             /* Expression: 0
                                        * Referenced by: '<S369>/Integrator'
                                        */
  real_T Integrator_UpperSat;
              /* Expression: max(WT_Params.Yaw_Actuator.Motor.max_torque_vector)
               * Referenced by: '<S369>/Integrator'
               */
  real_T Integrator_LowerSat;
             /* Expression: -max(WT_Params.Yaw_Actuator.Motor.max_torque_vector)
              * Referenced by: '<S369>/Integrator'
              */
  real_T LimitServomotorTorqueCmd_UpperS;
              /* Expression: max(WT_Params.Yaw_Actuator.Motor.max_torque_vector)
               * Referenced by: '<S367>/Limit Servomotor Torque Cmd'
               */
  real_T LimitServomotorTorqueCmd_LowerS;
             /* Expression: -max(WT_Params.Yaw_Actuator.Motor.max_torque_vector)
              * Referenced by: '<S367>/Limit Servomotor Torque Cmd'
              */
  real_T Gain_Gain_j;                  /* Expression: -1
                                        * Referenced by: '<S158>/Gain'
                                        */
  real_T HitCrossing_Offset;           /* Expression: 0
                                        * Referenced by: '<S41>/Hit  Crossing'
                                        */
  real_T Constant_Value_c;             /* Expression: 2
                                        * Referenced by: '<S40>/Constant'
                                        */
  real_T Constant4_Value_f;            /* Expression: 0
                                        * Referenced by: '<S40>/Constant4'
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0.5
                                        * Referenced by: '<S40>/Switch'
                                        */
  real_T donotdeletethisgain_Gain_f;   /* Expression: 1
                                        * Referenced by: '<S45>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_n;   /* Expression: 1
                                        * Referenced by: '<S46>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_b;   /* Expression: 1
                                        * Referenced by: '<S47>/do not delete this gain'
                                        */
  real_T Kv_Gain_l;                    /* Expression: Ki
                                        * Referenced by: '<S35>/Kv'
                                        */
  real_T Kv1_Gain_p;                   /* Expression: Kv
                                        * Referenced by: '<S35>/Kv1'
                                        */
  real_T HitCrossing_Offset_c;         /* Expression: 0
                                        * Referenced by: '<S128>/Hit  Crossing'
                                        */
  real_T HitCrossing_Offset_d;         /* Expression: 0
                                        * Referenced by: '<S130>/Hit  Crossing'
                                        */
  real_T HitCrossing_Offset_l;         /* Expression: 0
                                        * Referenced by: '<S132>/Hit  Crossing'
                                        */
  real_T HitCrossing_Offset_h;         /* Expression: 0
                                        * Referenced by: '<S133>/Hit  Crossing'
                                        */
  real_T HitCrossing_Offset_a;         /* Expression: 0
                                        * Referenced by: '<S139>/Hit  Crossing'
                                        */
  real_T HitCrossing_Offset_cd;        /* Expression: 0
                                        * Referenced by: '<S141>/Hit  Crossing'
                                        */
  real_T HitCrossing_Offset_m;         /* Expression: 0
                                        * Referenced by: '<S143>/Hit  Crossing'
                                        */
  real_T HitCrossing_Offset_b;         /* Expression: 0
                                        * Referenced by: '<S144>/Hit  Crossing'
                                        */
  real_T Constant2_Value_l;            /* Expression: SM.Rr
                                        * Referenced by: '<S99>/Constant2'
                                        */
  real_T ws2_Value;                    /* Expression: 1
                                        * Referenced by: '<S81>/ws2'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: -1
                                        * Referenced by: '<S88>/Gain1'
                                        */
  real_T inv_Gain;                     /* Expression: -1
                                        * Referenced by: '<S89>/inv'
                                        */
  real_T inv_Gain_h;                   /* Expression: -1
                                        * Referenced by: '<S90>/inv'
                                        */
  real_T Vqdr1_Value[2];               /* Expression: [0 0]
                                        * Referenced by: '<S81>/Vqdr1'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 1/3
                                        * Referenced by: '<S85>/Gain'
                                        */
  real_T Constant5_Value_a;            /* Expression: SM.ensat
                                        * Referenced by: '<S87>/Constant5'
                                        */
  real_T Lm_nosat_Value;               /* Expression: SM.Lm
                                        * Referenced by: '<S87>/Lm_nosat'
                                        */
  real_T Switch2_Threshold_h;          /* Expression: 0.5
                                        * Referenced by: '<S87>/Switch2'
                                        */
  real_T Gain_Gain_d[19];
  /* Expression: [SM.ib2*ones(5,1);SM.phib2;SM.phib2;SM.Vb2;SM.Vb2;SM.ib2*ones(5,1);SM.phib2;SM.phib2;SM.Vb2;SM.Vb2; SM.phib2/SM.ib2]
   * Referenced by: '<S81>/Gain'
   */
  real_T Vqdr3_Value[2];               /* Expression: [0 0]
                                        * Referenced by: '<S81>/Vqdr3'
                                        */
  real_T Constant3_Value_b;            /* Expression: SM.ensat
                                        * Referenced by: '<S87>/Constant3'
                                        */
  real_T Constant4_Value_b[16];        /* Expression: SM.RLinv
                                        * Referenced by: '<S87>/Constant4'
                                        */
  real_T Switch1_Threshold_i;          /* Expression: 0.5
                                        * Referenced by: '<S87>/Switch1'
                                        */
  real_T wbase_Gain;                   /* Expression: SM.web
                                        * Referenced by: '<S93>/wbase'
                                        */
  real_T Gain3_Gain_j[2];              /* Expression: [1 -1]
                                        * Referenced by: '<S88>/Gain3'
                                        */
  real_T Gain4_Gain_k;                 /* Expression: SM.web
                                        * Referenced by: '<S88>/Gain4'
                                        */
  real_T web_psb_Gain;                 /* Expression: SM.web
                                        * Referenced by: '<S83>/web_psb'
                                        */
  real_T GAIN_Gain_n;             /* Expression: pm_unit('rad', 'deg', 'linear')
                                   * Referenced by: '<S150>/GAIN'
                                   */
  real_T Gain1_Gain_k;                 /* Expression: -1
                                        * Referenced by: '<S147>/Gain1'
                                        */
  real_T LookupFix_Gain;               /* Expression: -1
                                        * Referenced by: '<S347>/Lookup Fix'
                                        */
  real_T AngletoExtension_XData[88];   /* Expression: -Actuator_Lookup.angle
                                        * Referenced by: '<S347>/Angle to Extension'
                                        */
  real_T Integrator_IC_p;              /* Expression: 0
                                        * Referenced by: '<S349>/Integrator'
                                        */
  real_T EmergenyBrakePitchCloseValve_Va;/* Expression: 0
                                          * Referenced by: '<S166>/Emergeny Brake Pitch  Close Valve'
                                          */
  real_T Switch_Threshold_d;           /* Expression: 0
                                        * Referenced by: '<S166>/Switch'
                                        */
  real_T EmergenyBrakePitchCloseValve__h;/* Expression: 0
                                          * Referenced by: '<S196>/Emergeny Brake Pitch  Close Valve'
                                          */
  real_T Switch_Threshold_cr;          /* Expression: 0
                                        * Referenced by: '<S196>/Switch'
                                        */
  real_T EmergenyBrakePitchCloseValve__f;/* Expression: 0
                                          * Referenced by: '<S226>/Emergeny Brake Pitch  Close Valve'
                                          */
  real_T Switch_Threshold_k0;          /* Expression: 0
                                        * Referenced by: '<S226>/Switch'
                                        */
  real_T Gain_Gain_n;                  /* Expression: -1
                                        * Referenced by: '<S159>/Gain'
                                        */
  real_T Gain_Gain_c;                  /* Expression: -1
                                        * Referenced by: '<S160>/Gain'
                                        */
  real_T GAIN_Gain_g;         /* Expression: pm_unit('rad/s', 'deg/s', 'linear')
                               * Referenced by: '<S298>/GAIN'
                               */
  real_T GAIN_Gain_ne;        /* Expression: pm_unit('rad/s', 'deg/s', 'linear')
                               * Referenced by: '<S301>/GAIN'
                               */
  real_T GAIN_Gain_m;         /* Expression: pm_unit('rad/s', 'deg/s', 'linear')
                               * Referenced by: '<S311>/GAIN'
                               */
  real_T GAIN_Gain_ey;        /* Expression: pm_unit('rad/s', 'deg/s', 'linear')
                               * Referenced by: '<S314>/GAIN'
                               */
  real_T GAIN_Gain_nu;        /* Expression: pm_unit('rad/s', 'deg/s', 'linear')
                               * Referenced by: '<S324>/GAIN'
                               */
  real_T GAIN_Gain_nex;       /* Expression: pm_unit('rad/s', 'deg/s', 'linear')
                               * Referenced by: '<S327>/GAIN'
                               */
  real_T GAIN_Gain_j;         /* Expression: pm_unit('rad/s', 'deg/s', 'linear')
                               * Referenced by: '<S340>/GAIN'
                               */
  creal_T SwitchCurrents_Value[6]; /* Expression: complex(zeros(6,1),zeros(6,1))
                                    * Referenced by: '<S372>/SwitchCurrents'
                                    */
  creal_T a2_Gain;                     /* Expression: exp(-SM.j*2*pi/3)
                                        * Referenced by: '<S90>/a^2'
                                        */
  creal_T a_Gain;                      /* Expression: exp(SM.j*2*pi/3)
                                        * Referenced by: '<S90>/a'
                                        */
  creal_T a3_Gain;                     /* Expression: 1/3*exp(SM.j*2*pi/3)
                                        * Referenced by: '<S85>/a//3'
                                        */
  creal_T pi2phaseshift_Gain;          /* Expression: exp(-SM.j*pi/2)
                                        * Referenced by: '<S88>/-pi//2  phase shift'
                                        */
  creal_T Constant4_Value_l;           /* Expression: SM.j*SM.Llr
                                        * Referenced by: '<S99>/Constant4'
                                        */
  creal_T Constant4_Value_j;           /* Expression: SM.j*SM.Lm
                                        * Referenced by: '<S98>/Constant4'
                                        */
  creal_T a2_Gain_j;                   /* Expression: exp(-SM.j*2*pi/3)
                                        * Referenced by: '<S89>/a^2'
                                        */
  creal_T a_Gain_o;                    /* Expression: exp(SM.j*2*pi/3)
                                        * Referenced by: '<S89>/a'
                                        */
  creal_T a23_Gain;                    /* Expression: 1/3*exp(-SM.j*2*pi/3)
                                        * Referenced by: '<S85>/(a^2)//3'
                                        */
  creal_T Constant5_Value_j;           /* Expression: SM.Rs+SM.j*SM.Lls
                                        * Referenced by: '<S98>/Constant5'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Wind_Turbine_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct _ssPortInfo2 inputOutputPortInfo2[1];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[28];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn0;
  } NonInlinedSFcns;

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[67];
  real_T odeF[3][67];
  ODE3_IntgData intgData;
  void *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Wind_Turbine_T Wind_Turbine_P;

/* Block signals (default storage) */
extern B_Wind_Turbine_T Wind_Turbine_B;

/* Continuous states (default storage) */
extern X_Wind_Turbine_T Wind_Turbine_X;

/* Block states (default storage) */
extern DW_Wind_Turbine_T Wind_Turbine_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Wind_Turbine_T Wind_Turbine_Y;

/* Model entry point functions */
extern void Wind_Turbine_initialize(void);
extern void Wind_Turbine_output(void);
extern void Wind_Turbine_update(void);
extern void Wind_Turbine_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern Wind_Turbine_rtModel *Wind_Turbine(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  Wind_Turbine_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_Wind_Turbine_T *const Wind_Turbine_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Wind_Turbine'
 * '<S1>'   : 'Wind_Turbine/Blade Load'
 * '<S2>'   : 'Wind_Turbine/Blades'
 * '<S3>'   : 'Wind_Turbine/Grid'
 * '<S4>'   : 'Wind_Turbine/Main Controller'
 * '<S5>'   : 'Wind_Turbine/Nacelle'
 * '<S6>'   : 'Wind_Turbine/Pitch Controller'
 * '<S7>'   : 'Wind_Turbine/Scopes'
 * '<S8>'   : 'Wind_Turbine/Solver Configuration'
 * '<S9>'   : 'Wind_Turbine/Tower'
 * '<S10>'  : 'Wind_Turbine/Turbine Input'
 * '<S11>'  : 'Wind_Turbine/Yaw Controller'
 * '<S12>'  : 'Wind_Turbine/powergui'
 * '<S13>'  : 'Wind_Turbine/Blade Load/Lift and Drag'
 * '<S14>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Apply Moments'
 * '<S15>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Calculate Angle of Attack'
 * '<S16>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Calculate Lift and Drag Forces'
 * '<S17>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Control Structure Pitch Diagram'
 * '<S18>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Lag Pitch'
 * '<S19>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Lag Rotor Spd'
 * '<S20>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Obtain Lift and Drag Constants'
 * '<S21>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Resolve Moments'
 * '<S22>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Apply Moments/Simulink-PS Converter'
 * '<S23>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Apply Moments/Simulink-PS Converter1'
 * '<S24>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Apply Moments/Simulink-PS Converter2'
 * '<S25>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Apply Moments/Simulink-PS Converter/EVAL_KEY'
 * '<S26>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Apply Moments/Simulink-PS Converter1/EVAL_KEY'
 * '<S27>'  : 'Wind_Turbine/Blade Load/Lift and Drag/Apply Moments/Simulink-PS Converter2/EVAL_KEY'
 * '<S28>'  : 'Wind_Turbine/Blades/Blade1'
 * '<S29>'  : 'Wind_Turbine/Blades/Blade2'
 * '<S30>'  : 'Wind_Turbine/Blades/Blade3'
 * '<S31>'  : 'Wind_Turbine/Blades/Blade1/Geometry'
 * '<S32>'  : 'Wind_Turbine/Blades/Blade2/Geometry'
 * '<S33>'  : 'Wind_Turbine/Blades/Blade3/Geometry'
 * '<S34>'  : 'Wind_Turbine/Grid/Grid'
 * '<S35>'  : 'Wind_Turbine/Grid/mGrid'
 * '<S36>'  : 'Wind_Turbine/Grid/Grid/Model'
 * '<S37>'  : 'Wind_Turbine/Grid/Grid/Model/Seq A Generation'
 * '<S38>'  : 'Wind_Turbine/Grid/Grid/Model/Seq B Generation'
 * '<S39>'  : 'Wind_Turbine/Grid/Grid/Model/Stair Generator'
 * '<S40>'  : 'Wind_Turbine/Grid/Grid/Model/Variation SubSystem'
 * '<S41>'  : 'Wind_Turbine/Grid/Grid/Model/Stair Generator/Model'
 * '<S42>'  : 'Wind_Turbine/Grid/mGrid/Mode I'
 * '<S43>'  : 'Wind_Turbine/Grid/mGrid/Mode V'
 * '<S44>'  : 'Wind_Turbine/Grid/mGrid/Model'
 * '<S45>'  : 'Wind_Turbine/Grid/mGrid/Model/U A:'
 * '<S46>'  : 'Wind_Turbine/Grid/mGrid/Model/U B:'
 * '<S47>'  : 'Wind_Turbine/Grid/mGrid/Model/U C:'
 * '<S48>'  : 'Wind_Turbine/Grid/mGrid/Model/U A:/Model'
 * '<S49>'  : 'Wind_Turbine/Grid/mGrid/Model/U B:/Model'
 * '<S50>'  : 'Wind_Turbine/Grid/mGrid/Model/U C:/Model'
 * '<S51>'  : 'Wind_Turbine/Main Controller/Wind Input'
 * '<S52>'  : 'Wind_Turbine/Main Controller/Wind Input/Inputs'
 * '<S53>'  : 'Wind_Turbine/Main Controller/Wind Input/Turbine State Machine'
 * '<S54>'  : 'Wind_Turbine/Nacelle/Geartrain'
 * '<S55>'  : 'Wind_Turbine/Nacelle/Generator'
 * '<S56>'  : 'Wind_Turbine/Nacelle/Hub Axis'
 * '<S57>'  : 'Wind_Turbine/Nacelle/Nacelle'
 * '<S58>'  : 'Wind_Turbine/Nacelle/Pitch System'
 * '<S59>'  : 'Wind_Turbine/Nacelle/Yaw System'
 * '<S60>'  : 'Wind_Turbine/Nacelle/Geartrain/Ideal'
 * '<S61>'  : 'Wind_Turbine/Nacelle/Geartrain/Ideal/Brakes'
 * '<S62>'  : 'Wind_Turbine/Nacelle/Geartrain/Ideal/Torque Sensor'
 * '<S63>'  : 'Wind_Turbine/Nacelle/Geartrain/Ideal/Brakes/Signal to Pressure'
 * '<S64>'  : 'Wind_Turbine/Nacelle/Geartrain/Ideal/Brakes/Simulink-PS Converter'
 * '<S65>'  : 'Wind_Turbine/Nacelle/Geartrain/Ideal/Brakes/Speed Sensor'
 * '<S66>'  : 'Wind_Turbine/Nacelle/Geartrain/Ideal/Brakes/Simulink-PS Converter/EVAL_KEY'
 * '<S67>'  : 'Wind_Turbine/Nacelle/Geartrain/Ideal/Brakes/Speed Sensor/PS-Simulink Converter'
 * '<S68>'  : 'Wind_Turbine/Nacelle/Geartrain/Ideal/Brakes/Speed Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S69>'  : 'Wind_Turbine/Nacelle/Geartrain/Ideal/Torque Sensor/PS-Simulink Converter'
 * '<S70>'  : 'Wind_Turbine/Nacelle/Geartrain/Ideal/Torque Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S71>'  : 'Wind_Turbine/Nacelle/Generator/Full'
 * '<S72>'  : 'Wind_Turbine/Nacelle/Generator/Full/Actuator Dynamics'
 * '<S73>'  : 'Wind_Turbine/Nacelle/Generator/Full/Actuator Dynamics1'
 * '<S74>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units'
 * '<S75>'  : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen'
 * '<S76>'  : 'Wind_Turbine/Nacelle/Generator/Full/Speed Sensor'
 * '<S77>'  : 'Wind_Turbine/Nacelle/Generator/Full/Torque Actuator'
 * '<S78>'  : 'Wind_Turbine/Nacelle/Generator/Full/Transformer'
 * '<S79>'  : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1'
 * '<S80>'  : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2'
 * '<S81>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model'
 * '<S82>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Measurements'
 * '<S83>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model'
 * '<S84>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame '
 * '<S85>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq'
 * '<S86>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc'
 * '<S87>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)'
 * '<S88>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)'
 * '<S89>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor'
 * '<S90>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator'
 * '<S91>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Electromagnetic Torque'
 * '<S92>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation'
 * '<S93>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi'
 * '<S94>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Laq=Lad'
 * '<S95>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L'
 * '<S96>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant'
 * '<S97>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd'
 * '<S98>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2'
 * '<S99>'  : 'Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Zr'
 * '<S100>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Mode I'
 * '<S101>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Mode V'
 * '<S102>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model'
 * '<S103>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/I A:'
 * '<S104>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/I B:'
 * '<S105>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/I C:'
 * '<S106>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/U A:'
 * '<S107>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/U B:'
 * '<S108>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/U C:'
 * '<S109>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/I A:/Model'
 * '<S110>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/I B:/Model'
 * '<S111>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/I C:/Model'
 * '<S112>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/U A:/Model'
 * '<S113>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/U B:/Model'
 * '<S114>' : 'Wind_Turbine/Nacelle/Generator/Full/B_Gen/Model/U C:/Model'
 * '<S115>' : 'Wind_Turbine/Nacelle/Generator/Full/Speed Sensor/PS-Simulink Converter'
 * '<S116>' : 'Wind_Turbine/Nacelle/Generator/Full/Speed Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S117>' : 'Wind_Turbine/Nacelle/Generator/Full/Torque Actuator/Simulink-PS Converter'
 * '<S118>' : 'Wind_Turbine/Nacelle/Generator/Full/Torque Actuator/Simulink-PS Converter/EVAL_KEY'
 * '<S119>' : 'Wind_Turbine/Nacelle/Generator/Full/Transformer/Model'
 * '<S120>' : 'Wind_Turbine/Nacelle/Generator/Full/Transformer/Model/Linear'
 * '<S121>' : 'Wind_Turbine/Nacelle/Generator/Full/Transformer/Model/Linear1'
 * '<S122>' : 'Wind_Turbine/Nacelle/Generator/Full/Transformer/Model/Linear2'
 * '<S123>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1/Breaker A'
 * '<S124>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1/Breaker B'
 * '<S125>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1/Breaker C'
 * '<S126>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1/Stair Generator'
 * '<S127>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model'
 * '<S128>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer'
 * '<S129>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model'
 * '<S130>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer'
 * '<S131>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model'
 * '<S132>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer'
 * '<S133>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model'
 * '<S134>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2/Breaker A'
 * '<S135>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2/Breaker B'
 * '<S136>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2/Breaker C'
 * '<S137>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2/Stair Generator'
 * '<S138>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model'
 * '<S139>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer'
 * '<S140>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model'
 * '<S141>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer'
 * '<S142>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model'
 * '<S143>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer'
 * '<S144>' : 'Wind_Turbine/Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model'
 * '<S145>' : 'Wind_Turbine/Nacelle/Hub Axis/Rotate'
 * '<S146>' : 'Wind_Turbine/Nacelle/Hub Axis/Rotate/Rotational Simscape Intf'
 * '<S147>' : 'Wind_Turbine/Nacelle/Hub Axis/Rotate/Sensing'
 * '<S148>' : 'Wind_Turbine/Nacelle/Hub Axis/Rotate/Sensing/PS-Simulink Converter'
 * '<S149>' : 'Wind_Turbine/Nacelle/Hub Axis/Rotate/Sensing/PS-Simulink Converter1'
 * '<S150>' : 'Wind_Turbine/Nacelle/Hub Axis/Rotate/Sensing/PS-Simulink Converter/EVAL_KEY'
 * '<S151>' : 'Wind_Turbine/Nacelle/Hub Axis/Rotate/Sensing/PS-Simulink Converter1/EVAL_KEY'
 * '<S152>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic'
 * '<S153>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Blade Pitch Sensing'
 * '<S154>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic'
 * '<S155>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage1'
 * '<S156>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage2'
 * '<S157>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage3'
 * '<S158>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB1'
 * '<S159>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB2'
 * '<S160>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB3'
 * '<S161>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rotor'
 * '<S162>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1'
 * '<S163>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2'
 * '<S164>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3'
 * '<S165>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Restructure Signal'
 * '<S166>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic'
 * '<S167>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Flow Rate Sensor'
 * '<S168>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Ideal Proportional'
 * '<S169>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Position Sensor'
 * '<S170>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Sense Force'
 * '<S171>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Simulink-PS Converter'
 * '<S172>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Subsystem'
 * '<S173>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Subsystem1'
 * '<S174>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Valve Accumulator'
 * '<S175>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Valve Return'
 * '<S176>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Actuator Dynamics'
 * '<S177>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Flow Rate Sensor/PS-Simulink Converter'
 * '<S178>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Flow Rate Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S179>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Position Sensor/PS-Simulink Converter'
 * '<S180>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Position Sensor/PS-Simulink Converter1'
 * '<S181>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Position Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S182>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Position Sensor/PS-Simulink Converter1/EVAL_KEY'
 * '<S183>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Sense Force/PS-Simulink Converter'
 * '<S184>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Sense Force/PS-Simulink Converter/EVAL_KEY'
 * '<S185>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Simulink-PS Converter/EVAL_KEY'
 * '<S186>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Subsystem/PS-Simulink Converter1'
 * '<S187>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Subsystem/PS-Simulink Converter1/EVAL_KEY'
 * '<S188>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Subsystem1/PS-Simulink Converter1'
 * '<S189>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S190>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Valve Accumulator/Logic For Nominally Open'
 * '<S191>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Valve Accumulator/Simulink-PS Converter'
 * '<S192>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Valve Accumulator/Simulink-PS Converter/EVAL_KEY'
 * '<S193>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Valve Return/Logic For Nominally Open'
 * '<S194>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Valve Return/Simulink-PS Converter'
 * '<S195>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/Valve Return/Simulink-PS Converter/EVAL_KEY'
 * '<S196>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic'
 * '<S197>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Flow Rate Sensor'
 * '<S198>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Ideal Proportional'
 * '<S199>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Position Sensor'
 * '<S200>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Sense Force'
 * '<S201>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Simulink-PS Converter'
 * '<S202>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Subsystem'
 * '<S203>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Subsystem1'
 * '<S204>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Valve Accumulator'
 * '<S205>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Valve Return'
 * '<S206>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Actuator Dynamics'
 * '<S207>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Flow Rate Sensor/PS-Simulink Converter'
 * '<S208>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Flow Rate Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S209>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Position Sensor/PS-Simulink Converter'
 * '<S210>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Position Sensor/PS-Simulink Converter1'
 * '<S211>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Position Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S212>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Position Sensor/PS-Simulink Converter1/EVAL_KEY'
 * '<S213>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Sense Force/PS-Simulink Converter'
 * '<S214>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Sense Force/PS-Simulink Converter/EVAL_KEY'
 * '<S215>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Simulink-PS Converter/EVAL_KEY'
 * '<S216>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Subsystem/PS-Simulink Converter1'
 * '<S217>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Subsystem/PS-Simulink Converter1/EVAL_KEY'
 * '<S218>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Subsystem1/PS-Simulink Converter1'
 * '<S219>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S220>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Valve Accumulator/Logic For Nominally Open'
 * '<S221>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Valve Accumulator/Simulink-PS Converter'
 * '<S222>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Valve Accumulator/Simulink-PS Converter/EVAL_KEY'
 * '<S223>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Valve Return/Logic For Nominally Open'
 * '<S224>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Valve Return/Simulink-PS Converter'
 * '<S225>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/Valve Return/Simulink-PS Converter/EVAL_KEY'
 * '<S226>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic'
 * '<S227>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Flow Rate Sensor'
 * '<S228>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Ideal Proportional'
 * '<S229>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Position Sensor'
 * '<S230>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Sense Force'
 * '<S231>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Simulink-PS Converter'
 * '<S232>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Subsystem'
 * '<S233>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Subsystem1'
 * '<S234>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Valve Accumulator'
 * '<S235>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Valve Return'
 * '<S236>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Actuator Dynamics'
 * '<S237>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Flow Rate Sensor/PS-Simulink Converter'
 * '<S238>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Flow Rate Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S239>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Position Sensor/PS-Simulink Converter'
 * '<S240>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Position Sensor/PS-Simulink Converter1'
 * '<S241>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Position Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S242>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Position Sensor/PS-Simulink Converter1/EVAL_KEY'
 * '<S243>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Sense Force/PS-Simulink Converter'
 * '<S244>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Sense Force/PS-Simulink Converter/EVAL_KEY'
 * '<S245>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Simulink-PS Converter/EVAL_KEY'
 * '<S246>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Subsystem/PS-Simulink Converter1'
 * '<S247>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Subsystem/PS-Simulink Converter1/EVAL_KEY'
 * '<S248>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Subsystem1/PS-Simulink Converter1'
 * '<S249>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Subsystem1/PS-Simulink Converter1/EVAL_KEY'
 * '<S250>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Valve Accumulator/Logic For Nominally Open'
 * '<S251>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Valve Accumulator/Simulink-PS Converter'
 * '<S252>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Valve Accumulator/Simulink-PS Converter/EVAL_KEY'
 * '<S253>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Valve Return/Logic For Nominally Open'
 * '<S254>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Valve Return/Simulink-PS Converter'
 * '<S255>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/Valve Return/Simulink-PS Converter/EVAL_KEY'
 * '<S256>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage1/Cylinder'
 * '<S257>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage1/Rod'
 * '<S258>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage1/Translational Simscape Intf'
 * '<S259>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage2/Cylinder'
 * '<S260>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage2/Rod'
 * '<S261>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage2/Translational Simscape Intf'
 * '<S262>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage3/Cylinder'
 * '<S263>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage3/Rod'
 * '<S264>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage3/Translational Simscape Intf'
 * '<S265>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB1/PS-Simulink Converter'
 * '<S266>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB1/PS-Simulink Converter1'
 * '<S267>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB1/PS-Simulink Converter2'
 * '<S268>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB1/PS-Simulink Converter/EVAL_KEY'
 * '<S269>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB1/PS-Simulink Converter1/EVAL_KEY'
 * '<S270>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB1/PS-Simulink Converter2/EVAL_KEY'
 * '<S271>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB2/PS-Simulink Converter'
 * '<S272>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB2/PS-Simulink Converter1'
 * '<S273>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB2/PS-Simulink Converter2'
 * '<S274>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB2/PS-Simulink Converter/EVAL_KEY'
 * '<S275>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB2/PS-Simulink Converter1/EVAL_KEY'
 * '<S276>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB2/PS-Simulink Converter2/EVAL_KEY'
 * '<S277>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB3/PS-Simulink Converter'
 * '<S278>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB3/PS-Simulink Converter1'
 * '<S279>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB3/PS-Simulink Converter2'
 * '<S280>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB3/PS-Simulink Converter/EVAL_KEY'
 * '<S281>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB3/PS-Simulink Converter1/EVAL_KEY'
 * '<S282>' : 'Wind_Turbine/Nacelle/Pitch System/Hydraulic/Rev RB3/PS-Simulink Converter2/EVAL_KEY'
 * '<S283>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor'
 * '<S284>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Rotational Simscape Intf'
 * '<S285>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor'
 * '<S286>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Yaw Ring'
 * '<S287>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Actuator Dynamics'
 * '<S288>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1'
 * '<S289>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2'
 * '<S290>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3'
 * '<S291>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4'
 * '<S292>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter'
 * '<S293>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter1'
 * '<S294>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor'
 * '<S295>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Torque Sensor'
 * '<S296>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Yaw Gearbox'
 * '<S297>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter/EVAL_KEY'
 * '<S298>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter1/EVAL_KEY'
 * '<S299>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/PS-Simulink Converter'
 * '<S300>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Simulink-PS Converter'
 * '<S301>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/PS-Simulink Converter/EVAL_KEY'
 * '<S302>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Simulink-PS Converter/EVAL_KEY'
 * '<S303>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Torque Sensor/PS-Simulink Converter'
 * '<S304>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Torque Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S305>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter'
 * '<S306>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter1'
 * '<S307>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor'
 * '<S308>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Torque Sensor'
 * '<S309>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Yaw Gearbox'
 * '<S310>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter/EVAL_KEY'
 * '<S311>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter1/EVAL_KEY'
 * '<S312>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/PS-Simulink Converter'
 * '<S313>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Simulink-PS Converter'
 * '<S314>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/PS-Simulink Converter/EVAL_KEY'
 * '<S315>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Simulink-PS Converter/EVAL_KEY'
 * '<S316>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Torque Sensor/PS-Simulink Converter'
 * '<S317>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Torque Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S318>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter'
 * '<S319>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter1'
 * '<S320>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor'
 * '<S321>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Torque Sensor'
 * '<S322>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Yaw Gearbox'
 * '<S323>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter/EVAL_KEY'
 * '<S324>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter1/EVAL_KEY'
 * '<S325>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/PS-Simulink Converter'
 * '<S326>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Simulink-PS Converter'
 * '<S327>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/PS-Simulink Converter/EVAL_KEY'
 * '<S328>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Simulink-PS Converter/EVAL_KEY'
 * '<S329>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Torque Sensor/PS-Simulink Converter'
 * '<S330>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Torque Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S331>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter'
 * '<S332>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter1'
 * '<S333>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor'
 * '<S334>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Torque Sensor'
 * '<S335>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Yaw Gearbox'
 * '<S336>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter/EVAL_KEY'
 * '<S337>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter1/EVAL_KEY'
 * '<S338>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/PS-Simulink Converter'
 * '<S339>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Simulink-PS Converter'
 * '<S340>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/PS-Simulink Converter/EVAL_KEY'
 * '<S341>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Simulink-PS Converter/EVAL_KEY'
 * '<S342>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Torque Sensor/PS-Simulink Converter'
 * '<S343>' : 'Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Torque Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S344>' : 'Wind_Turbine/Pitch Controller/PI on AoA'
 * '<S345>' : 'Wind_Turbine/Pitch Controller/PI on AoA/Control Structure Pitch Diagram'
 * '<S346>' : 'Wind_Turbine/Pitch Controller/PI on AoA/Pitch Controller'
 * '<S347>' : 'Wind_Turbine/Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller'
 * '<S348>' : 'Wind_Turbine/Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command'
 * '<S349>' : 'Wind_Turbine/Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller'
 * '<S350>' : 'Wind_Turbine/Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Angle of Attack if Pitch Angle Were 0'
 * '<S351>' : 'Wind_Turbine/Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack'
 * '<S352>' : 'Wind_Turbine/Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed'
 * '<S353>' : 'Wind_Turbine/Scopes/Blade Load Scopes'
 * '<S354>' : 'Wind_Turbine/Scopes/Configure Turbine'
 * '<S355>' : 'Wind_Turbine/Scopes/Generator Scopes'
 * '<S356>' : 'Wind_Turbine/Scopes/Main Controller Scopes'
 * '<S357>' : 'Wind_Turbine/Scopes/Pitch Scopes'
 * '<S358>' : 'Wind_Turbine/Scopes/Yaw Ctrl Scopes'
 * '<S359>' : 'Wind_Turbine/Scopes/Generator Scopes/pu to MW//MVar'
 * '<S360>' : 'Wind_Turbine/Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)'
 * '<S361>' : 'Wind_Turbine/Scopes/Generator Scopes/pu to MW//MVar/Mean Value P'
 * '<S362>' : 'Wind_Turbine/Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q'
 * '<S363>' : 'Wind_Turbine/Solver Configuration/EVAL_KEY'
 * '<S364>' : 'Wind_Turbine/Turbine Input/Wind'
 * '<S365>' : 'Wind_Turbine/Turbine Input/Wind/Wind Input'
 * '<S366>' : 'Wind_Turbine/Yaw Controller/Control Structure Pitch Diagram'
 * '<S367>' : 'Wind_Turbine/Yaw Controller/Yaw Controller'
 * '<S368>' : 'Wind_Turbine/Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw'
 * '<S369>' : 'Wind_Turbine/Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate'
 * '<S370>' : 'Wind_Turbine/powergui/EquivalentModel1'
 * '<S371>' : 'Wind_Turbine/powergui/EquivalentModel1/Gates'
 * '<S372>' : 'Wind_Turbine/powergui/EquivalentModel1/Sources'
 * '<S373>' : 'Wind_Turbine/powergui/EquivalentModel1/Yout'
 * '<S374>' : 'Wind_Turbine/powergui/EquivalentModel1/conversion'
 * '<S375>' : 'Wind_Turbine/powergui/EquivalentModel1/conversion '
 */
#endif                                 /* RTW_HEADER_Wind_Turbine_h_ */
