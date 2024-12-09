/*
 * Wind_Turbine_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Wind_Turbine_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "Wind_Turbine.h"
#include "Wind_Turbine_capi.h"
#include "Wind_Turbine_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("Pitch Power On"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Blade Load/Lift and Drag/Point of Application"),
    TARGET_STRING("radius"), 0, 0, 0, 0, 1 },

  { 2, 0, TARGET_STRING("Blade Load/Lift and Drag/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("Grid/mGrid/Kv"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 4, 0, TARGET_STRING("Grid/mGrid/Kv1"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 5, 13, TARGET_STRING("Main Controller/Wind Input/Turbine State Machine/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 6, 13, TARGET_STRING("Main Controller/Wind Input/Turbine State Machine/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 7, 13, TARGET_STRING("Main Controller/Wind Input/Turbine State Machine/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 8, 13, TARGET_STRING("Main Controller/Wind Input/Turbine State Machine/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 9, 0, TARGET_STRING("Main Controller/Wind Input/radps to rpm"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 10, 0, TARGET_STRING("Main Controller/Wind Input/Extension to Angle"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 11, 0, TARGET_STRING("Scopes/Generator Scopes/radps2pu"),
    TARGET_STRING("Gen Spd, pu"), 0, 0, 0, 0, 1 },

  { 12, 0, TARGET_STRING("Scopes/Generator Scopes/radps2rpm"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Scopes/Generator Scopes/rpm2radps"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 14, 0, TARGET_STRING("Scopes/Generator Scopes/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 15, 0, TARGET_STRING("Scopes/Generator Scopes/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 16, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/RATE_TRANSITION_10_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 17, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 18, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 19, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 20, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/RATE_TRANSITION_4_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 21, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/RATE_TRANSITION_5_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 22, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/RATE_TRANSITION_6_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 23, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/RATE_TRANSITION_7_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 24, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/RATE_TRANSITION_8_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 25, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/RATE_TRANSITION_9_1_1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 26, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_10_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 27, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_11_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 28, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_12_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 29, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_13_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 30, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_14_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 31, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_15_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 32, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_16_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 33, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_17_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 34, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_18_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 35, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_1_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 36, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_1_2_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 37, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_1_3_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 38, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_2_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 39, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_2_2_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 40, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_2_3_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 41, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_3_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 42, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_3_2_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 43, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_3_3_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 44, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_4_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 45, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_5_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 46, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_6_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 47, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_7_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 48, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_8_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 49, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INPUT_9_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 50, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INTERNAL_10_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 51, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 52, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 53, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 54, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 55, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 56, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 57, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INTERNAL_7_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 58, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INTERNAL_8_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 59, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/INTERNAL_9_1_1"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 60, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/OUTPUT_1_0"),
    TARGET_STRING(""), 0, 0, 3, 0, 1 },

  { 61, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/OUTPUT_2_0"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 62, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/OUTPUT_3_0"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 63, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/OUTPUT_4_0"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 64, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/OUTPUT_5_0"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 65, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/OUTPUT_6_0"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 66, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/OUTPUT_6_1"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 67, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/STATE_1"),
    TARGET_STRING(""), 0, 0, 7, 0, 1 },

  { 68, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/STATE_2"),
    TARGET_STRING(""), 0, 0, 8, 0, 1 },

  { 69, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/STATE_3"),
    TARGET_STRING(""), 0, 0, 8, 0, 1 },

  { 70, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/STATE_4"),
    TARGET_STRING(""), 0, 0, 9, 0, 1 },

  { 71, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/STATE_5"),
    TARGET_STRING(""), 0, 0, 8, 0, 1 },

  { 72, 0, TARGET_STRING("Solver Configuration/EVAL_KEY/STATE_6"),
    TARGET_STRING(""), 0, 0, 10, 0, 0 },

  { 73, 0, TARGET_STRING("Yaw Controller/Yaw Controller/Derivative Control"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 0, TARGET_STRING(
    "Yaw Controller/Yaw Controller/Limit Nacelle Yaw Rate Cmd"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 75, 0, TARGET_STRING(
    "Yaw Controller/Yaw Controller/Limit Servomotor Torque Cmd"),
    TARGET_STRING("Torque Command"), 0, 0, 2, 0, 0 },

  { 76, 0, TARGET_STRING("Yaw Controller/Yaw Controller/Sum"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 77, 0, TARGET_STRING("Yaw Controller/Yaw Controller/Sum1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 78, 0, TARGET_STRING("Yaw Controller/Yaw Controller/Sum3"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 79, 0, TARGET_STRING("powergui/EquivalentModel1/State-Space"),
    TARGET_STRING(""), 0, 0, 11, 0, 0 },

  { 80, 0, TARGET_STRING("Blade Load/Lift and Drag/Apply Moments/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 81, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Calculate Angle of Attack/Subtract"),
    TARGET_STRING("alpha"), 0, 0, 0, 0, 0 },

  { 82, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Calculate Angle of Attack/Trigonometric Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 83, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Calculate Lift and Drag Forces/R*c"),
    TARGET_STRING("Q*S"), 0, 0, 0, 0, 0 },

  { 84, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Math Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 85, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Math Function2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 86, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Divide1"),
    TARGET_STRING("Q"), 0, 0, 0, 0, 0 },

  { 87, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Divide4"),
    TARGET_STRING("Lift Force"), 0, 0, 0, 0, 0 },

  { 88, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Divide5"),
    TARGET_STRING("Drag Force"), 0, 0, 0, 0, 0 },

  { 89, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Add"),
    TARGET_STRING("V^2"), 0, 0, 0, 0, 0 },

  { 90, 0, TARGET_STRING("Blade Load/Lift and Drag/Lag Pitch/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 91, 0, TARGET_STRING("Blade Load/Lift and Drag/Lag Pitch/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 92, 0, TARGET_STRING("Blade Load/Lift and Drag/Lag Pitch/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 93, 0, TARGET_STRING("Blade Load/Lift and Drag/Lag Rotor Spd/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 94, 0, TARGET_STRING("Blade Load/Lift and Drag/Lag Rotor Spd/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 95, 0, TARGET_STRING("Blade Load/Lift and Drag/Lag Rotor Spd/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 96, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Obtain Lift and Drag Constants/drag polar"),
    TARGET_STRING("Cd"), 0, 0, 0, 0, 0 },

  { 97, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Obtain Lift and Drag Constants/lift polar"),
    TARGET_STRING("Cl"), 0, 0, 0, 0, 0 },

  { 98, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Obtain Lift and Drag Constants/Math Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 99, 0, TARGET_STRING("Blade Load/Lift and Drag/Resolve Moments/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 0, TARGET_STRING("Blade Load/Lift and Drag/Resolve Moments/Divide11"),
    TARGET_STRING("N"), 0, 0, 0, 0, 0 },

  { 101, 0, TARGET_STRING("Blade Load/Lift and Drag/Resolve Moments/Divide12"),
    TARGET_STRING("L"), 0, 0, 0, 0, 0 },

  { 102, 0, TARGET_STRING("Blade Load/Lift and Drag/Resolve Moments/Divide6"),
    TARGET_STRING("Lift*cos(alpha)"), 0, 0, 0, 0, 0 },

  { 103, 0, TARGET_STRING("Blade Load/Lift and Drag/Resolve Moments/Divide7"),
    TARGET_STRING("Drag*sin(alpha)"), 0, 0, 0, 0, 0 },

  { 104, 0, TARGET_STRING("Blade Load/Lift and Drag/Resolve Moments/Divide8"),
    TARGET_STRING("Lift*sin(alpha)"), 0, 0, 0, 0, 0 },

  { 105, 0, TARGET_STRING("Blade Load/Lift and Drag/Resolve Moments/Divide9"),
    TARGET_STRING("Drag*cos(alpha)"), 0, 0, 0, 0, 0 },

  { 106, 0, TARGET_STRING("Blade Load/Lift and Drag/Resolve Moments/Subtract1"),
    TARGET_STRING("X"), 0, 0, 0, 0, 0 },

  { 107, 0, TARGET_STRING("Blade Load/Lift and Drag/Resolve Moments/Subtract2"),
    TARGET_STRING("Z"), 0, 0, 0, 0, 0 },

  { 108, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Resolve Moments/Trigonometric Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 109, 0, TARGET_STRING(
    "Blade Load/Lift and Drag/Resolve Moments/Trigonometric Function2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 110, 0, TARGET_STRING("Grid/Grid/Model/Data Type  Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 111, 0, TARGET_STRING("Grid/Grid/Model/Data Type  Conversion1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 112, 0, TARGET_STRING("Grid/Grid/Model/Data Type  Conversion2"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 113, 0, TARGET_STRING("Grid/Grid/Model/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 114, 1, TARGET_STRING("Grid/Grid/Model/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 115, 0, TARGET_STRING("Grid/Grid/Model/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 116, 0, TARGET_STRING("Grid/Grid/Model/Logical Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 117, 0, TARGET_STRING("Grid/Grid/Model/Magnitude-Angle to Complex"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 118, 0, TARGET_STRING("Grid/Grid/Model/Relational Operator"),
    TARGET_STRING("Amplitude"), 0, 2, 0, 0, 1 },

  { 119, 0, TARGET_STRING("Grid/Grid/Model/Relational Operator1"),
    TARGET_STRING("Phase"), 0, 2, 0, 0, 1 },

  { 120, 0, TARGET_STRING("Grid/Grid/Model/Relational Operator3"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 121, 0, TARGET_STRING("Grid/Grid/Model/Step"),
    TARGET_STRING("Ton"), 0, 0, 0, 0, 0 },

  { 122, 0, TARGET_STRING("Grid/Grid/Model/Step1"),
    TARGET_STRING("Toff"), 0, 0, 0, 0, 0 },

  { 123, 0, TARGET_STRING("Grid/Grid/Model/Sum2"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 124, 0, TARGET_STRING("Grid/Grid/Model/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 125, 0, TARGET_STRING("Grid/Grid/Model/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 126, 0, TARGET_STRING("Grid/Grid/Model/Sum5"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 127, 0, TARGET_STRING("Grid/Grid/Model/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 128, 0, TARGET_STRING("Grid/Grid/Model/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 129, 0, TARGET_STRING("Grid/Grid/Model/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 130, 0, TARGET_STRING("Grid/Grid/Model/Switch5"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 131, 0, TARGET_STRING("Grid/mGrid/Mode V/Magnitude"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 132, 0, TARGET_STRING("Nacelle/Generator/Full/pu2rpm"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 133, 0, TARGET_STRING("Nacelle/Generator/Full/radps2pu"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 134, 0, TARGET_STRING("Nacelle/Generator/Full/radps2rpm"),
    TARGET_STRING("Turbine Speed (rpm)"), 0, 0, 0, 0, 1 },

  { 135, 0, TARGET_STRING("Nacelle/Generator/Full/torque_pu2Nm"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 136, 0, TARGET_STRING("Nacelle/Generator/Full/Logical Operator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 137, 0, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Fix Sign"),
    TARGET_STRING(""), 0, 0, 12, 0, 0 },

  { 138, 0, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/pu to A"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 139, 0, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/pu to MW"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 140, 0, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/pu to Mvar"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 141, 0, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/pu to V"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 142, 0, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/to pu"),
    TARGET_STRING(""), 0, 0, 12, 0, 0 },

  { 143, 0, TARGET_STRING("Turbine Input/Wind/Wind Input/FromWs"),
    TARGET_STRING(""), 0, 0, 12, 0, 0 },

  { 144, 0, TARGET_STRING(
    "Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw/Integral Gain"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 145, 0, TARGET_STRING(
    "Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 146, 0, TARGET_STRING(
    "Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw/Integrator"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 147, 0, TARGET_STRING(
    "Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw/Sum"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 148, 0, TARGET_STRING(
    "Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Integral Gain"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 149, 0, TARGET_STRING(
    "Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 150, 0, TARGET_STRING(
    "Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Integrator"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 151, 0, TARGET_STRING(
    "Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Sum"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 152, 0, TARGET_STRING(
    "powergui/EquivalentModel1/conversion/Real-Imag to Complex"),
    TARGET_STRING(""), 0, 1, 3, 0, 0 },

  { 153, 0, TARGET_STRING(
    "powergui/EquivalentModel1/conversion /Complex to Real-Imag/p1"),
    TARGET_STRING(""), 0, 0, 13, 0, 0 },

  { 154, 0, TARGET_STRING(
    "powergui/EquivalentModel1/conversion /Complex to Real-Imag/p2"),
    TARGET_STRING(""), 1, 0, 13, 0, 0 },

  { 155, 0, TARGET_STRING("Grid/Grid/Model/Seq A Generation/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 156, 0, TARGET_STRING(
    "Grid/Grid/Model/Seq A Generation/Magnitude-Angle to Complex"),
    TARGET_STRING(""), 0, 1, 1, 0, 1 },

  { 157, 0, TARGET_STRING("Grid/Grid/Model/Seq A Generation/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 158, 0, TARGET_STRING("Grid/Grid/Model/Seq A Generation/Product1"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 159, 0, TARGET_STRING("Grid/Grid/Model/Seq A Generation/Sum"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 160, 0, TARGET_STRING("Grid/Grid/Model/Seq A Generation/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 161, 0, TARGET_STRING("Grid/Grid/Model/Seq B Generation/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 162, 0, TARGET_STRING(
    "Grid/Grid/Model/Seq B Generation/Magnitude-Angle to Complex"),
    TARGET_STRING(""), 0, 1, 1, 0, 1 },

  { 163, 0, TARGET_STRING("Grid/Grid/Model/Seq B Generation/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 164, 0, TARGET_STRING("Grid/Grid/Model/Seq B Generation/Product1"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 165, 0, TARGET_STRING("Grid/Grid/Model/Seq B Generation/Sum"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 166, 0, TARGET_STRING("Grid/Grid/Model/Seq B Generation/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 167, 0, TARGET_STRING(
    "Grid/Grid/Model/Variation SubSystem/Data Type  Conversion1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 168, 0, TARGET_STRING(
    "Grid/Grid/Model/Variation SubSystem/Data Type  Conversion2"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 169, 0, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 170, 0, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Integrator"),
    TARGET_STRING("Ramp"), 0, 0, 0, 0, 0 },

  { 171, 0, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 172, 0, TARGET_STRING(
    "Grid/Grid/Model/Variation SubSystem/Logical Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 173, 0, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 174, 10, TARGET_STRING(
    "Grid/Grid/Model/Variation SubSystem/Multiport Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 175, 8, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Product"),
    TARGET_STRING("Mod"), 0, 0, 0, 0, 0 },

  { 176, 8, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 177, 9, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Product2"),
    TARGET_STRING("Step"), 0, 0, 0, 0, 0 },

  { 178, 0, TARGET_STRING(
    "Grid/Grid/Model/Variation SubSystem/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 179, 0, TARGET_STRING(
    "Grid/Grid/Model/Variation SubSystem/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 180, 0, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Step"),
    TARGET_STRING("Ton"), 0, 0, 0, 0, 0 },

  { 181, 0, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Step1"),
    TARGET_STRING("Toff"), 0, 0, 0, 0, 0 },

  { 182, 0, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 183, 0, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 184, 0, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 185, 0, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 186, 8, TARGET_STRING(
    "Grid/Grid/Model/Variation SubSystem/Trigonometric Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 187, 0, TARGET_STRING("Grid/mGrid/Model/U A:/do not delete this gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 188, 0, TARGET_STRING("Grid/mGrid/Model/U B:/do not delete this gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 189, 0, TARGET_STRING("Grid/mGrid/Model/U C:/do not delete this gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 190, 0, TARGET_STRING("Nacelle/Generator/Full/Actuator Dynamics/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 191, 0, TARGET_STRING("Nacelle/Generator/Full/Actuator Dynamics/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 192, 0, TARGET_STRING("Nacelle/Generator/Full/Actuator Dynamics/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 193, 0, TARGET_STRING("Nacelle/Generator/Full/Actuator Dynamics1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 194, 0, TARGET_STRING("Nacelle/Generator/Full/Actuator Dynamics1/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 195, 0, TARGET_STRING("Nacelle/Generator/Full/Actuator Dynamics1/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 196, 0, TARGET_STRING("Nacelle/Generator/Full/B_Gen/Kv"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 197, 0, TARGET_STRING("Nacelle/Generator/Full/B_Gen/Kv1"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 198, 17, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 199, 18, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 200, 19, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 201, 0, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 202, 20, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 203, 21, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 204, 22, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 205, 0, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 206, 0, TARGET_STRING("Nacelle/Hub Axis/Rotate/Sensing/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 207, 0, TARGET_STRING("Nacelle/Hub Axis/Rotate/Sensing/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 208, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Scaling Factor"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 209, 0, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Rev RB1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 210, 0, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Rev RB2/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 211, 0, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Rev RB3/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 212, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Derivative_Gain"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 213, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Lookup Fix"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 214, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Angle to Extension"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 215, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Sum"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 216, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Sum1"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 217, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Limit Pitch Command"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 218, 23, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 219, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Check For Park Condition"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 220, 24, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Check For Pitch Brake Condition"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 221, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/Complex to Real-Imag/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 222, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/Complex to Real-Imag/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 223, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/K"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 224, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/Math Function"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 225, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/Product2"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 226, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/Sum3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 227, 25, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 228, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 229, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Step"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 230, 25, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 231, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 232, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Transport Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 233, 26, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 234, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 235, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Step"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 236, 26, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 237, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 238, 0, TARGET_STRING(
    "Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Transport Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 239, 0, TARGET_STRING("Grid/Grid/Model/Stair Generator/Model/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 240, 0, TARGET_STRING("Grid/Grid/Model/Stair Generator/Model/Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 241, 0, TARGET_STRING("Grid/Grid/Model/Stair Generator/Model/Look-Up Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 242, 0, TARGET_STRING(
    "Nacelle/Geartrain/Ideal/Brakes/Signal to Pressure/Engagement Pressure"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 243, 0, TARGET_STRING(
    "Nacelle/Geartrain/Ideal/Brakes/Signal to Pressure/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 244, 0, TARGET_STRING(
    "Nacelle/Geartrain/Ideal/Brakes/Signal to Pressure/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 245, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Complex to Magnitude-Angle"),
    TARGET_STRING("irabc"), 0, 0, 1, 0, 0 },

  { 246, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Complex to Magnitude-Angle1"),
    TARGET_STRING("isabc"), 0, 0, 1, 0, 0 },

  { 247, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/1_Vb"),
    TARGET_STRING(""), 0, 1, 12, 0, 0 },

  { 248, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Gain"),
    TARGET_STRING(""), 0, 0, 14, 0, 0 },

  { 249, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/ib"),
    TARGET_STRING(""), 0, 1, 12, 0, 0 },

  { 250, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Product3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 251, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Product4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 252, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Sum2"),
    TARGET_STRING("s2=ws+wr"), 0, 0, 0, 0, 1 },

  { 253, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Sum4"),
    TARGET_STRING("Neg. seq. Torque"), 0, 0, 0, 0, 0 },

  { 254, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 255, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/1\\p"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 256, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/Gain"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 257, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/web_psb"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 258, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/web_psb1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 259, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/Rotor angle thetam"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 260, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Actuator Dynamics/Gain"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 261, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Actuator Dynamics/Integrator"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 262, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Actuator Dynamics/Sum"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 263, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Actuator Position to Nacelle Angle"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 264, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Actuator Speed to Nacelle Yaw Rate"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 265, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Actuator Position to Nacelle Angle"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 266, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Actuator Speed to Nacelle Yaw Rate"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 267, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Actuator Position to Nacelle Angle"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 268, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Actuator Speed to Nacelle Yaw Rate"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 269, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Actuator Position to Nacelle Angle"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 270, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Actuator Speed to Nacelle Yaw Rate"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 271, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 272, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 273, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 274, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller/Sum"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 275, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Angle of Attack if Pitch Angle Were 0/rad2deg"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 276, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Angle of Attack if Pitch Angle Were 0/radps2mps"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 277, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Angle of Attack if Pitch Angle Were 0/Trigonometric Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 278, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/radps2rpm"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 279, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 280, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 281, 14, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /W(3,4)=1-wr"),
    TARGET_STRING(""), 0, 0, 15, 0, 0 },

  { 282, 14, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /W(4,3)=wr-1"),
    TARGET_STRING(""), 0, 0, 15, 0, 0 },

  { 283, 14, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 284, 14, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /Sum"),
    TARGET_STRING("we-wr"), 0, 0, 0, 0, 0 },

  { 285, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Complex to Real-Imag/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 286, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Complex to Real-Imag/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 287, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Complex to Real-Imag3/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 288, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Complex to Real-Imag3/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 289, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/(a^2)//3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 290, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 291, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Gain1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 292, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/a//3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 293, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Sum3"),
    TARGET_STRING("V1"), 0, 1, 0, 0, 0 },

  { 294, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Sum4"),
    TARGET_STRING("V2"), 0, 1, 0, 0, 0 },

  { 295, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Product3"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 296, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Sum1"),
    TARGET_STRING("A"), 0, 0, 15, 0, 0 },

  { 297, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch"),
    TARGET_STRING("Linv"), 0, 0, 15, 0, 0 },

  { 298, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch1"),
    TARGET_STRING("R*Linv"), 0, 0, 15, 0, 0 },

  { 299, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 300, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Complex to Real-Imag/p1"),
    TARGET_STRING("Phids2"), 0, 0, 0, 0, 0 },

  { 301, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Complex to Real-Imag/p2"),
    TARGET_STRING("Phiqs2"), 1, 0, 0, 0, 0 },

  { 302, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/-pi//2  phase shift"),
    TARGET_STRING("Phi2"), 0, 1, 0, 0, 0 },

  { 303, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 304, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 305, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain3"),
    TARGET_STRING(""), 0, 0, 12, 0, 0 },

  { 306, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain4"),
    TARGET_STRING(""), 0, 0, 12, 0, 0 },

  { 307, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Integrator"),
    TARGET_STRING("Iqds2"), 0, 0, 12, 0, 0 },

  { 308, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Product1"),
    TARGET_STRING("Iqd2*R2/L2"), 0, 0, 12, 0, 0 },

  { 309, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Product2"),
    TARGET_STRING("Vqd2/L2"), 0, 0, 12, 0, 0 },

  { 310, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Product3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 311, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Real-Imag to Complex"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 312, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Real-Imag to Complex1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 313, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Sum"),
    TARGET_STRING(""), 0, 0, 12, 0, 0 },

  { 314, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Sum1"),
    TARGET_STRING("Vm2"), 0, 1, 0, 0, 0 },

  { 315, 0, TARGET_STRING(
    "Nacelle/Generator/Full/B_Gen/Model/I A:/do not delete this gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 316, 0, TARGET_STRING(
    "Nacelle/Generator/Full/B_Gen/Model/I B:/do not delete this gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 317, 0, TARGET_STRING(
    "Nacelle/Generator/Full/B_Gen/Model/I C:/do not delete this gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 318, 0, TARGET_STRING(
    "Nacelle/Generator/Full/B_Gen/Model/U A:/do not delete this gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 319, 0, TARGET_STRING(
    "Nacelle/Generator/Full/B_Gen/Model/U B:/do not delete this gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 320, 0, TARGET_STRING(
    "Nacelle/Generator/Full/B_Gen/Model/U C:/do not delete this gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 321, 17, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Data Type  Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 322, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 323, 18, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Data Type  Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 324, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 325, 19, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Data Type  Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 326, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 327, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 328, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 329, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Look-Up Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 330, 20, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Data Type  Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 331, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 332, 21, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Data Type  Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 333, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 334, 22, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Data Type  Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 335, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 336, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 337, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 338, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Look-Up Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 339, 0, TARGET_STRING(
    "Nacelle/Hub Axis/Rotate/Sensing/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 340, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 341, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 342, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 343, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 344, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 345, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 346, 0, TARGET_STRING(
    "Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 347, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/a"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 348, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/a^2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 349, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/inv"),
    TARGET_STRING("ic"), 0, 1, 0, 0, 0 },

  { 350, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/Real-Imag to Complex"),
    TARGET_STRING("I1"), 0, 1, 0, 0, 0 },

  { 351, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/Sum"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 352, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/Sum1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 353, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/Sum3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 354, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/a"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 355, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/a^2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 356, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/inv"),
    TARGET_STRING("ic"), 0, 1, 0, 0, 0 },

  { 357, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/Real-Imag to Complex"),
    TARGET_STRING("I1"), 0, 1, 0, 0, 0 },

  { 358, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/Sum"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 359, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/Sum1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 360, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/Sum3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 361, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Electromagnetic Torque/1-1"),
    TARGET_STRING("iqs -ids"), 0, 0, 12, 0, 0 },

  { 362, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Electromagnetic Torque/Mult1"),
    TARGET_STRING(""), 0, 0, 12, 0, 0 },

  { 363, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Electromagnetic Torque/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 364, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/1-D Lookup Table"),
    TARGET_STRING("Isat"), 0, 0, 0, 0, 0 },

  { 365, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Math Function"),
    TARGET_STRING("Phisat"), 0, 0, 0, 0, 0 },

  { 366, 15, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Product"),
    TARGET_STRING("Lm"), 0, 0, 0, 0, 0 },

  { 367, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Product1"),
    TARGET_STRING("R*Linv"), 0, 0, 15, 0, 0 },

  { 368, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/inversion"),
    TARGET_STRING("Linv"), 0, 0, 15, 0, 0 },

  { 369, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Switch"),
    TARGET_STRING("Lm"), 0, 0, 0, 0, 0 },

  { 370, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/wbase"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 371, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/Integrator"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 372, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/Product1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 373, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/sum1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 374, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Complex to Real-Imag/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 375, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Complex to Real-Imag/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 376, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 377, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Product2"),
    TARGET_STRING("Zr*Zm"), 0, 1, 0, 0, 1 },

  { 378, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Product3"),
    TARGET_STRING("Zr//Zm"), 0, 1, 0, 0, 1 },

  { 379, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Product4"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 380, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Sum1"),
    TARGET_STRING("Zr+Zm"), 0, 1, 0, 0, 1 },

  { 381, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Sum2"),
    TARGET_STRING("Z2"), 0, 1, 0, 0, 1 },

  { 382, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 383, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 384, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Look-Up Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 385, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 386, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 387, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Look-Up Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 388, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 389, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 390, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Look-Up Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 391, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 392, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 393, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Look-Up Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 394, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 395, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 396, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Look-Up Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 397, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 398, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 399, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Look-Up Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 400, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Actuator Dynamics/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 401, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Actuator Dynamics/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 402, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Actuator Dynamics/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 403, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Actuator Dynamics/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 404, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Actuator Dynamics/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 405, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Actuator Dynamics/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 406, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Actuator Dynamics/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 407, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Actuator Dynamics/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 408, 0, TARGET_STRING(
    "Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Actuator Dynamics/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 409, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 410, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter1/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 411, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 412, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter1/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 413, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 414, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter1/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 415, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 416, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter1/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 417, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Laq=Lad/Math Function"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 418, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Laq=Lad/Math Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 419, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Laq=Lad/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 420, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L/Lm in rows[1,3] & col[1,3]"),
    TARGET_STRING(""), 0, 0, 15, 0, 0 },

  { 421, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L/Lm in rows[2,4] & col[2,4]"),
    TARGET_STRING(""), 0, 0, 15, 0, 0 },

  { 422, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L/Sum2"),
    TARGET_STRING(""), 0, 0, 15, 0, 0 },

  { 423, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant/1//T (T= 1e-6s)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 424, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 425, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 426, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/Product"),
    TARGET_STRING(""), 0, 0, 12, 0, 0 },

  { 427, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/Product1"),
    TARGET_STRING(""), 0, 0, 12, 0, 0 },

  { 428, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/Product2"),
    TARGET_STRING(""), 0, 0, 12, 0, 0 },

  { 429, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/Sum1"),
    TARGET_STRING("phimd"), 0, 0, 0, 0, 0 },

  { 430, 16, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/Sum2"),
    TARGET_STRING("phimq"), 0, 0, 0, 0, 0 },

  { 431, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Zr/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 432, 0, TARGET_STRING(
    "Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Zr/Sum2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 433, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 434, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 435, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 436, 0, TARGET_STRING(
    "Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 437, TARGET_STRING("Pitch Power On"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 438, TARGET_STRING("Pitch Power On"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 439, TARGET_STRING("Pitch Power On"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 440, TARGET_STRING("Grid/Grid"),
    TARGET_STRING("VariationEntity"), 0, 0, 0 },

  { 441, TARGET_STRING("Grid/Grid"),
    TARGET_STRING("HarmonicGeneration"), 0, 0, 0 },

  { 442, TARGET_STRING("Blade Load/Lift and Drag/Lag Pitch"),
    TARGET_STRING("x_initial"), 0, 0, 0 },

  { 443, TARGET_STRING("Blade Load/Lift and Drag/Lag Rotor Spd"),
    TARGET_STRING("x_initial"), 0, 0, 0 },

  { 444, TARGET_STRING("Blade Load/Lift and Drag/Point of Application"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 445, TARGET_STRING("Grid/mGrid/Kv"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 446, TARGET_STRING("Grid/mGrid/Kv1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 447, TARGET_STRING("Scopes/Generator Scopes/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 448, TARGET_STRING("Scopes/Generator Scopes/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 449, TARGET_STRING("Yaw Controller/Yaw Controller/Limit Servomotor Torque Cmd"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 450, TARGET_STRING("Yaw Controller/Yaw Controller/Limit Servomotor Torque Cmd"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 451, TARGET_STRING("powergui/EquivalentModel1/State-Space"),
    TARGET_STRING("P1"), 0, 16, 0 },

  { 452, TARGET_STRING("powergui/EquivalentModel1/State-Space"),
    TARGET_STRING("P2"), 0, 16, 0 },

  { 453, TARGET_STRING("powergui/EquivalentModel1/State-Space"),
    TARGET_STRING("P3"), 0, 17, 0 },

  { 454, TARGET_STRING("powergui/EquivalentModel1/State-Space"),
    TARGET_STRING("P4"), 0, 18, 0 },

  { 455, TARGET_STRING("Blade Load/Lift and Drag/Apply Moments/Pitch Moment"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 456, TARGET_STRING("Blade Load/Lift and Drag/Apply Moments/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 457, TARGET_STRING("Blade Load/Lift and Drag/Calculate Lift and Drag Forces/f2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 458, TARGET_STRING("Blade Load/Lift and Drag/Obtain Lift and Drag Constants/f1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 459, TARGET_STRING("Blade Load/Lift and Drag/Resolve Moments/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 460, TARGET_STRING("Grid/Grid/Model/Seq A Generation"),
    TARGET_STRING("Mag_Harmo"), 0, 0, 0 },

  { 461, TARGET_STRING("Grid/Grid/Model/Seq A Generation"),
    TARGET_STRING("Phase_Harmo"), 0, 0, 0 },

  { 462, TARGET_STRING("Grid/Grid/Model/Seq A Generation"),
    TARGET_STRING("Seq_Harmo"), 0, 0, 0 },

  { 463, TARGET_STRING("Grid/Grid/Model/Seq B Generation"),
    TARGET_STRING("Mag_Harmo"), 0, 0, 0 },

  { 464, TARGET_STRING("Grid/Grid/Model/Seq B Generation"),
    TARGET_STRING("Phase_Harmo"), 0, 0, 0 },

  { 465, TARGET_STRING("Grid/Grid/Model/Seq B Generation"),
    TARGET_STRING("Seq_Harmo"), 0, 0, 0 },

  { 466, TARGET_STRING("Grid/Grid/Model/Variation SubSystem"),
    TARGET_STRING("VariationStep"), 0, 0, 0 },

  { 467, TARGET_STRING("Grid/Grid/Model/Variation SubSystem"),
    TARGET_STRING("VariationRate"), 0, 0, 0 },

  { 468, TARGET_STRING("Grid/Grid/Model/Variation SubSystem"),
    TARGET_STRING("VariationFreq"), 0, 0, 0 },

  { 469, TARGET_STRING("Grid/Grid/Model/Variation SubSystem"),
    TARGET_STRING("VariationMag"), 0, 0, 0 },

  { 470, TARGET_STRING("Grid/Grid/Model/Variation SubSystem"),
    TARGET_STRING("Ton_Variation"), 0, 0, 0 },

  { 471, TARGET_STRING("Grid/Grid/Model/Variation SubSystem"),
    TARGET_STRING("Toff_Variation"), 0, 0, 0 },

  { 472, TARGET_STRING("Grid/Grid/Model/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 473, TARGET_STRING("Grid/Grid/Model/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 474, TARGET_STRING("Grid/Grid/Model/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 475, TARGET_STRING("Grid/Grid/Model/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 476, TARGET_STRING("Grid/Grid/Model/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 477, TARGET_STRING("Grid/Grid/Model/P1"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 478, TARGET_STRING("Grid/Grid/Model/SinglePhase"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 479, TARGET_STRING("Grid/Grid/Model/valp_nom"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 480, TARGET_STRING("Grid/Grid/Model/valp_nom2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 481, TARGET_STRING("Grid/Grid/Model/valp_nom5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 482, TARGET_STRING("Grid/Grid/Model/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 483, TARGET_STRING("Grid/Grid/Model/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 484, TARGET_STRING("Grid/Grid/Model/Step"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 485, TARGET_STRING("Grid/Grid/Model/Step"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 486, TARGET_STRING("Grid/Grid/Model/Step"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 487, TARGET_STRING("Grid/Grid/Model/Step1"),
    TARGET_STRING("Time"), 0, 0, 0 },

  { 488, TARGET_STRING("Grid/Grid/Model/Step1"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 489, TARGET_STRING("Grid/Grid/Model/Step1"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 490, TARGET_STRING("Grid/Grid/Model/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 491, TARGET_STRING("Nacelle/Generator/Full/Actuator Dynamics"),
    TARGET_STRING("x_initial"), 0, 0, 0 },

  { 492, TARGET_STRING("Nacelle/Generator/Full/Actuator Dynamics1"),
    TARGET_STRING("x_initial"), 0, 0, 0 },

  { 493, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1"),
    TARGET_STRING("SwitchA"), 0, 0, 0 },

  { 494, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1"),
    TARGET_STRING("SwitchB"), 0, 0, 0 },

  { 495, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1"),
    TARGET_STRING("SwitchC"), 0, 0, 0 },

  { 496, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2"),
    TARGET_STRING("SwitchA"), 0, 0, 0 },

  { 497, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2"),
    TARGET_STRING("SwitchB"), 0, 0, 0 },

  { 498, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2"),
    TARGET_STRING("SwitchC"), 0, 0, 0 },

  { 499, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 500, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Fix Sign"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 501, TARGET_STRING("Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 502, TARGET_STRING("Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 503, TARGET_STRING("Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Integrator"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 504, TARGET_STRING("Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Integrator"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 505, TARGET_STRING("powergui/EquivalentModel1/Sources/SwitchCurrents"),
    TARGET_STRING("Value"), 1, 17, 0 },

  { 506, TARGET_STRING("Grid/Grid/Model/Seq A Generation/Negative-sequence"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 507, TARGET_STRING("Grid/Grid/Model/Seq A Generation/Positive-sequence"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 508, TARGET_STRING("Grid/Grid/Model/Seq A Generation/Zero-sequence"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 509, TARGET_STRING("Grid/Grid/Model/Seq A Generation/valp_nom2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 510, TARGET_STRING("Grid/Grid/Model/Seq A Generation/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 511, TARGET_STRING("Grid/Grid/Model/Seq B Generation/Negative-sequence"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 512, TARGET_STRING("Grid/Grid/Model/Seq B Generation/Positive-sequence"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 513, TARGET_STRING("Grid/Grid/Model/Seq B Generation/Zero-sequence"),
    TARGET_STRING("Value"), 0, 19, 0 },

  { 514, TARGET_STRING("Grid/Grid/Model/Seq B Generation/valp_nom2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 515, TARGET_STRING("Grid/Grid/Model/Seq B Generation/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 516, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 517, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 518, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 519, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 520, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 521, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 522, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 523, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 524, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Memory"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 525, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Step"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 526, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Step"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 527, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Step1"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 528, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Step1"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 529, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 530, TARGET_STRING("Grid/Grid/Model/Variation SubSystem/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 531, TARGET_STRING("Grid/mGrid/Model/U A:/do not delete this gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 532, TARGET_STRING("Grid/mGrid/Model/U B:/do not delete this gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 533, TARGET_STRING("Grid/mGrid/Model/U C:/do not delete this gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 534, TARGET_STRING("Nacelle/Generator/Full/B_Gen/Kv"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 535, TARGET_STRING("Nacelle/Generator/Full/B_Gen/Kv1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 536, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/C4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 537, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 538, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 539, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 540, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 541, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 542, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/C4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 543, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 544, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 545, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 546, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 547, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 548, TARGET_STRING("Nacelle/Hub Axis/Rotate/Sensing/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 549, TARGET_STRING("Nacelle/Hub Axis/Rotate/Sensing/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 550, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Rev RB1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 551, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Rev RB2/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 552, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Rev RB3/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 553, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Actuator Dynamics"),
    TARGET_STRING("x_initial"), 0, 0, 0 },

  { 554, TARGET_STRING("Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Lookup Fix"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 555, TARGET_STRING("Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Angle to Extension"),
    TARGET_STRING("InputValues"), 0, 20, 0 },

  { 556, TARGET_STRING("Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Limit Pitch Command"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 557, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/K"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 558, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 559, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Step"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 560, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Step"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 561, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 562, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Transport Delay"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 563, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 564, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Step"),
    TARGET_STRING("Before"), 0, 0, 0 },

  { 565, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Step"),
    TARGET_STRING("After"), 0, 0, 0 },

  { 566, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 567, TARGET_STRING("Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Transport Delay"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 568, TARGET_STRING("Grid/Grid/Model/Stair Generator/Model/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 569, TARGET_STRING("Grid/Grid/Model/Stair Generator/Model/Look-Up Table"),
    TARGET_STRING("InputValues"), 0, 21, 0 },

  { 570, TARGET_STRING("Grid/Grid/Model/Stair Generator/Model/Look-Up Table"),
    TARGET_STRING("Table"), 0, 21, 0 },

  { 571, TARGET_STRING("Nacelle/Geartrain/Ideal/Brakes/Signal to Pressure/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 572, TARGET_STRING("Nacelle/Geartrain/Ideal/Brakes/Signal to Pressure/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 573, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Vqdr1"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 574, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Vqdr3"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 575, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/ws2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 576, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/1_Vb"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 577, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Gain"),
    TARGET_STRING("Gain"), 0, 14, 0 },

  { 578, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/ib"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 579, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/1\\p"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 580, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/Gain"),
    TARGET_STRING("Gain"), 0, 1, 0 },

  { 581, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/web_psb"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 582, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/web_psb1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 583, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/Rotor angle thetam"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 584, TARGET_STRING("Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 585, TARGET_STRING("Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Angle of Attack if Pitch Angle Were 0/rad2deg"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 586, TARGET_STRING("Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 587, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /u3"),
    TARGET_STRING("Value"), 0, 15, 0 },

  { 588, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /we"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 589, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 590, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/(a^2)//3"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 591, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 592, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 593, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/a//3"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 594, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 595, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 596, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant2"),
    TARGET_STRING("Value"), 0, 15, 0 },

  { 597, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 598, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant4"),
    TARGET_STRING("Value"), 0, 15, 0 },

  { 599, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 600, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Lm_nosat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 601, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 602, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 603, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 604, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/-pi//2  phase shift"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 605, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 606, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 607, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain3"),
    TARGET_STRING("Gain"), 0, 22, 0 },

  { 608, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 609, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 22, 0 },

  { 610, TARGET_STRING("Nacelle/Generator/Full/B_Gen/Model/I A:/do not delete this gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 611, TARGET_STRING("Nacelle/Generator/Full/B_Gen/Model/I B:/do not delete this gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 612, TARGET_STRING("Nacelle/Generator/Full/B_Gen/Model/I C:/do not delete this gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 613, TARGET_STRING("Nacelle/Generator/Full/B_Gen/Model/U A:/do not delete this gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 614, TARGET_STRING("Nacelle/Generator/Full/B_Gen/Model/U B:/do not delete this gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 615, TARGET_STRING("Nacelle/Generator/Full/B_Gen/Model/U C:/do not delete this gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 616, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/C4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 617, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 618, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/C4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 619, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 620, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/C4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 621, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 622, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 623, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Look-Up Table"),
    TARGET_STRING("InputValues"), 0, 23, 0 },

  { 624, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Look-Up Table"),
    TARGET_STRING("Table"), 0, 23, 0 },

  { 625, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/C4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 626, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 627, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/C4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 628, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 629, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/C4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 630, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 631, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 632, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Look-Up Table"),
    TARGET_STRING("InputValues"), 0, 23, 0 },

  { 633, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Look-Up Table"),
    TARGET_STRING("Table"), 0, 23, 0 },

  { 634, TARGET_STRING("Nacelle/Hub Axis/Rotate/Sensing/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 635, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Actuator Dynamics"),
    TARGET_STRING("x_initial"), 0, 0, 0 },

  { 636, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Emergeny Brake Pitch  Close Valve"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 637, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 638, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Actuator Dynamics"),
    TARGET_STRING("x_initial"), 0, 0, 0 },

  { 639, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Emergeny Brake Pitch  Close Valve"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 640, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 641, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Actuator Dynamics"),
    TARGET_STRING("x_initial"), 0, 0, 0 },

  { 642, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Emergeny Brake Pitch  Close Valve"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 643, TARGET_STRING("Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 644, TARGET_STRING("Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 645, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/a"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 646, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/a^2"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 647, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/inv"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 648, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/a"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 649, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/a^2"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 650, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/inv"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 651, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Electromagnetic Torque/1-1"),
    TARGET_STRING("Gain"), 0, 22, 0 },

  { 652, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 653, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/u1"),
    TARGET_STRING("Value"), 0, 15, 0 },

  { 654, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 22, 0 },

  { 655, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 22, 0 },

  { 656, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/wbase"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 657, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 2, 0 },

  { 658, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Constant4"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 659, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Constant5"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 660, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 661, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Look-Up Table"),
    TARGET_STRING("InputValues"), 0, 18, 0 },

  { 662, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Look-Up Table"),
    TARGET_STRING("Table"), 0, 18, 0 },

  { 663, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 664, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Look-Up Table"),
    TARGET_STRING("InputValues"), 0, 18, 0 },

  { 665, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Look-Up Table"),
    TARGET_STRING("Table"), 0, 18, 0 },

  { 666, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 667, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Look-Up Table"),
    TARGET_STRING("InputValues"), 0, 18, 0 },

  { 668, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Look-Up Table"),
    TARGET_STRING("Table"), 0, 18, 0 },

  { 669, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 670, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Look-Up Table"),
    TARGET_STRING("InputValues"), 0, 18, 0 },

  { 671, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Look-Up Table"),
    TARGET_STRING("Table"), 0, 18, 0 },

  { 672, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 673, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Look-Up Table"),
    TARGET_STRING("InputValues"), 0, 18, 0 },

  { 674, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Look-Up Table"),
    TARGET_STRING("Table"), 0, 18, 0 },

  { 675, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 676, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Look-Up Table"),
    TARGET_STRING("InputValues"), 0, 18, 0 },

  { 677, TARGET_STRING("Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Look-Up Table"),
    TARGET_STRING("Table"), 0, 18, 0 },

  { 678, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 679, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter1/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 680, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 681, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter1/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 682, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 683, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter1/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 684, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 685, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter1/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 686, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Laq=Lad/u2"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 687, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L/u1"),
    TARGET_STRING("Value"), 0, 15, 0 },

  { 688, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L/u5"),
    TARGET_STRING("Value"), 0, 15, 0 },

  { 689, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant/1//T (T= 1e-6s)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 690, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 691, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/u1"),
    TARGET_STRING("Value"), 0, 22, 0 },

  { 692, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Zr/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 693, TARGET_STRING("Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Zr/Constant4"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 694, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 695, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 696, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 697, TARGET_STRING("Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 698, TARGET_STRING("WT_Params"), 48, 0, 0 },

  { 699, TARGET_STRING("Actuator_Lookup"), 49, 0, 0 },

  { 700, TARGET_STRING("radps2rpm"), 0, 0, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Wind_Turbine_B.PitchPowerOn,        /* 0: Signal */
  &Wind_Turbine_B.radius,              /* 1: Signal */
  &Wind_Turbine_B.Divide,              /* 2: Signal */
  &Wind_Turbine_B.Kv_p[0].re,          /* 3: Signal */
  &Wind_Turbine_B.Kv1_p[0].re,         /* 4: Signal */
  &Wind_Turbine_B.pitch_brake,         /* 5: Signal */
  &Wind_Turbine_B.parking_brake,       /* 6: Signal */
  &Wind_Turbine_B.generator_trip,      /* 7: Signal */
  &Wind_Turbine_B.turbine_state,       /* 8: Signal */
  &Wind_Turbine_B.radpstorpm,          /* 9: Signal */
  &Wind_Turbine_B.ExtensiontoAngle[0], /* 10: Signal */
  &Wind_Turbine_B.GenSpdpu,            /* 11: Signal */
  &Wind_Turbine_B.radps2rpm_p,         /* 12: Signal */
  &Wind_Turbine_B.rpm2radps,           /* 13: Signal */
  &Wind_Turbine_B.Divide_k,            /* 14: Signal */
  &Wind_Turbine_B.Saturation_i,        /* 15: Signal */
  &Wind_Turbine_B.RATE_TRANSITION_10_1_1,/* 16: Signal */
  &Wind_Turbine_B.RATE_TRANSITION_1_1_1,/* 17: Signal */
  &Wind_Turbine_B.RATE_TRANSITION_2_1_1,/* 18: Signal */
  &Wind_Turbine_B.RATE_TRANSITION_3_1_1,/* 19: Signal */
  &Wind_Turbine_B.RATE_TRANSITION_4_1_1,/* 20: Signal */
  &Wind_Turbine_B.RATE_TRANSITION_5_1_1,/* 21: Signal */
  &Wind_Turbine_B.RATE_TRANSITION_6_1_1,/* 22: Signal */
  &Wind_Turbine_B.RATE_TRANSITION_7_1_1,/* 23: Signal */
  &Wind_Turbine_B.RATE_TRANSITION_8_1_1,/* 24: Signal */
  &Wind_Turbine_B.RATE_TRANSITION_9_1_1,/* 25: Signal */
  &Wind_Turbine_B.INPUT_10_1_1[0],     /* 26: Signal */
  &Wind_Turbine_B.INPUT_11_1_1[0],     /* 27: Signal */
  &Wind_Turbine_B.INPUT_12_1_1[0],     /* 28: Signal */
  &Wind_Turbine_B.INPUT_13_1_1[0],     /* 29: Signal */
  &Wind_Turbine_B.INPUT_14_1_1[0],     /* 30: Signal */
  &Wind_Turbine_B.INPUT_15_1_1[0],     /* 31: Signal */
  &Wind_Turbine_B.INPUT_16_1_1[0],     /* 32: Signal */
  &Wind_Turbine_B.INPUT_17_1_1[0],     /* 33: Signal */
  &Wind_Turbine_B.INPUT_18_1_1[0],     /* 34: Signal */
  &Wind_Turbine_B.INPUT_1_1_1[0],      /* 35: Signal */
  &Wind_Turbine_B.INPUT_1_2_1[0],      /* 36: Signal */
  &Wind_Turbine_B.INPUT_1_3_1[0],      /* 37: Signal */
  &Wind_Turbine_B.INPUT_2_1_1[0],      /* 38: Signal */
  &Wind_Turbine_B.INPUT_2_2_1[0],      /* 39: Signal */
  &Wind_Turbine_B.INPUT_2_3_1[0],      /* 40: Signal */
  &Wind_Turbine_B.INPUT_3_1_1[0],      /* 41: Signal */
  &Wind_Turbine_B.INPUT_3_2_1[0],      /* 42: Signal */
  &Wind_Turbine_B.INPUT_3_3_1[0],      /* 43: Signal */
  &Wind_Turbine_B.INPUT_4_1_1[0],      /* 44: Signal */
  &Wind_Turbine_B.INPUT_5_1_1[0],      /* 45: Signal */
  &Wind_Turbine_B.INPUT_6_1_1[0],      /* 46: Signal */
  &Wind_Turbine_B.INPUT_7_1_1[0],      /* 47: Signal */
  &Wind_Turbine_B.INPUT_8_1_1[0],      /* 48: Signal */
  &Wind_Turbine_B.INPUT_9_1_1[0],      /* 49: Signal */
  &Wind_Turbine_B.INTERNAL_10_1_1[0],  /* 50: Signal */
  &Wind_Turbine_B.INTERNAL_1_1_1[0],   /* 51: Signal */
  &Wind_Turbine_B.INTERNAL_2_1_1[0],   /* 52: Signal */
  &Wind_Turbine_B.INTERNAL_3_1_1[0],   /* 53: Signal */
  &Wind_Turbine_B.INTERNAL_4_1_1[0],   /* 54: Signal */
  &Wind_Turbine_B.INTERNAL_5_1_1[0],   /* 55: Signal */
  &Wind_Turbine_B.INTERNAL_6_1_1[0],   /* 56: Signal */
  &Wind_Turbine_B.INTERNAL_7_1_1[0],   /* 57: Signal */
  &Wind_Turbine_B.INTERNAL_8_1_1[0],   /* 58: Signal */
  &Wind_Turbine_B.INTERNAL_9_1_1[0],   /* 59: Signal */
  &Wind_Turbine_B.OUTPUT_1_0[0],       /* 60: Signal */
  &Wind_Turbine_B.OUTPUT_2_0[0],       /* 61: Signal */
  &Wind_Turbine_B.OUTPUT_3_0[0],       /* 62: Signal */
  &Wind_Turbine_B.OUTPUT_4_0[0],       /* 63: Signal */
  &Wind_Turbine_B.OUTPUT_5_0[0],       /* 64: Signal */
  &Wind_Turbine_B.OUTPUT_6_0[0],       /* 65: Signal */
  &Wind_Turbine_B.OUTPUT_6_1[0],       /* 66: Signal */
  &Wind_Turbine_B.STATE_1[0],          /* 67: Signal */
  &Wind_Turbine_B.STATE_2[0],          /* 68: Signal */
  &Wind_Turbine_B.STATE_3[0],          /* 69: Signal */
  &Wind_Turbine_B.STATE_4[0],          /* 70: Signal */
  &Wind_Turbine_B.STATE_5[0],          /* 71: Signal */
  &Wind_Turbine_B.STATE_6[0],          /* 72: Signal */
  &Wind_Turbine_B.DerivativeControl,   /* 73: Signal */
  &Wind_Turbine_B.LimitNacelleYawRateCmd[0],/* 74: Signal */
  &Wind_Turbine_B.TorqueCommand[0],    /* 75: Signal */
  &Wind_Turbine_B.Sum_gv[0],           /* 76: Signal */
  &Wind_Turbine_B.Sum1_g[0],           /* 77: Signal */
  &Wind_Turbine_B.Sum3_kq[0],          /* 78: Signal */
  &Wind_Turbine_B.StateSpace[0],       /* 79: Signal */
  &Wind_Turbine_B.Gain_gi,             /* 80: Signal */
  &Wind_Turbine_B.alpha,               /* 81: Signal */
  &Wind_Turbine_B.TrigonometricFunction_d,/* 82: Signal */
  &Wind_Turbine_B.QS,                  /* 83: Signal */
  &Wind_Turbine_B.MathFunction1,       /* 84: Signal */
  &Wind_Turbine_B.MathFunction2,       /* 85: Signal */
  &Wind_Turbine_B.Q,                   /* 86: Signal */
  &Wind_Turbine_B.LiftForce,           /* 87: Signal */
  &Wind_Turbine_B.DragForce,           /* 88: Signal */
  &Wind_Turbine_B.V2_c,                /* 89: Signal */
  &Wind_Turbine_B.Gain_j,              /* 90: Signal */
  &Wind_Turbine_B.Integrator_c,        /* 91: Signal */
  &Wind_Turbine_B.Sum_c,               /* 92: Signal */
  &Wind_Turbine_B.Gain_ep,             /* 93: Signal */
  &Wind_Turbine_B.Integrator_k,        /* 94: Signal */
  &Wind_Turbine_B.Sum_m,               /* 95: Signal */
  &Wind_Turbine_B.Cd,                  /* 96: Signal */
  &Wind_Turbine_B.Cl,                  /* 97: Signal */
  &Wind_Turbine_B.MathFunction_f,      /* 98: Signal */
  &Wind_Turbine_B.Gain_er,             /* 99: Signal */
  &Wind_Turbine_B.N,                   /* 100: Signal */
  &Wind_Turbine_B.L,                   /* 101: Signal */
  &Wind_Turbine_B.Liftcosalpha,        /* 102: Signal */
  &Wind_Turbine_B.Dragsinalpha,        /* 103: Signal */
  &Wind_Turbine_B.Liftsinalpha,        /* 104: Signal */
  &Wind_Turbine_B.Dragcosalpha,        /* 105: Signal */
  &Wind_Turbine_B.X,                   /* 106: Signal */
  &Wind_Turbine_B.Z,                   /* 107: Signal */
  &Wind_Turbine_B.TrigonometricFunction1,/* 108: Signal */
  &Wind_Turbine_B.TrigonometricFunction2,/* 109: Signal */
  &Wind_Turbine_B.DataTypeConversion,  /* 110: Signal */
  &Wind_Turbine_B.DataTypeConversion1_m,/* 111: Signal */
  &Wind_Turbine_B.DataTypeConversion2_k,/* 112: Signal */
  &Wind_Turbine_B.Gain3,               /* 113: Signal */
  &Wind_Turbine_B.Gain4_b,             /* 114: Signal */
  &Wind_Turbine_B.LogicalOperator_g,   /* 115: Signal */
  &Wind_Turbine_B.LogicalOperator1_j,  /* 116: Signal */
  &Wind_Turbine_B.MagnitudeAngletoComplex[0].re,/* 117: Signal */
  &Wind_Turbine_B.Amplitude,           /* 118: Signal */
  &Wind_Turbine_B.Phase,               /* 119: Signal */
  &Wind_Turbine_B.RelationalOperator3, /* 120: Signal */
  &Wind_Turbine_B.Ton_h,               /* 121: Signal */
  &Wind_Turbine_B.Toff_e,              /* 122: Signal */
  &Wind_Turbine_B.Sum2_i[0],           /* 123: Signal */
  &Wind_Turbine_B.Sum3_b,              /* 124: Signal */
  &Wind_Turbine_B.Sum4,                /* 125: Signal */
  &Wind_Turbine_B.Sum5[0].re,          /* 126: Signal */
  &Wind_Turbine_B.Switch1,             /* 127: Signal */
  &Wind_Turbine_B.Switch2_o,           /* 128: Signal */
  &Wind_Turbine_B.Switch3_e,           /* 129: Signal */
  &Wind_Turbine_B.Switch5[0],          /* 130: Signal */
  &Wind_Turbine_B.Magnitude[0],        /* 131: Signal */
  &Wind_Turbine_B.pu2rpm,              /* 132: Signal */
  &Wind_Turbine_B.radps2pu,            /* 133: Signal */
  &Wind_Turbine_B.TurbineSpeedrpm,     /* 134: Signal */
  &Wind_Turbine_B.torque_pu2Nm,        /* 135: Signal */
  &Wind_Turbine_B.LogicalOperator1,    /* 136: Signal */
  &Wind_Turbine_B.FixSign[0],          /* 137: Signal */
  &Wind_Turbine_B.putoA[0].re,         /* 138: Signal */
  &Wind_Turbine_B.putoMW,              /* 139: Signal */
  &Wind_Turbine_B.putoMvar,            /* 140: Signal */
  &Wind_Turbine_B.putoV[0].re,         /* 141: Signal */
  &Wind_Turbine_B.topu[0],             /* 142: Signal */
  &Wind_Turbine_B.FromWs[0],           /* 143: Signal */
  &Wind_Turbine_B.IntegralGain_l[0],   /* 144: Signal */
  &Wind_Turbine_B.ProportionalGain_e[0],/* 145: Signal */
  &Wind_Turbine_B.Integrator_iv[0],    /* 146: Signal */
  &Wind_Turbine_B.Sum_ko[0],           /* 147: Signal */
  &Wind_Turbine_B.IntegralGain_o[0],   /* 148: Signal */
  &Wind_Turbine_B.ProportionalGain_e2[0],/* 149: Signal */
  &Wind_Turbine_B.Integrator_b[0],     /* 150: Signal */
  &Wind_Turbine_B.Sum_eb[0],           /* 151: Signal */
  &Wind_Turbine_B.RealImagtoComplex[0].re,/* 152: Signal */
  &Wind_Turbine_B.ComplextoRealImag_o1[0],/* 153: Signal */
  &Wind_Turbine_B.ComplextoRealImag_o2[0],/* 154: Signal */
  &Wind_Turbine_B.Gain3_j,             /* 155: Signal */
  &Wind_Turbine_B.MagnitudeAngletoComplex_g[0].re,/* 156: Signal */
  &Wind_Turbine_B.MultiportSwitch[0],  /* 157: Signal */
  &Wind_Turbine_B.Product1[0].re,      /* 158: Signal */
  &Wind_Turbine_B.Sum_e[0],            /* 159: Signal */
  &Wind_Turbine_B.Sum1_d,              /* 160: Signal */
  &Wind_Turbine_B.Gain3_l,             /* 161: Signal */
  &Wind_Turbine_B.MagnitudeAngletoComplex_a[0].re,/* 162: Signal */
  &Wind_Turbine_B.MultiportSwitch_j[0],/* 163: Signal */
  &Wind_Turbine_B.Product1_g[0].re,    /* 164: Signal */
  &Wind_Turbine_B.Sum_j[0],            /* 165: Signal */
  &Wind_Turbine_B.Sum1_i,              /* 166: Signal */
  &Wind_Turbine_B.DataTypeConversion1, /* 167: Signal */
  &Wind_Turbine_B.DataTypeConversion2, /* 168: Signal */
  &Wind_Turbine_B.Gain1_h,             /* 169: Signal */
  &Wind_Turbine_B.Ramp,                /* 170: Signal */
  &Wind_Turbine_B.LogicalOperator,     /* 171: Signal */
  &Wind_Turbine_B.LogicalOperator1_d,  /* 172: Signal */
  &Wind_Turbine_B.Memory,              /* 173: Signal */
  &Wind_Turbine_B.MultiportSwitch1,    /* 174: Signal */
  &Wind_Turbine_B.Mod,                 /* 175: Signal */
  &Wind_Turbine_B.Product1_b,          /* 176: Signal */
  &Wind_Turbine_B.Step_j,              /* 177: Signal */
  &Wind_Turbine_B.RelationalOperator,  /* 178: Signal */
  &Wind_Turbine_B.RelationalOperator1, /* 179: Signal */
  &Wind_Turbine_B.Ton,                 /* 180: Signal */
  &Wind_Turbine_B.Toff,                /* 181: Signal */
  &Wind_Turbine_B.Switch_o,            /* 182: Signal */
  &Wind_Turbine_B.Switch1_d,           /* 183: Signal */
  &Wind_Turbine_B.Switch2,             /* 184: Signal */
  &Wind_Turbine_B.Switch3,             /* 185: Signal */
  &Wind_Turbine_B.TrigonometricFunction1_j,/* 186: Signal */
  &Wind_Turbine_B.donotdeletethisgain_h.re,/* 187: Signal */
  &Wind_Turbine_B.donotdeletethisgain_a.re,/* 188: Signal */
  &Wind_Turbine_B.donotdeletethisgain_k.re,/* 189: Signal */
  &Wind_Turbine_B.Gain_l,              /* 190: Signal */
  &Wind_Turbine_B.Integrator_n,        /* 191: Signal */
  &Wind_Turbine_B.Sum_d,               /* 192: Signal */
  &Wind_Turbine_B.Gain_e,              /* 193: Signal */
  &Wind_Turbine_B.Integrator_f,        /* 194: Signal */
  &Wind_Turbine_B.Sum_n,               /* 195: Signal */
  &Wind_Turbine_B.Kv[0].re,            /* 196: Signal */
  &Wind_Turbine_B.Kv1[0].re,           /* 197: Signal */
  &Wind_Turbine_B.Switch_j,            /* 198: Signal */
  &Wind_Turbine_B.Switch1_b,           /* 199: Signal */
  &Wind_Turbine_B.Switch2_ax,          /* 200: Signal */
  &Wind_Turbine_B.Switch3_p,           /* 201: Signal */
  &Wind_Turbine_B.Switch_i,            /* 202: Signal */
  &Wind_Turbine_B.Switch1_g,           /* 203: Signal */
  &Wind_Turbine_B.Switch2_g,           /* 204: Signal */
  &Wind_Turbine_B.Switch3_f,           /* 205: Signal */
  &Wind_Turbine_B.Gain_ax,             /* 206: Signal */
  &Wind_Turbine_B.Gain1_c,             /* 207: Signal */
  &Wind_Turbine_B.ScalingFactor[0],    /* 208: Signal */
  &Wind_Turbine_B.Gain_ag,             /* 209: Signal */
  &Wind_Turbine_B.Gain_jy,             /* 210: Signal */
  &Wind_Turbine_B.Gain_i,              /* 211: Signal */
  &Wind_Turbine_B.Derivative_Gain[0],  /* 212: Signal */
  &Wind_Turbine_B.LookupFix,           /* 213: Signal */
  &Wind_Turbine_B.AngletoExtension,    /* 214: Signal */
  &Wind_Turbine_B.Sum_l[0],            /* 215: Signal */
  &Wind_Turbine_B.Sum1_k[0],           /* 216: Signal */
  &Wind_Turbine_B.LimitPitchCommand,   /* 217: Signal */
  &Wind_Turbine_B.Sum_jc,              /* 218: Signal */
  &Wind_Turbine_B.CheckForParkCondition,/* 219: Signal */
  &Wind_Turbine_B.CheckForPitchBrakeCondition,/* 220: Signal */
  &Wind_Turbine_B.ComplextoRealImag_o1_m,/* 221: Signal */
  &Wind_Turbine_B.ComplextoRealImag_o2_g,/* 222: Signal */
  &Wind_Turbine_B.K.re,                /* 223: Signal */
  &Wind_Turbine_B.MathFunction[0].re,  /* 224: Signal */
  &Wind_Turbine_B.Product2[0].re,      /* 225: Signal */
  &Wind_Turbine_B.Sum3_k.re,           /* 226: Signal */
  &Wind_Turbine_B.Gain_k,              /* 227: Signal */
  &Wind_Turbine_B.integrator,          /* 228: Signal */
  &Wind_Turbine_B.Step,                /* 229: Signal */
  &Wind_Turbine_B.Sum_az,              /* 230: Signal */
  &Wind_Turbine_B.Switch,              /* 231: Signal */
  &Wind_Turbine_B.TransportDelay,      /* 232: Signal */
  &Wind_Turbine_B.Gain_p,              /* 233: Signal */
  &Wind_Turbine_B.integrator_h,        /* 234: Signal */
  &Wind_Turbine_B.Step_p,              /* 235: Signal */
  &Wind_Turbine_B.Sum_no,              /* 236: Signal */
  &Wind_Turbine_B.Switch_c,            /* 237: Signal */
  &Wind_Turbine_B.TransportDelay_l,    /* 238: Signal */
  &Wind_Turbine_B.Clock,               /* 239: Signal */
  &Wind_Turbine_B.Derivative,          /* 240: Signal */
  &Wind_Turbine_B.LookUpTable,         /* 241: Signal */
  &Wind_Turbine_B.EngagementPressure,  /* 242: Signal */
  &Wind_Turbine_B.Saturation_c,        /* 243: Signal */
  &Wind_Turbine_B.Sum_g,               /* 244: Signal */
  &Wind_Turbine_B.irabc[0],            /* 245: Signal */
  &Wind_Turbine_B.isabc[0],            /* 246: Signal */
  &Wind_Turbine_B.u_Vb[0].re,          /* 247: Signal */
  &Wind_Turbine_B.Gain_lj[0],          /* 248: Signal */
  &Wind_Turbine_B.ib[0].re,            /* 249: Signal */
  &Wind_Turbine_B.Product3_d,          /* 250: Signal */
  &Wind_Turbine_B.Product4_o,          /* 251: Signal */
  &Wind_Turbine_B.s2wswr,              /* 252: Signal */
  &Wind_Turbine_B.NegseqTorque,        /* 253: Signal */
  &Wind_Turbine_B.Sum5_a,              /* 254: Signal */
  &Wind_Turbine_B.up,                  /* 255: Signal */
  &Wind_Turbine_B.Gain_o[0],           /* 256: Signal */
  &Wind_Turbine_B.web_psb,             /* 257: Signal */
  &Wind_Turbine_B.web_psb1,            /* 258: Signal */
  &Wind_Turbine_B.Rotoranglethetam,    /* 259: Signal */
  &Wind_Turbine_B.Gain_lm[0],          /* 260: Signal */
  &Wind_Turbine_B.Integrator_if[0],    /* 261: Signal */
  &Wind_Turbine_B.Sum_a[0],            /* 262: Signal */
  &Wind_Turbine_B.Nacelle_Yaw_Angle,   /* 263: Signal */
  &Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_d,/* 264: Signal */
  &Wind_Turbine_B.ActuatorPositiontoNacelleAngle,/* 265: Signal */
  &Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_a,/* 266: Signal */
  &Wind_Turbine_B.ActuatorPositiontoNacelleAngl_i,/* 267: Signal */
  &Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_f,/* 268: Signal */
  &Wind_Turbine_B.ActuatorPositiontoNacelleAngl_k,/* 269: Signal */
  &Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate,/* 270: Signal */
  &Wind_Turbine_B.IntegralGain[0],     /* 271: Signal */
  &Wind_Turbine_B.ProportionalGain_b[0],/* 272: Signal */
  &Wind_Turbine_B.Integrator_l[0],     /* 273: Signal */
  &Wind_Turbine_B.Sum_e5[0],           /* 274: Signal */
  &Wind_Turbine_B.rad2deg,             /* 275: Signal */
  &Wind_Turbine_B.radps2mps,           /* 276: Signal */
  &Wind_Turbine_B.TrigonometricFunction,/* 277: Signal */
  &Wind_Turbine_B.radps2rpm,           /* 278: Signal */
  &Wind_Turbine_B.Saturation,          /* 279: Signal */
  &Wind_Turbine_B.Sum_k,               /* 280: Signal */
  &Wind_Turbine_B.W341wr[0],           /* 281: Signal */
  &Wind_Turbine_B.W43wr1[0],           /* 282: Signal */
  &Wind_Turbine_B.Gain2_o,             /* 283: Signal */
  &Wind_Turbine_B.wewr,                /* 284: Signal */
  &Wind_Turbine_B.ComplextoRealImag_o1_p,/* 285: Signal */
  &Wind_Turbine_B.ComplextoRealImag_o2_f,/* 286: Signal */
  &Wind_Turbine_B.ComplextoRealImag3_o1,/* 287: Signal */
  &Wind_Turbine_B.ComplextoRealImag3_o2,/* 288: Signal */
  &Wind_Turbine_B.a23.re,              /* 289: Signal */
  &Wind_Turbine_B.Gain.re,             /* 290: Signal */
  &Wind_Turbine_B.Gain1.re,            /* 291: Signal */
  &Wind_Turbine_B.a3.re,               /* 292: Signal */
  &Wind_Turbine_B.V1.re,               /* 293: Signal */
  &Wind_Turbine_B.V2.re,               /* 294: Signal */
  &Wind_Turbine_B.Product3_l[0],       /* 295: Signal */
  &Wind_Turbine_B.A[0],                /* 296: Signal */
  &Wind_Turbine_B.Linv[0],             /* 297: Signal */
  &Wind_Turbine_B.RLinv[0],            /* 298: Signal */
  &Wind_Turbine_B.Switch2_a,           /* 299: Signal */
  &Wind_Turbine_B.Phids2,              /* 300: Signal */
  &Wind_Turbine_B.Phiqs2,              /* 301: Signal */
  &Wind_Turbine_B.Phi2.re,             /* 302: Signal */
  &Wind_Turbine_B.Gain1_e.re,          /* 303: Signal */
  &Wind_Turbine_B.Gain2.re,            /* 304: Signal */
  &Wind_Turbine_B.Gain3_d[0],          /* 305: Signal */
  &Wind_Turbine_B.Gain4[0],            /* 306: Signal */
  &Wind_Turbine_B.Iqds2[0],            /* 307: Signal */
  &Wind_Turbine_B.Iqd2R2L2[0],         /* 308: Signal */
  &Wind_Turbine_B.Vqd2L2[0],           /* 309: Signal */
  &Wind_Turbine_B.Product3.re,         /* 310: Signal */
  &Wind_Turbine_B.RealImagtoComplex_b.re,/* 311: Signal */
  &Wind_Turbine_B.RealImagtoComplex1.re,/* 312: Signal */
  &Wind_Turbine_B.Sum_df[0],           /* 313: Signal */
  &Wind_Turbine_B.Vm2.re,              /* 314: Signal */
  &Wind_Turbine_B.donotdeletethisgain_ee.re,/* 315: Signal */
  &Wind_Turbine_B.donotdeletethisgain_g1.re,/* 316: Signal */
  &Wind_Turbine_B.donotdeletethisgain_i.re,/* 317: Signal */
  &Wind_Turbine_B.donotdeletethisgain.re,/* 318: Signal */
  &Wind_Turbine_B.donotdeletethisgain_g.re,/* 319: Signal */
  &Wind_Turbine_B.donotdeletethisgain_e.re,/* 320: Signal */
  &Wind_Turbine_B.DataTypeConversion_j,/* 321: Signal */
  &Wind_Turbine_B.Switch3_d,           /* 322: Signal */
  &Wind_Turbine_B.DataTypeConversion_b,/* 323: Signal */
  &Wind_Turbine_B.Switch3_j,           /* 324: Signal */
  &Wind_Turbine_B.DataTypeConversion_n,/* 325: Signal */
  &Wind_Turbine_B.Switch3_dw,          /* 326: Signal */
  &Wind_Turbine_B.Clock_o,             /* 327: Signal */
  &Wind_Turbine_B.Derivative_p,        /* 328: Signal */
  &Wind_Turbine_B.LookUpTable_i,       /* 329: Signal */
  &Wind_Turbine_B.DataTypeConversion_f,/* 330: Signal */
  &Wind_Turbine_B.Switch3_er,          /* 331: Signal */
  &Wind_Turbine_B.DataTypeConversion_l,/* 332: Signal */
  &Wind_Turbine_B.Switch3_a,           /* 333: Signal */
  &Wind_Turbine_B.DataTypeConversion_k,/* 334: Signal */
  &Wind_Turbine_B.Switch3_h,           /* 335: Signal */
  &Wind_Turbine_B.Clock_e,             /* 336: Signal */
  &Wind_Turbine_B.Derivative_i,        /* 337: Signal */
  &Wind_Turbine_B.LookUpTable_g,       /* 338: Signal */
  &Wind_Turbine_B.GAIN_i,              /* 339: Signal */
  &Wind_Turbine_B.Switch_h,            /* 340: Signal */
  &Wind_Turbine_B.Switch_hx,           /* 341: Signal */
  &Wind_Turbine_B.Switch_d,            /* 342: Signal */
  &Wind_Turbine_B.IntegralGain_b,      /* 343: Signal */
  &Wind_Turbine_B.ProportionalGain,    /* 344: Signal */
  &Wind_Turbine_B.Integrator_m,        /* 345: Signal */
  &Wind_Turbine_B.Sum_o,               /* 346: Signal */
  &Wind_Turbine_B.a_g.re,              /* 347: Signal */
  &Wind_Turbine_B.a2_k.re,             /* 348: Signal */
  &Wind_Turbine_B.ic.re,               /* 349: Signal */
  &Wind_Turbine_B.I1_c.re,             /* 350: Signal */
  &Wind_Turbine_B.Sum.re,              /* 351: Signal */
  &Wind_Turbine_B.Sum1_b.re,           /* 352: Signal */
  &Wind_Turbine_B.Sum3_i.re,           /* 353: Signal */
  &Wind_Turbine_B.a.re,                /* 354: Signal */
  &Wind_Turbine_B.a2.re,               /* 355: Signal */
  &Wind_Turbine_B.ic_g.re,             /* 356: Signal */
  &Wind_Turbine_B.I1.re,               /* 357: Signal */
  &Wind_Turbine_B.Sum_f.re,            /* 358: Signal */
  &Wind_Turbine_B.Sum1.re,             /* 359: Signal */
  &Wind_Turbine_B.Sum3.re,             /* 360: Signal */
  &Wind_Turbine_B.iqsids[0],           /* 361: Signal */
  &Wind_Turbine_B.Mult1[0],            /* 362: Signal */
  &Wind_Turbine_B.Sum2_a,              /* 363: Signal */
  &Wind_Turbine_B.Isat,                /* 364: Signal */
  &Wind_Turbine_B.Phisat,              /* 365: Signal */
  &Wind_Turbine_B.Lm_l,                /* 366: Signal */
  &Wind_Turbine_B.RLinv_n[0],          /* 367: Signal */
  &Wind_Turbine_B.Linv_b[0],           /* 368: Signal */
  &Wind_Turbine_B.Lm,                  /* 369: Signal */
  &Wind_Turbine_B.wbase[0],            /* 370: Signal */
  &Wind_Turbine_B.Integrator_pj[0],    /* 371: Signal */
  &Wind_Turbine_B.Product1_j[0],       /* 372: Signal */
  &Wind_Turbine_B.sum1[0],             /* 373: Signal */
  &Wind_Turbine_B.ComplextoRealImag_o1_a,/* 374: Signal */
  &Wind_Turbine_B.ComplextoRealImag_o2_d,/* 375: Signal */
  &Wind_Turbine_B.Product1_c,          /* 376: Signal */
  &Wind_Turbine_B.ZrZm_k.re,           /* 377: Signal */
  &Wind_Turbine_B.ZrZm_m.re,           /* 378: Signal */
  &Wind_Turbine_B.Product4.re,         /* 379: Signal */
  &Wind_Turbine_B.ZrZm.re,             /* 380: Signal */
  &Wind_Turbine_B.Z2.re,               /* 381: Signal */
  &Wind_Turbine_B.Clock_a,             /* 382: Signal */
  &Wind_Turbine_B.Derivative_m,        /* 383: Signal */
  &Wind_Turbine_B.LookUpTable_n,       /* 384: Signal */
  &Wind_Turbine_B.Clock_az,            /* 385: Signal */
  &Wind_Turbine_B.Derivative_o,        /* 386: Signal */
  &Wind_Turbine_B.LookUpTable_k,       /* 387: Signal */
  &Wind_Turbine_B.Clock_k,             /* 388: Signal */
  &Wind_Turbine_B.Derivative_f,        /* 389: Signal */
  &Wind_Turbine_B.LookUpTable_l,       /* 390: Signal */
  &Wind_Turbine_B.Clock_l,             /* 391: Signal */
  &Wind_Turbine_B.Derivative_pb,       /* 392: Signal */
  &Wind_Turbine_B.LookUpTable_j,       /* 393: Signal */
  &Wind_Turbine_B.Clock_f,             /* 394: Signal */
  &Wind_Turbine_B.Derivative_m5,       /* 395: Signal */
  &Wind_Turbine_B.LookUpTable_o,       /* 396: Signal */
  &Wind_Turbine_B.Clock_m,             /* 397: Signal */
  &Wind_Turbine_B.Derivative_j,        /* 398: Signal */
  &Wind_Turbine_B.LookUpTable_h,       /* 399: Signal */
  &Wind_Turbine_B.Gain_d,              /* 400: Signal */
  &Wind_Turbine_B.Integrator,          /* 401: Signal */
  &Wind_Turbine_B.Sum_gk,              /* 402: Signal */
  &Wind_Turbine_B.Gain_a,              /* 403: Signal */
  &Wind_Turbine_B.Integrator_i,        /* 404: Signal */
  &Wind_Turbine_B.Sum_g5,              /* 405: Signal */
  &Wind_Turbine_B.Gain_g,              /* 406: Signal */
  &Wind_Turbine_B.Integrator_p,        /* 407: Signal */
  &Wind_Turbine_B.Sum_p,               /* 408: Signal */
  &Wind_Turbine_B.GAIN,                /* 409: Signal */
  &Wind_Turbine_B.GAIN_ds,             /* 410: Signal */
  &Wind_Turbine_B.GAIN_d,              /* 411: Signal */
  &Wind_Turbine_B.GAIN_o,              /* 412: Signal */
  &Wind_Turbine_B.GAIN_fl,             /* 413: Signal */
  &Wind_Turbine_B.GAIN_oq,             /* 414: Signal */
  &Wind_Turbine_B.GAIN_p,              /* 415: Signal */
  &Wind_Turbine_B.GAIN_f,              /* 416: Signal */
  &Wind_Turbine_B.MathFunction_a[0],   /* 417: Signal */
  &Wind_Turbine_B.MathFunction1_m,     /* 418: Signal */
  &Wind_Turbine_B.Sum2_h,              /* 419: Signal */
  &Wind_Turbine_B.Lminrows13col13[0],  /* 420: Signal */
  &Wind_Turbine_B.Lminrows24col24[0],  /* 421: Signal */
  &Wind_Turbine_B.Sum2_b[0],           /* 422: Signal */
  &Wind_Turbine_B.uTT1e6s,             /* 423: Signal */
  &Wind_Turbine_B.Integrator_g,        /* 424: Signal */
  &Wind_Turbine_B.Add,                 /* 425: Signal */
  &Wind_Turbine_B.Product[0],          /* 426: Signal */
  &Wind_Turbine_B.Product1_p[0],       /* 427: Signal */
  &Wind_Turbine_B.Product2_p[0],       /* 428: Signal */
  &Wind_Turbine_B.phimd,               /* 429: Signal */
  &Wind_Turbine_B.phimq,               /* 430: Signal */
  &Wind_Turbine_B.Product2_g,          /* 431: Signal */
  &Wind_Turbine_B.Sum2.re,             /* 432: Signal */
  &Wind_Turbine_B.GAIN_dl,             /* 433: Signal */
  &Wind_Turbine_B.GAIN_d1,             /* 434: Signal */
  &Wind_Turbine_B.GAIN_g,              /* 435: Signal */
  &Wind_Turbine_B.GAIN_o1,             /* 436: Signal */
  &Wind_Turbine_P.PitchPowerOn_Time,   /* 437: Block Parameter */
  &Wind_Turbine_P.PitchPowerOn_Y0,     /* 438: Block Parameter */
  &Wind_Turbine_P.PitchPowerOn_YFinal, /* 439: Block Parameter */
  &Wind_Turbine_P.Grid_VariationEntity,/* 440: Mask Parameter */
  &Wind_Turbine_P.Grid_HarmonicGeneration,/* 441: Mask Parameter */
  &Wind_Turbine_P.LagPitch_x_initial,  /* 442: Mask Parameter */
  &Wind_Turbine_P.LagRotorSpd_x_initial,/* 443: Mask Parameter */
  &Wind_Turbine_P.PointofApplication_Gain,/* 444: Block Parameter */
  &Wind_Turbine_P.Kv_Gain_l,           /* 445: Block Parameter */
  &Wind_Turbine_P.Kv1_Gain_p,          /* 446: Block Parameter */
  &Wind_Turbine_P.Saturation_UpperSat_h,/* 447: Block Parameter */
  &Wind_Turbine_P.Saturation_LowerSat_mc,/* 448: Block Parameter */
  &Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS,/* 449: Block Parameter */
  &Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS,/* 450: Block Parameter */
  &Wind_Turbine_P.StateSpace_P1[0],    /* 451: Block Parameter */
  &Wind_Turbine_P.StateSpace_P2[0],    /* 452: Block Parameter */
  &Wind_Turbine_P.StateSpace_P3[0],    /* 453: Block Parameter */
  &Wind_Turbine_P.StateSpace_P4[0],    /* 454: Block Parameter */
  &Wind_Turbine_P.PitchMoment_Value,   /* 455: Block Parameter */
  &Wind_Turbine_P.Gain_Gain_f,         /* 456: Block Parameter */
  &Wind_Turbine_P.f2_Value,            /* 457: Block Parameter */
  &Wind_Turbine_P.f1_Value,            /* 458: Block Parameter */
  &Wind_Turbine_P.Gain_Gain_g,         /* 459: Block Parameter */
  &Wind_Turbine_P.SeqAGeneration_Mag_Harmo,/* 460: Mask Parameter */
  &Wind_Turbine_P.SeqAGeneration_Phase_Harmo,/* 461: Mask Parameter */
  &Wind_Turbine_P.SeqAGeneration_Seq_Harmo,/* 462: Mask Parameter */
  &Wind_Turbine_P.SeqBGeneration_Mag_Harmo,/* 463: Mask Parameter */
  &Wind_Turbine_P.SeqBGeneration_Phase_Harmo,/* 464: Mask Parameter */
  &Wind_Turbine_P.SeqBGeneration_Seq_Harmo,/* 465: Mask Parameter */
  &Wind_Turbine_P.VariationSubSystem_VariationSte,/* 466: Mask Parameter */
  &Wind_Turbine_P.VariationSubSystem_VariationRat,/* 467: Mask Parameter */
  &Wind_Turbine_P.VariationSubSystem_VariationFre,/* 468: Mask Parameter */
  &Wind_Turbine_P.VariationSubSystem_VariationMag,/* 469: Mask Parameter */
  &Wind_Turbine_P.VariationSubSystem_Ton_Variatio,/* 470: Mask Parameter */
  &Wind_Turbine_P.VariationSubSystem_Toff_Variati,/* 471: Mask Parameter */
  &Wind_Turbine_P.Constant_Value_i,    /* 472: Block Parameter */
  &Wind_Turbine_P.Constant1_Value_nt,  /* 473: Block Parameter */
  &Wind_Turbine_P.Constant2_Value_f,   /* 474: Block Parameter */
  &Wind_Turbine_P.Constant4_Value,     /* 475: Block Parameter */
  &Wind_Turbine_P.Constant6_Value,     /* 476: Block Parameter */
  &Wind_Turbine_P.P1_Value[0],         /* 477: Block Parameter */
  &Wind_Turbine_P.SinglePhase_Value,   /* 478: Block Parameter */
  &Wind_Turbine_P.valp_nom_Value,      /* 479: Block Parameter */
  &Wind_Turbine_P.valp_nom2_Value,     /* 480: Block Parameter */
  &Wind_Turbine_P.valp_nom5_Value,     /* 481: Block Parameter */
  &Wind_Turbine_P.Gain3_Gain,          /* 482: Block Parameter */
  &Wind_Turbine_P.Gain4_Gain,          /* 483: Block Parameter */
  &Wind_Turbine_P.Step_Time,           /* 484: Block Parameter */
  &Wind_Turbine_P.Step_Y0_a,           /* 485: Block Parameter */
  &Wind_Turbine_P.Step_YFinal_c,       /* 486: Block Parameter */
  &Wind_Turbine_P.Step1_Time,          /* 487: Block Parameter */
  &Wind_Turbine_P.Step1_Y0_j,          /* 488: Block Parameter */
  &Wind_Turbine_P.Step1_YFinal_d,      /* 489: Block Parameter */
  &Wind_Turbine_P.Switch5_Threshold,   /* 490: Block Parameter */
  &Wind_Turbine_P.ActuatorDynamics_x_initial_n,/* 491: Mask Parameter */
  &Wind_Turbine_P.ActuatorDynamics1_x_initial,/* 492: Mask Parameter */
  &Wind_Turbine_P.TripBreaker1_SwitchA,/* 493: Mask Parameter */
  &Wind_Turbine_P.TripBreaker1_SwitchB,/* 494: Mask Parameter */
  &Wind_Turbine_P.TripBreaker1_SwitchC,/* 495: Mask Parameter */
  &Wind_Turbine_P.TripBreaker2_SwitchA,/* 496: Mask Parameter */
  &Wind_Turbine_P.TripBreaker2_SwitchB,/* 497: Mask Parameter */
  &Wind_Turbine_P.TripBreaker2_SwitchC,/* 498: Mask Parameter */
  &Wind_Turbine_P.Constant1_Value_g,   /* 499: Block Parameter */
  &Wind_Turbine_P.FixSign_Gain,        /* 500: Block Parameter */
  &Wind_Turbine_P.Integrator_IC_di,    /* 501: Block Parameter */
  &Wind_Turbine_P.Integrator_IC_gs,    /* 502: Block Parameter */
  &Wind_Turbine_P.Integrator_UpperSat, /* 503: Block Parameter */
  &Wind_Turbine_P.Integrator_LowerSat, /* 504: Block Parameter */
  &Wind_Turbine_P.SwitchCurrents_Value[0].re,/* 505: Block Parameter */
  &Wind_Turbine_P.Negativesequence_Value[0],/* 506: Block Parameter */
  &Wind_Turbine_P.Positivesequence_Value[0],/* 507: Block Parameter */
  &Wind_Turbine_P.Zerosequence_Value[0],/* 508: Block Parameter */
  &Wind_Turbine_P.valp_nom2_Value_p,   /* 509: Block Parameter */
  &Wind_Turbine_P.Gain3_Gain_f,        /* 510: Block Parameter */
  &Wind_Turbine_P.Negativesequence_Value_l[0],/* 511: Block Parameter */
  &Wind_Turbine_P.Positivesequence_Value_d[0],/* 512: Block Parameter */
  &Wind_Turbine_P.Zerosequence_Value_d[0],/* 513: Block Parameter */
  &Wind_Turbine_P.valp_nom2_Value_a,   /* 514: Block Parameter */
  &Wind_Turbine_P.Gain3_Gain_c,        /* 515: Block Parameter */
  &Wind_Turbine_P.Constant_Value_c,    /* 516: Block Parameter */
  &Wind_Turbine_P.Constant1_Value_n,   /* 517: Block Parameter */
  &Wind_Turbine_P.Constant2_Value,     /* 518: Block Parameter */
  &Wind_Turbine_P.Constant3_Value,     /* 519: Block Parameter */
  &Wind_Turbine_P.Constant4_Value_f,   /* 520: Block Parameter */
  &Wind_Turbine_P.Constant5_Value,     /* 521: Block Parameter */
  &Wind_Turbine_P.Gain1_Gain,          /* 522: Block Parameter */
  &Wind_Turbine_P.Integrator_IC_g,     /* 523: Block Parameter */
  &Wind_Turbine_P.Memory_InitialCondition,/* 524: Block Parameter */
  &Wind_Turbine_P.Step_Y0_e,           /* 525: Block Parameter */
  &Wind_Turbine_P.Step_YFinal_g,       /* 526: Block Parameter */
  &Wind_Turbine_P.Step1_Y0,            /* 527: Block Parameter */
  &Wind_Turbine_P.Step1_YFinal,        /* 528: Block Parameter */
  &Wind_Turbine_P.Switch_Threshold_j,  /* 529: Block Parameter */
  &Wind_Turbine_P.Switch2_Threshold_d, /* 530: Block Parameter */
  &Wind_Turbine_P.donotdeletethisgain_Gain_f,/* 531: Block Parameter */
  &Wind_Turbine_P.donotdeletethisgain_Gain_n,/* 532: Block Parameter */
  &Wind_Turbine_P.donotdeletethisgain_Gain_b,/* 533: Block Parameter */
  &Wind_Turbine_P.Kv_Gain,             /* 534: Block Parameter */
  &Wind_Turbine_P.Kv1_Gain,            /* 535: Block Parameter */
  &Wind_Turbine_P.C4_Value,            /* 536: Block Parameter */
  &Wind_Turbine_P.Constant5_Value_d,   /* 537: Block Parameter */
  &Wind_Turbine_P.Switch_Threshold,    /* 538: Block Parameter */
  &Wind_Turbine_P.Switch1_Threshold,   /* 539: Block Parameter */
  &Wind_Turbine_P.Switch2_Threshold,   /* 540: Block Parameter */
  &Wind_Turbine_P.Switch3_Threshold,   /* 541: Block Parameter */
  &Wind_Turbine_P.C4_Value_i,          /* 542: Block Parameter */
  &Wind_Turbine_P.Constant5_Value_db,  /* 543: Block Parameter */
  &Wind_Turbine_P.Switch_Threshold_c,  /* 544: Block Parameter */
  &Wind_Turbine_P.Switch1_Threshold_b, /* 545: Block Parameter */
  &Wind_Turbine_P.Switch2_Threshold_m, /* 546: Block Parameter */
  &Wind_Turbine_P.Switch3_Threshold_f, /* 547: Block Parameter */
  &Wind_Turbine_P.Gain_Gain,           /* 548: Block Parameter */
  &Wind_Turbine_P.Gain1_Gain_k,        /* 549: Block Parameter */
  &Wind_Turbine_P.Gain_Gain_j,         /* 550: Block Parameter */
  &Wind_Turbine_P.Gain_Gain_n,         /* 551: Block Parameter */
  &Wind_Turbine_P.Gain_Gain_c,         /* 552: Block Parameter */
  &Wind_Turbine_P.ActuatorDynamics_x_initial_of,/* 553: Mask Parameter */
  &Wind_Turbine_P.LookupFix_Gain,      /* 554: Block Parameter */
  &Wind_Turbine_P.AngletoExtension_XData[0],/* 555: Block Parameter */
  &Wind_Turbine_P.LimitPitchCommand_UpperSat,/* 556: Block Parameter */
  &Wind_Turbine_P.K_Gain,              /* 557: Block Parameter */
  &Wind_Turbine_P.integrator_IC,       /* 558: Block Parameter */
  &Wind_Turbine_P.Step_Y0,             /* 559: Block Parameter */
  &Wind_Turbine_P.Step_YFinal,         /* 560: Block Parameter */
  &Wind_Turbine_P.Switch_Threshold_k,  /* 561: Block Parameter */
  &Wind_Turbine_P.TransportDelay_InitOutput,/* 562: Block Parameter */
  &Wind_Turbine_P.integrator_IC_j,     /* 563: Block Parameter */
  &Wind_Turbine_P.Step_Y0_g,           /* 564: Block Parameter */
  &Wind_Turbine_P.Step_YFinal_h,       /* 565: Block Parameter */
  &Wind_Turbine_P.Switch_Threshold_f,  /* 566: Block Parameter */
  &Wind_Turbine_P.TransportDelay_InitOutput_e,/* 567: Block Parameter */
  &Wind_Turbine_P.HitCrossing_Offset,  /* 568: Block Parameter */
  &Wind_Turbine_P.LookUpTable_XData[0],/* 569: Block Parameter */
  &Wind_Turbine_P.LookUpTable_YData[0],/* 570: Block Parameter */
  &Wind_Turbine_P.Saturation_UpperSat, /* 571: Block Parameter */
  &Wind_Turbine_P.Saturation_LowerSat_m,/* 572: Block Parameter */
  &Wind_Turbine_P.Vqdr1_Value[0],      /* 573: Block Parameter */
  &Wind_Turbine_P.Vqdr3_Value[0],      /* 574: Block Parameter */
  &Wind_Turbine_P.ws2_Value,           /* 575: Block Parameter */
  &Wind_Turbine_P.u_Vb_Gain,           /* 576: Block Parameter */
  &Wind_Turbine_P.Gain_Gain_d[0],      /* 577: Block Parameter */
  &Wind_Turbine_P.ib_Gain,             /* 578: Block Parameter */
  &Wind_Turbine_P.up_Gain,             /* 579: Block Parameter */
  &Wind_Turbine_P.Gain_Gain_k[0],      /* 580: Block Parameter */
  &Wind_Turbine_P.web_psb_Gain,        /* 581: Block Parameter */
  &Wind_Turbine_P.web_psb1_Gain,       /* 582: Block Parameter */
  &Wind_Turbine_P.Rotoranglethetam_IC, /* 583: Block Parameter */
  &Wind_Turbine_P.Integrator_IC_p,     /* 584: Block Parameter */
  &Wind_Turbine_P.rad2deg_Gain,        /* 585: Block Parameter */
  &Wind_Turbine_P.Saturation_LowerSat, /* 586: Block Parameter */
  &Wind_Turbine_P.u3_Value[0],         /* 587: Block Parameter */
  &Wind_Turbine_P.we_Value,            /* 588: Block Parameter */
  &Wind_Turbine_P.Gain2_Gain,          /* 589: Block Parameter */
  &Wind_Turbine_P.a23_Gain.re,         /* 590: Block Parameter */
  &Wind_Turbine_P.Gain_Gain_h,         /* 591: Block Parameter */
  &Wind_Turbine_P.Gain1_Gain_l,        /* 592: Block Parameter */
  &Wind_Turbine_P.a3_Gain.re,          /* 593: Block Parameter */
  &Wind_Turbine_P.Constant_Value,      /* 594: Block Parameter */
  &Wind_Turbine_P.Constant1_Value_h,   /* 595: Block Parameter */
  &Wind_Turbine_P.Constant2_Value_j[0],/* 596: Block Parameter */
  &Wind_Turbine_P.Constant3_Value_b,   /* 597: Block Parameter */
  &Wind_Turbine_P.Constant4_Value_b[0],/* 598: Block Parameter */
  &Wind_Turbine_P.Constant5_Value_a,   /* 599: Block Parameter */
  &Wind_Turbine_P.Lm_nosat_Value,      /* 600: Block Parameter */
  &Wind_Turbine_P.Switch_Threshold_o,  /* 601: Block Parameter */
  &Wind_Turbine_P.Switch1_Threshold_i, /* 602: Block Parameter */
  &Wind_Turbine_P.Switch2_Threshold_h, /* 603: Block Parameter */
  &Wind_Turbine_P.pi2phaseshift_Gain.re,/* 604: Block Parameter */
  &Wind_Turbine_P.Gain1_Gain_h,        /* 605: Block Parameter */
  &Wind_Turbine_P.Gain2_Gain_i,        /* 606: Block Parameter */
  &Wind_Turbine_P.Gain3_Gain_j[0],     /* 607: Block Parameter */
  &Wind_Turbine_P.Gain4_Gain_k,        /* 608: Block Parameter */
  &Wind_Turbine_P.Integrator_IC_a[0],  /* 609: Block Parameter */
  &Wind_Turbine_P.donotdeletethisgain_Gain_c,/* 610: Block Parameter */
  &Wind_Turbine_P.donotdeletethisgain_Gain_j,/* 611: Block Parameter */
  &Wind_Turbine_P.donotdeletethisgain_Gain_a,/* 612: Block Parameter */
  &Wind_Turbine_P.donotdeletethisgain_Gain,/* 613: Block Parameter */
  &Wind_Turbine_P.donotdeletethisgain_Gain_o,/* 614: Block Parameter */
  &Wind_Turbine_P.donotdeletethisgain_Gain_l,/* 615: Block Parameter */
  &Wind_Turbine_P.C4_Value_g,          /* 616: Block Parameter */
  &Wind_Turbine_P.Switch3_Threshold_n, /* 617: Block Parameter */
  &Wind_Turbine_P.C4_Value_m,          /* 618: Block Parameter */
  &Wind_Turbine_P.Switch3_Threshold_i, /* 619: Block Parameter */
  &Wind_Turbine_P.C4_Value_o,          /* 620: Block Parameter */
  &Wind_Turbine_P.Switch3_Threshold_o, /* 621: Block Parameter */
  &Wind_Turbine_P.HitCrossing_Offset_h,/* 622: Block Parameter */
  &Wind_Turbine_P.LookUpTable_XData_p[0],/* 623: Block Parameter */
  &Wind_Turbine_P.LookUpTable_YData_l[0],/* 624: Block Parameter */
  &Wind_Turbine_P.C4_Value_d,          /* 625: Block Parameter */
  &Wind_Turbine_P.Switch3_Threshold_it,/* 626: Block Parameter */
  &Wind_Turbine_P.C4_Value_ok,         /* 627: Block Parameter */
  &Wind_Turbine_P.Switch3_Threshold_h, /* 628: Block Parameter */
  &Wind_Turbine_P.C4_Value_k,          /* 629: Block Parameter */
  &Wind_Turbine_P.Switch3_Threshold_hg,/* 630: Block Parameter */
  &Wind_Turbine_P.HitCrossing_Offset_b,/* 631: Block Parameter */
  &Wind_Turbine_P.LookUpTable_XData_k1[0],/* 632: Block Parameter */
  &Wind_Turbine_P.LookUpTable_YData_ab[0],/* 633: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_n,         /* 634: Block Parameter */
  &Wind_Turbine_P.ActuatorDynamics_x_initial,/* 635: Mask Parameter */
  &Wind_Turbine_P.EmergenyBrakePitchCloseValve_Va,/* 636: Block Parameter */
  &Wind_Turbine_P.Switch_Threshold_d,  /* 637: Block Parameter */
  &Wind_Turbine_P.ActuatorDynamics_x_initial_o,/* 638: Mask Parameter */
  &Wind_Turbine_P.EmergenyBrakePitchCloseValve__h,/* 639: Block Parameter */
  &Wind_Turbine_P.Switch_Threshold_cr, /* 640: Block Parameter */
  &Wind_Turbine_P.ActuatorDynamics_x_initial_b,/* 641: Mask Parameter */
  &Wind_Turbine_P.EmergenyBrakePitchCloseValve__f,/* 642: Block Parameter */
  &Wind_Turbine_P.Switch_Threshold_k0, /* 643: Block Parameter */
  &Wind_Turbine_P.Integrator_IC_d,     /* 644: Block Parameter */
  &Wind_Turbine_P.a_Gain_o.re,         /* 645: Block Parameter */
  &Wind_Turbine_P.a2_Gain_j.re,        /* 646: Block Parameter */
  &Wind_Turbine_P.inv_Gain,            /* 647: Block Parameter */
  &Wind_Turbine_P.a_Gain.re,           /* 648: Block Parameter */
  &Wind_Turbine_P.a2_Gain.re,          /* 649: Block Parameter */
  &Wind_Turbine_P.inv_Gain_h,          /* 650: Block Parameter */
  &Wind_Turbine_P.u1_Gain[0],          /* 651: Block Parameter */
  &Wind_Turbine_P.Constant1_Value,     /* 652: Block Parameter */
  &Wind_Turbine_P.u1_Value_i[0],       /* 653: Block Parameter */
  &Wind_Turbine_P.uDLookupTable_tableData[0],/* 654: Block Parameter */
  &Wind_Turbine_P.uDLookupTable_bp01Data[0],/* 655: Block Parameter */
  &Wind_Turbine_P.wbase_Gain,          /* 656: Block Parameter */
  &Wind_Turbine_P.Integrator_IC_j[0],  /* 657: Block Parameter */
  &Wind_Turbine_P.Constant4_Value_j.re,/* 658: Block Parameter */
  &Wind_Turbine_P.Constant5_Value_j.re,/* 659: Block Parameter */
  &Wind_Turbine_P.HitCrossing_Offset_c,/* 660: Block Parameter */
  &Wind_Turbine_P.LookUpTable_XData_l[0],/* 661: Block Parameter */
  &Wind_Turbine_P.LookUpTable_YData_a[0],/* 662: Block Parameter */
  &Wind_Turbine_P.HitCrossing_Offset_d,/* 663: Block Parameter */
  &Wind_Turbine_P.LookUpTable_XData_k[0],/* 664: Block Parameter */
  &Wind_Turbine_P.LookUpTable_YData_n[0],/* 665: Block Parameter */
  &Wind_Turbine_P.HitCrossing_Offset_l,/* 666: Block Parameter */
  &Wind_Turbine_P.LookUpTable_XData_g[0],/* 667: Block Parameter */
  &Wind_Turbine_P.LookUpTable_YData_m[0],/* 668: Block Parameter */
  &Wind_Turbine_P.HitCrossing_Offset_a,/* 669: Block Parameter */
  &Wind_Turbine_P.LookUpTable_XData_pn[0],/* 670: Block Parameter */
  &Wind_Turbine_P.LookUpTable_YData_mp[0],/* 671: Block Parameter */
  &Wind_Turbine_P.HitCrossing_Offset_cd,/* 672: Block Parameter */
  &Wind_Turbine_P.LookUpTable_XData_le[0],/* 673: Block Parameter */
  &Wind_Turbine_P.LookUpTable_YData_e[0],/* 674: Block Parameter */
  &Wind_Turbine_P.HitCrossing_Offset_m,/* 675: Block Parameter */
  &Wind_Turbine_P.LookUpTable_XData_h[0],/* 676: Block Parameter */
  &Wind_Turbine_P.LookUpTable_YData_d[0],/* 677: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain,           /* 678: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_g,         /* 679: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_c,         /* 680: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_m,         /* 681: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_cz,        /* 682: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_nu,        /* 683: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_l,         /* 684: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_e,         /* 685: Block Parameter */
  &Wind_Turbine_P.u2_Value[0],         /* 686: Block Parameter */
  &Wind_Turbine_P.u1_Value_b[0],       /* 687: Block Parameter */
  &Wind_Turbine_P.u5_Value[0],         /* 688: Block Parameter */
  &Wind_Turbine_P.uTT1e6s_Gain,        /* 689: Block Parameter */
  &Wind_Turbine_P.Integrator_IC,       /* 690: Block Parameter */
  &Wind_Turbine_P.u1_Value[0],         /* 691: Block Parameter */
  &Wind_Turbine_P.Constant2_Value_l,   /* 692: Block Parameter */
  &Wind_Turbine_P.Constant4_Value_l.re,/* 693: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_ne,        /* 694: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_ey,        /* 695: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_nex,       /* 696: Block Parameter */
  &Wind_Turbine_P.GAIN_Gain_j,         /* 697: Block Parameter */
  &Wind_Turbine_P.WT_Params,           /* 698: Model Parameter */
  &Wind_Turbine_P.Actuator_Lookup,     /* 699: Model Parameter */
  &Wind_Turbine_P.radps2rpm,           /* 700: Model Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 },

  { "struct", "creal_T", 0, 0, sizeof(creal_T), SS_DOUBLE, 1, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0, 0 },

  { "struct", "struct_VSqffC9uXgYsTbCmvsqodH", 7, 1, sizeof
    (struct_VSqffC9uXgYsTbCmvsqodH), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_j4uDtLxTuVlfySlL7I37OF", 2, 8, sizeof
    (struct_j4uDtLxTuVlfySlL7I37OF), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_cJepJpl6l6WZHfwxyrGDO", 2, 10, sizeof
    (struct_cJepJpl6l6WZHfwxyrGDO), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_TYiGBWmU7WQFv4djjnOwy", 5, 12, sizeof
    (struct_TYiGBWmU7WQFv4djjnOwy), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_Di3CnZQBxWGEFFAy3tQxi", 13, 17, sizeof
    (struct_Di3CnZQBxWGEFFAy3tQxi), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_apfOIp3eiu3sjFRMWNq7jF", 4, 30, sizeof
    (struct_apfOIp3eiu3sjFRMWNq7jF), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_SVIV8u68u95QU7HYBtdrxG", 5, 34, sizeof
    (struct_SVIV8u68u95QU7HYBtdrxG), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_kskDyotS523t4kXE8GJRSG", 3, 39, sizeof
    (struct_kskDyotS523t4kXE8GJRSG), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_7Dw7EYLPof4SAxQi9inliC", 2, 42, sizeof
    (struct_7Dw7EYLPof4SAxQi9inliC), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_BEohjYjTsyr7qGdIVl9prG", 17, 44, sizeof
    (struct_BEohjYjTsyr7qGdIVl9prG), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_EwfAMnACdOmniE2EROF9tF", 7, 61, sizeof
    (struct_EwfAMnACdOmniE2EROF9tF), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_vEQifxoUfBQWJnkIUMm7VG", 3, 68, sizeof
    (struct_vEQifxoUfBQWJnkIUMm7VG), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_BccaCAC54sh1YgM3Vjr6j", 1, 71, sizeof
    (struct_BccaCAC54sh1YgM3Vjr6j), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_GphMeAxusWEaIPERrSwCqC", 9, 72, sizeof
    (struct_GphMeAxusWEaIPERrSwCqC), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_IxHLiFZ9bqHC7py6CjHCUF", 2, 81, sizeof
    (struct_IxHLiFZ9bqHC7py6CjHCUF), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_vNhlyn4U16hX6DT2LmQbID", 7, 83, sizeof
    (struct_vNhlyn4U16hX6DT2LmQbID), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_TVma8f5sh5pwgVDoSH4pdG", 6, 90, sizeof
    (struct_TVma8f5sh5pwgVDoSH4pdG), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_p3kYapSXlKN8ZkY8laKfiB", 3, 96, sizeof
    (struct_p3kYapSXlKN8ZkY8laKfiB), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_mPfRZVTEI2aavkvCZhqFlE", 7, 99, sizeof
    (struct_mPfRZVTEI2aavkvCZhqFlE), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_qqcSWHsTJPbwF9SfkQd5VB", 6, 106, sizeof
    (struct_qqcSWHsTJPbwF9SfkQd5VB), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_4b0RClW1XSwQlt5iiDBvJG", 2, 112, sizeof
    (struct_4b0RClW1XSwQlt5iiDBvJG), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_7Od5ztdL3MA9pgNqKQKaO", 1, 114, sizeof
    (struct_7Od5ztdL3MA9pgNqKQKaO), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_JhlboIaYaj8R9lEqIdikPC", 4, 115, sizeof
    (struct_JhlboIaYaj8R9lEqIdikPC), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_TF0qlVsmftkcm4fSW5nY9", 1, 119, sizeof
    (struct_TF0qlVsmftkcm4fSW5nY9), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_0JXeuUB3gt3OTCUvuJ240D", 21, 120, sizeof
    (struct_0JXeuUB3gt3OTCUvuJ240D), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_FuIiYSaPhRTyUiQkL3RNRD", 1, 141, sizeof
    (struct_FuIiYSaPhRTyUiQkL3RNRD), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_VSENtQ6fZQrBZOqoppZMdD", 1, 142, sizeof
    (struct_VSENtQ6fZQrBZOqoppZMdD), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_OjQLboKReyZeIgL3dGgREE", 2, 143, sizeof
    (struct_OjQLboKReyZeIgL3dGgREE), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_984l7ADgqaeuRBr4wfIaEB", 2, 145, sizeof
    (struct_984l7ADgqaeuRBr4wfIaEB), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_HCGqbP8tixzWKaWoF8hoFB", 3, 147, sizeof
    (struct_HCGqbP8tixzWKaWoF8hoFB), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_Bugcbf7mGNGCxM7TeKCQAC", 14, 150, sizeof
    (struct_Bugcbf7mGNGCxM7TeKCQAC), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_QlEvLM8RYCeXZuczgmMWvB", 2, 164, sizeof
    (struct_QlEvLM8RYCeXZuczgmMWvB), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_hu7Ih2xmcHcBhGiXdCXRDB", 2, 166, sizeof
    (struct_hu7Ih2xmcHcBhGiXdCXRDB), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_9w7DyzDqSSDIxgpxbWV87G", 12, 168, sizeof
    (struct_9w7DyzDqSSDIxgpxbWV87G), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_u2Fg7l6NpXDCyu5gOhTODB", 2, 180, sizeof
    (struct_u2Fg7l6NpXDCyu5gOhTODB), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_nr6CGXkijBrjApc494iFmF", 7, 182, sizeof
    (struct_nr6CGXkijBrjApc494iFmF), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_21ZBgO0VNUSR0mYKhVSREC", 1, 189, sizeof
    (struct_21ZBgO0VNUSR0mYKhVSREC), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_P2L5V6YG83XZ6MgEyLl6iE", 18, 190, sizeof
    (struct_P2L5V6YG83XZ6MgEyLl6iE), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_f1VjlOGa4YmuBgvwAAhrHF", 2, 208, sizeof
    (struct_f1VjlOGa4YmuBgvwAAhrHF), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_GdoRUZPqyeOp3ZdXMVaVoH", 4, 210, sizeof
    (struct_GdoRUZPqyeOp3ZdXMVaVoH), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_mC66eZk2N1YAuWT4t3qGSE", 1, 214, sizeof
    (struct_mC66eZk2N1YAuWT4t3qGSE), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_OvERKxa5emj52ZlerRp2AF", 8, 215, sizeof
    (struct_OvERKxa5emj52ZlerRp2AF), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_yWCqpMB2eT21MIMr1gFptC", 8, 223, sizeof
    (struct_yWCqpMB2eT21MIMr1gFptC), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_KKJLTD5WsNaCWur35lwnIF", 1, 231, sizeof
    (struct_KKJLTD5WsNaCWur35lwnIF), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_jBfPITc89BZOUITYrKwRRD", 1, 232, sizeof
    (struct_jBfPITc89BZOUITYrKwRRD), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_VxB4cZRzPu25TOKhJlNWLD", 20, 233, sizeof
    (struct_VxB4cZRzPu25TOKhJlNWLD), SS_STRUCT, 0, 0, 0 },

  { "struct", "struct_xsORZR4HqlewCZVNsuZuW", 2, 253, sizeof
    (struct_xsORZR4HqlewCZVNsuZuW), SS_STRUCT, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },

  { "angle_of_attack", rt_offsetof(struct_VSqffC9uXgYsTbCmvsqodH,
    angle_of_attack), 0, 24, 0 },

  { "coeff_lift", rt_offsetof(struct_VSqffC9uXgYsTbCmvsqodH, coeff_lift), 0, 24,
    0 },

  { "coeff_drag", rt_offsetof(struct_VSqffC9uXgYsTbCmvsqodH, coeff_drag), 0, 24,
    0 },

  { "air_density", rt_offsetof(struct_VSqffC9uXgYsTbCmvsqodH, air_density), 0,
    25, 0 },

  { "lift_factor", rt_offsetof(struct_VSqffC9uXgYsTbCmvsqodH, lift_factor), 0,
    25, 0 },

  { "drag_factor", rt_offsetof(struct_VSqffC9uXgYsTbCmvsqodH, drag_factor), 0,
    25, 0 },

  { "time_constant", rt_offsetof(struct_VSqffC9uXgYsTbCmvsqodH, time_constant),
    0, 25, 0 },

  { "Density", rt_offsetof(struct_j4uDtLxTuVlfySlL7I37OF, Density), 0, 25, 0 },

  { "SpeedOfSound", rt_offsetof(struct_j4uDtLxTuVlfySlL7I37OF, SpeedOfSound), 0,
    25, 0 },

  { "length", rt_offsetof(struct_cJepJpl6l6WZHfwxyrGDO, length), 0, 25, 0 },

  { "Profile", rt_offsetof(struct_cJepJpl6l6WZHfwxyrGDO, Profile), 0, 27, 0 },

  { "x", rt_offsetof(struct_TYiGBWmU7WQFv4djjnOwy, x), 0, 25, 0 },

  { "y", rt_offsetof(struct_TYiGBWmU7WQFv4djjnOwy, y), 0, 25, 0 },

  { "z", rt_offsetof(struct_TYiGBWmU7WQFv4djjnOwy, z), 0, 25, 0 },

  { "radius", rt_offsetof(struct_TYiGBWmU7WQFv4djjnOwy, radius), 0, 25, 0 },

  { "angle", rt_offsetof(struct_TYiGBWmU7WQFv4djjnOwy, angle), 0, 25, 0 },

  { "MaxLiftCoefficent", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi,
    MaxLiftCoefficent), 0, 25, 0 },

  { "ParasiteDragCoefficient", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi,
    ParasiteDragCoefficient), 0, 25, 0 },

  { "InducedDragFactor", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi,
    InducedDragFactor), 0, 25, 0 },

  { "MaxDragCoefficient", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi,
    MaxDragCoefficient), 0, 25, 0 },

  { "mass", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi, mass), 0, 25, 0 },

  { "inertia", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi, inertia), 0, 26, 0 },

  { "radius", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi, radius), 0, 25, 0 },

  { "Geometry", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi, Geometry), 5, 25, 0 },

  { "Pitch_Actuator_Offset", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi,
    Pitch_Actuator_Offset), 6, 25, 0 },

  { "damping", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi, damping), 0, 25, 0 },

  { "nominal_rpm", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi, nominal_rpm), 0, 25,
    0 },

  { "min_rpm", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi, min_rpm), 0, 25, 0 },

  { "max_rpm", rt_offsetof(struct_Di3CnZQBxWGEFFAy3tQxi, max_rpm), 0, 25, 0 },

  { "Re", rt_offsetof(struct_apfOIp3eiu3sjFRMWNq7jF, Re), 0, 28, 0 },

  { "AoA", rt_offsetof(struct_apfOIp3eiu3sjFRMWNq7jF, AoA), 0, 29, 0 },

  { "Cl", rt_offsetof(struct_apfOIp3eiu3sjFRMWNq7jF, Cl), 0, 29, 0 },

  { "Cd", rt_offsetof(struct_apfOIp3eiu3sjFRMWNq7jF, Cd), 0, 29, 0 },

  { "mass", rt_offsetof(struct_SVIV8u68u95QU7HYBtdrxG, mass), 0, 25, 0 },

  { "inertia", rt_offsetof(struct_SVIV8u68u95QU7HYBtdrxG, inertia), 0, 26, 0 },

  { "height", rt_offsetof(struct_SVIV8u68u95QU7HYBtdrxG, height), 0, 25, 0 },

  { "base_radius", rt_offsetof(struct_SVIV8u68u95QU7HYBtdrxG, base_radius), 0,
    25, 0 },

  { "top_radius", rt_offsetof(struct_SVIV8u68u95QU7HYBtdrxG, top_radius), 0, 25,
    0 },

  { "x", rt_offsetof(struct_kskDyotS523t4kXE8GJRSG, x), 0, 25, 0 },

  { "y", rt_offsetof(struct_kskDyotS523t4kXE8GJRSG, y), 0, 25, 0 },

  { "z", rt_offsetof(struct_kskDyotS523t4kXE8GJRSG, z), 0, 25, 0 },

  { "z", rt_offsetof(struct_7Dw7EYLPof4SAxQi9inliC, z), 0, 25, 0 },

  { "x", rt_offsetof(struct_7Dw7EYLPof4SAxQi9inliC, x), 0, 25, 0 },

  { "root_radius", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, root_radius), 0,
    25, 0 },

  { "ctr_to_leading_edge", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG,
    ctr_to_leading_edge), 11, 25, 0 },

  { "ctr_to_a1", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, ctr_to_a1), 11, 25,
    0 },

  { "ctr_to_a2", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, ctr_to_a2), 11, 25,
    0 },

  { "ctr_to_b1", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, ctr_to_b1), 11, 25,
    0 },

  { "ctr_to_b2", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, ctr_to_b2), 11, 25,
    0 },

  { "ctr_to_c1", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, ctr_to_c1), 11, 25,
    0 },

  { "ctr_to_d1", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, ctr_to_d1), 11, 25,
    0 },

  { "ctr_to_e1", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, ctr_to_e1), 11, 25,
    0 },

  { "ctr_to_trailing_edge", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG,
    ctr_to_trailing_edge), 11, 25, 0 },

  { "scaling_tip", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, scaling_tip), 0,
    25, 0 },

  { "LF_Tri", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, LF_Tri), 0, 30, 0 },

  { "UF_Tri", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, UF_Tri), 0, 31, 0 },

  { "LR_Tri", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, LR_Tri), 0, 30, 0 },

  { "UR_Tri", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG, UR_Tri), 0, 30, 0 },

  { "Lower_Leading_Edge_Cone", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG,
    Lower_Leading_Edge_Cone), 0, 30, 0 },

  { "Upper_Leading_Edge_Cone", rt_offsetof(struct_BEohjYjTsyr7qGdIVl9prG,
    Upper_Leading_Edge_Cone), 0, 30, 0 },

  { "mass", rt_offsetof(struct_EwfAMnACdOmniE2EROF9tF, mass), 0, 25, 0 },

  { "inertia", rt_offsetof(struct_EwfAMnACdOmniE2EROF9tF, inertia), 0, 26, 0 },

  { "length", rt_offsetof(struct_EwfAMnACdOmniE2EROF9tF, length), 0, 25, 0 },

  { "width", rt_offsetof(struct_EwfAMnACdOmniE2EROF9tF, width), 0, 25, 0 },

  { "damping", rt_offsetof(struct_EwfAMnACdOmniE2EROF9tF, damping), 0, 25, 0 },

  { "Actuator_Offset", rt_offsetof(struct_EwfAMnACdOmniE2EROF9tF,
    Actuator_Offset), 10, 25, 0 },

  { "Geometry", rt_offsetof(struct_EwfAMnACdOmniE2EROF9tF, Geometry), 12, 25, 0
  },

  { "first_step", rt_offsetof(struct_vEQifxoUfBQWJnkIUMm7VG, first_step), 0, 25,
    0 },

  { "planetary", rt_offsetof(struct_vEQifxoUfBQWJnkIUMm7VG, planetary), 0, 25, 0
  },

  { "second_step_primary_generator", rt_offsetof(struct_vEQifxoUfBQWJnkIUMm7VG,
    second_step_primary_generator), 0, 25, 0 },

  { "viscous_losses", rt_offsetof(struct_BccaCAC54sh1YgM3Vjr6j, viscous_losses),
    0, 32, 0 },

  { "mass", rt_offsetof(struct_GphMeAxusWEaIPERrSwCqC, mass), 0, 25, 0 },

  { "Gear_Ratio", rt_offsetof(struct_GphMeAxusWEaIPERrSwCqC, Gear_Ratio), 14, 25,
    0 },

  { "Planetary", rt_offsetof(struct_GphMeAxusWEaIPERrSwCqC, Planetary), 15, 25,
    0 },

  { "inertia_carrier_shaft", rt_offsetof(struct_GphMeAxusWEaIPERrSwCqC,
    inertia_carrier_shaft), 0, 25, 0 },

  { "inertia_sun_shaft", rt_offsetof(struct_GphMeAxusWEaIPERrSwCqC,
    inertia_sun_shaft), 0, 25, 0 },

  { "inertia_first_step_shaft", rt_offsetof(struct_GphMeAxusWEaIPERrSwCqC,
    inertia_first_step_shaft), 0, 25, 0 },

  { "Solver_Consistency_Tolerance", rt_offsetof(struct_GphMeAxusWEaIPERrSwCqC,
    Solver_Consistency_Tolerance), 0, 25, 0 },

  { "MSLD_Interface_TF_Coeff", rt_offsetof(struct_GphMeAxusWEaIPERrSwCqC,
    MSLD_Interface_TF_Coeff), 0, 25, 0 },

  { "MSLD_Interface_Filter_Coeff", rt_offsetof(struct_GphMeAxusWEaIPERrSwCqC,
    MSLD_Interface_Filter_Coeff), 0, 25, 0 },

  { "inertia", rt_offsetof(struct_IxHLiFZ9bqHC7py6CjHCUF, inertia), 0, 25, 0 },

  { "damping", rt_offsetof(struct_IxHLiFZ9bqHC7py6CjHCUF, damping), 0, 25, 0 },

  { "P_Gain", rt_offsetof(struct_vNhlyn4U16hX6DT2LmQbID, P_Gain), 0, 25, 0 },

  { "I_Gain", rt_offsetof(struct_vNhlyn4U16hX6DT2LmQbID, I_Gain), 0, 25, 0 },

  { "D_Gain", rt_offsetof(struct_vNhlyn4U16hX6DT2LmQbID, D_Gain), 0, 25, 0 },

  { "max_angle", rt_offsetof(struct_vNhlyn4U16hX6DT2LmQbID, max_angle), 0, 25, 0
  },

  { "max_lift", rt_offsetof(struct_vNhlyn4U16hX6DT2LmQbID, max_lift), 0, 25, 0 },

  { "enough_lift", rt_offsetof(struct_vNhlyn4U16hX6DT2LmQbID, enough_lift), 0,
    25, 0 },

  { "stall", rt_offsetof(struct_vNhlyn4U16hX6DT2LmQbID, stall), 0, 25, 0 },

  { "P_Gain", rt_offsetof(struct_TVma8f5sh5pwgVDoSH4pdG, P_Gain), 0, 25, 0 },

  { "I_Gain", rt_offsetof(struct_TVma8f5sh5pwgVDoSH4pdG, I_Gain), 0, 25, 0 },

  { "D_Gain", rt_offsetof(struct_TVma8f5sh5pwgVDoSH4pdG, D_Gain), 0, 25, 0 },

  { "Angle_Of_Attack", rt_offsetof(struct_TVma8f5sh5pwgVDoSH4pdG,
    Angle_Of_Attack), 18, 25, 0 },

  { "emergency_brake_pitch_angle", rt_offsetof(struct_TVma8f5sh5pwgVDoSH4pdG,
    emergency_brake_pitch_angle), 0, 25, 0 },

  { "park_pitch_angle", rt_offsetof(struct_TVma8f5sh5pwgVDoSH4pdG,
    park_pitch_angle), 0, 25, 0 },

  { "gain", rt_offsetof(struct_p3kYapSXlKN8ZkY8laKfiB, gain), 0, 25, 0 },

  { "time_constant", rt_offsetof(struct_p3kYapSXlKN8ZkY8laKfiB, time_constant),
    0, 25, 0 },

  { "saturation", rt_offsetof(struct_p3kYapSXlKN8ZkY8laKfiB, saturation), 0, 25,
    0 },

  { "max_area", rt_offsetof(struct_mPfRZVTEI2aavkvCZhqFlE, max_area), 0, 25, 0 },

  { "max_opening", rt_offsetof(struct_mPfRZVTEI2aavkvCZhqFlE, max_opening), 0,
    25, 0 },

  { "leakage_area", rt_offsetof(struct_mPfRZVTEI2aavkvCZhqFlE, leakage_area), 0,
    25, 0 },

  { "initial_opening_pa", rt_offsetof(struct_mPfRZVTEI2aavkvCZhqFlE,
    initial_opening_pa), 0, 25, 0 },

  { "initial_opening_at", rt_offsetof(struct_mPfRZVTEI2aavkvCZhqFlE,
    initial_opening_at), 0, 25, 0 },

  { "initial_opening_pb", rt_offsetof(struct_mPfRZVTEI2aavkvCZhqFlE,
    initial_opening_pb), 0, 25, 0 },

  { "initial_opening_bt", rt_offsetof(struct_mPfRZVTEI2aavkvCZhqFlE,
    initial_opening_bt), 0, 25, 0 },

  { "damping", rt_offsetof(struct_qqcSWHsTJPbwF9SfkQd5VB, damping), 0, 25, 0 },

  { "piston_area", rt_offsetof(struct_qqcSWHsTJPbwF9SfkQd5VB, piston_area), 0,
    25, 0 },

  { "stroke", rt_offsetof(struct_qqcSWHsTJPbwF9SfkQd5VB, stroke), 0, 25, 0 },

  { "initial_disp_from_a", rt_offsetof(struct_qqcSWHsTJPbwF9SfkQd5VB,
    initial_disp_from_a), 0, 25, 0 },

  { "contact_stiffness", rt_offsetof(struct_qqcSWHsTJPbwF9SfkQd5VB,
    contact_stiffness), 0, 25, 0 },

  { "contact_damping", rt_offsetof(struct_qqcSWHsTJPbwF9SfkQd5VB,
    contact_damping), 0, 25, 0 },

  { "outer_radius", rt_offsetof(struct_4b0RClW1XSwQlt5iiDBvJG, outer_radius), 0,
    25, 0 },

  { "inner_radius", rt_offsetof(struct_4b0RClW1XSwQlt5iiDBvJG, inner_radius), 0,
    25, 0 },

  { "initial_position", rt_offsetof(struct_7Od5ztdL3MA9pgNqKQKaO,
    initial_position), 0, 25, 0 },

  { "capacity", rt_offsetof(struct_JhlboIaYaj8R9lEqIdikPC, capacity), 0, 25, 0 },

  { "preload_pressure", rt_offsetof(struct_JhlboIaYaj8R9lEqIdikPC,
    preload_pressure), 0, 25, 0 },

  { "maximum_pressure", rt_offsetof(struct_JhlboIaYaj8R9lEqIdikPC,
    maximum_pressure), 0, 25, 0 },

  { "initial_volume", rt_offsetof(struct_JhlboIaYaj8R9lEqIdikPC, initial_volume),
    0, 25, 0 },

  { "max_area", rt_offsetof(struct_TF0qlVsmftkcm4fSW5nY9, max_area), 0, 25, 0 },

  { "hydraulic_actuator_scale_factor", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D,
    hydraulic_actuator_scale_factor), 0, 25, 0 },

  { "ideal_actuator_scale_factor", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D,
    ideal_actuator_scale_factor), 0, 25, 0 },

  { "hydraulic_pressure", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D,
    hydraulic_pressure), 0, 25, 0 },

  { "hydraulic_tf_coeff", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D,
    hydraulic_tf_coeff), 0, 25, 0 },

  { "Servo", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D, Servo), 20, 25, 0 },

  { "servo2valve_conversion", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D,
    servo2valve_conversion), 0, 25, 0 },

  { "Valve", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D, Valve), 21, 25, 0 },

  { "Cylinder", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D, Cylinder), 22, 25, 0
  },

  { "Geometry", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D, Geometry), 23, 25, 0
  },

  { "orifice_area", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D, orifice_area), 0,
    25, 0 },

  { "Sensor", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D, Sensor), 24, 25, 0 },

  { "Accumulator", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D, Accumulator), 25,
    25, 0 },

  { "Emergency_Pitch_Valve", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D,
    Emergency_Pitch_Valve), 26, 25, 0 },

  { "constraint_tol", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D, constraint_tol),
    0, 25, 0 },

  { "cylinder_length", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D,
    cylinder_length), 0, 25, 0 },

  { "cylinder_inertia", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D,
    cylinder_inertia), 0, 26, 0 },

  { "cylinder_mass", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D, cylinder_mass),
    0, 25, 0 },

  { "rod_inertia", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D, rod_inertia), 0,
    26, 0 },

  { "rod_mass", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D, rod_mass), 0, 25, 0 },

  { "ideal_actuator_time_constant", rt_offsetof(struct_0JXeuUB3gt3OTCUvuJ240D,
    ideal_actuator_time_constant), 0, 25, 0 },

  { "hydraulic_actuator_time_constant", rt_offsetof
    (struct_0JXeuUB3gt3OTCUvuJ240D, hydraulic_actuator_time_constant), 0, 25, 0
  },

  { "damping", rt_offsetof(struct_FuIiYSaPhRTyUiQkL3RNRD, damping), 0, 25, 0 },

  { "Rotor_Connection", rt_offsetof(struct_VSENtQ6fZQrBZOqoppZMdD,
    Rotor_Connection), 28, 25, 0 },

  { "resistance", rt_offsetof(struct_OjQLboKReyZeIgL3dGgREE, resistance), 0, 25,
    0 },

  { "inductance", rt_offsetof(struct_OjQLboKReyZeIgL3dGgREE, inductance), 0, 25,
    0 },

  { "damping", rt_offsetof(struct_984l7ADgqaeuRBr4wfIaEB, damping), 0, 25, 0 },

  { "inertia", rt_offsetof(struct_984l7ADgqaeuRBr4wfIaEB, inertia), 0, 25, 0 },

  { "ron", rt_offsetof(struct_HCGqbP8tixzWKaWoF8hoFB, ron), 0, 25, 0 },

  { "rp", rt_offsetof(struct_HCGqbP8tixzWKaWoF8hoFB, rp), 0, 25, 0 },

  { "cp", rt_offsetof(struct_HCGqbP8tixzWKaWoF8hoFB, cp), 0, 25, 0 },

  { "mass", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC, mass), 0, 25, 0 },

  { "nominal_power", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC, nominal_power),
    0, 25, 0 },

  { "voltage", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC, voltage), 0, 25, 0 },

  { "frequency", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC, frequency), 0, 25, 0
  },

  { "Stator", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC, Stator), 30, 25, 0 },

  { "Rotor", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC, Rotor), 30, 25, 0 },

  { "mutual_inductance", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC,
    mutual_inductance), 0, 25, 0 },

  { "poles", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC, poles), 0, 25, 0 },

  { "Simple", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC, Simple), 31, 25, 0 },

  { "generator_time_constant", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC,
    generator_time_constant), 0, 25, 0 },

  { "PSLD_Interface_Filter_Coeff", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC,
    PSLD_Interface_Filter_Coeff), 0, 25, 0 },

  { "Breakers", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC, Breakers), 32, 25, 0
  },

  { "radps2pu", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC, radps2pu), 0, 25, 0 },

  { "torque_pu2Nm", rt_offsetof(struct_Bugcbf7mGNGCxM7TeKCQAC, torque_pu2Nm), 0,
    25, 0 },

  { "mass", rt_offsetof(struct_QlEvLM8RYCeXZuczgmMWvB, mass), 0, 25, 0 },

  { "rated_power", rt_offsetof(struct_QlEvLM8RYCeXZuczgmMWvB, rated_power), 0,
    25, 0 },

  { "voltage", rt_offsetof(struct_hu7Ih2xmcHcBhGiXdCXRDB, voltage), 0, 25, 0 },

  { "frequency", rt_offsetof(struct_hu7Ih2xmcHcBhGiXdCXRDB, frequency), 0, 25, 0
  },

  { "stiffness", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G, stiffness), 0, 25, 0
  },

  { "damping", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G, damping), 0, 25, 0 },

  { "torque_radius", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G, torque_radius),
    0, 25, 0 },

  { "peak_normal_force", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G,
    peak_normal_force), 0, 25, 0 },

  { "engagement_threshold", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G,
    engagement_threshold), 0, 25, 0 },

  { "inertia_housing", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G,
    inertia_housing), 0, 25, 0 },

  { "piston_area", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G, piston_area), 0,
    25, 0 },

  { "threshold_pressure", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G,
    threshold_pressure), 0, 25, 0 },

  { "kinetic_friction_coeff", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G,
    kinetic_friction_coeff), 0, 25, 0 },

  { "static_friction_coeff", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G,
    static_friction_coeff), 0, 25, 0 },

  { "num_friction_surfaces", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G,
    num_friction_surfaces), 0, 25, 0 },

  { "clutch_vel_tol", rt_offsetof(struct_9w7DyzDqSSDIxgpxbWV87G, clutch_vel_tol),
    0, 25, 0 },

  { "stiffness", rt_offsetof(struct_u2Fg7l6NpXDCyu5gOhTODB, stiffness), 0, 25, 0
  },

  { "damping", rt_offsetof(struct_u2Fg7l6NpXDCyu5gOhTODB, damping), 0, 25, 0 },

  { "max_torque_vector", rt_offsetof(struct_nr6CGXkijBrjApc494iFmF,
    max_torque_vector), 0, 33, 0 },

  { "max_speed_vector", rt_offsetof(struct_nr6CGXkijBrjApc494iFmF,
    max_speed_vector), 0, 33, 0 },

  { "control_time_constant", rt_offsetof(struct_nr6CGXkijBrjApc494iFmF,
    control_time_constant), 0, 25, 0 },

  { "resistance", rt_offsetof(struct_nr6CGXkijBrjApc494iFmF, resistance), 0, 25,
    0 },

  { "damping", rt_offsetof(struct_nr6CGXkijBrjApc494iFmF, damping), 0, 25, 0 },

  { "voltage", rt_offsetof(struct_nr6CGXkijBrjApc494iFmF, voltage), 0, 25, 0 },

  { "filter_constant", rt_offsetof(struct_nr6CGXkijBrjApc494iFmF,
    filter_constant), 0, 25, 0 },

  { "scaling_factor", rt_offsetof(struct_21ZBgO0VNUSR0mYKhVSREC, scaling_factor),
    0, 25, 0 },

  { "inertia_motor_shaft", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    inertia_motor_shaft), 0, 25, 0 },

  { "inertia_carrier", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    inertia_carrier), 0, 25, 0 },

  { "p_gear_rato_step_1", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    p_gear_rato_step_1), 0, 25, 0 },

  { "p_gear_rato_step_2", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    p_gear_rato_step_2), 0, 25, 0 },

  { "p_gear_rato_step_3", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    p_gear_rato_step_3), 0, 25, 0 },

  { "p_gear_rato_step_4", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    p_gear_rato_step_4), 0, 25, 0 },

  { "yaw_gear_diameter", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    yaw_gear_diameter), 0, 25, 0 },

  { "yaw_gear_thickness", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    yaw_gear_thickness), 0, 25, 0 },

  { "Gearbox_Flexibility", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    Gearbox_Flexibility), 37, 25, 0 },

  { "damping", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE, damping), 0, 25, 0 },

  { "MSLD_Interface_TF_Coeff", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    MSLD_Interface_TF_Coeff), 0, 25, 0 },

  { "MSLD_Interface_Filter_Coeff", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    MSLD_Interface_Filter_Coeff), 0, 25, 0 },

  { "yaw_ring_diameter", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    yaw_ring_diameter), 0, 25, 0 },

  { "yaw_ring_thickness", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    yaw_ring_thickness), 0, 25, 0 },

  { "Motor", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE, Motor), 38, 25, 0 },

  { "Ideal", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE, Ideal), 39, 25, 0 },

  { "max_yaw_rate", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE, max_yaw_rate), 0,
    25, 0 },

  { "ideal_actuator_time_constant", rt_offsetof(struct_P2L5V6YG83XZ6MgEyLl6iE,
    ideal_actuator_time_constant), 0, 25, 0 },

  { "P_Gain", rt_offsetof(struct_f1VjlOGa4YmuBgvwAAhrHF, P_Gain), 0, 25, 0 },

  { "I_Gain", rt_offsetof(struct_f1VjlOGa4YmuBgvwAAhrHF, I_Gain), 0, 25, 0 },

  { "P_Gain", rt_offsetof(struct_GdoRUZPqyeOp3ZdXMVaVoH, P_Gain), 0, 25, 0 },

  { "I_Gain", rt_offsetof(struct_GdoRUZPqyeOp3ZdXMVaVoH, I_Gain), 0, 25, 0 },

  { "D_Gain", rt_offsetof(struct_GdoRUZPqyeOp3ZdXMVaVoH, D_Gain), 0, 25, 0 },

  { "Yaw_Rate", rt_offsetof(struct_GdoRUZPqyeOp3ZdXMVaVoH, Yaw_Rate), 41, 25, 0
  },

  { "profile", rt_offsetof(struct_mC66eZk2N1YAuWT4t3qGSE, profile), 0, 34, 0 },

  { "mass", rt_offsetof(struct_OvERKxa5emj52ZlerRp2AF, mass), 0, 25, 0 },

  { "inertia", rt_offsetof(struct_OvERKxa5emj52ZlerRp2AF, inertia), 0, 26, 0 },

  { "length", rt_offsetof(struct_OvERKxa5emj52ZlerRp2AF, length), 0, 25, 0 },

  { "CG_Offset", rt_offsetof(struct_OvERKxa5emj52ZlerRp2AF, CG_Offset), 10, 25,
    0 },

  { "Yaw_Ctr_Offset", rt_offsetof(struct_OvERKxa5emj52ZlerRp2AF, Yaw_Ctr_Offset),
    10, 25, 0 },

  { "damping", rt_offsetof(struct_OvERKxa5emj52ZlerRp2AF, damping), 0, 25, 0 },

  { "chamfer", rt_offsetof(struct_OvERKxa5emj52ZlerRp2AF, chamfer), 0, 25, 0 },

  { "Geometry", rt_offsetof(struct_OvERKxa5emj52ZlerRp2AF, Geometry), 43, 25, 0
  },

  { "wind_speed_cut_in_lower", rt_offsetof(struct_yWCqpMB2eT21MIMr1gFptC,
    wind_speed_cut_in_lower), 0, 25, 0 },

  { "wind_speed_cut_out", rt_offsetof(struct_yWCqpMB2eT21MIMr1gFptC,
    wind_speed_cut_out), 0, 25, 0 },

  { "wind_speed_cut_in_upper", rt_offsetof(struct_yWCqpMB2eT21MIMr1gFptC,
    wind_speed_cut_in_upper), 0, 25, 0 },

  { "wind_speed_average_period", rt_offsetof(struct_yWCqpMB2eT21MIMr1gFptC,
    wind_speed_average_period), 0, 25, 0 },

  { "turbine_speed_cut_in", rt_offsetof(struct_yWCqpMB2eT21MIMr1gFptC,
    turbine_speed_cut_in), 0, 25, 0 },

  { "turbine_speed_cut_out", rt_offsetof(struct_yWCqpMB2eT21MIMr1gFptC,
    turbine_speed_cut_out), 0, 25, 0 },

  { "turbine_speed_park", rt_offsetof(struct_yWCqpMB2eT21MIMr1gFptC,
    turbine_speed_park), 0, 25, 0 },

  { "sample_time", rt_offsetof(struct_yWCqpMB2eT21MIMr1gFptC, sample_time), 0,
    25, 0 },

  { "AL_Dynamics", rt_offsetof(struct_KKJLTD5WsNaCWur35lwnIF, AL_Dynamics), 0,
    25, 0 },

  { "Simple_Lift_And_Drag", rt_offsetof(struct_jBfPITc89BZOUITYrKwRRD,
    Simple_Lift_And_Drag), 46, 25, 0 },

  { "Lift_Drag_Coeff", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD,
    Lift_Drag_Coeff), 3, 25, 0 },

  { "Air", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Air), 4, 25, 0 },

  { "Rotor", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Rotor), 7, 25, 0 },

  { "NACA0015", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, NACA0015), 8, 25, 0 },

  { "Tower", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Tower), 9, 25, 0 },

  { "Blade", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Blade), 13, 25, 0 },

  { "Geartrain", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Geartrain), 16, 25,
    0 },

  { "Empty_Geartrain", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD,
    Empty_Geartrain), 17, 25, 0 },

  { "Pitch_Controller", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD,
    Pitch_Controller), 19, 25, 0 },

  { "Pitch_Actuator", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Pitch_Actuator),
    27, 25, 0 },

  { "Pitch_Actuation", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD,
    Pitch_Actuation), 29, 25, 0 },

  { "Generator", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Generator), 33, 25,
    0 },

  { "Transformer", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Transformer), 34,
    25, 0 },

  { "Grid", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Grid), 35, 25, 0 },

  { "Brakes", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Brakes), 36, 25, 0 },

  { "Yaw_Actuator", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Yaw_Actuator), 40,
    25, 0 },

  { "Yaw_Controller", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Yaw_Controller),
    42, 25, 0 },

  { "Nacelle", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Nacelle), 44, 25, 0 },

  { "Main_Controller", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD,
    Main_Controller), 45, 25, 0 },

  { "Environment", rt_offsetof(struct_VxB4cZRzPu25TOKhJlNWLD, Environment), 47,
    25, 0 },

  { "extension", rt_offsetof(struct_xsORZR4HqlewCZVNsuZuW, extension), 0, 35, 0
  },

  { "angle", rt_offsetof(struct_xsORZR4HqlewCZVNsuZuW, angle), 0, 35, 0 }
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 20, 2, 0 },

  { rtwCAPI_VECTOR, 22, 2, 0 },

  { rtwCAPI_VECTOR, 24, 2, 0 },

  { rtwCAPI_VECTOR, 26, 2, 0 },

  { rtwCAPI_VECTOR, 28, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 30, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 32, 2, 0 },

  { rtwCAPI_VECTOR, 34, 2, 0 },

  { rtwCAPI_VECTOR, 36, 2, 0 },

  { rtwCAPI_VECTOR, 38, 2, 0 },

  { rtwCAPI_VECTOR, 40, 2, 0 },

  { rtwCAPI_VECTOR, 42, 2, 0 },

  { rtwCAPI_VECTOR, 44, 2, 0 },

  { rtwCAPI_VECTOR, 46, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 48, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 0, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 50, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 52, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 54, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 56, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 58, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 60, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 44, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 46, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 62, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 40, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  3,                                   /* 2 */
  1,                                   /* 3 */
  4,                                   /* 4 */
  1,                                   /* 5 */
  17,                                  /* 6 */
  1,                                   /* 7 */
  7,                                   /* 8 */
  1,                                   /* 9 */
  9,                                   /* 10 */
  1,                                   /* 11 */
  18,                                  /* 12 */
  1,                                   /* 13 */
  118,                                 /* 14 */
  1,                                   /* 15 */
  48,                                  /* 16 */
  1,                                   /* 17 */
  38,                                  /* 18 */
  1,                                   /* 19 */
  28,                                  /* 20 */
  1,                                   /* 21 */
  34,                                  /* 22 */
  1,                                   /* 23 */
  2,                                   /* 24 */
  1,                                   /* 25 */
  11,                                  /* 26 */
  1,                                   /* 27 */
  19,                                  /* 28 */
  1,                                   /* 29 */
  4,                                   /* 30 */
  4,                                   /* 31 */
  17,                                  /* 32 */
  11,                                  /* 33 */
  6,                                   /* 34 */
  1,                                   /* 35 */
  1,                                   /* 36 */
  5,                                   /* 37 */
  1,                                   /* 38 */
  3,                                   /* 39 */
  88,                                  /* 40 */
  1,                                   /* 41 */
  1,                                   /* 42 */
  6,                                   /* 43 */
  1,                                   /* 44 */
  2,                                   /* 45 */
  1,                                   /* 46 */
  4,                                   /* 47 */
  1,                                   /* 48 */
  24,                                  /* 49 */
  3,                                   /* 50 */
  3,                                   /* 51 */
  52,                                  /* 52 */
  2,                                   /* 53 */
  1,                                   /* 54 */
  8,                                   /* 55 */
  116,                                 /* 56 */
  1,                                   /* 57 */
  3,                                   /* 58 */
  2,                                   /* 59 */
  4,                                   /* 60 */
  2,                                   /* 61 */
  364,                                 /* 62 */
  2                                    /* 63 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.0015
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[0],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[0],
    1, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 437,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 261,
    rtModelParameters, 3 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 286140332U,
    2720962208U,
    1181029900U,
    1775044556U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  Wind_Turbine_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void Wind_Turbine_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Wind_Turbine_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Wind_Turbine_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Wind_Turbine_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Wind_Turbine_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Wind_Turbine_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  Wind_Turbine_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (Wind_Turbine_M);
  Wind_Turbine_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_Wind_Turbine_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Wind_Turbine_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(Wind_Turbine_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(Wind_Turbine_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void Wind_Turbine_host_InitializeDataMapInfo(Wind_Turbine_host_DataMapInfo_T
    *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: Wind_Turbine_capi.c */
