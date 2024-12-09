/*
 * Wind_Turbine.c
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

#include "rt_logging_mmi.h"
#include "Wind_Turbine_capi.h"
#include "Wind_Turbine.h"
#include "Wind_Turbine_private.h"

/* Named constants for Chart: '<S51>/Turbine State Machine' */
#define Wind_Turbine_CALL_EVENT        (-1)
#define Wind_Turbine_IN_Brake          (1U)
#define Wind_Turbine_IN_Generating     (2U)
#define Wind_Turbine_IN_Park           (3U)
#define Wind_Turbine_IN_Startup        (4U)
#define Wind_Turbine_park_speed        (5.0)

/* Block signals (default storage) */
B_Wind_Turbine_T Wind_Turbine_B;

/* Continuous states */
X_Wind_Turbine_T Wind_Turbine_X;

/* Block states (default storage) */
DW_Wind_Turbine_T Wind_Turbine_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Wind_Turbine_T Wind_Turbine_Y;

/* Real-time model */
RT_MODEL_Wind_Turbine_T Wind_Turbine_M_;
RT_MODEL_Wind_Turbine_T *const Wind_Turbine_M = &Wind_Turbine_M_;

/*
 * Time delay interpolation routine
 *
 * The linear interpolation is performed using the formula:
 *
 *          (t2 - tMinusDelay)         (tMinusDelay - t1)
 * u(t)  =  ----------------- * u1  +  ------------------- * u2
 *              (t2 - t1)                  (t2 - t1)
 */
real_T rt_TDelayInterpolate(
  real_T tMinusDelay,                 /* tMinusDelay = currentSimTime - delay */
  real_T tStart,
  real_T *tBuf,
  real_T *uBuf,
  int_T bufSz,
  int_T *lastIdx,
  int_T oldestIdx,
  int_T newIdx,
  real_T initOutput,
  boolean_T discrete,
  boolean_T minorStepAndTAtLastMajorOutput)
{
  int_T i;
  real_T yout, t1, t2, u1, u2;

  /*
   * If there is only one data point in the buffer, this data point must be
   * the t= 0 and tMinusDelay > t0, it ask for something unknown. The best
   * guess if initial output as well
   */
  if ((newIdx == 0) && (oldestIdx ==0 ) && (tMinusDelay > tStart))
    return initOutput;

  /*
   * If tMinusDelay is less than zero, should output initial value
   */
  if (tMinusDelay <= tStart)
    return initOutput;

  /* For fixed buffer extrapolation:
   * if tMinusDelay is small than the time at oldestIdx, if discrete, output
   * tailptr value,  else use tailptr and tailptr+1 value to extrapolate
   * It is also for fixed buffer. Note: The same condition can happen for transport delay block where
   * use tStart and and t[tail] other than using t[tail] and t[tail+1].
   * See below
   */
  if ((tMinusDelay <= tBuf[oldestIdx] ) ) {
    if (discrete) {
      return(uBuf[oldestIdx]);
    } else {
      int_T tempIdx= oldestIdx + 1;
      if (oldestIdx == bufSz-1)
        tempIdx = 0;
      t1= tBuf[oldestIdx];
      t2= tBuf[tempIdx];
      u1= uBuf[oldestIdx];
      u2= uBuf[tempIdx];
      if (t2 == t1) {
        if (tMinusDelay >= t2) {
          yout = u2;
        } else {
          yout = u1;
        }
      } else {
        real_T f1 = (t2-tMinusDelay) / (t2-t1);
        real_T f2 = 1.0 - f1;

        /*
         * Use Lagrange's interpolation formula.  Exact outputs at t1, t2.
         */
        yout = f1*u1 + f2*u2;
      }

      return yout;
    }
  }

  /*
   * When block does not have direct feedthrough, we use the table of
   * values to extrapolate off the end of the table for delays that are less
   * than 0 (less then step size).  This is not completely accurate.  The
   * chain of events is as follows for a given time t.  Major output - look
   * in table.  Update - add entry to table.  Now, if we call the output at
   * time t again, there is a new entry in the table. For very small delays,
   * this means that we will have a different answer from the previous call
   * to the output fcn at the same time t.  The following code prevents this
   * from happening.
   */
  if (minorStepAndTAtLastMajorOutput) {
    /* pretend that the new entry has not been added to table */
    if (newIdx != 0) {
      if (*lastIdx == newIdx) {
        (*lastIdx)--;
      }

      newIdx--;
    } else {
      if (*lastIdx == newIdx) {
        *lastIdx = bufSz-1;
      }

      newIdx = bufSz - 1;
    }
  }

  i = *lastIdx;
  if (tBuf[i] < tMinusDelay) {
    /* Look forward starting at last index */
    while (tBuf[i] < tMinusDelay) {
      /* May occur if the delay is less than step-size - extrapolate */
      if (i == newIdx)
        break;
      i = ( i < (bufSz-1) ) ? (i+1) : 0;/* move through buffer */
    }
  } else {
    /*
     * Look backwards starting at last index which can happen when the
     * delay time increases.
     */
    while (tBuf[i] >= tMinusDelay) {
      /*
       * Due to the entry condition at top of function, we
       * should never hit the end.
       */
      i = (i > 0) ? i-1 : (bufSz-1);   /* move through buffer */
    }

    i = ( i < (bufSz-1) ) ? (i+1) : 0;
  }

  *lastIdx = i;
  if (discrete) {
    /*
     * tempEps = 128 * eps;
     * localEps = max(tempEps, tempEps*fabs(tBuf[i]))/2;
     */
    double tempEps = (DBL_EPSILON) * 128.0;
    double localEps = tempEps * fabs(tBuf[i]);
    if (tempEps > localEps) {
      localEps = tempEps;
    }

    localEps = localEps / 2.0;
    if (tMinusDelay >= (tBuf[i] - localEps)) {
      yout = uBuf[i];
    } else {
      if (i == 0) {
        yout = uBuf[bufSz-1];
      } else {
        yout = uBuf[i-1];
      }
    }
  } else {
    if (i == 0) {
      t1 = tBuf[bufSz-1];
      u1 = uBuf[bufSz-1];
    } else {
      t1 = tBuf[i-1];
      u1 = uBuf[i-1];
    }

    t2 = tBuf[i];
    u2 = uBuf[i];
    if (t2 == t1) {
      if (tMinusDelay >= t2) {
        yout = u2;
      } else {
        yout = u1;
      }
    } else {
      real_T f1 = (t2-tMinusDelay) / (t2-t1);
      real_T f2 = 1.0 - f1;

      /*
       * Use Lagrange's interpolation formula.  Exact outputs at t1, t2.
       */
      yout = f1*u1 + f2*u2;
    }
  }

  return(yout);
}

/* Lookup Binary Search Utility BINARYSEARCH_real_T */
void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi)
{
  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    /* Less than or equal to the smallest point in the table. */
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

/* Lookup Utility LookUp_real_T_real_T */
void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0;
    }

    {
      real_T yLeftCast;
      real_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}

real_T look1_pbinlxpw(real_T u0, const real_T bp0[], const real_T table[],
                      uint32_T prevIndex[], uint32_T maxIndex)
{
  real_T frac;
  uint32_T startIndex;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T found;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'on'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'on'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    startIndex = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    startIndex = prevIndex[0U];

    /* Binary Search using Previous Index */
    iLeft = 0U;
    iRght = maxIndex;
    found = 0U;
    while (found == 0U) {
      if (u0 < bp0[startIndex]) {
        iRght = startIndex - 1U;
        startIndex = (iRght + iLeft) >> 1U;
      } else if (u0 < bp0[startIndex + 1U]) {
        found = 1U;
      } else {
        iLeft = startIndex + 1U;
        startIndex = (iRght + iLeft) >> 1U;
      }
    }

    frac = (u0 - bp0[startIndex]) / (bp0[startIndex + 1U] - bp0[startIndex]);
  } else {
    startIndex = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  prevIndex[0U] = startIndex;

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[startIndex + 1U] - table[startIndex]) * frac + table[startIndex];
}

/* Projection for root system: '<Root>' */
void Wind_Turbine_projection(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  real_T tmp_0[56];
  int_T tmp_1[15];
  NeslSimulator *simulator;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;

  /* Projection for SimscapeExecutionBlock: '<S363>/STATE_6' */
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_6_SimData;
  time = Wind_Turbine_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 28;
  simulationData->mData->mContStates.mX =
    &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_6_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_6_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(Wind_Turbine_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&Wind_Turbine_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_1[0] = 0;
  tmp_0[0] = Wind_Turbine_B.INTERNAL_2_1_1[0];
  tmp_0[1] = Wind_Turbine_B.INTERNAL_2_1_1[1];
  tmp_0[2] = Wind_Turbine_B.INTERNAL_2_1_1[2];
  tmp_0[3] = Wind_Turbine_B.INTERNAL_2_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = Wind_Turbine_B.INTERNAL_4_1_1[0];
  tmp_0[5] = Wind_Turbine_B.INTERNAL_4_1_1[1];
  tmp_0[6] = Wind_Turbine_B.INTERNAL_4_1_1[2];
  tmp_0[7] = Wind_Turbine_B.INTERNAL_4_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = Wind_Turbine_B.INTERNAL_6_1_1[0];
  tmp_0[9] = Wind_Turbine_B.INTERNAL_6_1_1[1];
  tmp_0[10] = Wind_Turbine_B.INTERNAL_6_1_1[2];
  tmp_0[11] = Wind_Turbine_B.INTERNAL_6_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = Wind_Turbine_B.INTERNAL_8_1_1[0];
  tmp_0[13] = Wind_Turbine_B.INTERNAL_8_1_1[1];
  tmp_0[14] = Wind_Turbine_B.INTERNAL_8_1_1[2];
  tmp_0[15] = Wind_Turbine_B.INTERNAL_8_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = Wind_Turbine_B.INTERNAL_10_1_1[0];
  tmp_0[17] = Wind_Turbine_B.INTERNAL_10_1_1[1];
  tmp_0[18] = Wind_Turbine_B.INTERNAL_10_1_1[2];
  tmp_0[19] = Wind_Turbine_B.INTERNAL_10_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = Wind_Turbine_B.INPUT_1_1_1[0];
  tmp_0[21] = Wind_Turbine_B.INPUT_1_1_1[1];
  tmp_0[22] = Wind_Turbine_B.INPUT_1_1_1[2];
  tmp_0[23] = Wind_Turbine_B.INPUT_1_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = Wind_Turbine_B.INPUT_2_1_1[0];
  tmp_0[25] = Wind_Turbine_B.INPUT_2_1_1[1];
  tmp_0[26] = Wind_Turbine_B.INPUT_2_1_1[2];
  tmp_0[27] = Wind_Turbine_B.INPUT_2_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = Wind_Turbine_B.INPUT_3_1_1[0];
  tmp_0[29] = Wind_Turbine_B.INPUT_3_1_1[1];
  tmp_0[30] = Wind_Turbine_B.INPUT_3_1_1[2];
  tmp_0[31] = Wind_Turbine_B.INPUT_3_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = Wind_Turbine_B.INPUT_1_2_1[0];
  tmp_0[33] = Wind_Turbine_B.INPUT_1_2_1[1];
  tmp_0[34] = Wind_Turbine_B.INPUT_1_2_1[2];
  tmp_0[35] = Wind_Turbine_B.INPUT_1_2_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = Wind_Turbine_B.INPUT_2_2_1[0];
  tmp_0[37] = Wind_Turbine_B.INPUT_2_2_1[1];
  tmp_0[38] = Wind_Turbine_B.INPUT_2_2_1[2];
  tmp_0[39] = Wind_Turbine_B.INPUT_2_2_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = Wind_Turbine_B.INPUT_3_2_1[0];
  tmp_0[41] = Wind_Turbine_B.INPUT_3_2_1[1];
  tmp_0[42] = Wind_Turbine_B.INPUT_3_2_1[2];
  tmp_0[43] = Wind_Turbine_B.INPUT_3_2_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = Wind_Turbine_B.INPUT_1_3_1[0];
  tmp_0[45] = Wind_Turbine_B.INPUT_1_3_1[1];
  tmp_0[46] = Wind_Turbine_B.INPUT_1_3_1[2];
  tmp_0[47] = Wind_Turbine_B.INPUT_1_3_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = Wind_Turbine_B.INPUT_2_3_1[0];
  tmp_0[49] = Wind_Turbine_B.INPUT_2_3_1[1];
  tmp_0[50] = Wind_Turbine_B.INPUT_2_3_1[2];
  tmp_0[51] = Wind_Turbine_B.INPUT_2_3_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = Wind_Turbine_B.INPUT_3_3_1[0];
  tmp_0[53] = Wind_Turbine_B.INPUT_3_3_1[1];
  tmp_0[54] = Wind_Turbine_B.INPUT_3_3_1[2];
  tmp_0[55] = Wind_Turbine_B.INPUT_3_3_1[3];
  tmp_1[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_6_Simulator;
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_6_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method(simulator, NESL_SIM_PROJECTION, simulationData,
    diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Wind_Turbine_M, msg);
    }
  }

  /* End of Projection for SimscapeExecutionBlock: '<S363>/STATE_6' */
}

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 67;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  Wind_Turbine_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  Wind_Turbine_output();
  Wind_Turbine_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  Wind_Turbine_output();
  Wind_Turbine_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  Wind_Turbine_output();
  Wind_Turbine_projection();
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T tmp;
  int32_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u1 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u0 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp_0, tmp);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T y;
  boolean_T yEq;
  real_T q;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0;
    } else {
      if ((u0 < 0.0) != (u1 < 0.0)) {
        y += u1;
      }
    }
  }

  return y;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T a;
  a = fabs(u0);
  y = fabs(u1);
  if (a < y) {
    a /= y;
    y *= sqrt(a * a + 1.0);
  } else if (a > y) {
    y /= a;
    y = sqrt(y * y + 1.0) * a;
  } else {
    if (!rtIsNaN(y)) {
      y = a * 1.4142135623730951;
    }
  }

  return y;
}

void rt_invd4x4_snf(const real_T u[16], real_T y[16])
{
  real_T u_0[16];
  int8_T p[4];
  int8_T ipiv[4];
  int32_T ipk;
  int32_T pipk;
  int32_T jm1;
  int32_T mmj;
  int32_T jj;
  int32_T jp1j;
  int32_T jpiv_offset;
  int32_T Aoffset;
  int32_T b;
  real_T x[16];
  int32_T ONE;
  int32_T ix;
  real_T smax;
  real_T s;
  real_T u_1;
  for (ix = 0; ix < 16; ix++) {
    u_1 = u[ix];
    y[ix] = 0.0;
    u_0[ix] = u_1;
  }

  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  for (ipk = 0; ipk < 3; ipk++) {
    pipk = ipk + 1;
    jm1 = pipk - 1;
    mmj = 4 - pipk;
    Aoffset = jm1 * 5;
    ONE = 1;
    jj = Aoffset + 1;
    jp1j = jj + 1;
    Aoffset = mmj + 1;
    for (ix = 0; ix < 16; ix++) {
      u_1 = u_0[ix];
      x[ix] = u_1;
    }

    ix = jj - 1;
    u_1 = x[jj - 1];
    s = fabs(u_1);
    smax = s;
    for (jpiv_offset = 2; jpiv_offset <= Aoffset; jpiv_offset++) {
      ix++;
      u_1 = x[ix];
      s = fabs(u_1);
      if (s > smax) {
        ONE = jpiv_offset;
        smax = s;
      }
    }

    jpiv_offset = ONE - 1;
    ONE = (jj + jpiv_offset) - 1;
    if (u_0[ONE] != 0.0) {
      if (jpiv_offset != 0) {
        Aoffset = pipk + jpiv_offset;
        ipiv[pipk - 1] = (int8_T)Aoffset;
        ONE = jm1 + jpiv_offset;
        s = u_0[jm1];
        u_0[jm1] = u_0[ONE];
        u_0[ONE] = s;
        jm1 += 4;
        ONE += 4;
        s = u_0[jm1];
        u_0[jm1] = u_0[ONE];
        u_0[ONE] = s;
        jm1 += 4;
        ONE += 4;
        s = u_0[jm1];
        u_0[jm1] = u_0[ONE];
        u_0[ONE] = s;
        jm1 += 4;
        ONE += 4;
        s = u_0[jm1];
        u_0[jm1] = u_0[ONE];
        u_0[ONE] = s;
      }

      Aoffset = mmj - 1;
      jm1 = jp1j + Aoffset;
      for (b = jp1j; b <= jm1; b++) {
        u_1 = u_0[b - 1];
        s = u_0[jj - 1];
        smax = u_1 / s;
        u_0[b - 1] = smax;
      }
    }

    Aoffset = 3 - pipk;
    jpiv_offset = jj + 3;
    pipk = jj + 5;
    ONE = pipk - 1;
    for (pipk = 0; pipk <= Aoffset; pipk++) {
      s = u_0[jpiv_offset];
      if (s != 0.0) {
        s = -s;
        ix = jp1j - 1;
        jm1 = ONE + 1;
        jj = mmj + ONE;
        for (b = jm1; b <= jj; b++) {
          u_0[b - 1] += u_0[ix] * s;
          ix++;
        }
      }

      jpiv_offset += 4;
      ONE += 4;
    }
  }

  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  p[3] = 4;
  ipk = ipiv[0] - 1;
  if (ipk + 1 > 1) {
    pipk = p[ipk];
    p[ipk] = 1;
    p[0] = (int8_T)pipk;
  }

  ipk = ipiv[1] - 1;
  if (ipk + 1 > 2) {
    pipk = p[ipk];
    p[ipk] = p[1];
    p[1] = (int8_T)pipk;
  }

  ipk = ipiv[2] - 1;
  if (ipk + 1 > 3) {
    pipk = p[ipk];
    p[ipk] = p[2];
    p[2] = (int8_T)pipk;
  }

  Aoffset = p[0] - 1;
  y[Aoffset << 2] = 1.0;
  for (ipk = 1; ipk < 5; ipk++) {
    if (y[((Aoffset << 2) + ipk) - 1] != 0.0) {
      jm1 = ipk + 1;
      for (b = jm1; b < 5; b++) {
        y[(b + (Aoffset << 2)) - 1] -= u_0[(((ipk - 1) << 2) + b) - 1] * y
          [((Aoffset << 2) + ipk) - 1];
      }
    }
  }

  Aoffset = p[1] - 1;
  y[(Aoffset << 2) + 1] = 1.0;
  for (ipk = 2; ipk < 5; ipk++) {
    if (y[((Aoffset << 2) + ipk) - 1] != 0.0) {
      jm1 = ipk + 1;
      for (b = jm1; b < 5; b++) {
        y[(b + (Aoffset << 2)) - 1] -= u_0[(((ipk - 1) << 2) + b) - 1] * y
          [((Aoffset << 2) + ipk) - 1];
      }
    }
  }

  Aoffset = p[2] - 1;
  y[(Aoffset << 2) + 2] = 1.0;
  for (ipk = 3; ipk < 5; ipk++) {
    if (y[((Aoffset << 2) + ipk) - 1] != 0.0) {
      jm1 = ipk + 1;
      for (b = jm1; b < 5; b++) {
        y[(Aoffset << 2) + 3] -= y[((Aoffset << 2) + ipk) - 1] * u_0[((ipk - 1) <<
          2) + 3];
      }
    }
  }

  Aoffset = p[3] - 1;
  y[(Aoffset << 2) + 3] = 1.0;
  for (ipk = 0; ipk < 4; ipk++) {
    pipk = ipk;
    pipk <<= 2;
    if (y[pipk + 3] != 0.0) {
      y[pipk + 3] /= u_0[15];
      for (b = 0; b < 3; b++) {
        y[b + pipk] -= y[pipk + 3] * u_0[b + 12];
      }
    }

    if (y[pipk + 2] != 0.0) {
      y[pipk + 2] /= u_0[10];
      for (b = 0; b < 2; b++) {
        y[b + pipk] -= y[pipk + 2] * u_0[b + 8];
      }
    }

    if (y[pipk + 1] != 0.0) {
      y[pipk + 1] /= u_0[5];
      for (b = 0; b < 1; b++) {
        y[pipk] -= y[pipk + 1] * u_0[4];
      }
    }

    if (y[pipk] != 0.0) {
      y[pipk] /= u_0[0];
    }
  }
}

/* Model output function */
void Wind_Turbine_output(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  real_T tmp[56];
  int_T tmp_0[15];
  NeslSimulator *simulator;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  real_T time_0;
  real_T tmp_1[84];
  int_T tmp_2[16];
  real_T *parameterBundle_mRealParameters;
  real_T tmp_3[3];
  NeslRtpManager *rtpManager;
  boolean_T ok;
  real_T time_1;
  real_T tmp_4[16];
  int_T tmp_5[5];
  real_T time_2;
  real_T tmp_6[64];
  int_T tmp_7[6];
  real_T tmp_8[3];
  real_T time_3;
  real_T tmp_9[16];
  int_T tmp_a[5];
  real_T time_4;
  real_T tmp_b[64];
  int_T tmp_c[6];
  real_T tmp_d[3];
  real_T time_5;
  real_T tmp_e[16];
  int_T tmp_f[5];
  real_T time_6;
  real_T tmp_g[64];
  int_T tmp_h[6];
  real_T time_7;
  real_T tmp_i[12];
  int_T tmp_j[4];
  real_T time_8;
  real_T tmp_k[50];
  int_T tmp_l[5];
  real_T time_9;
  real_T tmp_m[20];
  int_T tmp_n[6];
  real_T time_a;
  real_T tmp_o[138];
  int_T tmp_p[7];
  real_T time_b;
  real_T tmp_q[84];
  int_T tmp_r[16];
  real_T tmp_s[16];
  real_T Bias;
  NeParameterBundle expl_temp;
  NeParameterBundle expl_temp_0;
  NeParameterBundle expl_temp_1;
  int32_T i;
  int32_T i_0;
  real_T uTmp_idx_0;
  real_T br;
  real_T bi;
  real_T tmpForInput_idx_1_re;
  real_T tmpForInput_idx_1_im;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* set solver stop time */
    if (!(Wind_Turbine_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Wind_Turbine_M->solverInfo,
                            ((Wind_Turbine_M->Timing.clockTickH0 + 1) *
        Wind_Turbine_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Wind_Turbine_M->solverInfo,
                            ((Wind_Turbine_M->Timing.clockTick0 + 1) *
        Wind_Turbine_M->Timing.stepSize0 + Wind_Turbine_M->Timing.clockTickH0 *
        Wind_Turbine_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_M->Timing.t[0] = rtsiGetT(&Wind_Turbine_M->solverInfo);
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(Wind_Turbine_DW.Saturation_SubsysRanBC);

  /* Integrator: '<S176>/Integrator' */
  Wind_Turbine_B.Integrator = Wind_Turbine_X.Integrator_CSTATE;

  /* Gain: '<S176>/Gain' */
  Bias = 1.0 /
    Wind_Turbine_P.WT_Params.Pitch_Actuator.hydraulic_actuator_time_constant;
  Wind_Turbine_B.Gain_d = Bias * Wind_Turbine_B.Integrator;

  /* SimscapeInputBlock: '<S363>/INPUT_6_1_1' */
  Wind_Turbine_B.INPUT_6_1_1[0] = Wind_Turbine_B.Gain_d;
  Wind_Turbine_B.INPUT_6_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_6_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_6_1_1[3] = 0.0;

  /* Step: '<Root>/Pitch Power On' */
  uTmp_idx_0 = Wind_Turbine_M->Timing.t[0];
  if (uTmp_idx_0 < Wind_Turbine_P.PitchPowerOn_Time) {
    Wind_Turbine_B.PitchPowerOn = Wind_Turbine_P.PitchPowerOn_Y0;
  } else {
    Wind_Turbine_B.PitchPowerOn = Wind_Turbine_P.PitchPowerOn_YFinal;
  }

  /* End of Step: '<Root>/Pitch Power On' */

  /* SimscapeInputBlock: '<S363>/INPUT_7_1_1' */
  Wind_Turbine_B.INPUT_7_1_1[0] = Wind_Turbine_B.PitchPowerOn;
  Wind_Turbine_B.INPUT_7_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_7_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_7_1_1[3] = 0.0;

  /* SimscapeInputBlock: '<S363>/INPUT_8_1_1' */
  Wind_Turbine_B.INPUT_8_1_1[0] = Wind_Turbine_B.PitchPowerOn;
  Wind_Turbine_B.INPUT_8_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_8_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_8_1_1[3] = 0.0;

  /* SimscapeExecutionBlock: '<S363>/STATE_6' */
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_6_SimData;
  time = Wind_Turbine_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 28;
  simulationData->mData->mContStates.mX =
    &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_6_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_6_Modes;
  ok = false;
  simulationData->mData->mFoundZcEvents = ok;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(Wind_Turbine_M);
  ok = false;
  simulationData->mData->mIsSolverAssertCheck = ok;
  simulationData->mData->mIsSolverCheckingCIC = false;
  ok = rtsiIsSolverComputingJacobian(&Wind_Turbine_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = ok;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_0[0] = 0;
  tmp[0] = Wind_Turbine_B.INTERNAL_2_1_1[0];
  tmp[1] = Wind_Turbine_B.INTERNAL_2_1_1[1];
  tmp[2] = Wind_Turbine_B.INTERNAL_2_1_1[2];
  tmp[3] = Wind_Turbine_B.INTERNAL_2_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = Wind_Turbine_B.INTERNAL_4_1_1[0];
  tmp[5] = Wind_Turbine_B.INTERNAL_4_1_1[1];
  tmp[6] = Wind_Turbine_B.INTERNAL_4_1_1[2];
  tmp[7] = Wind_Turbine_B.INTERNAL_4_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = Wind_Turbine_B.INTERNAL_6_1_1[0];
  tmp[9] = Wind_Turbine_B.INTERNAL_6_1_1[1];
  tmp[10] = Wind_Turbine_B.INTERNAL_6_1_1[2];
  tmp[11] = Wind_Turbine_B.INTERNAL_6_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = Wind_Turbine_B.INTERNAL_8_1_1[0];
  tmp[13] = Wind_Turbine_B.INTERNAL_8_1_1[1];
  tmp[14] = Wind_Turbine_B.INTERNAL_8_1_1[2];
  tmp[15] = Wind_Turbine_B.INTERNAL_8_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = Wind_Turbine_B.INTERNAL_10_1_1[0];
  tmp[17] = Wind_Turbine_B.INTERNAL_10_1_1[1];
  tmp[18] = Wind_Turbine_B.INTERNAL_10_1_1[2];
  tmp[19] = Wind_Turbine_B.INTERNAL_10_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = Wind_Turbine_B.INPUT_1_1_1[0];
  tmp[21] = Wind_Turbine_B.INPUT_1_1_1[1];
  tmp[22] = Wind_Turbine_B.INPUT_1_1_1[2];
  tmp[23] = Wind_Turbine_B.INPUT_1_1_1[3];
  tmp_0[6] = 24;
  tmp[24] = Wind_Turbine_B.INPUT_2_1_1[0];
  tmp[25] = Wind_Turbine_B.INPUT_2_1_1[1];
  tmp[26] = Wind_Turbine_B.INPUT_2_1_1[2];
  tmp[27] = Wind_Turbine_B.INPUT_2_1_1[3];
  tmp_0[7] = 28;
  tmp[28] = Wind_Turbine_B.INPUT_3_1_1[0];
  tmp[29] = Wind_Turbine_B.INPUT_3_1_1[1];
  tmp[30] = Wind_Turbine_B.INPUT_3_1_1[2];
  tmp[31] = Wind_Turbine_B.INPUT_3_1_1[3];
  tmp_0[8] = 32;
  tmp[32] = Wind_Turbine_B.INPUT_1_2_1[0];
  tmp[33] = Wind_Turbine_B.INPUT_1_2_1[1];
  tmp[34] = Wind_Turbine_B.INPUT_1_2_1[2];
  tmp[35] = Wind_Turbine_B.INPUT_1_2_1[3];
  tmp_0[9] = 36;
  tmp[36] = Wind_Turbine_B.INPUT_2_2_1[0];
  tmp[37] = Wind_Turbine_B.INPUT_2_2_1[1];
  tmp[38] = Wind_Turbine_B.INPUT_2_2_1[2];
  tmp[39] = Wind_Turbine_B.INPUT_2_2_1[3];
  tmp_0[10] = 40;
  tmp[40] = Wind_Turbine_B.INPUT_3_2_1[0];
  tmp[41] = Wind_Turbine_B.INPUT_3_2_1[1];
  tmp[42] = Wind_Turbine_B.INPUT_3_2_1[2];
  tmp[43] = Wind_Turbine_B.INPUT_3_2_1[3];
  tmp_0[11] = 44;
  tmp[44] = Wind_Turbine_B.INPUT_1_3_1[0];
  tmp[45] = Wind_Turbine_B.INPUT_1_3_1[1];
  tmp[46] = Wind_Turbine_B.INPUT_1_3_1[2];
  tmp[47] = Wind_Turbine_B.INPUT_1_3_1[3];
  tmp_0[12] = 48;
  tmp[48] = Wind_Turbine_B.INPUT_2_3_1[0];
  tmp[49] = Wind_Turbine_B.INPUT_2_3_1[1];
  tmp[50] = Wind_Turbine_B.INPUT_2_3_1[2];
  tmp[51] = Wind_Turbine_B.INPUT_2_3_1[3];
  tmp_0[13] = 52;
  tmp[52] = Wind_Turbine_B.INPUT_3_3_1[0];
  tmp[53] = Wind_Turbine_B.INPUT_3_3_1[1];
  tmp[54] = Wind_Turbine_B.INPUT_3_3_1[2];
  tmp[55] = Wind_Turbine_B.INPUT_3_3_1[3];
  tmp_0[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mOutputs.mN = 28;
  simulationData->mData->mOutputs.mX = &Wind_Turbine_B.STATE_6[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_6_Simulator;
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_6_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (i != 0) {
    ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
    if (ok) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Wind_Turbine_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S363>/STATE_6' */

  /* SimscapeExecutionBlock: '<S363>/OUTPUT_6_0' */
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_6_0_SimData;
  time_0 = Wind_Turbine_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.OUTPUT_6_0_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.OUTPUT_6_0_Modes;
  ok = false;
  simulationData->mData->mFoundZcEvents = ok;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(Wind_Turbine_M);
  ok = false;
  simulationData->mData->mIsSolverAssertCheck = ok;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_2[0] = 0;
  tmp_1[0] = Wind_Turbine_B.INTERNAL_2_1_1[0];
  tmp_1[1] = Wind_Turbine_B.INTERNAL_2_1_1[1];
  tmp_1[2] = Wind_Turbine_B.INTERNAL_2_1_1[2];
  tmp_1[3] = Wind_Turbine_B.INTERNAL_2_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = Wind_Turbine_B.INTERNAL_4_1_1[0];
  tmp_1[5] = Wind_Turbine_B.INTERNAL_4_1_1[1];
  tmp_1[6] = Wind_Turbine_B.INTERNAL_4_1_1[2];
  tmp_1[7] = Wind_Turbine_B.INTERNAL_4_1_1[3];
  tmp_2[2] = 8;
  tmp_1[8] = Wind_Turbine_B.INTERNAL_6_1_1[0];
  tmp_1[9] = Wind_Turbine_B.INTERNAL_6_1_1[1];
  tmp_1[10] = Wind_Turbine_B.INTERNAL_6_1_1[2];
  tmp_1[11] = Wind_Turbine_B.INTERNAL_6_1_1[3];
  tmp_2[3] = 12;
  tmp_1[12] = Wind_Turbine_B.INTERNAL_8_1_1[0];
  tmp_1[13] = Wind_Turbine_B.INTERNAL_8_1_1[1];
  tmp_1[14] = Wind_Turbine_B.INTERNAL_8_1_1[2];
  tmp_1[15] = Wind_Turbine_B.INTERNAL_8_1_1[3];
  tmp_2[4] = 16;
  tmp_1[16] = Wind_Turbine_B.INTERNAL_10_1_1[0];
  tmp_1[17] = Wind_Turbine_B.INTERNAL_10_1_1[1];
  tmp_1[18] = Wind_Turbine_B.INTERNAL_10_1_1[2];
  tmp_1[19] = Wind_Turbine_B.INTERNAL_10_1_1[3];
  tmp_2[5] = 20;
  tmp_1[20] = Wind_Turbine_B.INPUT_1_1_1[0];
  tmp_1[21] = Wind_Turbine_B.INPUT_1_1_1[1];
  tmp_1[22] = Wind_Turbine_B.INPUT_1_1_1[2];
  tmp_1[23] = Wind_Turbine_B.INPUT_1_1_1[3];
  tmp_2[6] = 24;
  tmp_1[24] = Wind_Turbine_B.INPUT_2_1_1[0];
  tmp_1[25] = Wind_Turbine_B.INPUT_2_1_1[1];
  tmp_1[26] = Wind_Turbine_B.INPUT_2_1_1[2];
  tmp_1[27] = Wind_Turbine_B.INPUT_2_1_1[3];
  tmp_2[7] = 28;
  tmp_1[28] = Wind_Turbine_B.INPUT_3_1_1[0];
  tmp_1[29] = Wind_Turbine_B.INPUT_3_1_1[1];
  tmp_1[30] = Wind_Turbine_B.INPUT_3_1_1[2];
  tmp_1[31] = Wind_Turbine_B.INPUT_3_1_1[3];
  tmp_2[8] = 32;
  tmp_1[32] = Wind_Turbine_B.INPUT_1_2_1[0];
  tmp_1[33] = Wind_Turbine_B.INPUT_1_2_1[1];
  tmp_1[34] = Wind_Turbine_B.INPUT_1_2_1[2];
  tmp_1[35] = Wind_Turbine_B.INPUT_1_2_1[3];
  tmp_2[9] = 36;
  tmp_1[36] = Wind_Turbine_B.INPUT_2_2_1[0];
  tmp_1[37] = Wind_Turbine_B.INPUT_2_2_1[1];
  tmp_1[38] = Wind_Turbine_B.INPUT_2_2_1[2];
  tmp_1[39] = Wind_Turbine_B.INPUT_2_2_1[3];
  tmp_2[10] = 40;
  tmp_1[40] = Wind_Turbine_B.INPUT_3_2_1[0];
  tmp_1[41] = Wind_Turbine_B.INPUT_3_2_1[1];
  tmp_1[42] = Wind_Turbine_B.INPUT_3_2_1[2];
  tmp_1[43] = Wind_Turbine_B.INPUT_3_2_1[3];
  tmp_2[11] = 44;
  tmp_1[44] = Wind_Turbine_B.INPUT_1_3_1[0];
  tmp_1[45] = Wind_Turbine_B.INPUT_1_3_1[1];
  tmp_1[46] = Wind_Turbine_B.INPUT_1_3_1[2];
  tmp_1[47] = Wind_Turbine_B.INPUT_1_3_1[3];
  tmp_2[12] = 48;
  tmp_1[48] = Wind_Turbine_B.INPUT_2_3_1[0];
  tmp_1[49] = Wind_Turbine_B.INPUT_2_3_1[1];
  tmp_1[50] = Wind_Turbine_B.INPUT_2_3_1[2];
  tmp_1[51] = Wind_Turbine_B.INPUT_2_3_1[3];
  tmp_2[13] = 52;
  tmp_1[52] = Wind_Turbine_B.INPUT_3_3_1[0];
  tmp_1[53] = Wind_Turbine_B.INPUT_3_3_1[1];
  tmp_1[54] = Wind_Turbine_B.INPUT_3_3_1[2];
  tmp_1[55] = Wind_Turbine_B.INPUT_3_3_1[3];
  tmp_2[14] = 56;
  memcpy(&tmp_1[56], &Wind_Turbine_B.STATE_6[0], 28U * sizeof(real_T));
  tmp_2[15] = 84;
  simulationData->mData->mInputValues.mN = 84;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 16;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  simulationData->mData->mOutputs.mN = 9;
  simulationData->mData->mOutputs.mX = &Wind_Turbine_B.OUTPUT_6_0[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_6_0_Simulator;
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.OUTPUT_6_0_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (i != 0) {
    ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
    if (ok) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Wind_Turbine_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S363>/OUTPUT_6_0' */

  /* RateTransition: '<S363>/RATE_TRANSITION_3_1_1' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_B.RATE_TRANSITION_3_1_1 = Wind_Turbine_B.OUTPUT_6_0[2];

    /* SimscapeInputBlock: '<S363>/INTERNAL_3_1_1' */
    if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
      Wind_Turbine_B.INTERNAL_3_1_1[0] = Wind_Turbine_B.RATE_TRANSITION_3_1_1;
      Wind_Turbine_B.INTERNAL_3_1_1[1] = 0.0;
      Wind_Turbine_B.INTERNAL_3_1_1[2] = 0.0;
      Wind_Turbine_DW.INTERNAL_3_1_1_Discrete[0] =
        !(Wind_Turbine_B.INTERNAL_3_1_1[0] ==
          Wind_Turbine_DW.INTERNAL_3_1_1_Discrete[1]);
      Wind_Turbine_DW.INTERNAL_3_1_1_Discrete[1] =
        Wind_Turbine_B.INTERNAL_3_1_1[0];
      Wind_Turbine_B.INTERNAL_3_1_1[0] =
        Wind_Turbine_DW.INTERNAL_3_1_1_Discrete[1];
      Wind_Turbine_B.INTERNAL_3_1_1[3] =
        Wind_Turbine_DW.INTERNAL_3_1_1_Discrete[0];
    }

    /* End of SimscapeInputBlock: '<S363>/INTERNAL_3_1_1' */

    /* SimscapeRtp: '<S8>/RTP_5' incorporates:
     *  Constant: '<S162>/Subsystem_around_RTP_71D709EF_area'
     */
    if (Wind_Turbine_DW.RTP_5_SetParametersNeeded) {
      tmp_3[0] = Wind_Turbine_P.WT_Params.Pitch_Actuator.orifice_area;
      tmp_3[1] = Wind_Turbine_P.WT_Params.Pitch_Actuator.orifice_area;
      tmp_3[2] =
        Wind_Turbine_P.WT_Params.Pitch_Actuator.Accumulator.initial_volume;
      parameterBundle_mRealParameters = &tmp_3[0];
      rtpManager = (NeslRtpManager *)Wind_Turbine_DW.RTP_5_RtpManager;
      diagnosticManager = rtw_create_diagnostics();
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      expl_temp.mRealParameters.mN = 3;
      expl_temp.mRealParameters.mX = parameterBundle_mRealParameters;
      expl_temp.mLogicalParameters.mN = 0;
      expl_temp.mLogicalParameters.mX = NULL;
      expl_temp.mIntegerParameters.mN = 0;
      expl_temp.mIntegerParameters.mX = NULL;
      expl_temp.mIndexParameters.mN = 0;
      expl_temp.mIndexParameters.mX = NULL;
      ok = nesl_rtp_manager_set_rtps(rtpManager, Wind_Turbine_M->Timing.t[0],
        expl_temp, diagnosticManager);
      if (!ok) {
        ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
        if (ok) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(Wind_Turbine_M, msg);
        }
      }
    }

    Wind_Turbine_DW.RTP_5_SetParametersNeeded = false;

    /* End of SimscapeRtp: '<S8>/RTP_5' */

    /* SimscapeExecutionBlock: '<S363>/STATE_5' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_5_SimData;
    time_1 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 25;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_5_Discrete[0];
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_5_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_5[0] = 0;
    tmp_4[0] = Wind_Turbine_B.INPUT_6_1_1[0];
    tmp_4[1] = Wind_Turbine_B.INPUT_6_1_1[1];
    tmp_4[2] = Wind_Turbine_B.INPUT_6_1_1[2];
    tmp_4[3] = Wind_Turbine_B.INPUT_6_1_1[3];
    tmp_5[1] = 4;
    tmp_4[4] = Wind_Turbine_B.INPUT_7_1_1[0];
    tmp_4[5] = Wind_Turbine_B.INPUT_7_1_1[1];
    tmp_4[6] = Wind_Turbine_B.INPUT_7_1_1[2];
    tmp_4[7] = Wind_Turbine_B.INPUT_7_1_1[3];
    tmp_5[2] = 8;
    tmp_4[8] = Wind_Turbine_B.INPUT_8_1_1[0];
    tmp_4[9] = Wind_Turbine_B.INPUT_8_1_1[1];
    tmp_4[10] = Wind_Turbine_B.INPUT_8_1_1[2];
    tmp_4[11] = Wind_Turbine_B.INPUT_8_1_1[3];
    tmp_5[3] = 12;
    tmp_4[12] = Wind_Turbine_B.INTERNAL_3_1_1[0];
    tmp_4[13] = Wind_Turbine_B.INTERNAL_3_1_1[1];
    tmp_4[14] = Wind_Turbine_B.INTERNAL_3_1_1[2];
    tmp_4[15] = Wind_Turbine_B.INTERNAL_3_1_1[3];
    tmp_5[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_4[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_5[0];
    simulationData->mData->mOutputs.mN = 48;
    simulationData->mData->mOutputs.mX = &Wind_Turbine_B.STATE_5[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    ok = rtmIsMajorTimeStep(Wind_Turbine_M);
    simulationData->mData->mIsFundamentalSampleHit = ok;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_5_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_5_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (ok) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S363>/STATE_5' */

    /* SimscapeExecutionBlock: '<S363>/OUTPUT_5_0' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_5_0_SimData;
    time_2 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_2;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.OUTPUT_5_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.OUTPUT_5_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_7[0] = 0;
    tmp_6[0] = Wind_Turbine_B.INPUT_6_1_1[0];
    tmp_6[1] = Wind_Turbine_B.INPUT_6_1_1[1];
    tmp_6[2] = Wind_Turbine_B.INPUT_6_1_1[2];
    tmp_6[3] = Wind_Turbine_B.INPUT_6_1_1[3];
    tmp_7[1] = 4;
    tmp_6[4] = Wind_Turbine_B.INPUT_7_1_1[0];
    tmp_6[5] = Wind_Turbine_B.INPUT_7_1_1[1];
    tmp_6[6] = Wind_Turbine_B.INPUT_7_1_1[2];
    tmp_6[7] = Wind_Turbine_B.INPUT_7_1_1[3];
    tmp_7[2] = 8;
    tmp_6[8] = Wind_Turbine_B.INPUT_8_1_1[0];
    tmp_6[9] = Wind_Turbine_B.INPUT_8_1_1[1];
    tmp_6[10] = Wind_Turbine_B.INPUT_8_1_1[2];
    tmp_6[11] = Wind_Turbine_B.INPUT_8_1_1[3];
    tmp_7[3] = 12;
    tmp_6[12] = Wind_Turbine_B.INTERNAL_3_1_1[0];
    tmp_6[13] = Wind_Turbine_B.INTERNAL_3_1_1[1];
    tmp_6[14] = Wind_Turbine_B.INTERNAL_3_1_1[2];
    tmp_6[15] = Wind_Turbine_B.INTERNAL_3_1_1[3];
    tmp_7[4] = 16;
    memcpy(&tmp_6[16], &Wind_Turbine_B.STATE_5[0], 48U * sizeof(real_T));
    tmp_7[5] = 64;
    simulationData->mData->mInputValues.mN = 64;
    simulationData->mData->mInputValues.mX = &tmp_6[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_7[0];
    simulationData->mData->mOutputs.mN = 7;
    simulationData->mData->mOutputs.mX = &Wind_Turbine_B.OUTPUT_5_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    ok = rtmIsMajorTimeStep(Wind_Turbine_M);
    simulationData->mData->mIsFundamentalSampleHit = ok;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_5_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_5_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (ok) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S363>/OUTPUT_5_0' */
  }

  /* End of RateTransition: '<S363>/RATE_TRANSITION_3_1_1' */

  /* Integrator: '<S206>/Integrator' */
  Wind_Turbine_B.Integrator_i = Wind_Turbine_X.Integrator_CSTATE_j;

  /* Gain: '<S206>/Gain' */
  Bias = 1.0 /
    Wind_Turbine_P.WT_Params.Pitch_Actuator.hydraulic_actuator_time_constant;
  Wind_Turbine_B.Gain_a = Bias * Wind_Turbine_B.Integrator_i;

  /* SimscapeInputBlock: '<S363>/INPUT_9_1_1' */
  Wind_Turbine_B.INPUT_9_1_1[0] = Wind_Turbine_B.Gain_a;
  Wind_Turbine_B.INPUT_9_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_9_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_9_1_1[3] = 0.0;

  /* SimscapeInputBlock: '<S363>/INPUT_10_1_1' */
  Wind_Turbine_B.INPUT_10_1_1[0] = Wind_Turbine_B.PitchPowerOn;
  Wind_Turbine_B.INPUT_10_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_10_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_10_1_1[3] = 0.0;

  /* SimscapeInputBlock: '<S363>/INPUT_11_1_1' */
  Wind_Turbine_B.INPUT_11_1_1[0] = Wind_Turbine_B.PitchPowerOn;
  Wind_Turbine_B.INPUT_11_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_11_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_11_1_1[3] = 0.0;

  /* RateTransition: '<S363>/RATE_TRANSITION_5_1_1' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_B.RATE_TRANSITION_5_1_1 = Wind_Turbine_B.OUTPUT_6_0[3];

    /* SimscapeInputBlock: '<S363>/INTERNAL_5_1_1' */
    if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
      Wind_Turbine_B.INTERNAL_5_1_1[0] = Wind_Turbine_B.RATE_TRANSITION_5_1_1;
      Wind_Turbine_B.INTERNAL_5_1_1[1] = 0.0;
      Wind_Turbine_B.INTERNAL_5_1_1[2] = 0.0;
      Wind_Turbine_DW.INTERNAL_5_1_1_Discrete[0] =
        !(Wind_Turbine_B.INTERNAL_5_1_1[0] ==
          Wind_Turbine_DW.INTERNAL_5_1_1_Discrete[1]);
      Wind_Turbine_DW.INTERNAL_5_1_1_Discrete[1] =
        Wind_Turbine_B.INTERNAL_5_1_1[0];
      Wind_Turbine_B.INTERNAL_5_1_1[0] =
        Wind_Turbine_DW.INTERNAL_5_1_1_Discrete[1];
      Wind_Turbine_B.INTERNAL_5_1_1[3] =
        Wind_Turbine_DW.INTERNAL_5_1_1_Discrete[0];
    }

    /* End of SimscapeInputBlock: '<S363>/INTERNAL_5_1_1' */

    /* SimscapeRtp: '<S8>/RTP_2' incorporates:
     *  Constant: '<S163>/Subsystem_around_RTP_2AC0B8FA_area'
     */
    if (Wind_Turbine_DW.RTP_2_SetParametersNeeded) {
      tmp_8[0] = Wind_Turbine_P.WT_Params.Pitch_Actuator.orifice_area;
      tmp_8[1] = Wind_Turbine_P.WT_Params.Pitch_Actuator.orifice_area;
      tmp_8[2] =
        Wind_Turbine_P.WT_Params.Pitch_Actuator.Accumulator.initial_volume;
      parameterBundle_mRealParameters = &tmp_8[0];
      rtpManager = (NeslRtpManager *)Wind_Turbine_DW.RTP_2_RtpManager;
      diagnosticManager = rtw_create_diagnostics();
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      expl_temp_0.mRealParameters.mN = 3;
      expl_temp_0.mRealParameters.mX = parameterBundle_mRealParameters;
      expl_temp_0.mLogicalParameters.mN = 0;
      expl_temp_0.mLogicalParameters.mX = NULL;
      expl_temp_0.mIntegerParameters.mN = 0;
      expl_temp_0.mIntegerParameters.mX = NULL;
      expl_temp_0.mIndexParameters.mN = 0;
      expl_temp_0.mIndexParameters.mX = NULL;
      ok = nesl_rtp_manager_set_rtps(rtpManager, Wind_Turbine_M->Timing.t[0],
        expl_temp_0, diagnosticManager);
      if (!ok) {
        ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
        if (ok) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(Wind_Turbine_M, msg);
        }
      }
    }

    Wind_Turbine_DW.RTP_2_SetParametersNeeded = false;

    /* End of SimscapeRtp: '<S8>/RTP_2' */

    /* SimscapeExecutionBlock: '<S363>/STATE_2' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_2_SimData;
    time_3 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_3;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 25;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_2_Discrete[0];
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_2_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_a[0] = 0;
    tmp_9[0] = Wind_Turbine_B.INPUT_9_1_1[0];
    tmp_9[1] = Wind_Turbine_B.INPUT_9_1_1[1];
    tmp_9[2] = Wind_Turbine_B.INPUT_9_1_1[2];
    tmp_9[3] = Wind_Turbine_B.INPUT_9_1_1[3];
    tmp_a[1] = 4;
    tmp_9[4] = Wind_Turbine_B.INPUT_10_1_1[0];
    tmp_9[5] = Wind_Turbine_B.INPUT_10_1_1[1];
    tmp_9[6] = Wind_Turbine_B.INPUT_10_1_1[2];
    tmp_9[7] = Wind_Turbine_B.INPUT_10_1_1[3];
    tmp_a[2] = 8;
    tmp_9[8] = Wind_Turbine_B.INPUT_11_1_1[0];
    tmp_9[9] = Wind_Turbine_B.INPUT_11_1_1[1];
    tmp_9[10] = Wind_Turbine_B.INPUT_11_1_1[2];
    tmp_9[11] = Wind_Turbine_B.INPUT_11_1_1[3];
    tmp_a[3] = 12;
    tmp_9[12] = Wind_Turbine_B.INTERNAL_5_1_1[0];
    tmp_9[13] = Wind_Turbine_B.INTERNAL_5_1_1[1];
    tmp_9[14] = Wind_Turbine_B.INTERNAL_5_1_1[2];
    tmp_9[15] = Wind_Turbine_B.INTERNAL_5_1_1[3];
    tmp_a[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_9[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_a[0];
    simulationData->mData->mOutputs.mN = 48;
    simulationData->mData->mOutputs.mX = &Wind_Turbine_B.STATE_2[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    ok = rtmIsMajorTimeStep(Wind_Turbine_M);
    simulationData->mData->mIsFundamentalSampleHit = ok;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_2_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_2_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (ok) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S363>/STATE_2' */

    /* SimscapeExecutionBlock: '<S363>/OUTPUT_2_0' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_2_0_SimData;
    time_4 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_4;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.OUTPUT_2_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.OUTPUT_2_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_c[0] = 0;
    tmp_b[0] = Wind_Turbine_B.INPUT_9_1_1[0];
    tmp_b[1] = Wind_Turbine_B.INPUT_9_1_1[1];
    tmp_b[2] = Wind_Turbine_B.INPUT_9_1_1[2];
    tmp_b[3] = Wind_Turbine_B.INPUT_9_1_1[3];
    tmp_c[1] = 4;
    tmp_b[4] = Wind_Turbine_B.INPUT_10_1_1[0];
    tmp_b[5] = Wind_Turbine_B.INPUT_10_1_1[1];
    tmp_b[6] = Wind_Turbine_B.INPUT_10_1_1[2];
    tmp_b[7] = Wind_Turbine_B.INPUT_10_1_1[3];
    tmp_c[2] = 8;
    tmp_b[8] = Wind_Turbine_B.INPUT_11_1_1[0];
    tmp_b[9] = Wind_Turbine_B.INPUT_11_1_1[1];
    tmp_b[10] = Wind_Turbine_B.INPUT_11_1_1[2];
    tmp_b[11] = Wind_Turbine_B.INPUT_11_1_1[3];
    tmp_c[3] = 12;
    tmp_b[12] = Wind_Turbine_B.INTERNAL_5_1_1[0];
    tmp_b[13] = Wind_Turbine_B.INTERNAL_5_1_1[1];
    tmp_b[14] = Wind_Turbine_B.INTERNAL_5_1_1[2];
    tmp_b[15] = Wind_Turbine_B.INTERNAL_5_1_1[3];
    tmp_c[4] = 16;
    memcpy(&tmp_b[16], &Wind_Turbine_B.STATE_2[0], 48U * sizeof(real_T));
    tmp_c[5] = 64;
    simulationData->mData->mInputValues.mN = 64;
    simulationData->mData->mInputValues.mX = &tmp_b[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_c[0];
    simulationData->mData->mOutputs.mN = 7;
    simulationData->mData->mOutputs.mX = &Wind_Turbine_B.OUTPUT_2_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    ok = rtmIsMajorTimeStep(Wind_Turbine_M);
    simulationData->mData->mIsFundamentalSampleHit = ok;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_2_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_2_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (ok) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S363>/OUTPUT_2_0' */
  }

  /* End of RateTransition: '<S363>/RATE_TRANSITION_5_1_1' */

  /* Integrator: '<S236>/Integrator' */
  Wind_Turbine_B.Integrator_p = Wind_Turbine_X.Integrator_CSTATE_n;

  /* Gain: '<S236>/Gain' */
  Bias = 1.0 /
    Wind_Turbine_P.WT_Params.Pitch_Actuator.hydraulic_actuator_time_constant;
  Wind_Turbine_B.Gain_g = Bias * Wind_Turbine_B.Integrator_p;

  /* SimscapeInputBlock: '<S363>/INPUT_12_1_1' */
  Wind_Turbine_B.INPUT_12_1_1[0] = Wind_Turbine_B.Gain_g;
  Wind_Turbine_B.INPUT_12_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_12_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_12_1_1[3] = 0.0;

  /* SimscapeInputBlock: '<S363>/INPUT_13_1_1' */
  Wind_Turbine_B.INPUT_13_1_1[0] = Wind_Turbine_B.PitchPowerOn;
  Wind_Turbine_B.INPUT_13_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_13_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_13_1_1[3] = 0.0;

  /* SimscapeInputBlock: '<S363>/INPUT_14_1_1' */
  Wind_Turbine_B.INPUT_14_1_1[0] = Wind_Turbine_B.PitchPowerOn;
  Wind_Turbine_B.INPUT_14_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_14_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_14_1_1[3] = 0.0;

  /* RateTransition: '<S363>/RATE_TRANSITION_7_1_1' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_B.RATE_TRANSITION_7_1_1 = Wind_Turbine_B.OUTPUT_6_0[4];

    /* SimscapeInputBlock: '<S363>/INTERNAL_7_1_1' */
    if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
      Wind_Turbine_B.INTERNAL_7_1_1[0] = Wind_Turbine_B.RATE_TRANSITION_7_1_1;
      Wind_Turbine_B.INTERNAL_7_1_1[1] = 0.0;
      Wind_Turbine_B.INTERNAL_7_1_1[2] = 0.0;
      Wind_Turbine_DW.INTERNAL_7_1_1_Discrete[0] =
        !(Wind_Turbine_B.INTERNAL_7_1_1[0] ==
          Wind_Turbine_DW.INTERNAL_7_1_1_Discrete[1]);
      Wind_Turbine_DW.INTERNAL_7_1_1_Discrete[1] =
        Wind_Turbine_B.INTERNAL_7_1_1[0];
      Wind_Turbine_B.INTERNAL_7_1_1[0] =
        Wind_Turbine_DW.INTERNAL_7_1_1_Discrete[1];
      Wind_Turbine_B.INTERNAL_7_1_1[3] =
        Wind_Turbine_DW.INTERNAL_7_1_1_Discrete[0];
    }

    /* End of SimscapeInputBlock: '<S363>/INTERNAL_7_1_1' */

    /* SimscapeRtp: '<S8>/RTP_3' incorporates:
     *  Constant: '<S164>/Subsystem_around_RTP_1C322809_area'
     */
    if (Wind_Turbine_DW.RTP_3_SetParametersNeeded) {
      tmp_d[0] = Wind_Turbine_P.WT_Params.Pitch_Actuator.orifice_area;
      tmp_d[1] = Wind_Turbine_P.WT_Params.Pitch_Actuator.orifice_area;
      tmp_d[2] =
        Wind_Turbine_P.WT_Params.Pitch_Actuator.Accumulator.initial_volume;
      parameterBundle_mRealParameters = &tmp_d[0];
      rtpManager = (NeslRtpManager *)Wind_Turbine_DW.RTP_3_RtpManager;
      diagnosticManager = rtw_create_diagnostics();
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      expl_temp_1.mRealParameters.mN = 3;
      expl_temp_1.mRealParameters.mX = parameterBundle_mRealParameters;
      expl_temp_1.mLogicalParameters.mN = 0;
      expl_temp_1.mLogicalParameters.mX = NULL;
      expl_temp_1.mIntegerParameters.mN = 0;
      expl_temp_1.mIntegerParameters.mX = NULL;
      expl_temp_1.mIndexParameters.mN = 0;
      expl_temp_1.mIndexParameters.mX = NULL;
      ok = nesl_rtp_manager_set_rtps(rtpManager, Wind_Turbine_M->Timing.t[0],
        expl_temp_1, diagnosticManager);
      if (!ok) {
        ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
        if (ok) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(Wind_Turbine_M, msg);
        }
      }
    }

    Wind_Turbine_DW.RTP_3_SetParametersNeeded = false;

    /* End of SimscapeRtp: '<S8>/RTP_3' */

    /* SimscapeExecutionBlock: '<S363>/STATE_3' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_3_SimData;
    time_5 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_5;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 25;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_3_Discrete[0];
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_3_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_f[0] = 0;
    tmp_e[0] = Wind_Turbine_B.INPUT_12_1_1[0];
    tmp_e[1] = Wind_Turbine_B.INPUT_12_1_1[1];
    tmp_e[2] = Wind_Turbine_B.INPUT_12_1_1[2];
    tmp_e[3] = Wind_Turbine_B.INPUT_12_1_1[3];
    tmp_f[1] = 4;
    tmp_e[4] = Wind_Turbine_B.INPUT_13_1_1[0];
    tmp_e[5] = Wind_Turbine_B.INPUT_13_1_1[1];
    tmp_e[6] = Wind_Turbine_B.INPUT_13_1_1[2];
    tmp_e[7] = Wind_Turbine_B.INPUT_13_1_1[3];
    tmp_f[2] = 8;
    tmp_e[8] = Wind_Turbine_B.INPUT_14_1_1[0];
    tmp_e[9] = Wind_Turbine_B.INPUT_14_1_1[1];
    tmp_e[10] = Wind_Turbine_B.INPUT_14_1_1[2];
    tmp_e[11] = Wind_Turbine_B.INPUT_14_1_1[3];
    tmp_f[3] = 12;
    tmp_e[12] = Wind_Turbine_B.INTERNAL_7_1_1[0];
    tmp_e[13] = Wind_Turbine_B.INTERNAL_7_1_1[1];
    tmp_e[14] = Wind_Turbine_B.INTERNAL_7_1_1[2];
    tmp_e[15] = Wind_Turbine_B.INTERNAL_7_1_1[3];
    tmp_f[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_e[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_f[0];
    simulationData->mData->mOutputs.mN = 48;
    simulationData->mData->mOutputs.mX = &Wind_Turbine_B.STATE_3[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    ok = rtmIsMajorTimeStep(Wind_Turbine_M);
    simulationData->mData->mIsFundamentalSampleHit = ok;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_3_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_3_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (ok) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S363>/STATE_3' */

    /* SimscapeExecutionBlock: '<S363>/OUTPUT_3_0' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_3_0_SimData;
    time_6 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_6;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.OUTPUT_3_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.OUTPUT_3_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_h[0] = 0;
    tmp_g[0] = Wind_Turbine_B.INPUT_12_1_1[0];
    tmp_g[1] = Wind_Turbine_B.INPUT_12_1_1[1];
    tmp_g[2] = Wind_Turbine_B.INPUT_12_1_1[2];
    tmp_g[3] = Wind_Turbine_B.INPUT_12_1_1[3];
    tmp_h[1] = 4;
    tmp_g[4] = Wind_Turbine_B.INPUT_13_1_1[0];
    tmp_g[5] = Wind_Turbine_B.INPUT_13_1_1[1];
    tmp_g[6] = Wind_Turbine_B.INPUT_13_1_1[2];
    tmp_g[7] = Wind_Turbine_B.INPUT_13_1_1[3];
    tmp_h[2] = 8;
    tmp_g[8] = Wind_Turbine_B.INPUT_14_1_1[0];
    tmp_g[9] = Wind_Turbine_B.INPUT_14_1_1[1];
    tmp_g[10] = Wind_Turbine_B.INPUT_14_1_1[2];
    tmp_g[11] = Wind_Turbine_B.INPUT_14_1_1[3];
    tmp_h[3] = 12;
    tmp_g[12] = Wind_Turbine_B.INTERNAL_7_1_1[0];
    tmp_g[13] = Wind_Turbine_B.INTERNAL_7_1_1[1];
    tmp_g[14] = Wind_Turbine_B.INTERNAL_7_1_1[2];
    tmp_g[15] = Wind_Turbine_B.INTERNAL_7_1_1[3];
    tmp_h[4] = 16;
    memcpy(&tmp_g[16], &Wind_Turbine_B.STATE_3[0], 48U * sizeof(real_T));
    tmp_h[5] = 64;
    simulationData->mData->mInputValues.mN = 64;
    simulationData->mData->mInputValues.mX = &tmp_g[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_h[0];
    simulationData->mData->mOutputs.mN = 7;
    simulationData->mData->mOutputs.mX = &Wind_Turbine_B.OUTPUT_3_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    ok = rtmIsMajorTimeStep(Wind_Turbine_M);
    simulationData->mData->mIsFundamentalSampleHit = ok;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_3_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_3_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (ok) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S363>/OUTPUT_3_0' */

    /* Lookup: '<S51>/Extension to Angle' */
    uTmp_idx_0 = Wind_Turbine_B.OUTPUT_5_0[1];
    Bias = Wind_Turbine_B.OUTPUT_2_0[1];
    tmpForInput_idx_1_re = Wind_Turbine_B.OUTPUT_3_0[1];
    Wind_Turbine_B.ExtensiontoAngle[0] = rt_Lookup
      (Wind_Turbine_P.Actuator_Lookup.extension, 88, uTmp_idx_0,
       Wind_Turbine_P.Actuator_Lookup.angle);
    Wind_Turbine_B.ExtensiontoAngle[1] = rt_Lookup
      (Wind_Turbine_P.Actuator_Lookup.extension, 88, Bias,
       Wind_Turbine_P.Actuator_Lookup.angle);
    Wind_Turbine_B.ExtensiontoAngle[2] = rt_Lookup
      (Wind_Turbine_P.Actuator_Lookup.extension, 88, tmpForInput_idx_1_re,
       Wind_Turbine_P.Actuator_Lookup.angle);

    /* Outport: '<Root>/Out1' */
    Wind_Turbine_Y.Out1 = Wind_Turbine_B.ExtensiontoAngle[0];
  }

  /* End of RateTransition: '<S363>/RATE_TRANSITION_7_1_1' */

  /* FromWorkspace: '<S365>/FromWs' */
  {
    real_T *pDataValues = (real_T *) Wind_Turbine_DW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *) Wind_Turbine_DW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = Wind_Turbine_DW.FromWs_IWORK.PrevIndex;
    real_T t = Wind_Turbine_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[24]) {
      currTimeIndex = 23;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    Wind_Turbine_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 2; ++elIdx) {
              (&Wind_Turbine_B.FromWs[0])[elIdx] = pDataValues[currTimeIndex];
              pDataValues += 25;
            }
          }
        } else {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 2; ++elIdx) {
              (&Wind_Turbine_B.FromWs[0])[elIdx] = pDataValues[currTimeIndex + 1];
              pDataValues += 25;
            }
          }
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;

        {
          int_T elIdx;
          for (elIdx = 0; elIdx < 2; ++elIdx) {
            d1 = pDataValues[TimeIndex];
            d2 = pDataValues[TimeIndex + 1];
            (&Wind_Turbine_B.FromWs[0])[elIdx] = (real_T) rtInterpolate(d1, d2,
              f1, f2);
            pDataValues += 25;
          }
        }
      }
    }
  }

  /* Integrator: '<S73>/Integrator' */
  Wind_Turbine_B.Integrator_f = Wind_Turbine_X.Integrator_CSTATE_m;

  /* Gain: '<S73>/Gain' */
  Bias = 1.0 / Wind_Turbine_P.WT_Params.Generator.generator_time_constant;
  Wind_Turbine_B.Gain_e = Bias * Wind_Turbine_B.Integrator_f;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Chart: '<S51>/Turbine State Machine' */
    /* Gateway: Turbine State Machine */
    Wind_Turbine_DW.sfEvent = Wind_Turbine_CALL_EVENT;

    /* During: Turbine State Machine */
    if (Wind_Turbine_DW.is_active_c1_Turbine_State_Mach == 0U) {
      /* Entry: Turbine State Machine */
      Wind_Turbine_DW.is_active_c1_Turbine_State_Mach = 1U;

      /* Entry Internal: Turbine State Machine */
      /* Transition: '<S53>:26' */
      Wind_Turbine_DW.is_c1_Turbine_State_Machine_Lib = Wind_Turbine_IN_Park;

      /* Entry 'Park': '<S53>:7' */
      Wind_Turbine_B.parking_brake = 1.0;
      Wind_Turbine_B.generator_trip = 1.0;
      Wind_Turbine_B.pitch_brake = 1.0;
      Wind_Turbine_B.turbine_state = 0.0;
    } else {
      switch (Wind_Turbine_DW.is_c1_Turbine_State_Machine_Lib) {
       case Wind_Turbine_IN_Brake:
        Wind_Turbine_B.parking_brake = 0.0;
        Wind_Turbine_B.generator_trip = 1.0;
        Wind_Turbine_B.pitch_brake = 1.0;
        Wind_Turbine_B.turbine_state = 3.0;

        /* During 'Brake': '<S53>:15' */
        if (Wind_Turbine_B.Gain_e <= Wind_Turbine_park_speed) {
          /* Transition: '<S53>:20' */
          Wind_Turbine_DW.is_c1_Turbine_State_Machine_Lib = Wind_Turbine_IN_Park;

          /* Entry 'Park': '<S53>:7' */
          Wind_Turbine_B.parking_brake = 1.0;
          Wind_Turbine_B.generator_trip = 1.0;
          Wind_Turbine_B.pitch_brake = 1.0;
          Wind_Turbine_B.turbine_state = 0.0;
        } else {
          if ((Wind_Turbine_B.FromWs[0] <
               Wind_Turbine_DW.wind_speed_cut_in_upper) &&
              (Wind_Turbine_B.FromWs[0] >
               Wind_Turbine_DW.wind_speed_cut_in_lower)) {
            /* Transition: '<S53>:31' */
            Wind_Turbine_DW.is_c1_Turbine_State_Machine_Lib =
              Wind_Turbine_IN_Startup;

            /* Entry 'Startup': '<S53>:9' */
            Wind_Turbine_B.parking_brake = 0.0;
            Wind_Turbine_B.generator_trip = 1.0;
            Wind_Turbine_B.pitch_brake = 0.0;
            Wind_Turbine_B.turbine_state = 1.0;
          }
        }
        break;

       case Wind_Turbine_IN_Generating:
        Wind_Turbine_B.parking_brake = 0.0;
        Wind_Turbine_B.generator_trip = 0.0;
        Wind_Turbine_B.pitch_brake = 0.0;
        Wind_Turbine_B.turbine_state = 2.0;

        /* During 'Generating': '<S53>:12' */
        if ((Wind_Turbine_B.FromWs[0] < Wind_Turbine_DW.wind_speed_cut_in_lower)
            || (Wind_Turbine_B.FromWs[0] > Wind_Turbine_DW.wind_speed_cut_out) ||
            (Wind_Turbine_B.Gain_e > Wind_Turbine_DW.turbine_speed_cut_out) ||
            (Wind_Turbine_B.Gain_e < Wind_Turbine_DW.turbine_speed_cut_in * 0.9))
        {
          /* Transition: '<S53>:19' */
          Wind_Turbine_DW.is_c1_Turbine_State_Machine_Lib =
            Wind_Turbine_IN_Brake;

          /* Entry 'Brake': '<S53>:15' */
          Wind_Turbine_B.parking_brake = 0.0;
          Wind_Turbine_B.generator_trip = 1.0;
          Wind_Turbine_B.pitch_brake = 1.0;
          Wind_Turbine_B.turbine_state = 3.0;
        }
        break;

       case Wind_Turbine_IN_Park:
        Wind_Turbine_B.parking_brake = 1.0;
        Wind_Turbine_B.generator_trip = 1.0;
        Wind_Turbine_B.pitch_brake = 1.0;
        Wind_Turbine_B.turbine_state = 0.0;

        /* During 'Park': '<S53>:7' */
        if ((Wind_Turbine_B.FromWs[0] > Wind_Turbine_DW.wind_speed_cut_in_lower)
            && (Wind_Turbine_B.FromWs[0] < Wind_Turbine_DW.wind_speed_cut_out))
        {
          /* Transition: '<S53>:10' */
          Wind_Turbine_DW.is_c1_Turbine_State_Machine_Lib =
            Wind_Turbine_IN_Startup;

          /* Entry 'Startup': '<S53>:9' */
          Wind_Turbine_B.parking_brake = 0.0;
          Wind_Turbine_B.generator_trip = 1.0;
          Wind_Turbine_B.pitch_brake = 0.0;
          Wind_Turbine_B.turbine_state = 1.0;
        }
        break;

       default:
        Wind_Turbine_B.parking_brake = 0.0;
        Wind_Turbine_B.generator_trip = 1.0;
        Wind_Turbine_B.pitch_brake = 0.0;
        Wind_Turbine_B.turbine_state = 1.0;

        /* During 'Startup': '<S53>:9' */
        if (Wind_Turbine_B.Gain_e > Wind_Turbine_DW.turbine_speed_cut_in) {
          /* Transition: '<S53>:13' */
          Wind_Turbine_DW.is_c1_Turbine_State_Machine_Lib =
            Wind_Turbine_IN_Generating;

          /* Entry 'Generating': '<S53>:12' */
          Wind_Turbine_B.parking_brake = 0.0;
          Wind_Turbine_B.generator_trip = 0.0;
          Wind_Turbine_B.pitch_brake = 0.0;
          Wind_Turbine_B.turbine_state = 2.0;
        } else {
          if (Wind_Turbine_B.FromWs[0] < Wind_Turbine_DW.wind_speed_cut_in_lower)
          {
            /* Transition: '<S53>:18' */
            Wind_Turbine_DW.is_c1_Turbine_State_Machine_Lib =
              Wind_Turbine_IN_Brake;

            /* Entry 'Brake': '<S53>:15' */
            Wind_Turbine_B.parking_brake = 0.0;
            Wind_Turbine_B.generator_trip = 1.0;
            Wind_Turbine_B.pitch_brake = 1.0;
            Wind_Turbine_B.turbine_state = 3.0;
          }
        }
        break;
      }
    }

    /* End of Chart: '<S51>/Turbine State Machine' */
  }

  /* Gain: '<S147>/Gain' */
  Wind_Turbine_B.Gain_ax = Wind_Turbine_P.Gain_Gain * Wind_Turbine_B.OUTPUT_6_0
    [1];

  /* Gain: '<S350>/radps2mps' */
  Wind_Turbine_B.radps2mps = Wind_Turbine_P.WT_Params.Blade.length *
    Wind_Turbine_B.Gain_ax;

  /* Trigonometry: '<S350>/Trigonometric Function' */
  Wind_Turbine_B.TrigonometricFunction = rt_atan2d_snf(Wind_Turbine_B.FromWs[0],
    Wind_Turbine_B.radps2mps);

  /* Gain: '<S350>/rad2deg' */
  Wind_Turbine_B.rad2deg = Wind_Turbine_P.rad2deg_Gain *
    Wind_Turbine_B.TrigonometricFunction;

  /* Gain: '<S351>/radps2rpm' */
  Wind_Turbine_B.radps2rpm = Wind_Turbine_P.radps2rpm * Wind_Turbine_B.Gain_ax;

  /* Sum: '<S351>/Sum' incorporates:
   *  Constant: '<S351>/Nominal RPM'
   */
  Wind_Turbine_B.Sum_k = Wind_Turbine_P.WT_Params.Rotor.nominal_rpm -
    Wind_Turbine_B.radps2rpm;

  /* Gain: '<S352>/Proportional Gain' */
  Wind_Turbine_B.ProportionalGain =
    Wind_Turbine_P.WT_Params.Pitch_Controller.Angle_Of_Attack.P_Gain *
    Wind_Turbine_B.Sum_k;

  /* Integrator: '<S352>/Integrator' */
  /* Limited  Integrator  */
  if (Wind_Turbine_X.Integrator_CSTATE_h >=
      Wind_Turbine_P.WT_Params.Pitch_Controller.Angle_Of_Attack.max_angle) {
    if (Wind_Turbine_X.Integrator_CSTATE_h >
        Wind_Turbine_P.WT_Params.Pitch_Controller.Angle_Of_Attack.max_angle) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
        true);
    }

    Wind_Turbine_X.Integrator_CSTATE_h =
      Wind_Turbine_P.WT_Params.Pitch_Controller.Angle_Of_Attack.max_angle;
  } else {
    Bias = -Wind_Turbine_P.WT_Params.Pitch_Controller.Angle_Of_Attack.max_angle;
    if (Wind_Turbine_X.Integrator_CSTATE_h <= Bias) {
      Bias =
        -Wind_Turbine_P.WT_Params.Pitch_Controller.Angle_Of_Attack.max_angle;
      if (Wind_Turbine_X.Integrator_CSTATE_h < Bias) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
          true);
      }

      Wind_Turbine_X.Integrator_CSTATE_h =
        -Wind_Turbine_P.WT_Params.Pitch_Controller.Angle_Of_Attack.max_angle;
    }
  }

  Wind_Turbine_B.Integrator_m = Wind_Turbine_X.Integrator_CSTATE_h;

  /* End of Integrator: '<S352>/Integrator' */

  /* Sum: '<S352>/Sum' */
  Wind_Turbine_B.Sum_o = Wind_Turbine_B.ProportionalGain +
    Wind_Turbine_B.Integrator_m;

  /* Saturate: '<S351>/Saturation' */
  uTmp_idx_0 =
    Wind_Turbine_P.WT_Params.Pitch_Controller.Angle_Of_Attack.max_angle;
  if (Wind_Turbine_B.Sum_o > uTmp_idx_0) {
    Wind_Turbine_B.Saturation = uTmp_idx_0;
  } else if (Wind_Turbine_B.Sum_o < Wind_Turbine_P.Saturation_LowerSat) {
    Wind_Turbine_B.Saturation = Wind_Turbine_P.Saturation_LowerSat;
  } else {
    Wind_Turbine_B.Saturation = Wind_Turbine_B.Sum_o;
  }

  /* End of Saturate: '<S351>/Saturation' */

  /* Switch: '<S348>/Check For Park Condition' incorporates:
   *  Constant: '<S348>/Pitch For Park'
   *  Switch: '<S348>/Check For Pitch Brake Condition'
   */
  if (Wind_Turbine_B.parking_brake != 0.0) {
    Wind_Turbine_B.CheckForParkCondition =
      Wind_Turbine_P.WT_Params.Pitch_Controller.park_pitch_angle;
  } else {
    if (Wind_Turbine_B.pitch_brake != 0.0) {
      /* Switch: '<S348>/Check For Pitch Brake Condition' incorporates:
       *  Constant: '<S348>/Pitch For Braking'
       */
      Wind_Turbine_B.CheckForPitchBrakeCondition =
        Wind_Turbine_P.WT_Params.Pitch_Controller.emergency_brake_pitch_angle;
    } else {
      /* Sum: '<S348>/Sum' incorporates:
       *  Switch: '<S348>/Check For Pitch Brake Condition'
       */
      Wind_Turbine_B.Sum_jc = Wind_Turbine_B.rad2deg - Wind_Turbine_B.Saturation;

      /* Switch: '<S348>/Check For Pitch Brake Condition' */
      Wind_Turbine_B.CheckForPitchBrakeCondition = Wind_Turbine_B.Sum_jc;
    }

    Wind_Turbine_B.CheckForParkCondition =
      Wind_Turbine_B.CheckForPitchBrakeCondition;
  }

  /* End of Switch: '<S348>/Check For Park Condition' */

  /* Saturate: '<S348>/Limit Pitch Command' */
  Bias = Wind_Turbine_P.WT_Params.Pitch_Controller.emergency_brake_pitch_angle;
  if (Wind_Turbine_B.CheckForParkCondition >
      Wind_Turbine_P.LimitPitchCommand_UpperSat) {
    Wind_Turbine_B.LimitPitchCommand = Wind_Turbine_P.LimitPitchCommand_UpperSat;
  } else if (Wind_Turbine_B.CheckForParkCondition < Bias) {
    Wind_Turbine_B.LimitPitchCommand = Bias;
  } else {
    Wind_Turbine_B.LimitPitchCommand = Wind_Turbine_B.CheckForParkCondition;
  }

  /* End of Saturate: '<S348>/Limit Pitch Command' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Sum: '<S63>/Sum' */
    Wind_Turbine_B.Sum_g = Wind_Turbine_B.parking_brake +
      Wind_Turbine_B.pitch_brake;

    /* Saturate: '<S63>/Saturation' */
    if (Wind_Turbine_B.Sum_g > Wind_Turbine_P.Saturation_UpperSat) {
      Wind_Turbine_B.Saturation_c = Wind_Turbine_P.Saturation_UpperSat;
    } else if (Wind_Turbine_B.Sum_g < Wind_Turbine_P.Saturation_LowerSat_m) {
      Wind_Turbine_B.Saturation_c = Wind_Turbine_P.Saturation_LowerSat_m;
    } else {
      Wind_Turbine_B.Saturation_c = Wind_Turbine_B.Sum_g;
    }

    /* End of Saturate: '<S63>/Saturation' */

    /* Gain: '<S63>/Engagement Pressure' */
    Bias = Wind_Turbine_P.WT_Params.Brakes.threshold_pressure * 4.0;
    Wind_Turbine_B.EngagementPressure = Bias * Wind_Turbine_B.Saturation_c;

    /* SimscapeInputBlock: '<S363>/INPUT_4_1_1' */
    if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
      Wind_Turbine_B.INPUT_4_1_1[0] = Wind_Turbine_B.EngagementPressure;
      Wind_Turbine_B.INPUT_4_1_1[1] = 0.0;
      Wind_Turbine_B.INPUT_4_1_1[2] = 0.0;
      Wind_Turbine_DW.INPUT_4_1_1_Discrete[0] = !(Wind_Turbine_B.INPUT_4_1_1[0] ==
        Wind_Turbine_DW.INPUT_4_1_1_Discrete[1]);
      Wind_Turbine_DW.INPUT_4_1_1_Discrete[1] = Wind_Turbine_B.INPUT_4_1_1[0];
      Wind_Turbine_B.INPUT_4_1_1[0] = Wind_Turbine_DW.INPUT_4_1_1_Discrete[1];
      Wind_Turbine_B.INPUT_4_1_1[3] = Wind_Turbine_DW.INPUT_4_1_1_Discrete[0];
    }

    /* End of SimscapeInputBlock: '<S363>/INPUT_4_1_1' */
  }

  /* Integrator: '<S72>/Integrator' */
  Wind_Turbine_B.Integrator_n = Wind_Turbine_X.Integrator_CSTATE_e;

  /* Gain: '<S72>/Gain' */
  Bias = 1.0 / Wind_Turbine_P.WT_Params.Generator.generator_time_constant;
  Wind_Turbine_B.Gain_l = Bias * Wind_Turbine_B.Integrator_n;

  /* SimscapeInputBlock: '<S363>/INPUT_5_1_1' */
  if (Wind_Turbine_DW.INPUT_5_1_1_FirstOutput == 0.0) {
    Wind_Turbine_DW.INPUT_5_1_1_FirstOutput = 1.0;
    Wind_Turbine_X.Wind_TurbineNacelleGeneratorFul = Wind_Turbine_B.Gain_l;
  }

  Wind_Turbine_B.INPUT_5_1_1[0] = Wind_Turbine_X.Wind_TurbineNacelleGeneratorFul;
  Wind_Turbine_B.INPUT_5_1_1[1] = (Wind_Turbine_B.Gain_l -
    Wind_Turbine_X.Wind_TurbineNacelleGeneratorFul) * 200.0;
  Wind_Turbine_B.INPUT_5_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_5_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S363>/INPUT_5_1_1' */

  /* RateTransition: '<S363>/RATE_TRANSITION_1_1_1' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_B.RATE_TRANSITION_1_1_1 = Wind_Turbine_B.OUTPUT_6_0[1];

    /* SimscapeInputBlock: '<S363>/INTERNAL_1_1_1' */
    if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
      Wind_Turbine_B.INTERNAL_1_1_1[0] = Wind_Turbine_B.RATE_TRANSITION_1_1_1;
      Wind_Turbine_B.INTERNAL_1_1_1[1] = 0.0;
      Wind_Turbine_B.INTERNAL_1_1_1[2] = 0.0;
      Wind_Turbine_DW.INTERNAL_1_1_1_Discrete[0] =
        !(Wind_Turbine_B.INTERNAL_1_1_1[0] ==
          Wind_Turbine_DW.INTERNAL_1_1_1_Discrete[1]);
      Wind_Turbine_DW.INTERNAL_1_1_1_Discrete[1] =
        Wind_Turbine_B.INTERNAL_1_1_1[0];
      Wind_Turbine_B.INTERNAL_1_1_1[0] =
        Wind_Turbine_DW.INTERNAL_1_1_1_Discrete[1];
      Wind_Turbine_B.INTERNAL_1_1_1[3] =
        Wind_Turbine_DW.INTERNAL_1_1_1_Discrete[0];
    }

    /* End of SimscapeInputBlock: '<S363>/INTERNAL_1_1_1' */

    /* SimscapeExecutionBlock: '<S363>/STATE_4' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_4_SimData;
    time_7 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_7;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 37;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_4_Discrete[0];
    simulationData->mData->mModeVector.mN = 16;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_4_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_j[0] = 0;
    tmp_i[0] = Wind_Turbine_B.INPUT_4_1_1[0];
    tmp_i[1] = Wind_Turbine_B.INPUT_4_1_1[1];
    tmp_i[2] = Wind_Turbine_B.INPUT_4_1_1[2];
    tmp_i[3] = Wind_Turbine_B.INPUT_4_1_1[3];
    tmp_j[1] = 4;
    tmp_i[4] = Wind_Turbine_B.INPUT_5_1_1[0];
    tmp_i[5] = Wind_Turbine_B.INPUT_5_1_1[1];
    tmp_i[6] = Wind_Turbine_B.INPUT_5_1_1[2];
    tmp_i[7] = Wind_Turbine_B.INPUT_5_1_1[3];
    tmp_j[2] = 8;
    tmp_i[8] = Wind_Turbine_B.INTERNAL_1_1_1[0];
    tmp_i[9] = Wind_Turbine_B.INTERNAL_1_1_1[1];
    tmp_i[10] = Wind_Turbine_B.INTERNAL_1_1_1[2];
    tmp_i[11] = Wind_Turbine_B.INTERNAL_1_1_1[3];
    tmp_j[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &tmp_i[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &tmp_j[0];
    simulationData->mData->mOutputs.mN = 38;
    simulationData->mData->mOutputs.mX = &Wind_Turbine_B.STATE_4[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    ok = rtmIsMajorTimeStep(Wind_Turbine_M);
    simulationData->mData->mIsFundamentalSampleHit = ok;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_4_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_4_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (ok) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S363>/STATE_4' */

    /* SimscapeExecutionBlock: '<S363>/OUTPUT_4_0' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_4_0_SimData;
    time_8 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_8;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.OUTPUT_4_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.OUTPUT_4_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_l[0] = 0;
    tmp_k[0] = Wind_Turbine_B.INPUT_4_1_1[0];
    tmp_k[1] = Wind_Turbine_B.INPUT_4_1_1[1];
    tmp_k[2] = Wind_Turbine_B.INPUT_4_1_1[2];
    tmp_k[3] = Wind_Turbine_B.INPUT_4_1_1[3];
    tmp_l[1] = 4;
    tmp_k[4] = Wind_Turbine_B.INPUT_5_1_1[0];
    tmp_k[5] = Wind_Turbine_B.INPUT_5_1_1[1];
    tmp_k[6] = Wind_Turbine_B.INPUT_5_1_1[2];
    tmp_k[7] = Wind_Turbine_B.INPUT_5_1_1[3];
    tmp_l[2] = 8;
    tmp_k[8] = Wind_Turbine_B.INTERNAL_1_1_1[0];
    tmp_k[9] = Wind_Turbine_B.INTERNAL_1_1_1[1];
    tmp_k[10] = Wind_Turbine_B.INTERNAL_1_1_1[2];
    tmp_k[11] = Wind_Turbine_B.INTERNAL_1_1_1[3];
    tmp_l[3] = 12;
    memcpy(&tmp_k[12], &Wind_Turbine_B.STATE_4[0], 38U * sizeof(real_T));
    tmp_l[4] = 50;
    simulationData->mData->mInputValues.mN = 50;
    simulationData->mData->mInputValues.mX = &tmp_k[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_l[0];
    simulationData->mData->mOutputs.mN = 4;
    simulationData->mData->mOutputs.mX = &Wind_Turbine_B.OUTPUT_4_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    ok = rtmIsMajorTimeStep(Wind_Turbine_M);
    simulationData->mData->mIsFundamentalSampleHit = ok;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_4_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_4_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (ok) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S363>/OUTPUT_4_0' */

    /* RateTransition: '<S363>/RATE_TRANSITION_2_1_1' */
    if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
      Wind_Turbine_B.RATE_TRANSITION_2_1_1 = Wind_Turbine_B.OUTPUT_4_0[3];
    }

    /* End of RateTransition: '<S363>/RATE_TRANSITION_2_1_1' */
  }

  /* End of RateTransition: '<S363>/RATE_TRANSITION_1_1_1' */

  /* SimscapeInputBlock: '<S363>/INTERNAL_2_1_1' */
  Wind_Turbine_B.INTERNAL_2_1_1[0] = Wind_Turbine_B.RATE_TRANSITION_2_1_1;
  Wind_Turbine_B.INTERNAL_2_1_1[1] = 0.0;
  Wind_Turbine_B.INTERNAL_2_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_DW.INTERNAL_2_1_1_Discrete[0] =
      !(Wind_Turbine_B.INTERNAL_2_1_1[0] ==
        Wind_Turbine_DW.INTERNAL_2_1_1_Discrete[1]);
    Wind_Turbine_DW.INTERNAL_2_1_1_Discrete[1] = Wind_Turbine_B.INTERNAL_2_1_1[0];
  }

  Wind_Turbine_B.INTERNAL_2_1_1[0] = Wind_Turbine_DW.INTERNAL_2_1_1_Discrete[1];
  Wind_Turbine_B.INTERNAL_2_1_1[3] = Wind_Turbine_DW.INTERNAL_2_1_1_Discrete[0];

  /* End of SimscapeInputBlock: '<S363>/INTERNAL_2_1_1' */

  /* RateTransition: '<S363>/RATE_TRANSITION_4_1_1' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_B.RATE_TRANSITION_4_1_1 = Wind_Turbine_B.OUTPUT_5_0[6];
  }

  /* End of RateTransition: '<S363>/RATE_TRANSITION_4_1_1' */

  /* SimscapeInputBlock: '<S363>/INTERNAL_4_1_1' */
  Wind_Turbine_B.INTERNAL_4_1_1[0] = Wind_Turbine_B.RATE_TRANSITION_4_1_1;
  Wind_Turbine_B.INTERNAL_4_1_1[1] = 0.0;
  Wind_Turbine_B.INTERNAL_4_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_DW.INTERNAL_4_1_1_Discrete[0] =
      !(Wind_Turbine_B.INTERNAL_4_1_1[0] ==
        Wind_Turbine_DW.INTERNAL_4_1_1_Discrete[1]);
    Wind_Turbine_DW.INTERNAL_4_1_1_Discrete[1] = Wind_Turbine_B.INTERNAL_4_1_1[0];
  }

  Wind_Turbine_B.INTERNAL_4_1_1[0] = Wind_Turbine_DW.INTERNAL_4_1_1_Discrete[1];
  Wind_Turbine_B.INTERNAL_4_1_1[3] = Wind_Turbine_DW.INTERNAL_4_1_1_Discrete[0];

  /* End of SimscapeInputBlock: '<S363>/INTERNAL_4_1_1' */

  /* RateTransition: '<S363>/RATE_TRANSITION_6_1_1' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_B.RATE_TRANSITION_6_1_1 = Wind_Turbine_B.OUTPUT_2_0[6];
  }

  /* End of RateTransition: '<S363>/RATE_TRANSITION_6_1_1' */

  /* SimscapeInputBlock: '<S363>/INTERNAL_6_1_1' */
  Wind_Turbine_B.INTERNAL_6_1_1[0] = Wind_Turbine_B.RATE_TRANSITION_6_1_1;
  Wind_Turbine_B.INTERNAL_6_1_1[1] = 0.0;
  Wind_Turbine_B.INTERNAL_6_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_DW.INTERNAL_6_1_1_Discrete[0] =
      !(Wind_Turbine_B.INTERNAL_6_1_1[0] ==
        Wind_Turbine_DW.INTERNAL_6_1_1_Discrete[1]);
    Wind_Turbine_DW.INTERNAL_6_1_1_Discrete[1] = Wind_Turbine_B.INTERNAL_6_1_1[0];
  }

  Wind_Turbine_B.INTERNAL_6_1_1[0] = Wind_Turbine_DW.INTERNAL_6_1_1_Discrete[1];
  Wind_Turbine_B.INTERNAL_6_1_1[3] = Wind_Turbine_DW.INTERNAL_6_1_1_Discrete[0];

  /* End of SimscapeInputBlock: '<S363>/INTERNAL_6_1_1' */

  /* RateTransition: '<S363>/RATE_TRANSITION_8_1_1' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_B.RATE_TRANSITION_8_1_1 = Wind_Turbine_B.OUTPUT_3_0[6];
  }

  /* End of RateTransition: '<S363>/RATE_TRANSITION_8_1_1' */

  /* SimscapeInputBlock: '<S363>/INTERNAL_8_1_1' */
  Wind_Turbine_B.INTERNAL_8_1_1[0] = Wind_Turbine_B.RATE_TRANSITION_8_1_1;
  Wind_Turbine_B.INTERNAL_8_1_1[1] = 0.0;
  Wind_Turbine_B.INTERNAL_8_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_DW.INTERNAL_8_1_1_Discrete[0] =
      !(Wind_Turbine_B.INTERNAL_8_1_1[0] ==
        Wind_Turbine_DW.INTERNAL_8_1_1_Discrete[1]);
    Wind_Turbine_DW.INTERNAL_8_1_1_Discrete[1] = Wind_Turbine_B.INTERNAL_8_1_1[0];
  }

  Wind_Turbine_B.INTERNAL_8_1_1[0] = Wind_Turbine_DW.INTERNAL_8_1_1_Discrete[1];
  Wind_Turbine_B.INTERNAL_8_1_1[3] = Wind_Turbine_DW.INTERNAL_8_1_1_Discrete[0];

  /* End of SimscapeInputBlock: '<S363>/INTERNAL_8_1_1' */

  /* RateTransition: '<S363>/RATE_TRANSITION_9_1_1' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_B.RATE_TRANSITION_9_1_1 = Wind_Turbine_B.OUTPUT_6_0[8];

    /* SimscapeInputBlock: '<S363>/INTERNAL_9_1_1' */
    if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
      Wind_Turbine_B.INTERNAL_9_1_1[0] = Wind_Turbine_B.RATE_TRANSITION_9_1_1;
      Wind_Turbine_B.INTERNAL_9_1_1[1] = 0.0;
      Wind_Turbine_B.INTERNAL_9_1_1[2] = 0.0;
      Wind_Turbine_DW.INTERNAL_9_1_1_Discrete[0] =
        !(Wind_Turbine_B.INTERNAL_9_1_1[0] ==
          Wind_Turbine_DW.INTERNAL_9_1_1_Discrete[1]);
      Wind_Turbine_DW.INTERNAL_9_1_1_Discrete[1] =
        Wind_Turbine_B.INTERNAL_9_1_1[0];
      Wind_Turbine_B.INTERNAL_9_1_1[0] =
        Wind_Turbine_DW.INTERNAL_9_1_1_Discrete[1];
      Wind_Turbine_B.INTERNAL_9_1_1[3] =
        Wind_Turbine_DW.INTERNAL_9_1_1_Discrete[0];
    }

    /* End of SimscapeInputBlock: '<S363>/INTERNAL_9_1_1' */
  }

  /* End of RateTransition: '<S363>/RATE_TRANSITION_9_1_1' */

  /* Gain: '<S287>/Gain' */
  Bias = 1.0 /
    Wind_Turbine_P.WT_Params.Yaw_Actuator.ideal_actuator_time_constant;

  /* Integrator: '<S287>/Integrator' */
  Wind_Turbine_B.Integrator_if[0] = Wind_Turbine_X.Integrator_CSTATE_a[0];

  /* Gain: '<S287>/Gain' */
  Wind_Turbine_B.Gain_lm[0] = Bias * Wind_Turbine_B.Integrator_if[0];

  /* Integrator: '<S287>/Integrator' */
  Wind_Turbine_B.Integrator_if[1] = Wind_Turbine_X.Integrator_CSTATE_a[1];

  /* Gain: '<S287>/Gain' */
  Wind_Turbine_B.Gain_lm[1] = Bias * Wind_Turbine_B.Integrator_if[1];

  /* Integrator: '<S287>/Integrator' */
  Wind_Turbine_B.Integrator_if[2] = Wind_Turbine_X.Integrator_CSTATE_a[2];

  /* Gain: '<S287>/Gain' */
  Wind_Turbine_B.Gain_lm[2] = Bias * Wind_Turbine_B.Integrator_if[2];

  /* Integrator: '<S287>/Integrator' */
  Wind_Turbine_B.Integrator_if[3] = Wind_Turbine_X.Integrator_CSTATE_a[3];

  /* Gain: '<S287>/Gain' */
  Wind_Turbine_B.Gain_lm[3] = Bias * Wind_Turbine_B.Integrator_if[3];

  /* SimscapeInputBlock: '<S363>/INPUT_15_1_1' */
  if (Wind_Turbine_DW.INPUT_15_1_1_FirstOutput == 0.0) {
    Wind_Turbine_DW.INPUT_15_1_1_FirstOutput = 1.0;
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_j = Wind_Turbine_B.Gain_lm[0];
  }

  Wind_Turbine_B.INPUT_15_1_1[0] =
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_j;
  Wind_Turbine_B.INPUT_15_1_1[1] = (Wind_Turbine_B.Gain_lm[0] -
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_j) * 200.0;
  Wind_Turbine_B.INPUT_15_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_15_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S363>/INPUT_15_1_1' */

  /* SimscapeInputBlock: '<S363>/INPUT_16_1_1' */
  if (Wind_Turbine_DW.INPUT_16_1_1_FirstOutput == 0.0) {
    Wind_Turbine_DW.INPUT_16_1_1_FirstOutput = 1.0;
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_m = Wind_Turbine_B.Gain_lm[1];
  }

  Wind_Turbine_B.INPUT_16_1_1[0] =
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_m;
  Wind_Turbine_B.INPUT_16_1_1[1] = (Wind_Turbine_B.Gain_lm[1] -
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_m) * 200.0;
  Wind_Turbine_B.INPUT_16_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_16_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S363>/INPUT_16_1_1' */

  /* SimscapeInputBlock: '<S363>/INPUT_17_1_1' */
  if (Wind_Turbine_DW.INPUT_17_1_1_FirstOutput == 0.0) {
    Wind_Turbine_DW.INPUT_17_1_1_FirstOutput = 1.0;
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_p = Wind_Turbine_B.Gain_lm[2];
  }

  Wind_Turbine_B.INPUT_17_1_1[0] =
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_p;
  Wind_Turbine_B.INPUT_17_1_1[1] = (Wind_Turbine_B.Gain_lm[2] -
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_p) * 200.0;
  Wind_Turbine_B.INPUT_17_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_17_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S363>/INPUT_17_1_1' */

  /* SimscapeInputBlock: '<S363>/INPUT_18_1_1' */
  if (Wind_Turbine_DW.INPUT_18_1_1_FirstOutput == 0.0) {
    Wind_Turbine_DW.INPUT_18_1_1_FirstOutput = 1.0;
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_a = Wind_Turbine_B.Gain_lm[3];
  }

  Wind_Turbine_B.INPUT_18_1_1[0] =
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_a;
  Wind_Turbine_B.INPUT_18_1_1[1] = (Wind_Turbine_B.Gain_lm[3] -
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_a) * 200.0;
  Wind_Turbine_B.INPUT_18_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_18_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S363>/INPUT_18_1_1' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* SimscapeExecutionBlock: '<S363>/STATE_1' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_1_SimData;
    time_9 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_9;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 110;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 8;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_1_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_n[0] = 0;
    tmp_m[0] = Wind_Turbine_B.INTERNAL_9_1_1[0];
    tmp_m[1] = Wind_Turbine_B.INTERNAL_9_1_1[1];
    tmp_m[2] = Wind_Turbine_B.INTERNAL_9_1_1[2];
    tmp_m[3] = Wind_Turbine_B.INTERNAL_9_1_1[3];
    tmp_n[1] = 4;
    tmp_m[4] = Wind_Turbine_B.INPUT_15_1_1[0];
    tmp_m[5] = Wind_Turbine_B.INPUT_15_1_1[1];
    tmp_m[6] = Wind_Turbine_B.INPUT_15_1_1[2];
    tmp_m[7] = Wind_Turbine_B.INPUT_15_1_1[3];
    tmp_n[2] = 8;
    tmp_m[8] = Wind_Turbine_B.INPUT_16_1_1[0];
    tmp_m[9] = Wind_Turbine_B.INPUT_16_1_1[1];
    tmp_m[10] = Wind_Turbine_B.INPUT_16_1_1[2];
    tmp_m[11] = Wind_Turbine_B.INPUT_16_1_1[3];
    tmp_n[3] = 12;
    tmp_m[12] = Wind_Turbine_B.INPUT_17_1_1[0];
    tmp_m[13] = Wind_Turbine_B.INPUT_17_1_1[1];
    tmp_m[14] = Wind_Turbine_B.INPUT_17_1_1[2];
    tmp_m[15] = Wind_Turbine_B.INPUT_17_1_1[3];
    tmp_n[4] = 16;
    tmp_m[16] = Wind_Turbine_B.INPUT_18_1_1[0];
    tmp_m[17] = Wind_Turbine_B.INPUT_18_1_1[1];
    tmp_m[18] = Wind_Turbine_B.INPUT_18_1_1[2];
    tmp_m[19] = Wind_Turbine_B.INPUT_18_1_1[3];
    tmp_n[5] = 20;
    simulationData->mData->mInputValues.mN = 20;
    simulationData->mData->mInputValues.mX = &tmp_m[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_n[0];
    simulationData->mData->mOutputs.mN = 118;
    simulationData->mData->mOutputs.mX = &Wind_Turbine_B.STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    ok = rtmIsMajorTimeStep(Wind_Turbine_M);
    simulationData->mData->mIsFundamentalSampleHit = ok;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_1_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (ok) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S363>/STATE_1' */

    /* SimscapeExecutionBlock: '<S363>/OUTPUT_1_0' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_1_0_SimData;
    time_a = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_a;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.OUTPUT_1_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_p[0] = 0;
    tmp_o[0] = Wind_Turbine_B.INTERNAL_9_1_1[0];
    tmp_o[1] = Wind_Turbine_B.INTERNAL_9_1_1[1];
    tmp_o[2] = Wind_Turbine_B.INTERNAL_9_1_1[2];
    tmp_o[3] = Wind_Turbine_B.INTERNAL_9_1_1[3];
    tmp_p[1] = 4;
    tmp_o[4] = Wind_Turbine_B.INPUT_15_1_1[0];
    tmp_o[5] = Wind_Turbine_B.INPUT_15_1_1[1];
    tmp_o[6] = Wind_Turbine_B.INPUT_15_1_1[2];
    tmp_o[7] = Wind_Turbine_B.INPUT_15_1_1[3];
    tmp_p[2] = 8;
    tmp_o[8] = Wind_Turbine_B.INPUT_16_1_1[0];
    tmp_o[9] = Wind_Turbine_B.INPUT_16_1_1[1];
    tmp_o[10] = Wind_Turbine_B.INPUT_16_1_1[2];
    tmp_o[11] = Wind_Turbine_B.INPUT_16_1_1[3];
    tmp_p[3] = 12;
    tmp_o[12] = Wind_Turbine_B.INPUT_17_1_1[0];
    tmp_o[13] = Wind_Turbine_B.INPUT_17_1_1[1];
    tmp_o[14] = Wind_Turbine_B.INPUT_17_1_1[2];
    tmp_o[15] = Wind_Turbine_B.INPUT_17_1_1[3];
    tmp_p[4] = 16;
    tmp_o[16] = Wind_Turbine_B.INPUT_18_1_1[0];
    tmp_o[17] = Wind_Turbine_B.INPUT_18_1_1[1];
    tmp_o[18] = Wind_Turbine_B.INPUT_18_1_1[2];
    tmp_o[19] = Wind_Turbine_B.INPUT_18_1_1[3];
    tmp_p[5] = 20;
    memcpy(&tmp_o[20], &Wind_Turbine_B.STATE_1[0], 118U * sizeof(real_T));
    tmp_p[6] = 138;
    simulationData->mData->mInputValues.mN = 138;
    simulationData->mData->mInputValues.mX = &tmp_o[0];
    simulationData->mData->mInputOffsets.mN = 7;
    simulationData->mData->mInputOffsets.mX = &tmp_p[0];
    simulationData->mData->mOutputs.mN = 17;
    simulationData->mData->mOutputs.mX = &Wind_Turbine_B.OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    ok = rtmIsMajorTimeStep(Wind_Turbine_M);
    simulationData->mData->mIsFundamentalSampleHit = ok;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_1_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (ok) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S363>/OUTPUT_1_0' */

    /* RateTransition: '<S363>/RATE_TRANSITION_10_1_1' */
    if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
      Wind_Turbine_B.RATE_TRANSITION_10_1_1 = Wind_Turbine_B.OUTPUT_1_0[0];
    }

    /* End of RateTransition: '<S363>/RATE_TRANSITION_10_1_1' */
  }

  /* SimscapeInputBlock: '<S363>/INTERNAL_10_1_1' */
  Wind_Turbine_B.INTERNAL_10_1_1[0] = Wind_Turbine_B.RATE_TRANSITION_10_1_1;
  Wind_Turbine_B.INTERNAL_10_1_1[1] = 0.0;
  Wind_Turbine_B.INTERNAL_10_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_DW.INTERNAL_10_1_1_Discrete[0] =
      !(Wind_Turbine_B.INTERNAL_10_1_1[0] ==
        Wind_Turbine_DW.INTERNAL_10_1_1_Discrete[1]);
    Wind_Turbine_DW.INTERNAL_10_1_1_Discrete[1] =
      Wind_Turbine_B.INTERNAL_10_1_1[0];
  }

  Wind_Turbine_B.INTERNAL_10_1_1[0] = Wind_Turbine_DW.INTERNAL_10_1_1_Discrete[1];
  Wind_Turbine_B.INTERNAL_10_1_1[3] = Wind_Turbine_DW.INTERNAL_10_1_1_Discrete[0];

  /* End of SimscapeInputBlock: '<S363>/INTERNAL_10_1_1' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Gain: '<S13>/Point of Application' incorporates:
     *  Constant: '<S13>/Blade Length'
     */
    Wind_Turbine_B.radius = Wind_Turbine_P.PointofApplication_Gain *
      Wind_Turbine_P.WT_Params.Blade.length;
  }

  /* Math: '<S16>/Math Function2' */
  Wind_Turbine_B.MathFunction2 = Wind_Turbine_B.FromWs[0] *
    Wind_Turbine_B.FromWs[0];

  /* Integrator: '<S19>/Integrator' */
  Wind_Turbine_B.Integrator_k = Wind_Turbine_X.Integrator_CSTATE_mj;

  /* Gain: '<S19>/Gain' */
  Bias = 1.0 / Wind_Turbine_P.WT_Params.Lift_Drag_Coeff.time_constant;
  Wind_Turbine_B.Gain_ep = Bias * Wind_Turbine_B.Integrator_k;

  /* Product: '<S13>/Divide' */
  Wind_Turbine_B.Divide = Wind_Turbine_B.Gain_ep * Wind_Turbine_B.radius;

  /* Math: '<S16>/Math Function1' */
  Wind_Turbine_B.MathFunction1 = Wind_Turbine_B.Divide * Wind_Turbine_B.Divide;

  /* Sum: '<S16>/Add' */
  Wind_Turbine_B.V2_c = Wind_Turbine_B.MathFunction2 +
    Wind_Turbine_B.MathFunction1;

  /* Product: '<S16>/Divide1' incorporates:
   *  Constant: '<S16>/f2'
   *  Constant: '<S16>/rho'
   */
  Wind_Turbine_B.Q = Wind_Turbine_P.f2_Value *
    Wind_Turbine_P.WT_Params.Air.Density * Wind_Turbine_B.V2_c;

  /* Gain: '<S16>/R*c' */
  Bias = Wind_Turbine_P.WT_Params.Blade.length *
    Wind_Turbine_P.WT_Params.Blade.width;
  Wind_Turbine_B.QS = Bias * Wind_Turbine_B.Q;

  /* Trigonometry: '<S15>/Trigonometric Function' */
  Wind_Turbine_B.TrigonometricFunction_d = rt_atan2d_snf(Wind_Turbine_B.FromWs[0],
    Wind_Turbine_B.Divide);

  /* Integrator: '<S18>/Integrator' */
  Wind_Turbine_B.Integrator_c = Wind_Turbine_X.Integrator_CSTATE_mt;

  /* Gain: '<S18>/Gain' */
  Bias = 1.0 / Wind_Turbine_P.WT_Params.Lift_Drag_Coeff.time_constant;
  Wind_Turbine_B.Gain_j = Bias * Wind_Turbine_B.Integrator_c;

  /* Sum: '<S15>/Subtract' */
  Wind_Turbine_B.alpha = Wind_Turbine_B.TrigonometricFunction_d -
    Wind_Turbine_B.Gain_j;

  /* Math: '<S20>/Math Function' incorporates:
   *  Constant: '<S20>/f1'
   */
  Wind_Turbine_B.MathFunction_f = rt_modd_snf(Wind_Turbine_B.alpha,
    Wind_Turbine_P.f1_Value);

  /* Lookup: '<S20>/lift polar' */
  Wind_Turbine_B.Cl = rt_Lookup(Wind_Turbine_P.WT_Params.NACA0015.AoA, 116,
    Wind_Turbine_B.MathFunction_f, Wind_Turbine_P.WT_Params.NACA0015.Cl);

  /* Product: '<S16>/Divide4' */
  Wind_Turbine_B.LiftForce = Wind_Turbine_B.QS * Wind_Turbine_B.Cl;

  /* Trigonometry: '<S21>/Trigonometric Function2' */
  Wind_Turbine_B.TrigonometricFunction2 = sin(Wind_Turbine_B.alpha);

  /* Product: '<S21>/Divide8' */
  Wind_Turbine_B.Liftsinalpha = Wind_Turbine_B.LiftForce *
    Wind_Turbine_B.TrigonometricFunction2;

  /* Lookup: '<S20>/drag polar' */
  Wind_Turbine_B.Cd = rt_Lookup(Wind_Turbine_P.WT_Params.NACA0015.AoA, 116,
    Wind_Turbine_B.MathFunction_f, Wind_Turbine_P.WT_Params.NACA0015.Cd);

  /* Product: '<S16>/Divide5' */
  Wind_Turbine_B.DragForce = Wind_Turbine_B.QS * Wind_Turbine_B.Cd;

  /* Trigonometry: '<S21>/Trigonometric Function1' */
  Wind_Turbine_B.TrigonometricFunction1 = cos(Wind_Turbine_B.alpha);

  /* Product: '<S21>/Divide9' */
  Wind_Turbine_B.Dragcosalpha = Wind_Turbine_B.DragForce *
    Wind_Turbine_B.TrigonometricFunction1;

  /* Sum: '<S21>/Subtract2' */
  Wind_Turbine_B.Z = Wind_Turbine_B.Liftsinalpha - Wind_Turbine_B.Dragcosalpha;

  /* Product: '<S21>/Divide12' */
  Wind_Turbine_B.L = Wind_Turbine_B.radius * Wind_Turbine_B.Z;

  /* Gain: '<S14>/Gain' */
  Wind_Turbine_B.Gain_gi = Wind_Turbine_P.Gain_Gain_f * Wind_Turbine_B.L;

  /* SimscapeInputBlock: '<S363>/INPUT_1_1_1' */
  Wind_Turbine_B.INPUT_1_1_1[0] = Wind_Turbine_B.Gain_gi;
  Wind_Turbine_B.INPUT_1_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_1_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_1_1_1[3] = 0.0;

  /* Product: '<S21>/Divide6' */
  Wind_Turbine_B.Liftcosalpha = Wind_Turbine_B.LiftForce *
    Wind_Turbine_B.TrigonometricFunction1;

  /* Product: '<S21>/Divide7' */
  Wind_Turbine_B.Dragsinalpha = Wind_Turbine_B.DragForce *
    Wind_Turbine_B.TrigonometricFunction2;

  /* Sum: '<S21>/Subtract1' */
  Wind_Turbine_B.X = Wind_Turbine_B.Liftcosalpha + Wind_Turbine_B.Dragsinalpha;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Gain: '<S21>/Gain' */
    Wind_Turbine_B.Gain_er = Wind_Turbine_P.Gain_Gain_g * Wind_Turbine_B.radius;
  }

  /* Product: '<S21>/Divide11' */
  Wind_Turbine_B.N = Wind_Turbine_B.X * Wind_Turbine_B.Gain_er;

  /* SimscapeInputBlock: '<S363>/INPUT_2_1_1' */
  Wind_Turbine_B.INPUT_2_1_1[0] = Wind_Turbine_B.N;
  Wind_Turbine_B.INPUT_2_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_2_1_1[2] = 0.0;
  Wind_Turbine_B.INPUT_2_1_1[3] = 0.0;

  /* SimscapeInputBlock: '<S363>/INPUT_3_1_1' incorporates:
   *  Constant: '<S14>/Pitch Moment'
   */
  Wind_Turbine_B.INPUT_3_1_1[0] = Wind_Turbine_P.PitchMoment_Value;
  Wind_Turbine_B.INPUT_3_1_1[1] = 0.0;
  Wind_Turbine_B.INPUT_3_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_DW.INPUT_3_1_1_Discrete[0] = !(Wind_Turbine_B.INPUT_3_1_1[0] ==
      Wind_Turbine_DW.INPUT_3_1_1_Discrete[1]);
    Wind_Turbine_DW.INPUT_3_1_1_Discrete[1] = Wind_Turbine_B.INPUT_3_1_1[0];
  }

  Wind_Turbine_B.INPUT_3_1_1[0] = Wind_Turbine_DW.INPUT_3_1_1_Discrete[1];
  Wind_Turbine_B.INPUT_3_1_1[3] = Wind_Turbine_DW.INPUT_3_1_1_Discrete[0];

  /* End of SimscapeInputBlock: '<S363>/INPUT_3_1_1' */

  /* SimscapeInputBlock: '<S363>/INPUT_1_2_1' */
  Wind_Turbine_B.INPUT_1_2_1[0] = Wind_Turbine_B.Gain_gi;
  Wind_Turbine_B.INPUT_1_2_1[1] = 0.0;
  Wind_Turbine_B.INPUT_1_2_1[2] = 0.0;
  Wind_Turbine_B.INPUT_1_2_1[3] = 0.0;

  /* SimscapeInputBlock: '<S363>/INPUT_2_2_1' */
  Wind_Turbine_B.INPUT_2_2_1[0] = Wind_Turbine_B.N;
  Wind_Turbine_B.INPUT_2_2_1[1] = 0.0;
  Wind_Turbine_B.INPUT_2_2_1[2] = 0.0;
  Wind_Turbine_B.INPUT_2_2_1[3] = 0.0;

  /* SimscapeInputBlock: '<S363>/INPUT_3_2_1' incorporates:
   *  Constant: '<S14>/Pitch Moment'
   */
  Wind_Turbine_B.INPUT_3_2_1[0] = Wind_Turbine_P.PitchMoment_Value;
  Wind_Turbine_B.INPUT_3_2_1[1] = 0.0;
  Wind_Turbine_B.INPUT_3_2_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_DW.INPUT_3_2_1_Discrete[0] = !(Wind_Turbine_B.INPUT_3_2_1[0] ==
      Wind_Turbine_DW.INPUT_3_2_1_Discrete[1]);
    Wind_Turbine_DW.INPUT_3_2_1_Discrete[1] = Wind_Turbine_B.INPUT_3_2_1[0];
  }

  Wind_Turbine_B.INPUT_3_2_1[0] = Wind_Turbine_DW.INPUT_3_2_1_Discrete[1];
  Wind_Turbine_B.INPUT_3_2_1[3] = Wind_Turbine_DW.INPUT_3_2_1_Discrete[0];

  /* End of SimscapeInputBlock: '<S363>/INPUT_3_2_1' */

  /* SimscapeInputBlock: '<S363>/INPUT_1_3_1' */
  Wind_Turbine_B.INPUT_1_3_1[0] = Wind_Turbine_B.Gain_gi;
  Wind_Turbine_B.INPUT_1_3_1[1] = 0.0;
  Wind_Turbine_B.INPUT_1_3_1[2] = 0.0;
  Wind_Turbine_B.INPUT_1_3_1[3] = 0.0;

  /* SimscapeInputBlock: '<S363>/INPUT_2_3_1' */
  Wind_Turbine_B.INPUT_2_3_1[0] = Wind_Turbine_B.N;
  Wind_Turbine_B.INPUT_2_3_1[1] = 0.0;
  Wind_Turbine_B.INPUT_2_3_1[2] = 0.0;
  Wind_Turbine_B.INPUT_2_3_1[3] = 0.0;

  /* SimscapeInputBlock: '<S363>/INPUT_3_3_1' incorporates:
   *  Constant: '<S14>/Pitch Moment'
   */
  Wind_Turbine_B.INPUT_3_3_1[0] = Wind_Turbine_P.PitchMoment_Value;
  Wind_Turbine_B.INPUT_3_3_1[1] = 0.0;
  Wind_Turbine_B.INPUT_3_3_1[2] = 0.0;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    Wind_Turbine_DW.INPUT_3_3_1_Discrete[0] = !(Wind_Turbine_B.INPUT_3_3_1[0] ==
      Wind_Turbine_DW.INPUT_3_3_1_Discrete[1]);
    Wind_Turbine_DW.INPUT_3_3_1_Discrete[1] = Wind_Turbine_B.INPUT_3_3_1[0];
  }

  Wind_Turbine_B.INPUT_3_3_1[0] = Wind_Turbine_DW.INPUT_3_3_1_Discrete[1];
  Wind_Turbine_B.INPUT_3_3_1[3] = Wind_Turbine_DW.INPUT_3_3_1_Discrete[0];

  /* End of SimscapeInputBlock: '<S363>/INPUT_3_3_1' */

  /* SimscapeExecutionBlock: '<S363>/OUTPUT_6_1' */
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_6_1_SimData;
  time_b = Wind_Turbine_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_b;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.OUTPUT_6_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.OUTPUT_6_1_Modes;
  ok = false;
  simulationData->mData->mFoundZcEvents = ok;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(Wind_Turbine_M);
  ok = false;
  simulationData->mData->mIsSolverAssertCheck = ok;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_r[0] = 0;
  tmp_q[0] = Wind_Turbine_B.INTERNAL_2_1_1[0];
  tmp_q[1] = Wind_Turbine_B.INTERNAL_2_1_1[1];
  tmp_q[2] = Wind_Turbine_B.INTERNAL_2_1_1[2];
  tmp_q[3] = Wind_Turbine_B.INTERNAL_2_1_1[3];
  tmp_r[1] = 4;
  tmp_q[4] = Wind_Turbine_B.INTERNAL_4_1_1[0];
  tmp_q[5] = Wind_Turbine_B.INTERNAL_4_1_1[1];
  tmp_q[6] = Wind_Turbine_B.INTERNAL_4_1_1[2];
  tmp_q[7] = Wind_Turbine_B.INTERNAL_4_1_1[3];
  tmp_r[2] = 8;
  tmp_q[8] = Wind_Turbine_B.INTERNAL_6_1_1[0];
  tmp_q[9] = Wind_Turbine_B.INTERNAL_6_1_1[1];
  tmp_q[10] = Wind_Turbine_B.INTERNAL_6_1_1[2];
  tmp_q[11] = Wind_Turbine_B.INTERNAL_6_1_1[3];
  tmp_r[3] = 12;
  tmp_q[12] = Wind_Turbine_B.INTERNAL_8_1_1[0];
  tmp_q[13] = Wind_Turbine_B.INTERNAL_8_1_1[1];
  tmp_q[14] = Wind_Turbine_B.INTERNAL_8_1_1[2];
  tmp_q[15] = Wind_Turbine_B.INTERNAL_8_1_1[3];
  tmp_r[4] = 16;
  tmp_q[16] = Wind_Turbine_B.INTERNAL_10_1_1[0];
  tmp_q[17] = Wind_Turbine_B.INTERNAL_10_1_1[1];
  tmp_q[18] = Wind_Turbine_B.INTERNAL_10_1_1[2];
  tmp_q[19] = Wind_Turbine_B.INTERNAL_10_1_1[3];
  tmp_r[5] = 20;
  tmp_q[20] = Wind_Turbine_B.INPUT_1_1_1[0];
  tmp_q[21] = Wind_Turbine_B.INPUT_1_1_1[1];
  tmp_q[22] = Wind_Turbine_B.INPUT_1_1_1[2];
  tmp_q[23] = Wind_Turbine_B.INPUT_1_1_1[3];
  tmp_r[6] = 24;
  tmp_q[24] = Wind_Turbine_B.INPUT_2_1_1[0];
  tmp_q[25] = Wind_Turbine_B.INPUT_2_1_1[1];
  tmp_q[26] = Wind_Turbine_B.INPUT_2_1_1[2];
  tmp_q[27] = Wind_Turbine_B.INPUT_2_1_1[3];
  tmp_r[7] = 28;
  tmp_q[28] = Wind_Turbine_B.INPUT_3_1_1[0];
  tmp_q[29] = Wind_Turbine_B.INPUT_3_1_1[1];
  tmp_q[30] = Wind_Turbine_B.INPUT_3_1_1[2];
  tmp_q[31] = Wind_Turbine_B.INPUT_3_1_1[3];
  tmp_r[8] = 32;
  tmp_q[32] = Wind_Turbine_B.INPUT_1_2_1[0];
  tmp_q[33] = Wind_Turbine_B.INPUT_1_2_1[1];
  tmp_q[34] = Wind_Turbine_B.INPUT_1_2_1[2];
  tmp_q[35] = Wind_Turbine_B.INPUT_1_2_1[3];
  tmp_r[9] = 36;
  tmp_q[36] = Wind_Turbine_B.INPUT_2_2_1[0];
  tmp_q[37] = Wind_Turbine_B.INPUT_2_2_1[1];
  tmp_q[38] = Wind_Turbine_B.INPUT_2_2_1[2];
  tmp_q[39] = Wind_Turbine_B.INPUT_2_2_1[3];
  tmp_r[10] = 40;
  tmp_q[40] = Wind_Turbine_B.INPUT_3_2_1[0];
  tmp_q[41] = Wind_Turbine_B.INPUT_3_2_1[1];
  tmp_q[42] = Wind_Turbine_B.INPUT_3_2_1[2];
  tmp_q[43] = Wind_Turbine_B.INPUT_3_2_1[3];
  tmp_r[11] = 44;
  tmp_q[44] = Wind_Turbine_B.INPUT_1_3_1[0];
  tmp_q[45] = Wind_Turbine_B.INPUT_1_3_1[1];
  tmp_q[46] = Wind_Turbine_B.INPUT_1_3_1[2];
  tmp_q[47] = Wind_Turbine_B.INPUT_1_3_1[3];
  tmp_r[12] = 48;
  tmp_q[48] = Wind_Turbine_B.INPUT_2_3_1[0];
  tmp_q[49] = Wind_Turbine_B.INPUT_2_3_1[1];
  tmp_q[50] = Wind_Turbine_B.INPUT_2_3_1[2];
  tmp_q[51] = Wind_Turbine_B.INPUT_2_3_1[3];
  tmp_r[13] = 52;
  tmp_q[52] = Wind_Turbine_B.INPUT_3_3_1[0];
  tmp_q[53] = Wind_Turbine_B.INPUT_3_3_1[1];
  tmp_q[54] = Wind_Turbine_B.INPUT_3_3_1[2];
  tmp_q[55] = Wind_Turbine_B.INPUT_3_3_1[3];
  tmp_r[14] = 56;
  memcpy(&tmp_q[56], &Wind_Turbine_B.STATE_6[0], 28U * sizeof(real_T));
  tmp_r[15] = 84;
  simulationData->mData->mInputValues.mN = 84;
  simulationData->mData->mInputValues.mX = &tmp_q[0];
  simulationData->mData->mInputOffsets.mN = 16;
  simulationData->mData->mInputOffsets.mX = &tmp_r[0];
  simulationData->mData->mOutputs.mN = 18;
  simulationData->mData->mOutputs.mX = &Wind_Turbine_B.OUTPUT_6_1[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_6_1_Simulator;
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.OUTPUT_6_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  i = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (i != 0) {
    ok = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
    if (ok) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Wind_Turbine_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S363>/OUTPUT_6_1' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Gain: '<S51>/radps to rpm' */
    Wind_Turbine_B.radpstorpm = Wind_Turbine_P.radps2rpm *
      Wind_Turbine_B.OUTPUT_4_0[0];

    /* Saturate: '<S355>/Saturation' */
    if (Wind_Turbine_B.radpstorpm > Wind_Turbine_P.Saturation_UpperSat_h) {
      Wind_Turbine_B.Saturation_i = Wind_Turbine_P.Saturation_UpperSat_h;
    } else if (Wind_Turbine_B.radpstorpm < Wind_Turbine_P.Saturation_LowerSat_mc)
    {
      Wind_Turbine_B.Saturation_i = Wind_Turbine_P.Saturation_LowerSat_mc;
    } else {
      Wind_Turbine_B.Saturation_i = Wind_Turbine_B.radpstorpm;
    }

    /* End of Saturate: '<S355>/Saturation' */

    /* Gain: '<S71>/radps2rpm' */
    Wind_Turbine_B.TurbineSpeedrpm = Wind_Turbine_P.radps2rpm *
      Wind_Turbine_B.OUTPUT_4_0[2];

    /* Product: '<S355>/Divide' */
    Wind_Turbine_B.Divide_k = 1.0 / Wind_Turbine_B.Saturation_i *
      Wind_Turbine_B.TurbineSpeedrpm;

    /* Gain: '<S355>/rpm2radps' */
    Bias = 1.0 / Wind_Turbine_P.radps2rpm;
    Wind_Turbine_B.rpm2radps = Bias * Wind_Turbine_B.TurbineSpeedrpm;

    /* Gain: '<S355>/radps2pu' */
    Wind_Turbine_B.GenSpdpu = Wind_Turbine_P.WT_Params.Generator.radps2pu *
      Wind_Turbine_B.rpm2radps;
  }

  /* Integrator: '<S361>/integrator' */
  Wind_Turbine_B.integrator = Wind_Turbine_X.integrator_CSTATE;

  /* TransportDelay: '<S361>/Transport Delay' */
  {
    real_T **uBuffer = (real_T**)
      &Wind_Turbine_DW.TransportDelay_PWORK.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)
      &Wind_Turbine_DW.TransportDelay_PWORK.TUbufferPtrs[1];
    real_T simTime = Wind_Turbine_M->Timing.t[0];
    real_T tMinusDelay = simTime - ( 1.0 /
      Wind_Turbine_P.WT_Params.Generator.frequency );
    Wind_Turbine_B.TransportDelay = rt_TDelayInterpolate(
      tMinusDelay,
      0.0,
      *tBuffer,
      *uBuffer,
      Wind_Turbine_DW.TransportDelay_IWORK.CircularBufSize,
      &Wind_Turbine_DW.TransportDelay_IWORK.Last,
      Wind_Turbine_DW.TransportDelay_IWORK.Tail,
      Wind_Turbine_DW.TransportDelay_IWORK.Head,
      Wind_Turbine_P.TransportDelay_InitOutput,
      0,
      0);
  }

  /* Step: '<S361>/Step' */
  uTmp_idx_0 = Wind_Turbine_M->Timing.t[0];
  Bias = 1.0 / Wind_Turbine_P.WT_Params.Generator.frequency +
    2.2204460492503131E-16;
  if (uTmp_idx_0 < Bias) {
    Wind_Turbine_B.Step = Wind_Turbine_P.Step_Y0;
  } else {
    Wind_Turbine_B.Step = Wind_Turbine_P.Step_YFinal;
  }

  /* End of Step: '<S361>/Step' */

  /* Switch: '<S361>/Switch' incorporates:
   *  Constant: '<S359>/Constant1'
   */
  if (Wind_Turbine_B.Step >= Wind_Turbine_P.Switch_Threshold_k) {
    /* Sum: '<S361>/Sum' */
    Wind_Turbine_B.Sum_az = Wind_Turbine_B.integrator -
      Wind_Turbine_B.TransportDelay;

    /* Gain: '<S361>/Gain' */
    Bias = 1.0 / (1.0 / Wind_Turbine_P.WT_Params.Generator.frequency);
    Wind_Turbine_B.Gain_k = Bias * Wind_Turbine_B.Sum_az;
    Wind_Turbine_B.Switch = Wind_Turbine_B.Gain_k;
  } else {
    Wind_Turbine_B.Switch = Wind_Turbine_P.Constant1_Value_g;
  }

  /* End of Switch: '<S361>/Switch' */

  /* Integrator: '<S362>/integrator' */
  Wind_Turbine_B.integrator_h = Wind_Turbine_X.integrator_CSTATE_g;

  /* TransportDelay: '<S362>/Transport Delay' */
  {
    real_T **uBuffer = (real_T**)
      &Wind_Turbine_DW.TransportDelay_PWORK_h.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)
      &Wind_Turbine_DW.TransportDelay_PWORK_h.TUbufferPtrs[1];
    real_T simTime = Wind_Turbine_M->Timing.t[0];
    real_T tMinusDelay = simTime - ( 1.0 /
      Wind_Turbine_P.WT_Params.Generator.frequency );
    Wind_Turbine_B.TransportDelay_l = rt_TDelayInterpolate(
      tMinusDelay,
      0.0,
      *tBuffer,
      *uBuffer,
      Wind_Turbine_DW.TransportDelay_IWORK_a.CircularBufSize,
      &Wind_Turbine_DW.TransportDelay_IWORK_a.Last,
      Wind_Turbine_DW.TransportDelay_IWORK_a.Tail,
      Wind_Turbine_DW.TransportDelay_IWORK_a.Head,
      Wind_Turbine_P.TransportDelay_InitOutput_e,
      0,
      0);
  }

  /* Step: '<S362>/Step' */
  uTmp_idx_0 = Wind_Turbine_M->Timing.t[0];
  Bias = 1.0 / Wind_Turbine_P.WT_Params.Generator.frequency +
    2.2204460492503131E-16;
  if (uTmp_idx_0 < Bias) {
    Wind_Turbine_B.Step_p = Wind_Turbine_P.Step_Y0_g;
  } else {
    Wind_Turbine_B.Step_p = Wind_Turbine_P.Step_YFinal_h;
  }

  /* End of Step: '<S362>/Step' */

  /* Switch: '<S362>/Switch' incorporates:
   *  Constant: '<S359>/Constant1'
   */
  if (Wind_Turbine_B.Step_p >= Wind_Turbine_P.Switch_Threshold_f) {
    /* Sum: '<S362>/Sum' */
    Wind_Turbine_B.Sum_no = Wind_Turbine_B.integrator_h -
      Wind_Turbine_B.TransportDelay_l;

    /* Gain: '<S362>/Gain' */
    Bias = 1.0 / (1.0 / Wind_Turbine_P.WT_Params.Generator.frequency);
    Wind_Turbine_B.Gain_p = Bias * Wind_Turbine_B.Sum_no;
    Wind_Turbine_B.Switch_c = Wind_Turbine_B.Gain_p;
  } else {
    Wind_Turbine_B.Switch_c = Wind_Turbine_P.Constant1_Value_g;
  }

  /* End of Switch: '<S362>/Switch' */

  /* Outputs for Enabled SubSystem: '<S87>/Saturation' incorporates:
   *  EnablePort: '<S92>/Enable'
   */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
      /* Constant: '<S87>/Constant' */
      Wind_Turbine_DW.Saturation_MODE = (Wind_Turbine_P.Constant_Value > 0.0);
    }
  }

  /* End of Outputs for SubSystem: '<S87>/Saturation' */

  /* Integrator: '<S93>/Integrator' */
  Wind_Turbine_B.Integrator_pj[0] = Wind_Turbine_X.Integrator_CSTATE_e1[0];
  Wind_Turbine_B.Integrator_pj[1] = Wind_Turbine_X.Integrator_CSTATE_e1[1];
  Wind_Turbine_B.Integrator_pj[2] = Wind_Turbine_X.Integrator_CSTATE_e1[2];
  Wind_Turbine_B.Integrator_pj[3] = Wind_Turbine_X.Integrator_CSTATE_e1[3];

  /* Outputs for Enabled SubSystem: '<S87>/Saturation' incorporates:
   *  EnablePort: '<S92>/Enable'
   */
  if (Wind_Turbine_DW.Saturation_MODE) {
    /* Integrator: '<S96>/Integrator' */
    Wind_Turbine_B.Integrator_g = Wind_Turbine_X.Integrator_CSTATE_g;

    /* SignalConversion generated from: '<S94>/Math Function' incorporates:
     *  Constant: '<S94>/u2'
     *
     * About SignalConversion generated from '<S94>/Math Function':
     *  Operator: reciprocal
     */
    Wind_Turbine_B.TmpSignalConversionAtMathFuncti[0] = Wind_Turbine_P.u2_Value
      [0];
    Wind_Turbine_B.TmpSignalConversionAtMathFuncti[1] = Wind_Turbine_P.u2_Value
      [1];
    Wind_Turbine_B.TmpSignalConversionAtMathFuncti[2] =
      Wind_Turbine_B.Integrator_g;

    /* Math: '<S94>/Math Function'
     *
     * About '<S94>/Math Function':
     *  Operator: reciprocal
     */
    uTmp_idx_0 = Wind_Turbine_B.TmpSignalConversionAtMathFuncti[0];
    uTmp_idx_0 = 1.0 / uTmp_idx_0;
    Wind_Turbine_B.MathFunction_a[0] = uTmp_idx_0;
    uTmp_idx_0 = Wind_Turbine_B.TmpSignalConversionAtMathFuncti[1];
    uTmp_idx_0 = 1.0 / uTmp_idx_0;
    Wind_Turbine_B.MathFunction_a[1] = uTmp_idx_0;
    uTmp_idx_0 = Wind_Turbine_B.TmpSignalConversionAtMathFuncti[2];
    uTmp_idx_0 = 1.0 / uTmp_idx_0;
    Wind_Turbine_B.MathFunction_a[2] = uTmp_idx_0;

    /* Sum: '<S94>/Sum2' */
    Bias = Wind_Turbine_B.MathFunction_a[0];
    Bias += Wind_Turbine_B.MathFunction_a[1];
    Bias += Wind_Turbine_B.MathFunction_a[2];
    Wind_Turbine_B.Sum2_h = Bias;

    /* Math: '<S94>/Math Function1'
     *
     * About '<S94>/Math Function1':
     *  Operator: reciprocal
     */
    Bias = Wind_Turbine_B.Sum2_h;
    Wind_Turbine_B.MathFunction1_m = 1.0 / Bias;

    /* Product: '<S97>/Product2' incorporates:
     *  Constant: '<S97>/u1'
     */
    Wind_Turbine_B.Product2_p[0] = Wind_Turbine_P.u1_Value[0] *
      Wind_Turbine_B.MathFunction1_m;
    Wind_Turbine_B.Product2_p[1] = Wind_Turbine_P.u1_Value[1] *
      Wind_Turbine_B.MathFunction1_m;

    /* Product: '<S97>/Product' */
    Wind_Turbine_B.Product[0] = Wind_Turbine_B.Integrator_pj[0] *
      Wind_Turbine_B.Product2_p[0];
    Wind_Turbine_B.Product[1] = Wind_Turbine_B.Integrator_pj[2] *
      Wind_Turbine_B.Product2_p[1];

    /* Sum: '<S97>/Sum2' */
    Bias = Wind_Turbine_B.Product[0];
    Bias += Wind_Turbine_B.Product[1];
    Wind_Turbine_B.phimq = Bias;

    /* Product: '<S97>/Product1' */
    Wind_Turbine_B.Product1_p[0] = Wind_Turbine_B.Integrator_pj[1] *
      Wind_Turbine_B.Product2_p[0];
    Wind_Turbine_B.Product1_p[1] = Wind_Turbine_B.Integrator_pj[3] *
      Wind_Turbine_B.Product2_p[1];

    /* Sum: '<S97>/Sum1' */
    Bias = Wind_Turbine_B.Product1_p[0];
    Bias += Wind_Turbine_B.Product1_p[1];
    Wind_Turbine_B.phimd = Bias;

    /* Math: '<S92>/Math Function' */
    Wind_Turbine_B.Phisat = rt_hypotd_snf(Wind_Turbine_B.phimq,
      Wind_Turbine_B.phimd);

    /* Lookup_n-D: '<S92>/1-D Lookup Table' */
    Wind_Turbine_B.Isat = look1_pbinlxpw(Wind_Turbine_B.Phisat,
      Wind_Turbine_P.uDLookupTable_bp01Data,
      Wind_Turbine_P.uDLookupTable_tableData, &Wind_Turbine_DW.m_bpIndex, 1U);

    /* Switch: '<S92>/Switch' incorporates:
     *  Constant: '<S92>/Constant1'
     */
    if (Wind_Turbine_B.Isat != 0.0) {
      /* Product: '<S92>/Product' */
      Wind_Turbine_B.Lm_l = Wind_Turbine_B.Phisat / Wind_Turbine_B.Isat;
      Wind_Turbine_B.Lm = Wind_Turbine_B.Lm_l;
    } else {
      Wind_Turbine_B.Lm = Wind_Turbine_P.Constant1_Value;
    }

    /* End of Switch: '<S92>/Switch' */

    /* Assignment: '<S95>/Lm in rows[1,3] & col[1,3]' incorporates:
     *  Constant: '<S95>/u1'
     */
    memcpy(&Wind_Turbine_B.Lminrows13col13[0], &Wind_Turbine_P.u1_Value_b[0],
           sizeof(real_T) << 4U);
    Wind_Turbine_B.Lminrows13col13[0] = Wind_Turbine_B.Lm;
    Wind_Turbine_B.Lminrows13col13[2] = Wind_Turbine_B.Lm;
    Wind_Turbine_B.Lminrows13col13[8] = Wind_Turbine_B.Lm;
    Wind_Turbine_B.Lminrows13col13[10] = Wind_Turbine_B.Lm;

    /* Assignment: '<S95>/Lm in rows[2,4] & col[2,4]' */
    memcpy(&Wind_Turbine_B.Lminrows24col24[0], &Wind_Turbine_B.Lminrows13col13[0],
           sizeof(real_T) << 4U);
    Wind_Turbine_B.Lminrows24col24[5] = Wind_Turbine_B.Lm;
    Wind_Turbine_B.Lminrows24col24[7] = Wind_Turbine_B.Lm;
    Wind_Turbine_B.Lminrows24col24[13] = Wind_Turbine_B.Lm;
    Wind_Turbine_B.Lminrows24col24[15] = Wind_Turbine_B.Lm;

    /* Sum: '<S95>/Sum2' incorporates:
     *  Constant: '<S95>/u5'
     */
    for (i = 0; i < 16; i++) {
      Wind_Turbine_B.Sum2_b[i] = Wind_Turbine_B.Lminrows24col24[i] +
        Wind_Turbine_P.u5_Value[i];
    }

    /* End of Sum: '<S95>/Sum2' */

    /* Product: '<S92>/inversion' */
    rt_invd4x4_snf(Wind_Turbine_B.Sum2_b, Wind_Turbine_B.Linv_b);

    /* Product: '<S92>/Product1' incorporates:
     *  Constant: '<S92>/u1'
     */
    memcpy(&tmp_s[0], &Wind_Turbine_P.u1_Value_i[0], sizeof(real_T) << 4U);
    parameterBundle_mRealParameters = &Wind_Turbine_B.Linv_b[0];
    for (i = 0; i < 4; i++) {
      for (i_0 = 0; i_0 < 4; i_0++) {
        Wind_Turbine_B.RLinv_n[i_0 + (i << 2)] = 0.0;
        Wind_Turbine_B.RLinv_n[i_0 + (i << 2)] +=
          parameterBundle_mRealParameters[i << 2] * tmp_s[i_0];
        Wind_Turbine_B.RLinv_n[i_0 + (i << 2)] +=
          parameterBundle_mRealParameters[(i << 2) + 1] * tmp_s[i_0 + 4];
        Wind_Turbine_B.RLinv_n[i_0 + (i << 2)] +=
          parameterBundle_mRealParameters[(i << 2) + 2] * tmp_s[i_0 + 8];
        Wind_Turbine_B.RLinv_n[i_0 + (i << 2)] +=
          parameterBundle_mRealParameters[(i << 2) + 3] * tmp_s[i_0 + 12];
      }
    }

    /* End of Product: '<S92>/Product1' */

    /* Sum: '<S96>/Add' */
    Wind_Turbine_B.Add = Wind_Turbine_B.Lm - Wind_Turbine_B.Integrator_g;

    /* Gain: '<S96>/1//T (T= 1e-6s)' */
    Wind_Turbine_B.uTT1e6s = Wind_Turbine_P.uTT1e6s_Gain * Wind_Turbine_B.Add;
    if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
      srUpdateBC(Wind_Turbine_DW.Saturation_SubsysRanBC);
    }
  }

  /* End of Outputs for SubSystem: '<S87>/Saturation' */
  for (i = 0; i < 16; i++) {
    /* Switch: '<S87>/Switch' incorporates:
     *  Constant: '<S87>/Constant1'
     *  Constant: '<S87>/Constant2'
     */
    if (Wind_Turbine_P.Constant1_Value_h >= Wind_Turbine_P.Switch_Threshold_o) {
      Wind_Turbine_B.Linv[i] = Wind_Turbine_B.Linv_b[i];
    } else {
      Wind_Turbine_B.Linv[i] = Wind_Turbine_P.Constant2_Value_j[i];
    }

    /* End of Switch: '<S87>/Switch' */

    /* Product: '<S87>/Product3' */
    tmp_s[i] = Wind_Turbine_B.Linv[i];
  }

  /* Product: '<S87>/Product3' */
  uTmp_idx_0 = Wind_Turbine_B.Integrator_pj[0];
  Bias = Wind_Turbine_B.Integrator_pj[1];
  tmpForInput_idx_1_re = Wind_Turbine_B.Integrator_pj[2];
  tmpForInput_idx_1_im = Wind_Turbine_B.Integrator_pj[3];
  for (i = 0; i < 4; i++) {
    bi = tmp_s[i] * uTmp_idx_0;
    bi += tmp_s[i + 4] * Bias;
    bi += tmp_s[i + 8] * tmpForInput_idx_1_re;
    bi += tmp_s[i + 12] * tmpForInput_idx_1_im;
    Wind_Turbine_B.Product3_l[i] = bi;
  }

  /* RealImagToComplex: '<S90>/Real-Imag to Complex' */
  Wind_Turbine_B.I1.re = Wind_Turbine_B.Product3_l[1];
  Wind_Turbine_B.I1.im = Wind_Turbine_B.Product3_l[0];

  /* Integrator: '<S88>/Integrator' */
  Wind_Turbine_B.Iqds2[0] = Wind_Turbine_X.Integrator_CSTATE_mr[0];
  Wind_Turbine_B.Iqds2[1] = Wind_Turbine_X.Integrator_CSTATE_mr[1];

  /* RealImagToComplex: '<S88>/Real-Imag to Complex1' */
  Wind_Turbine_B.RealImagtoComplex1.re = Wind_Turbine_B.Iqds2[1];
  Wind_Turbine_B.RealImagtoComplex1.im = Wind_Turbine_B.Iqds2[0];

  /* Sum: '<S90>/Sum3' */
  Wind_Turbine_B.Sum3.re = Wind_Turbine_B.I1.re +
    Wind_Turbine_B.RealImagtoComplex1.re;
  Wind_Turbine_B.Sum3.im = Wind_Turbine_B.I1.im +
    Wind_Turbine_B.RealImagtoComplex1.im;

  /* Gain: '<S90>/a^2' */
  uTmp_idx_0 = Wind_Turbine_P.a2_Gain.re * Wind_Turbine_B.I1.re -
    Wind_Turbine_P.a2_Gain.im * Wind_Turbine_B.I1.im;
  tmpForInput_idx_1_re = Wind_Turbine_P.a2_Gain.re * Wind_Turbine_B.I1.im +
    Wind_Turbine_P.a2_Gain.im * Wind_Turbine_B.I1.re;
  Wind_Turbine_B.a2.re = uTmp_idx_0;
  Wind_Turbine_B.a2.im = tmpForInput_idx_1_re;

  /* Gain: '<S90>/a' */
  uTmp_idx_0 = Wind_Turbine_P.a_Gain.re * Wind_Turbine_B.RealImagtoComplex1.re -
    Wind_Turbine_P.a_Gain.im * Wind_Turbine_B.RealImagtoComplex1.im;
  tmpForInput_idx_1_re = Wind_Turbine_P.a_Gain.re *
    Wind_Turbine_B.RealImagtoComplex1.im + Wind_Turbine_P.a_Gain.im *
    Wind_Turbine_B.RealImagtoComplex1.re;
  Wind_Turbine_B.a.re = uTmp_idx_0;
  Wind_Turbine_B.a.im = tmpForInput_idx_1_re;

  /* Sum: '<S90>/Sum1' */
  Wind_Turbine_B.Sum1.re = Wind_Turbine_B.a2.re + Wind_Turbine_B.a.re;
  Wind_Turbine_B.Sum1.im = Wind_Turbine_B.a2.im + Wind_Turbine_B.a.im;

  /* Gain: '<S81>/ib' */
  Wind_Turbine_B.ib[0].re = Wind_Turbine_P.ib_Gain * Wind_Turbine_B.Sum3.re;
  Wind_Turbine_B.ib[0].im = Wind_Turbine_P.ib_Gain * Wind_Turbine_B.Sum3.im;
  Wind_Turbine_B.ib[1].re = Wind_Turbine_P.ib_Gain * Wind_Turbine_B.Sum1.re;
  Wind_Turbine_B.ib[1].im = Wind_Turbine_P.ib_Gain * Wind_Turbine_B.Sum1.im;

  /* Clock: '<S41>/Clock' */
  Wind_Turbine_B.Clock = Wind_Turbine_M->Timing.t[0];

  /* Lookup: '<S41>/Look-Up Table' */
  Wind_Turbine_B.LookUpTable = rt_Lookup(Wind_Turbine_P.LookUpTable_XData, 6,
    Wind_Turbine_B.Clock, Wind_Turbine_P.LookUpTable_YData);
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* RelationalOperator: '<S36>/Relational Operator3' incorporates:
     *  Constant: '<S36>/Constant6'
     *  Constant: '<S36>/valp_nom5'
     */
    Wind_Turbine_B.RelationalOperator3 = (Wind_Turbine_P.valp_nom5_Value ==
      Wind_Turbine_P.Constant6_Value);

    /* RelationalOperator: '<S36>/Relational Operator' incorporates:
     *  Constant: '<S36>/Constant'
     *  Constant: '<S36>/valp_nom3'
     */
    Wind_Turbine_B.Amplitude = (Wind_Turbine_P.Grid_VariationEntity ==
      Wind_Turbine_P.Constant_Value_i);

    /* Logic: '<S36>/Logical Operator1' */
    Wind_Turbine_B.LogicalOperator1_j = (Wind_Turbine_B.RelationalOperator3 &&
      Wind_Turbine_B.Amplitude);
  }

  /* Step: '<S40>/Step1' */
  uTmp_idx_0 = Wind_Turbine_M->Timing.t[0];
  if (uTmp_idx_0 < Wind_Turbine_P.VariationSubSystem_Toff_Variati) {
    Wind_Turbine_B.Toff = Wind_Turbine_P.Step1_Y0;
  } else {
    Wind_Turbine_B.Toff = Wind_Turbine_P.Step1_YFinal;
  }

  /* End of Step: '<S40>/Step1' */

  /* DataTypeConversion: '<S40>/Data Type  Conversion2' */
  Wind_Turbine_B.DataTypeConversion2 = (Wind_Turbine_B.Toff != 0.0);

  /* Logic: '<S40>/Logical Operator1' */
  Wind_Turbine_B.LogicalOperator1_d = !Wind_Turbine_B.DataTypeConversion2;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* RelationalOperator: '<S40>/Relational Operator1' incorporates:
     *  Constant: '<S36>/valp_nom5'
     *  Constant: '<S40>/Constant3'
     */
    Wind_Turbine_B.RelationalOperator1 = (Wind_Turbine_P.valp_nom5_Value ==
      Wind_Turbine_P.Constant3_Value);

    /* DataTypeConversion: '<S40>/Data Type  Conversion1' */
    Wind_Turbine_B.DataTypeConversion1 = Wind_Turbine_B.RelationalOperator1;
  }

  /* Logic: '<S40>/Logical Operator' */
  Wind_Turbine_B.LogicalOperator = (Wind_Turbine_B.LogicalOperator1_d &&
    Wind_Turbine_B.DataTypeConversion1);

  /* Step: '<S40>/Step' */
  uTmp_idx_0 = Wind_Turbine_M->Timing.t[0];
  if (uTmp_idx_0 < Wind_Turbine_P.VariationSubSystem_Ton_Variatio) {
    Wind_Turbine_B.Ton = Wind_Turbine_P.Step_Y0_e;
  } else {
    Wind_Turbine_B.Ton = Wind_Turbine_P.Step_YFinal_g;
  }

  /* End of Step: '<S40>/Step' */

  /* Integrator: '<S40>/Integrator' */
  Wind_Turbine_B.Ramp = Wind_Turbine_X.Integrator_CSTATE_eo;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Gain: '<S40>/Gain1' incorporates:
     *  Constant: '<S40>/valp_nom9'
     */
    Wind_Turbine_B.Gain1_h = Wind_Turbine_P.Gain1_Gain *
      Wind_Turbine_P.VariationSubSystem_VariationFre;

    /* Memory: '<S40>/Memory' */
    Wind_Turbine_B.Memory = Wind_Turbine_DW.Memory_PreviousInput;
  }

  /* Switch: '<S40>/Switch2' */
  if (Wind_Turbine_B.Toff >= Wind_Turbine_P.Switch2_Threshold_d) {
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Constant: '<S36>/valp_nom5'
     *  Constant: '<S40>/Constant5'
     */
    switch ((int32_T)Wind_Turbine_P.valp_nom5_Value) {
     case 1:
      /* Product: '<S40>/Product2' incorporates:
       *  Constant: '<S40>/valp_nom6'
       */
      Wind_Turbine_B.Step_j = Wind_Turbine_P.VariationSubSystem_VariationSte *
        Wind_Turbine_B.Ton;
      Wind_Turbine_B.MultiportSwitch1 = Wind_Turbine_B.Step_j;
      break;

     case 2:
      Wind_Turbine_B.MultiportSwitch1 = Wind_Turbine_B.Ramp;
      break;

     case 3:
      /* Product: '<S40>/Product1' */
      Wind_Turbine_B.Product1_b = Wind_Turbine_B.Ramp * Wind_Turbine_B.Gain1_h;

      /* Trigonometry: '<S40>/Trigonometric Function1' */
      Wind_Turbine_B.TrigonometricFunction1_j = sin(Wind_Turbine_B.Product1_b);

      /* Product: '<S40>/Product' incorporates:
       *  Constant: '<S40>/valp_nom8'
       */
      Wind_Turbine_B.Mod = Wind_Turbine_P.VariationSubSystem_VariationMag *
        Wind_Turbine_B.TrigonometricFunction1_j;
      Wind_Turbine_B.MultiportSwitch1 = Wind_Turbine_B.Mod;
      break;

     default:
      Wind_Turbine_B.MultiportSwitch1 = Wind_Turbine_P.Constant5_Value;
      break;
    }

    /* End of MultiPortSwitch: '<S40>/Multiport Switch1' */
    Wind_Turbine_B.Switch2 = Wind_Turbine_B.MultiportSwitch1;
  } else {
    Wind_Turbine_B.Switch2 = Wind_Turbine_B.Memory;
  }

  /* End of Switch: '<S40>/Switch2' */

  /* Switch: '<S40>/Switch3' incorporates:
   *  Constant: '<S40>/Constant1'
   */
  if (Wind_Turbine_B.LogicalOperator) {
    Wind_Turbine_B.Switch3 = Wind_Turbine_P.Constant1_Value_n;
  } else {
    Wind_Turbine_B.Switch3 = Wind_Turbine_B.Switch2;
  }

  /* End of Switch: '<S40>/Switch3' */

  /* Switch: '<S36>/Switch2' incorporates:
   *  Constant: '<S36>/Constant1'
   */
  if (Wind_Turbine_B.Amplitude) {
    Wind_Turbine_B.Switch2_o = Wind_Turbine_B.Switch3;
  } else {
    Wind_Turbine_B.Switch2_o = Wind_Turbine_P.Constant1_Value_nt;
  }

  /* End of Switch: '<S36>/Switch2' */

  /* Sum: '<S36>/Sum3' incorporates:
   *  Constant: '<S36>/valp_nom2'
   */
  Wind_Turbine_B.Sum3_b = Wind_Turbine_B.Switch2_o +
    Wind_Turbine_P.valp_nom2_Value;

  /* Switch: '<S36>/Switch1' */
  if (Wind_Turbine_B.LogicalOperator1_j) {
    Wind_Turbine_B.Switch1 = Wind_Turbine_B.LookUpTable;
  } else {
    Wind_Turbine_B.Switch1 = Wind_Turbine_B.Sum3_b;
  }

  /* End of Switch: '<S36>/Switch1' */

  /* Switch: '<S36>/Switch5' incorporates:
   *  Constant: '<S36>/SinglePhase'
   */
  Wind_Turbine_B.Switch5[0] = Wind_Turbine_B.Switch1;
  if (Wind_Turbine_P.SinglePhase_Value >= Wind_Turbine_P.Switch5_Threshold) {
    Wind_Turbine_B.Switch5[1] = Wind_Turbine_B.Sum3_b;
    Wind_Turbine_B.Switch5[2] = Wind_Turbine_B.Sum3_b;
  } else {
    Wind_Turbine_B.Switch5[1] = Wind_Turbine_B.Switch1;
    Wind_Turbine_B.Switch5[2] = Wind_Turbine_B.Switch1;
  }

  /* End of Switch: '<S36>/Switch5' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Gain: '<S36>/Gain3' incorporates:
     *  Constant: '<S36>/valp_nom'
     */
    Wind_Turbine_B.Gain3 = Wind_Turbine_P.Gain3_Gain *
      Wind_Turbine_P.valp_nom_Value;

    /* RelationalOperator: '<S36>/Relational Operator1' incorporates:
     *  Constant: '<S36>/Constant2'
     *  Constant: '<S36>/valp_nom3'
     */
    Wind_Turbine_B.Phase = (Wind_Turbine_P.Grid_VariationEntity ==
      Wind_Turbine_P.Constant2_Value_f);
  }

  /* Switch: '<S36>/Switch3' incorporates:
   *  Constant: '<S36>/Constant4'
   */
  if (Wind_Turbine_B.Phase) {
    /* Gain: '<S36>/Gain4' */
    Wind_Turbine_B.Gain4_b = Wind_Turbine_P.Gain4_Gain * Wind_Turbine_B.Switch3;
    Wind_Turbine_B.Switch3_e = Wind_Turbine_B.Gain4_b;
  } else {
    Wind_Turbine_B.Switch3_e = Wind_Turbine_P.Constant4_Value;
  }

  /* End of Switch: '<S36>/Switch3' */

  /* Sum: '<S36>/Sum2' incorporates:
   *  Constant: '<S36>/P1'
   */
  Wind_Turbine_B.Sum2_i[0] = (Wind_Turbine_B.Gain3 + Wind_Turbine_P.P1_Value[0])
    + Wind_Turbine_B.Switch3_e;

  /* MagnitudeAngleToComplex: '<S36>/Magnitude-Angle to Complex' */
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum2_i[0];
  Bias = Wind_Turbine_B.Switch5[0];
  uTmp_idx_0 = cos(tmpForInput_idx_1_re);
  tmpForInput_idx_1_re = sin(tmpForInput_idx_1_re);
  Wind_Turbine_B.MagnitudeAngletoComplex[0].re = Bias * uTmp_idx_0;
  Wind_Turbine_B.MagnitudeAngletoComplex[0].im = Bias * tmpForInput_idx_1_re;

  /* Sum: '<S36>/Sum2' incorporates:
   *  Constant: '<S36>/P1'
   */
  Wind_Turbine_B.Sum2_i[1] = (Wind_Turbine_B.Gain3 + Wind_Turbine_P.P1_Value[1])
    + Wind_Turbine_B.Switch3_e;

  /* MagnitudeAngleToComplex: '<S36>/Magnitude-Angle to Complex' */
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum2_i[1];
  Bias = Wind_Turbine_B.Switch5[1];
  uTmp_idx_0 = cos(tmpForInput_idx_1_re);
  tmpForInput_idx_1_re = sin(tmpForInput_idx_1_re);
  Wind_Turbine_B.MagnitudeAngletoComplex[1].re = Bias * uTmp_idx_0;
  Wind_Turbine_B.MagnitudeAngletoComplex[1].im = Bias * tmpForInput_idx_1_re;

  /* Sum: '<S36>/Sum2' incorporates:
   *  Constant: '<S36>/P1'
   */
  Wind_Turbine_B.Sum2_i[2] = (Wind_Turbine_B.Gain3 + Wind_Turbine_P.P1_Value[2])
    + Wind_Turbine_B.Switch3_e;

  /* MagnitudeAngleToComplex: '<S36>/Magnitude-Angle to Complex' */
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum2_i[2];
  Bias = Wind_Turbine_B.Switch5[2];
  uTmp_idx_0 = cos(tmpForInput_idx_1_re);
  tmpForInput_idx_1_re = sin(tmpForInput_idx_1_re);
  Wind_Turbine_B.MagnitudeAngletoComplex[2].re = Bias * uTmp_idx_0;
  Wind_Turbine_B.MagnitudeAngletoComplex[2].im = Bias * tmpForInput_idx_1_re;

  /* Step: '<S36>/Step' */
  uTmp_idx_0 = Wind_Turbine_M->Timing.t[0];
  if (uTmp_idx_0 < Wind_Turbine_P.Step_Time) {
    Wind_Turbine_B.Ton_h = Wind_Turbine_P.Step_Y0_a;
  } else {
    Wind_Turbine_B.Ton_h = Wind_Turbine_P.Step_YFinal_c;
  }

  /* End of Step: '<S36>/Step' */

  /* Step: '<S36>/Step1' */
  uTmp_idx_0 = Wind_Turbine_M->Timing.t[0];
  if (uTmp_idx_0 < Wind_Turbine_P.Step1_Time) {
    Wind_Turbine_B.Toff_e = Wind_Turbine_P.Step1_Y0_j;
  } else {
    Wind_Turbine_B.Toff_e = Wind_Turbine_P.Step1_YFinal_d;
  }

  /* End of Step: '<S36>/Step1' */

  /* Sum: '<S36>/Sum4' */
  Wind_Turbine_B.Sum4 = Wind_Turbine_B.Ton_h + Wind_Turbine_B.Toff_e;

  /* DataTypeConversion: '<S36>/Data Type  Conversion1' */
  Wind_Turbine_B.DataTypeConversion1_m = (Wind_Turbine_B.Sum4 != 0.0);
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* DataTypeConversion: '<S36>/Data Type  Conversion2' incorporates:
     *  Constant: '<S36>/valp_nom7'
     */
    Wind_Turbine_B.DataTypeConversion2_k =
      (Wind_Turbine_P.Grid_HarmonicGeneration != 0.0);

    /* Gain: '<S37>/Gain3' incorporates:
     *  Constant: '<S37>/Phase_Harmo'
     */
    Wind_Turbine_B.Gain3_j = Wind_Turbine_P.Gain3_Gain_f *
      Wind_Turbine_P.SeqAGeneration_Phase_Harmo;

    /* Sum: '<S37>/Sum1' incorporates:
     *  Constant: '<S37>/Phase_Harmo2'
     *  Constant: '<S37>/valp_nom2'
     */
    Wind_Turbine_B.Sum1_d = Wind_Turbine_P.SeqAGeneration_Seq_Harmo +
      Wind_Turbine_P.valp_nom2_Value_p;

    /* MultiPortSwitch: '<S37>/Multiport Switch' incorporates:
     *  Constant: '<S37>/Negative-sequence'
     *  Constant: '<S37>/Positive-sequence'
     *  Constant: '<S37>/Zero-sequence'
     */
    switch ((int32_T)Wind_Turbine_B.Sum1_d) {
     case 1:
      Wind_Turbine_B.MultiportSwitch[0] = Wind_Turbine_P.Zerosequence_Value[0];
      Wind_Turbine_B.MultiportSwitch[1] = Wind_Turbine_P.Zerosequence_Value[1];
      Wind_Turbine_B.MultiportSwitch[2] = Wind_Turbine_P.Zerosequence_Value[2];
      break;

     case 2:
      Wind_Turbine_B.MultiportSwitch[0] = Wind_Turbine_P.Positivesequence_Value
        [0];
      Wind_Turbine_B.MultiportSwitch[1] = Wind_Turbine_P.Positivesequence_Value
        [1];
      Wind_Turbine_B.MultiportSwitch[2] = Wind_Turbine_P.Positivesequence_Value
        [2];
      break;

     default:
      Wind_Turbine_B.MultiportSwitch[0] = Wind_Turbine_P.Negativesequence_Value
        [0];
      Wind_Turbine_B.MultiportSwitch[1] = Wind_Turbine_P.Negativesequence_Value
        [1];
      Wind_Turbine_B.MultiportSwitch[2] = Wind_Turbine_P.Negativesequence_Value
        [2];
      break;
    }

    /* End of MultiPortSwitch: '<S37>/Multiport Switch' */

    /* Sum: '<S37>/Sum' */
    Wind_Turbine_B.Sum_e[0] = Wind_Turbine_B.Gain3_j +
      Wind_Turbine_B.MultiportSwitch[0];

    /* MagnitudeAngleToComplex: '<S37>/Magnitude-Angle to Complex' */
    tmpForInput_idx_1_re = Wind_Turbine_B.Sum_e[0];
    uTmp_idx_0 = cos(tmpForInput_idx_1_re);
    tmpForInput_idx_1_re = sin(tmpForInput_idx_1_re);
    Wind_Turbine_B.MagnitudeAngletoComplex_g[0].re =
      Wind_Turbine_P.SeqAGeneration_Mag_Harmo * uTmp_idx_0;
    Wind_Turbine_B.MagnitudeAngletoComplex_g[0].im =
      Wind_Turbine_P.SeqAGeneration_Mag_Harmo * tmpForInput_idx_1_re;

    /* Sum: '<S37>/Sum' */
    Wind_Turbine_B.Sum_e[1] = Wind_Turbine_B.Gain3_j +
      Wind_Turbine_B.MultiportSwitch[1];

    /* MagnitudeAngleToComplex: '<S37>/Magnitude-Angle to Complex' */
    tmpForInput_idx_1_re = Wind_Turbine_B.Sum_e[1];
    uTmp_idx_0 = cos(tmpForInput_idx_1_re);
    tmpForInput_idx_1_re = sin(tmpForInput_idx_1_re);
    Wind_Turbine_B.MagnitudeAngletoComplex_g[1].re =
      Wind_Turbine_P.SeqAGeneration_Mag_Harmo * uTmp_idx_0;
    Wind_Turbine_B.MagnitudeAngletoComplex_g[1].im =
      Wind_Turbine_P.SeqAGeneration_Mag_Harmo * tmpForInput_idx_1_re;

    /* Sum: '<S37>/Sum' */
    Wind_Turbine_B.Sum_e[2] = Wind_Turbine_B.Gain3_j +
      Wind_Turbine_B.MultiportSwitch[2];

    /* MagnitudeAngleToComplex: '<S37>/Magnitude-Angle to Complex' */
    tmpForInput_idx_1_re = Wind_Turbine_B.Sum_e[2];
    uTmp_idx_0 = cos(tmpForInput_idx_1_re);
    tmpForInput_idx_1_re = sin(tmpForInput_idx_1_re);
    Wind_Turbine_B.MagnitudeAngletoComplex_g[2].re =
      Wind_Turbine_P.SeqAGeneration_Mag_Harmo * uTmp_idx_0;
    Wind_Turbine_B.MagnitudeAngletoComplex_g[2].im =
      Wind_Turbine_P.SeqAGeneration_Mag_Harmo * tmpForInput_idx_1_re;
  }

  /* Logic: '<S36>/Logical Operator' */
  Wind_Turbine_B.LogicalOperator_g = (Wind_Turbine_B.DataTypeConversion1_m &&
    Wind_Turbine_B.DataTypeConversion2_k);

  /* DataTypeConversion: '<S36>/Data Type  Conversion' */
  Wind_Turbine_B.DataTypeConversion = Wind_Turbine_B.LogicalOperator_g;

  /* Product: '<S37>/Product1' */
  Wind_Turbine_B.Product1[0].re = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_g[0].re;
  Wind_Turbine_B.Product1[0].im = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_g[0].im;
  Wind_Turbine_B.Product1[1].re = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_g[1].re;
  Wind_Turbine_B.Product1[1].im = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_g[1].im;
  Wind_Turbine_B.Product1[2].re = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_g[2].re;
  Wind_Turbine_B.Product1[2].im = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_g[2].im;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Gain: '<S38>/Gain3' incorporates:
     *  Constant: '<S38>/Phase_Harmo'
     */
    Wind_Turbine_B.Gain3_l = Wind_Turbine_P.Gain3_Gain_c *
      Wind_Turbine_P.SeqBGeneration_Phase_Harmo;

    /* Sum: '<S38>/Sum1' incorporates:
     *  Constant: '<S38>/Phase_Harmo2'
     *  Constant: '<S38>/valp_nom2'
     */
    Wind_Turbine_B.Sum1_i = Wind_Turbine_P.SeqBGeneration_Seq_Harmo +
      Wind_Turbine_P.valp_nom2_Value_a;

    /* MultiPortSwitch: '<S38>/Multiport Switch' incorporates:
     *  Constant: '<S38>/Negative-sequence'
     *  Constant: '<S38>/Positive-sequence'
     *  Constant: '<S38>/Zero-sequence'
     */
    switch ((int32_T)Wind_Turbine_B.Sum1_i) {
     case 1:
      Wind_Turbine_B.MultiportSwitch_j[0] = Wind_Turbine_P.Zerosequence_Value_d
        [0];
      Wind_Turbine_B.MultiportSwitch_j[1] = Wind_Turbine_P.Zerosequence_Value_d
        [1];
      Wind_Turbine_B.MultiportSwitch_j[2] = Wind_Turbine_P.Zerosequence_Value_d
        [2];
      break;

     case 2:
      Wind_Turbine_B.MultiportSwitch_j[0] =
        Wind_Turbine_P.Positivesequence_Value_d[0];
      Wind_Turbine_B.MultiportSwitch_j[1] =
        Wind_Turbine_P.Positivesequence_Value_d[1];
      Wind_Turbine_B.MultiportSwitch_j[2] =
        Wind_Turbine_P.Positivesequence_Value_d[2];
      break;

     default:
      Wind_Turbine_B.MultiportSwitch_j[0] =
        Wind_Turbine_P.Negativesequence_Value_l[0];
      Wind_Turbine_B.MultiportSwitch_j[1] =
        Wind_Turbine_P.Negativesequence_Value_l[1];
      Wind_Turbine_B.MultiportSwitch_j[2] =
        Wind_Turbine_P.Negativesequence_Value_l[2];
      break;
    }

    /* End of MultiPortSwitch: '<S38>/Multiport Switch' */

    /* Sum: '<S38>/Sum' */
    Wind_Turbine_B.Sum_j[0] = Wind_Turbine_B.Gain3_l +
      Wind_Turbine_B.MultiportSwitch_j[0];

    /* MagnitudeAngleToComplex: '<S38>/Magnitude-Angle to Complex' */
    tmpForInput_idx_1_re = Wind_Turbine_B.Sum_j[0];
    uTmp_idx_0 = cos(tmpForInput_idx_1_re);
    tmpForInput_idx_1_re = sin(tmpForInput_idx_1_re);
    Wind_Turbine_B.MagnitudeAngletoComplex_a[0].re =
      Wind_Turbine_P.SeqBGeneration_Mag_Harmo * uTmp_idx_0;
    Wind_Turbine_B.MagnitudeAngletoComplex_a[0].im =
      Wind_Turbine_P.SeqBGeneration_Mag_Harmo * tmpForInput_idx_1_re;

    /* Sum: '<S38>/Sum' */
    Wind_Turbine_B.Sum_j[1] = Wind_Turbine_B.Gain3_l +
      Wind_Turbine_B.MultiportSwitch_j[1];

    /* MagnitudeAngleToComplex: '<S38>/Magnitude-Angle to Complex' */
    tmpForInput_idx_1_re = Wind_Turbine_B.Sum_j[1];
    uTmp_idx_0 = cos(tmpForInput_idx_1_re);
    tmpForInput_idx_1_re = sin(tmpForInput_idx_1_re);
    Wind_Turbine_B.MagnitudeAngletoComplex_a[1].re =
      Wind_Turbine_P.SeqBGeneration_Mag_Harmo * uTmp_idx_0;
    Wind_Turbine_B.MagnitudeAngletoComplex_a[1].im =
      Wind_Turbine_P.SeqBGeneration_Mag_Harmo * tmpForInput_idx_1_re;

    /* Sum: '<S38>/Sum' */
    Wind_Turbine_B.Sum_j[2] = Wind_Turbine_B.Gain3_l +
      Wind_Turbine_B.MultiportSwitch_j[2];

    /* MagnitudeAngleToComplex: '<S38>/Magnitude-Angle to Complex' */
    tmpForInput_idx_1_re = Wind_Turbine_B.Sum_j[2];
    uTmp_idx_0 = cos(tmpForInput_idx_1_re);
    tmpForInput_idx_1_re = sin(tmpForInput_idx_1_re);
    Wind_Turbine_B.MagnitudeAngletoComplex_a[2].re =
      Wind_Turbine_P.SeqBGeneration_Mag_Harmo * uTmp_idx_0;
    Wind_Turbine_B.MagnitudeAngletoComplex_a[2].im =
      Wind_Turbine_P.SeqBGeneration_Mag_Harmo * tmpForInput_idx_1_re;
  }

  /* Product: '<S38>/Product1' */
  Wind_Turbine_B.Product1_g[0].re = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_a[0].re;
  Wind_Turbine_B.Product1_g[0].im = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_a[0].im;

  /* Sum: '<S36>/Sum5' */
  Wind_Turbine_B.Sum5[0].re = (Wind_Turbine_B.MagnitudeAngletoComplex[0].re +
    Wind_Turbine_B.Product1[0].re) + Wind_Turbine_B.Product1_g[0].re;
  Wind_Turbine_B.Sum5[0].im = (Wind_Turbine_B.MagnitudeAngletoComplex[0].im +
    Wind_Turbine_B.Product1[0].im) + Wind_Turbine_B.Product1_g[0].im;

  /* Product: '<S38>/Product1' */
  Wind_Turbine_B.Product1_g[1].re = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_a[1].re;
  Wind_Turbine_B.Product1_g[1].im = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_a[1].im;

  /* Sum: '<S36>/Sum5' */
  Wind_Turbine_B.Sum5[1].re = (Wind_Turbine_B.MagnitudeAngletoComplex[1].re +
    Wind_Turbine_B.Product1[1].re) + Wind_Turbine_B.Product1_g[1].re;
  Wind_Turbine_B.Sum5[1].im = (Wind_Turbine_B.MagnitudeAngletoComplex[1].im +
    Wind_Turbine_B.Product1[1].im) + Wind_Turbine_B.Product1_g[1].im;

  /* Product: '<S38>/Product1' */
  Wind_Turbine_B.Product1_g[2].re = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_a[2].re;
  Wind_Turbine_B.Product1_g[2].im = Wind_Turbine_B.DataTypeConversion *
    Wind_Turbine_B.MagnitudeAngletoComplex_a[2].im;

  /* Sum: '<S36>/Sum5' */
  Wind_Turbine_B.Sum5[2].re = (Wind_Turbine_B.MagnitudeAngletoComplex[2].re +
    Wind_Turbine_B.Product1[2].re) + Wind_Turbine_B.Product1_g[2].re;
  Wind_Turbine_B.Sum5[2].im = (Wind_Turbine_B.MagnitudeAngletoComplex[2].im +
    Wind_Turbine_B.Product1[2].im) + Wind_Turbine_B.Product1_g[2].im;

  /* ComplexToRealImag: '<S375>/Complex to Real-Imag' incorporates:
   *  Constant: '<S372>/SwitchCurrents'
   */
  for (i = 0; i < 6; i++) {
    Wind_Turbine_B.ComplextoRealImag_o1[i] =
      Wind_Turbine_P.SwitchCurrents_Value[i].re;
  }

  Wind_Turbine_B.ComplextoRealImag_o1[6] = Wind_Turbine_B.ib[0].re;
  Wind_Turbine_B.ComplextoRealImag_o1[7] = Wind_Turbine_B.ib[1].re;
  Wind_Turbine_B.ComplextoRealImag_o1[8] = Wind_Turbine_B.Sum5[0].re;
  Wind_Turbine_B.ComplextoRealImag_o1[9] = Wind_Turbine_B.Sum5[1].re;
  Wind_Turbine_B.ComplextoRealImag_o1[10] = Wind_Turbine_B.Sum5[2].re;
  for (i = 0; i < 6; i++) {
    Wind_Turbine_B.ComplextoRealImag_o2[i] =
      Wind_Turbine_P.SwitchCurrents_Value[i].im;
  }

  Wind_Turbine_B.ComplextoRealImag_o2[6] = Wind_Turbine_B.ib[0].im;
  Wind_Turbine_B.ComplextoRealImag_o2[7] = Wind_Turbine_B.ib[1].im;
  Wind_Turbine_B.ComplextoRealImag_o2[8] = Wind_Turbine_B.Sum5[0].im;
  Wind_Turbine_B.ComplextoRealImag_o2[9] = Wind_Turbine_B.Sum5[1].im;
  Wind_Turbine_B.ComplextoRealImag_o2[10] = Wind_Turbine_B.Sum5[2].im;

  /* End of ComplexToRealImag: '<S375>/Complex to Real-Imag' */

  /* Logic: '<S71>/Logical Operator1' */
  Wind_Turbine_B.LogicalOperator1 = !(Wind_Turbine_B.generator_trip != 0.0);

  /* Clock: '<S133>/Clock' */
  Wind_Turbine_B.Clock_o = Wind_Turbine_M->Timing.t[0];

  /* Lookup: '<S133>/Look-Up Table' */
  Wind_Turbine_B.LookUpTable_i = rt_Lookup(Wind_Turbine_P.LookUpTable_XData_p, 4,
    Wind_Turbine_B.Clock_o, Wind_Turbine_P.LookUpTable_YData_l);

  /* Switch: '<S79>/Switch3' incorporates:
   *  Constant: '<S79>/C4'
   */
  if (Wind_Turbine_P.C4_Value >= Wind_Turbine_P.Switch3_Threshold) {
    Wind_Turbine_B.Switch3_p = Wind_Turbine_B.LogicalOperator1;
  } else {
    Wind_Turbine_B.Switch3_p = Wind_Turbine_B.LookUpTable_i;
  }

  /* End of Switch: '<S79>/Switch3' */

  /* Clock: '<S128>/Clock' */
  Wind_Turbine_B.Clock_a = Wind_Turbine_M->Timing.t[0];

  /* Lookup: '<S128>/Look-Up Table' */
  Wind_Turbine_B.LookUpTable_n = rt_Lookup(Wind_Turbine_P.LookUpTable_XData_l, 5,
    Wind_Turbine_B.Clock_a, Wind_Turbine_P.LookUpTable_YData_a);

  /* Switch: '<S127>/Switch3' incorporates:
   *  Constant: '<S127>/C4'
   */
  if (Wind_Turbine_P.C4_Value_g >= Wind_Turbine_P.Switch3_Threshold_n) {
    /* Switch: '<S79>/Switch' incorporates:
     *  Constant: '<S79>/Constant1'
     *  Constant: '<S79>/Constant5'
     */
    if (Wind_Turbine_P.TripBreaker1_SwitchA >= Wind_Turbine_P.Switch_Threshold)
    {
      Wind_Turbine_B.Switch_j = Wind_Turbine_B.Switch3_p;
    } else {
      Wind_Turbine_B.Switch_j = Wind_Turbine_P.Constant5_Value_d;
    }

    /* End of Switch: '<S79>/Switch' */

    /* DataTypeConversion: '<S127>/Data Type  Conversion' */
    Wind_Turbine_B.DataTypeConversion_j = Wind_Turbine_B.Switch_j;
    Wind_Turbine_B.Switch3_d = Wind_Turbine_B.DataTypeConversion_j;
  } else {
    Wind_Turbine_B.Switch3_d = Wind_Turbine_B.LookUpTable_n;
  }

  /* End of Switch: '<S127>/Switch3' */

  /* Clock: '<S130>/Clock' */
  Wind_Turbine_B.Clock_az = Wind_Turbine_M->Timing.t[0];

  /* Lookup: '<S130>/Look-Up Table' */
  Wind_Turbine_B.LookUpTable_k = rt_Lookup(Wind_Turbine_P.LookUpTable_XData_k, 5,
    Wind_Turbine_B.Clock_az, Wind_Turbine_P.LookUpTable_YData_n);

  /* Switch: '<S129>/Switch3' incorporates:
   *  Constant: '<S129>/C4'
   */
  if (Wind_Turbine_P.C4_Value_m >= Wind_Turbine_P.Switch3_Threshold_i) {
    /* Switch: '<S79>/Switch1' incorporates:
     *  Constant: '<S79>/Constant2'
     *  Constant: '<S79>/Constant5'
     */
    if (Wind_Turbine_P.TripBreaker1_SwitchB >= Wind_Turbine_P.Switch1_Threshold)
    {
      Wind_Turbine_B.Switch1_b = Wind_Turbine_B.Switch3_p;
    } else {
      Wind_Turbine_B.Switch1_b = Wind_Turbine_P.Constant5_Value_d;
    }

    /* End of Switch: '<S79>/Switch1' */

    /* DataTypeConversion: '<S129>/Data Type  Conversion' */
    Wind_Turbine_B.DataTypeConversion_b = Wind_Turbine_B.Switch1_b;
    Wind_Turbine_B.Switch3_j = Wind_Turbine_B.DataTypeConversion_b;
  } else {
    Wind_Turbine_B.Switch3_j = Wind_Turbine_B.LookUpTable_k;
  }

  /* End of Switch: '<S129>/Switch3' */

  /* Clock: '<S132>/Clock' */
  Wind_Turbine_B.Clock_k = Wind_Turbine_M->Timing.t[0];

  /* Lookup: '<S132>/Look-Up Table' */
  Wind_Turbine_B.LookUpTable_l = rt_Lookup(Wind_Turbine_P.LookUpTable_XData_g, 5,
    Wind_Turbine_B.Clock_k, Wind_Turbine_P.LookUpTable_YData_m);

  /* Switch: '<S131>/Switch3' incorporates:
   *  Constant: '<S131>/C4'
   */
  if (Wind_Turbine_P.C4_Value_o >= Wind_Turbine_P.Switch3_Threshold_o) {
    /* Switch: '<S79>/Switch2' incorporates:
     *  Constant: '<S79>/Constant3'
     *  Constant: '<S79>/Constant5'
     */
    if (Wind_Turbine_P.TripBreaker1_SwitchC >= Wind_Turbine_P.Switch2_Threshold)
    {
      Wind_Turbine_B.Switch2_ax = Wind_Turbine_B.Switch3_p;
    } else {
      Wind_Turbine_B.Switch2_ax = Wind_Turbine_P.Constant5_Value_d;
    }

    /* End of Switch: '<S79>/Switch2' */

    /* DataTypeConversion: '<S131>/Data Type  Conversion' */
    Wind_Turbine_B.DataTypeConversion_n = Wind_Turbine_B.Switch2_ax;
    Wind_Turbine_B.Switch3_dw = Wind_Turbine_B.DataTypeConversion_n;
  } else {
    Wind_Turbine_B.Switch3_dw = Wind_Turbine_B.LookUpTable_l;
  }

  /* End of Switch: '<S131>/Switch3' */

  /* Clock: '<S144>/Clock' */
  Wind_Turbine_B.Clock_e = Wind_Turbine_M->Timing.t[0];

  /* Lookup: '<S144>/Look-Up Table' */
  Wind_Turbine_B.LookUpTable_g = rt_Lookup(Wind_Turbine_P.LookUpTable_XData_k1,
    4, Wind_Turbine_B.Clock_e, Wind_Turbine_P.LookUpTable_YData_ab);

  /* Switch: '<S80>/Switch3' incorporates:
   *  Constant: '<S80>/C4'
   */
  if (Wind_Turbine_P.C4_Value_i >= Wind_Turbine_P.Switch3_Threshold_f) {
    Wind_Turbine_B.Switch3_f = Wind_Turbine_B.generator_trip;
  } else {
    Wind_Turbine_B.Switch3_f = Wind_Turbine_B.LookUpTable_g;
  }

  /* End of Switch: '<S80>/Switch3' */

  /* Clock: '<S139>/Clock' */
  Wind_Turbine_B.Clock_l = Wind_Turbine_M->Timing.t[0];

  /* Lookup: '<S139>/Look-Up Table' */
  Wind_Turbine_B.LookUpTable_j = rt_Lookup(Wind_Turbine_P.LookUpTable_XData_pn,
    5, Wind_Turbine_B.Clock_l, Wind_Turbine_P.LookUpTable_YData_mp);

  /* Switch: '<S138>/Switch3' incorporates:
   *  Constant: '<S138>/C4'
   */
  if (Wind_Turbine_P.C4_Value_d >= Wind_Turbine_P.Switch3_Threshold_it) {
    /* Switch: '<S80>/Switch' incorporates:
     *  Constant: '<S80>/Constant1'
     *  Constant: '<S80>/Constant5'
     */
    if (Wind_Turbine_P.TripBreaker2_SwitchA >= Wind_Turbine_P.Switch_Threshold_c)
    {
      Wind_Turbine_B.Switch_i = Wind_Turbine_B.Switch3_f;
    } else {
      Wind_Turbine_B.Switch_i = Wind_Turbine_P.Constant5_Value_db;
    }

    /* End of Switch: '<S80>/Switch' */

    /* DataTypeConversion: '<S138>/Data Type  Conversion' */
    Wind_Turbine_B.DataTypeConversion_f = Wind_Turbine_B.Switch_i;
    Wind_Turbine_B.Switch3_er = Wind_Turbine_B.DataTypeConversion_f;
  } else {
    Wind_Turbine_B.Switch3_er = Wind_Turbine_B.LookUpTable_j;
  }

  /* End of Switch: '<S138>/Switch3' */

  /* Clock: '<S141>/Clock' */
  Wind_Turbine_B.Clock_f = Wind_Turbine_M->Timing.t[0];

  /* Lookup: '<S141>/Look-Up Table' */
  Wind_Turbine_B.LookUpTable_o = rt_Lookup(Wind_Turbine_P.LookUpTable_XData_le,
    5, Wind_Turbine_B.Clock_f, Wind_Turbine_P.LookUpTable_YData_e);

  /* Switch: '<S140>/Switch3' incorporates:
   *  Constant: '<S140>/C4'
   */
  if (Wind_Turbine_P.C4_Value_ok >= Wind_Turbine_P.Switch3_Threshold_h) {
    /* Switch: '<S80>/Switch1' incorporates:
     *  Constant: '<S80>/Constant2'
     *  Constant: '<S80>/Constant5'
     */
    if (Wind_Turbine_P.TripBreaker2_SwitchB >=
        Wind_Turbine_P.Switch1_Threshold_b) {
      Wind_Turbine_B.Switch1_g = Wind_Turbine_B.Switch3_f;
    } else {
      Wind_Turbine_B.Switch1_g = Wind_Turbine_P.Constant5_Value_db;
    }

    /* End of Switch: '<S80>/Switch1' */

    /* DataTypeConversion: '<S140>/Data Type  Conversion' */
    Wind_Turbine_B.DataTypeConversion_l = Wind_Turbine_B.Switch1_g;
    Wind_Turbine_B.Switch3_a = Wind_Turbine_B.DataTypeConversion_l;
  } else {
    Wind_Turbine_B.Switch3_a = Wind_Turbine_B.LookUpTable_o;
  }

  /* End of Switch: '<S140>/Switch3' */

  /* Clock: '<S143>/Clock' */
  Wind_Turbine_B.Clock_m = Wind_Turbine_M->Timing.t[0];

  /* Lookup: '<S143>/Look-Up Table' */
  Wind_Turbine_B.LookUpTable_h = rt_Lookup(Wind_Turbine_P.LookUpTable_XData_h, 5,
    Wind_Turbine_B.Clock_m, Wind_Turbine_P.LookUpTable_YData_d);

  /* Switch: '<S142>/Switch3' incorporates:
   *  Constant: '<S142>/C4'
   */
  if (Wind_Turbine_P.C4_Value_k >= Wind_Turbine_P.Switch3_Threshold_hg) {
    /* Switch: '<S80>/Switch2' incorporates:
     *  Constant: '<S80>/Constant3'
     *  Constant: '<S80>/Constant5'
     */
    if (Wind_Turbine_P.TripBreaker2_SwitchC >=
        Wind_Turbine_P.Switch2_Threshold_m) {
      Wind_Turbine_B.Switch2_g = Wind_Turbine_B.Switch3_f;
    } else {
      Wind_Turbine_B.Switch2_g = Wind_Turbine_P.Constant5_Value_db;
    }

    /* End of Switch: '<S80>/Switch2' */

    /* DataTypeConversion: '<S142>/Data Type  Conversion' */
    Wind_Turbine_B.DataTypeConversion_k = Wind_Turbine_B.Switch2_g;
    Wind_Turbine_B.Switch3_h = Wind_Turbine_B.DataTypeConversion_k;
  } else {
    Wind_Turbine_B.Switch3_h = Wind_Turbine_B.LookUpTable_h;
  }

  /* End of Switch: '<S142>/Switch3' */

  /* S-Function (sfun_psbdqc): '<S370>/State-Space' */

  /* Level2 S-Function Block: '<S370>/State-Space' (sfun_psbdqc) */
  {
    SimStruct *rts = Wind_Turbine_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* RealImagToComplex: '<S374>/Real-Imag to Complex' */
  for (i = 0; i < 17; i++) {
    Wind_Turbine_B.RealImagtoComplex[i].re = Wind_Turbine_B.StateSpace[i];
    Wind_Turbine_B.RealImagtoComplex[i].im = Wind_Turbine_B.StateSpace[i + 17];
  }

  /* End of RealImagToComplex: '<S374>/Real-Imag to Complex' */

  /* Gain: '<S106>/do not delete this gain' */
  Wind_Turbine_B.donotdeletethisgain.re =
    Wind_Turbine_P.donotdeletethisgain_Gain * Wind_Turbine_B.RealImagtoComplex
    [11].re;
  Wind_Turbine_B.donotdeletethisgain.im =
    Wind_Turbine_P.donotdeletethisgain_Gain * Wind_Turbine_B.RealImagtoComplex
    [11].im;

  /* Gain: '<S107>/do not delete this gain' */
  Wind_Turbine_B.donotdeletethisgain_g.re =
    Wind_Turbine_P.donotdeletethisgain_Gain_o *
    Wind_Turbine_B.RealImagtoComplex[12].re;
  Wind_Turbine_B.donotdeletethisgain_g.im =
    Wind_Turbine_P.donotdeletethisgain_Gain_o *
    Wind_Turbine_B.RealImagtoComplex[12].im;

  /* Gain: '<S108>/do not delete this gain' */
  Wind_Turbine_B.donotdeletethisgain_e.re =
    Wind_Turbine_P.donotdeletethisgain_Gain_l *
    Wind_Turbine_B.RealImagtoComplex[13].re;
  Wind_Turbine_B.donotdeletethisgain_e.im =
    Wind_Turbine_P.donotdeletethisgain_Gain_l *
    Wind_Turbine_B.RealImagtoComplex[13].im;

  /* Gain: '<S75>/Kv1' */
  Wind_Turbine_B.Kv1[0].re = Wind_Turbine_P.Kv1_Gain *
    Wind_Turbine_B.donotdeletethisgain.re;
  Wind_Turbine_B.Kv1[0].im = Wind_Turbine_P.Kv1_Gain *
    Wind_Turbine_B.donotdeletethisgain.im;
  Wind_Turbine_B.Kv1[1].re = Wind_Turbine_P.Kv1_Gain *
    Wind_Turbine_B.donotdeletethisgain_g.re;
  Wind_Turbine_B.Kv1[1].im = Wind_Turbine_P.Kv1_Gain *
    Wind_Turbine_B.donotdeletethisgain_g.im;
  Wind_Turbine_B.Kv1[2].re = Wind_Turbine_P.Kv1_Gain *
    Wind_Turbine_B.donotdeletethisgain_e.re;
  Wind_Turbine_B.Kv1[2].im = Wind_Turbine_P.Kv1_Gain *
    Wind_Turbine_B.donotdeletethisgain_e.im;

  /* Gain: '<S359>/pu to V' */
  Bias = Wind_Turbine_P.WT_Params.Generator.voltage * 1.4142135623730951 /
    1.7320508075688772;
  Wind_Turbine_B.putoV[0].re = Bias * Wind_Turbine_B.Kv1[0].re;
  Wind_Turbine_B.putoV[0].im = Bias * Wind_Turbine_B.Kv1[0].im;
  Wind_Turbine_B.putoV[1].re = Bias * Wind_Turbine_B.Kv1[1].re;
  Wind_Turbine_B.putoV[1].im = Bias * Wind_Turbine_B.Kv1[1].im;
  Wind_Turbine_B.putoV[2].re = Bias * Wind_Turbine_B.Kv1[2].re;
  Wind_Turbine_B.putoV[2].im = Bias * Wind_Turbine_B.Kv1[2].im;

  /* Gain: '<S103>/do not delete this gain' */
  Wind_Turbine_B.donotdeletethisgain_ee.re =
    Wind_Turbine_P.donotdeletethisgain_Gain_c *
    Wind_Turbine_B.RealImagtoComplex[14].re;
  Wind_Turbine_B.donotdeletethisgain_ee.im =
    Wind_Turbine_P.donotdeletethisgain_Gain_c *
    Wind_Turbine_B.RealImagtoComplex[14].im;

  /* Gain: '<S104>/do not delete this gain' */
  Wind_Turbine_B.donotdeletethisgain_g1.re =
    Wind_Turbine_P.donotdeletethisgain_Gain_j *
    Wind_Turbine_B.RealImagtoComplex[15].re;
  Wind_Turbine_B.donotdeletethisgain_g1.im =
    Wind_Turbine_P.donotdeletethisgain_Gain_j *
    Wind_Turbine_B.RealImagtoComplex[15].im;

  /* Gain: '<S105>/do not delete this gain' */
  Wind_Turbine_B.donotdeletethisgain_i.re =
    Wind_Turbine_P.donotdeletethisgain_Gain_a *
    Wind_Turbine_B.RealImagtoComplex[16].re;
  Wind_Turbine_B.donotdeletethisgain_i.im =
    Wind_Turbine_P.donotdeletethisgain_Gain_a *
    Wind_Turbine_B.RealImagtoComplex[16].im;

  /* Gain: '<S75>/Kv' */
  Wind_Turbine_B.Kv[0].re = Wind_Turbine_P.Kv_Gain *
    Wind_Turbine_B.donotdeletethisgain_ee.re;
  Wind_Turbine_B.Kv[0].im = Wind_Turbine_P.Kv_Gain *
    Wind_Turbine_B.donotdeletethisgain_ee.im;
  Wind_Turbine_B.Kv[1].re = Wind_Turbine_P.Kv_Gain *
    Wind_Turbine_B.donotdeletethisgain_g1.re;
  Wind_Turbine_B.Kv[1].im = Wind_Turbine_P.Kv_Gain *
    Wind_Turbine_B.donotdeletethisgain_g1.im;
  Wind_Turbine_B.Kv[2].re = Wind_Turbine_P.Kv_Gain *
    Wind_Turbine_B.donotdeletethisgain_i.re;
  Wind_Turbine_B.Kv[2].im = Wind_Turbine_P.Kv_Gain *
    Wind_Turbine_B.donotdeletethisgain_i.im;

  /* Gain: '<S359>/pu to A' */
  Bias = Wind_Turbine_P.WT_Params.Generator.nominal_power / 1.7320508075688772 /
    Wind_Turbine_P.WT_Params.Generator.voltage * 1.4142135623730951;
  Wind_Turbine_B.putoA[0].re = Bias * Wind_Turbine_B.Kv[0].re;
  Wind_Turbine_B.putoA[0].im = Bias * Wind_Turbine_B.Kv[0].im;

  /* Math: '<S360>/Math Function' */
  Wind_Turbine_B.MathFunction[0].re = Wind_Turbine_B.putoA[0].re;
  Wind_Turbine_B.MathFunction[0].im = -Wind_Turbine_B.putoA[0].im;

  /* Product: '<S360>/Product2' */
  uTmp_idx_0 = Wind_Turbine_B.putoV[0].re * Wind_Turbine_B.MathFunction[0].re -
    Wind_Turbine_B.putoV[0].im * Wind_Turbine_B.MathFunction[0].im;
  tmpForInput_idx_1_re = Wind_Turbine_B.putoV[0].re *
    Wind_Turbine_B.MathFunction[0].im + Wind_Turbine_B.putoV[0].im *
    Wind_Turbine_B.MathFunction[0].re;
  Wind_Turbine_B.Product2[0].re = uTmp_idx_0;
  Wind_Turbine_B.Product2[0].im = tmpForInput_idx_1_re;

  /* Gain: '<S359>/pu to A' */
  Wind_Turbine_B.putoA[1].re = Bias * Wind_Turbine_B.Kv[1].re;
  Wind_Turbine_B.putoA[1].im = Bias * Wind_Turbine_B.Kv[1].im;

  /* Math: '<S360>/Math Function' */
  Wind_Turbine_B.MathFunction[1].re = Wind_Turbine_B.putoA[1].re;
  Wind_Turbine_B.MathFunction[1].im = -Wind_Turbine_B.putoA[1].im;

  /* Product: '<S360>/Product2' */
  uTmp_idx_0 = Wind_Turbine_B.putoV[1].re * Wind_Turbine_B.MathFunction[1].re -
    Wind_Turbine_B.putoV[1].im * Wind_Turbine_B.MathFunction[1].im;
  tmpForInput_idx_1_re = Wind_Turbine_B.putoV[1].re *
    Wind_Turbine_B.MathFunction[1].im + Wind_Turbine_B.putoV[1].im *
    Wind_Turbine_B.MathFunction[1].re;
  Wind_Turbine_B.Product2[1].re = uTmp_idx_0;
  Wind_Turbine_B.Product2[1].im = tmpForInput_idx_1_re;

  /* Gain: '<S359>/pu to A' */
  Wind_Turbine_B.putoA[2].re = Bias * Wind_Turbine_B.Kv[2].re;
  Wind_Turbine_B.putoA[2].im = Bias * Wind_Turbine_B.Kv[2].im;

  /* Math: '<S360>/Math Function' */
  Wind_Turbine_B.MathFunction[2].re = Wind_Turbine_B.putoA[2].re;
  Wind_Turbine_B.MathFunction[2].im = -Wind_Turbine_B.putoA[2].im;

  /* Product: '<S360>/Product2' */
  uTmp_idx_0 = Wind_Turbine_B.putoV[2].re * Wind_Turbine_B.MathFunction[2].re -
    Wind_Turbine_B.putoV[2].im * Wind_Turbine_B.MathFunction[2].im;
  tmpForInput_idx_1_re = Wind_Turbine_B.putoV[2].re *
    Wind_Turbine_B.MathFunction[2].im + Wind_Turbine_B.putoV[2].im *
    Wind_Turbine_B.MathFunction[2].re;
  Wind_Turbine_B.Product2[2].re = uTmp_idx_0;
  Wind_Turbine_B.Product2[2].im = tmpForInput_idx_1_re;

  /* Sum: '<S360>/Sum3' */
  uTmp_idx_0 = Wind_Turbine_B.Product2[0].re;
  Bias = Wind_Turbine_B.Product2[0].im;
  uTmp_idx_0 += Wind_Turbine_B.Product2[1].re;
  Bias += Wind_Turbine_B.Product2[1].im;
  uTmp_idx_0 += Wind_Turbine_B.Product2[2].re;
  Bias += Wind_Turbine_B.Product2[2].im;
  Wind_Turbine_B.Sum3_k.re = uTmp_idx_0;
  Wind_Turbine_B.Sum3_k.im = Bias;

  /* Gain: '<S360>/K' */
  Wind_Turbine_B.K.re = Wind_Turbine_P.K_Gain * Wind_Turbine_B.Sum3_k.re;
  Wind_Turbine_B.K.im = Wind_Turbine_P.K_Gain * Wind_Turbine_B.Sum3_k.im;

  /* ComplexToRealImag: '<S360>/Complex to Real-Imag' */
  Wind_Turbine_B.ComplextoRealImag_o1_m = Wind_Turbine_B.K.re;
  Wind_Turbine_B.ComplextoRealImag_o2_g = Wind_Turbine_B.K.im;

  /* Gain: '<S359>/to pu' */
  Bias = 1.0 / Wind_Turbine_P.WT_Params.Generator.nominal_power;
  Wind_Turbine_B.topu[0] = Bias * Wind_Turbine_B.ComplextoRealImag_o1_m;
  Wind_Turbine_B.topu[1] = Bias * Wind_Turbine_B.ComplextoRealImag_o2_g;

  /* Gain: '<S359>/Fix Sign' */
  Wind_Turbine_B.FixSign[0] = Wind_Turbine_P.FixSign_Gain * Wind_Turbine_B.topu
    [0];
  Wind_Turbine_B.FixSign[1] = Wind_Turbine_P.FixSign_Gain * Wind_Turbine_B.topu
    [1];

  /* Gain: '<S359>/pu to MW' */
  Wind_Turbine_B.putoMW = Wind_Turbine_P.WT_Params.Generator.nominal_power *
    Wind_Turbine_B.FixSign[0];

  /* Gain: '<S359>/pu to Mvar' */
  Wind_Turbine_B.putoMvar = Wind_Turbine_P.WT_Params.Generator.nominal_power *
    Wind_Turbine_B.FixSign[1];
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Gain: '<S71>/radps2pu' */
    Wind_Turbine_B.radps2pu = Wind_Turbine_P.WT_Params.Generator.radps2pu *
      Wind_Turbine_B.OUTPUT_4_0[2];

    /* Gain: '<S83>/web_psb1' */
    Wind_Turbine_B.web_psb1 = Wind_Turbine_P.web_psb1_Gain *
      Wind_Turbine_B.radps2pu;
  }

  /* Gain: '<S91>/1-1' */
  Wind_Turbine_B.iqsids[0] = Wind_Turbine_P.u1_Gain[0] *
    Wind_Turbine_B.Product3_l[0];
  Wind_Turbine_B.iqsids[1] = Wind_Turbine_P.u1_Gain[1] *
    Wind_Turbine_B.Product3_l[1];

  /* Product: '<S91>/Mult1' */
  Wind_Turbine_B.Mult1[0] = Wind_Turbine_B.Integrator_pj[1] *
    Wind_Turbine_B.iqsids[0];
  Wind_Turbine_B.Mult1[1] = Wind_Turbine_B.Integrator_pj[0] *
    Wind_Turbine_B.iqsids[1];

  /* Sum: '<S91>/Sum2' */
  Bias = Wind_Turbine_B.Mult1[0];

  /* Gain: '<S81>/1_Vb' */
  Wind_Turbine_B.u_Vb[0].re = Wind_Turbine_P.u_Vb_Gain *
    Wind_Turbine_B.RealImagtoComplex[6].re;
  Wind_Turbine_B.u_Vb[0].im = Wind_Turbine_P.u_Vb_Gain *
    Wind_Turbine_B.RealImagtoComplex[6].im;

  /* Sum: '<S91>/Sum2' */
  Bias += Wind_Turbine_B.Mult1[1];

  /* Gain: '<S81>/1_Vb' */
  Wind_Turbine_B.u_Vb[1].re = Wind_Turbine_P.u_Vb_Gain *
    Wind_Turbine_B.RealImagtoComplex[7].re;
  Wind_Turbine_B.u_Vb[1].im = Wind_Turbine_P.u_Vb_Gain *
    Wind_Turbine_B.RealImagtoComplex[7].im;

  /* Sum: '<S91>/Sum2' */
  Wind_Turbine_B.Sum2_a = Bias;

  /* Gain: '<S85>/Gain1' */
  Wind_Turbine_B.Gain1.re = Wind_Turbine_P.Gain1_Gain_l * Wind_Turbine_B.u_Vb[0]
    .re;
  Wind_Turbine_B.Gain1.im = Wind_Turbine_P.Gain1_Gain_l * Wind_Turbine_B.u_Vb[0]
    .im;

  /* Gain: '<S85>/a//3' */
  uTmp_idx_0 = Wind_Turbine_P.a3_Gain.re * Wind_Turbine_B.u_Vb[1].re -
    Wind_Turbine_P.a3_Gain.im * Wind_Turbine_B.u_Vb[1].im;
  tmpForInput_idx_1_re = Wind_Turbine_P.a3_Gain.re * Wind_Turbine_B.u_Vb[1].im +
    Wind_Turbine_P.a3_Gain.im * Wind_Turbine_B.u_Vb[1].re;
  Wind_Turbine_B.a3.re = uTmp_idx_0;
  Wind_Turbine_B.a3.im = tmpForInput_idx_1_re;

  /* Sum: '<S85>/Sum4' */
  Wind_Turbine_B.V2.re = Wind_Turbine_B.Gain1.re - Wind_Turbine_B.a3.re;
  Wind_Turbine_B.V2.im = Wind_Turbine_B.Gain1.im - Wind_Turbine_B.a3.im;

  /* ComplexToRealImag: '<S85>/Complex to Real-Imag3' */
  Wind_Turbine_B.ComplextoRealImag3_o1 = Wind_Turbine_B.V2.re;
  Wind_Turbine_B.ComplextoRealImag3_o2 = Wind_Turbine_B.V2.im;

  /* RealImagToComplex: '<S88>/Real-Imag to Complex' */
  Wind_Turbine_B.RealImagtoComplex_b.re = Wind_Turbine_B.ComplextoRealImag3_o1;
  Wind_Turbine_B.RealImagtoComplex_b.im = Wind_Turbine_B.ComplextoRealImag3_o2;

  /* Gain: '<S88>/Gain2' */
  Wind_Turbine_B.Gain2.re = Wind_Turbine_P.Gain2_Gain_i *
    Wind_Turbine_B.RealImagtoComplex1.re;
  Wind_Turbine_B.Gain2.im = Wind_Turbine_P.Gain2_Gain_i *
    Wind_Turbine_B.RealImagtoComplex1.im;

  /* Sum: '<S88>/Sum1' */
  Wind_Turbine_B.Vm2.re = Wind_Turbine_B.RealImagtoComplex_b.re -
    Wind_Turbine_B.Gain2.re;
  Wind_Turbine_B.Vm2.im = Wind_Turbine_B.RealImagtoComplex_b.im -
    Wind_Turbine_B.Gain2.im;

  /* Gain: '<S88>/-pi//2  phase shift' */
  uTmp_idx_0 = Wind_Turbine_P.pi2phaseshift_Gain.re * Wind_Turbine_B.Vm2.re -
    Wind_Turbine_P.pi2phaseshift_Gain.im * Wind_Turbine_B.Vm2.im;
  tmpForInput_idx_1_re = Wind_Turbine_P.pi2phaseshift_Gain.re *
    Wind_Turbine_B.Vm2.im + Wind_Turbine_P.pi2phaseshift_Gain.im *
    Wind_Turbine_B.Vm2.re;
  Wind_Turbine_B.Phi2.re = uTmp_idx_0;
  Wind_Turbine_B.Phi2.im = tmpForInput_idx_1_re;

  /* ComplexToRealImag: '<S88>/Complex to Real-Imag' */
  Wind_Turbine_B.Phids2 = Wind_Turbine_B.Phi2.re;
  Wind_Turbine_B.Phiqs2 = Wind_Turbine_B.Phi2.im;

  /* Product: '<S81>/Product3' */
  uTmp_idx_0 = Wind_Turbine_B.Phiqs2;
  Bias = Wind_Turbine_B.Iqds2[1];
  Bias *= uTmp_idx_0;
  Wind_Turbine_B.Product3_d = Bias;

  /* Product: '<S81>/Product4' */
  uTmp_idx_0 = Wind_Turbine_B.Phids2;
  Bias = Wind_Turbine_B.Iqds2[0];
  Bias *= uTmp_idx_0;
  Wind_Turbine_B.Product4_o = Bias;

  /* Sum: '<S81>/Sum4' */
  Wind_Turbine_B.NegseqTorque = Wind_Turbine_B.Product4_o -
    Wind_Turbine_B.Product3_d;

  /* Sum: '<S81>/Sum5' */
  Wind_Turbine_B.Sum5_a = Wind_Turbine_B.Sum2_a - Wind_Turbine_B.NegseqTorque;

  /* Integrator: '<S83>/Rotor angle thetam' */
  Wind_Turbine_B.Rotoranglethetam = Wind_Turbine_X.Rotoranglethetam_CSTATE;

  /* Gain: '<S83>/1\p' */
  Wind_Turbine_B.up = Wind_Turbine_P.up_Gain * Wind_Turbine_B.Rotoranglethetam;

  /* Gain: '<S83>/Gain' */
  Wind_Turbine_B.Gain_o[0] = Wind_Turbine_P.Gain_Gain_k[0] *
    Wind_Turbine_B.web_psb1;
  Wind_Turbine_B.Gain_o[1] = Wind_Turbine_P.Gain_Gain_k[1] *
    Wind_Turbine_B.Sum5_a;
  Wind_Turbine_B.Gain_o[2] = Wind_Turbine_P.Gain_Gain_k[2] * Wind_Turbine_B.up;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
  }

  /* Gain: '<S355>/radps2rpm' */
  Wind_Turbine_B.radps2rpm_p = Wind_Turbine_P.radps2rpm * Wind_Turbine_B.Gain_ax;
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Gain: '<S297>/GAIN' */
    Wind_Turbine_B.GAIN = Wind_Turbine_P.GAIN_Gain * Wind_Turbine_B.OUTPUT_1_0[1];

    /* Gain: '<S288>/Actuator Position to Nacelle Angle' */
    Bias = Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_gear_diameter /
      Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_ring_diameter;
    Wind_Turbine_B.Nacelle_Yaw_Angle = Bias * Wind_Turbine_B.GAIN;

    /* Gain: '<S337>/GAIN' */
    Wind_Turbine_B.GAIN_f = Wind_Turbine_P.GAIN_Gain_e *
      Wind_Turbine_B.OUTPUT_1_0[14];

    /* Gain: '<S291>/Actuator Speed to Nacelle Yaw Rate' */
    Bias = Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_gear_diameter /
      Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_ring_diameter;
    Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate = Bias * Wind_Turbine_B.GAIN_f;

    /* Gain: '<S310>/GAIN' */
    Wind_Turbine_B.GAIN_d = Wind_Turbine_P.GAIN_Gain_c *
      Wind_Turbine_B.OUTPUT_1_0[5];

    /* Gain: '<S289>/Actuator Position to Nacelle Angle' */
    Bias = Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_gear_diameter /
      Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_ring_diameter;
    Wind_Turbine_B.ActuatorPositiontoNacelleAngle = Bias * Wind_Turbine_B.GAIN_d;

    /* Gain: '<S323>/GAIN' */
    Wind_Turbine_B.GAIN_fl = Wind_Turbine_P.GAIN_Gain_cz *
      Wind_Turbine_B.OUTPUT_1_0[9];

    /* Gain: '<S290>/Actuator Position to Nacelle Angle' */
    Bias = Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_gear_diameter /
      Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_ring_diameter;
    Wind_Turbine_B.ActuatorPositiontoNacelleAngl_i = Bias *
      Wind_Turbine_B.GAIN_fl;

    /* Gain: '<S336>/GAIN' */
    Wind_Turbine_B.GAIN_p = Wind_Turbine_P.GAIN_Gain_l *
      Wind_Turbine_B.OUTPUT_1_0[13];

    /* Gain: '<S291>/Actuator Position to Nacelle Angle' */
    Bias = Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_gear_diameter /
      Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_ring_diameter;
    Wind_Turbine_B.ActuatorPositiontoNacelleAngl_k = Bias *
      Wind_Turbine_B.GAIN_p;

    /* Gain: '<S367>/Derivative Control' */
    Bias = Wind_Turbine_P.WT_Params.Yaw_Controller.D_Gain * 0.0;
    Wind_Turbine_B.DerivativeControl = Bias *
      Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate;

    /* Sum: '<S367>/Sum3' */
    Wind_Turbine_B.Sum3_kq[0] = Wind_Turbine_B.Nacelle_Yaw_Angle +
      Wind_Turbine_B.DerivativeControl;
    Wind_Turbine_B.Sum3_kq[1] = Wind_Turbine_B.ActuatorPositiontoNacelleAngle +
      Wind_Turbine_B.DerivativeControl;
    Wind_Turbine_B.Sum3_kq[2] = Wind_Turbine_B.ActuatorPositiontoNacelleAngl_i +
      Wind_Turbine_B.DerivativeControl;
    Wind_Turbine_B.Sum3_kq[3] = Wind_Turbine_B.ActuatorPositiontoNacelleAngl_k +
      Wind_Turbine_B.DerivativeControl;
  }

  /* Sum: '<S367>/Sum' */
  Wind_Turbine_B.Sum_gv[0] = Wind_Turbine_B.FromWs[1] - Wind_Turbine_B.Sum3_kq[0];
  Wind_Turbine_B.Sum_gv[1] = Wind_Turbine_B.FromWs[1] - Wind_Turbine_B.Sum3_kq[1];
  Wind_Turbine_B.Sum_gv[2] = Wind_Turbine_B.FromWs[1] - Wind_Turbine_B.Sum3_kq[2];
  Wind_Turbine_B.Sum_gv[3] = Wind_Turbine_B.FromWs[1] - Wind_Turbine_B.Sum3_kq[3];

  /* Gain: '<S368>/Proportional Gain' */
  Wind_Turbine_B.ProportionalGain_e[0] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.P_Gain * Wind_Turbine_B.Sum_gv[0];
  Wind_Turbine_B.ProportionalGain_e[1] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.P_Gain * Wind_Turbine_B.Sum_gv[1];
  Wind_Turbine_B.ProportionalGain_e[2] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.P_Gain * Wind_Turbine_B.Sum_gv[2];
  Wind_Turbine_B.ProportionalGain_e[3] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.P_Gain * Wind_Turbine_B.Sum_gv[3];

  /* Integrator: '<S368>/Integrator' */
  /* Limited  Integrator  */
  Bias = -Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  uTmp_idx_0 = -Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  tmpForInput_idx_1_re = -Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  if (Wind_Turbine_X.Integrator_CSTATE_b[0] >=
      Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate) {
    if (Wind_Turbine_X.Integrator_CSTATE_b[0] >
        Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
        true);
    }

    Wind_Turbine_X.Integrator_CSTATE_b[0] =
      Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  } else {
    if (Wind_Turbine_X.Integrator_CSTATE_b[0] <= Bias) {
      if (Wind_Turbine_X.Integrator_CSTATE_b[0] < uTmp_idx_0) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
          true);
      }

      Wind_Turbine_X.Integrator_CSTATE_b[0] = tmpForInput_idx_1_re;
    }
  }

  if (Wind_Turbine_X.Integrator_CSTATE_b[1] >=
      Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate) {
    if (Wind_Turbine_X.Integrator_CSTATE_b[1] >
        Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
        true);
    }

    Wind_Turbine_X.Integrator_CSTATE_b[1] =
      Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  } else {
    if (Wind_Turbine_X.Integrator_CSTATE_b[1] <= Bias) {
      if (Wind_Turbine_X.Integrator_CSTATE_b[1] < uTmp_idx_0) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
          true);
      }

      Wind_Turbine_X.Integrator_CSTATE_b[1] = tmpForInput_idx_1_re;
    }
  }

  if (Wind_Turbine_X.Integrator_CSTATE_b[2] >=
      Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate) {
    if (Wind_Turbine_X.Integrator_CSTATE_b[2] >
        Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
        true);
    }

    Wind_Turbine_X.Integrator_CSTATE_b[2] =
      Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  } else {
    if (Wind_Turbine_X.Integrator_CSTATE_b[2] <= Bias) {
      if (Wind_Turbine_X.Integrator_CSTATE_b[2] < uTmp_idx_0) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
          true);
      }

      Wind_Turbine_X.Integrator_CSTATE_b[2] = tmpForInput_idx_1_re;
    }
  }

  if (Wind_Turbine_X.Integrator_CSTATE_b[3] >=
      Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate) {
    if (Wind_Turbine_X.Integrator_CSTATE_b[3] >
        Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
        true);
    }

    Wind_Turbine_X.Integrator_CSTATE_b[3] =
      Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  } else {
    if (Wind_Turbine_X.Integrator_CSTATE_b[3] <= Bias) {
      if (Wind_Turbine_X.Integrator_CSTATE_b[3] < uTmp_idx_0) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
          true);
      }

      Wind_Turbine_X.Integrator_CSTATE_b[3] = tmpForInput_idx_1_re;
    }
  }

  /* Saturate: '<S367>/Limit Nacelle Yaw Rate Cmd' */
  Bias = -Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;

  /* Integrator: '<S368>/Integrator' */
  Wind_Turbine_B.Integrator_iv[0] = Wind_Turbine_X.Integrator_CSTATE_b[0];

  /* Sum: '<S368>/Sum' */
  Wind_Turbine_B.Sum_ko[0] = Wind_Turbine_B.ProportionalGain_e[0] +
    Wind_Turbine_B.Integrator_iv[0];

  /* Saturate: '<S367>/Limit Nacelle Yaw Rate Cmd' */
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum_ko[0];
  uTmp_idx_0 = Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  if (tmpForInput_idx_1_re > uTmp_idx_0) {
    tmpForInput_idx_1_re = uTmp_idx_0;
  } else {
    if (tmpForInput_idx_1_re < Bias) {
      tmpForInput_idx_1_re = Bias;
    }
  }

  Wind_Turbine_B.LimitNacelleYawRateCmd[0] = tmpForInput_idx_1_re;

  /* Integrator: '<S368>/Integrator' */
  Wind_Turbine_B.Integrator_iv[1] = Wind_Turbine_X.Integrator_CSTATE_b[1];

  /* Sum: '<S368>/Sum' */
  Wind_Turbine_B.Sum_ko[1] = Wind_Turbine_B.ProportionalGain_e[1] +
    Wind_Turbine_B.Integrator_iv[1];

  /* Saturate: '<S367>/Limit Nacelle Yaw Rate Cmd' */
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum_ko[1];
  uTmp_idx_0 = Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  if (tmpForInput_idx_1_re > uTmp_idx_0) {
    tmpForInput_idx_1_re = uTmp_idx_0;
  } else {
    if (tmpForInput_idx_1_re < Bias) {
      tmpForInput_idx_1_re = Bias;
    }
  }

  Wind_Turbine_B.LimitNacelleYawRateCmd[1] = tmpForInput_idx_1_re;

  /* Integrator: '<S368>/Integrator' */
  Wind_Turbine_B.Integrator_iv[2] = Wind_Turbine_X.Integrator_CSTATE_b[2];

  /* Sum: '<S368>/Sum' */
  Wind_Turbine_B.Sum_ko[2] = Wind_Turbine_B.ProportionalGain_e[2] +
    Wind_Turbine_B.Integrator_iv[2];

  /* Saturate: '<S367>/Limit Nacelle Yaw Rate Cmd' */
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum_ko[2];
  uTmp_idx_0 = Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  if (tmpForInput_idx_1_re > uTmp_idx_0) {
    tmpForInput_idx_1_re = uTmp_idx_0;
  } else {
    if (tmpForInput_idx_1_re < Bias) {
      tmpForInput_idx_1_re = Bias;
    }
  }

  Wind_Turbine_B.LimitNacelleYawRateCmd[2] = tmpForInput_idx_1_re;

  /* Integrator: '<S368>/Integrator' */
  Wind_Turbine_B.Integrator_iv[3] = Wind_Turbine_X.Integrator_CSTATE_b[3];

  /* Sum: '<S368>/Sum' */
  Wind_Turbine_B.Sum_ko[3] = Wind_Turbine_B.ProportionalGain_e[3] +
    Wind_Turbine_B.Integrator_iv[3];

  /* Saturate: '<S367>/Limit Nacelle Yaw Rate Cmd' */
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum_ko[3];
  uTmp_idx_0 = Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  if (tmpForInput_idx_1_re > uTmp_idx_0) {
    tmpForInput_idx_1_re = uTmp_idx_0;
  } else {
    if (tmpForInput_idx_1_re < Bias) {
      tmpForInput_idx_1_re = Bias;
    }
  }

  Wind_Turbine_B.LimitNacelleYawRateCmd[3] = tmpForInput_idx_1_re;

  /* Sum: '<S367>/Sum1' */
  Wind_Turbine_B.Sum1_g[0] = Wind_Turbine_B.LimitNacelleYawRateCmd[0] -
    Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate;
  Wind_Turbine_B.Sum1_g[1] = Wind_Turbine_B.LimitNacelleYawRateCmd[1] -
    Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate;
  Wind_Turbine_B.Sum1_g[2] = Wind_Turbine_B.LimitNacelleYawRateCmd[2] -
    Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate;
  Wind_Turbine_B.Sum1_g[3] = Wind_Turbine_B.LimitNacelleYawRateCmd[3] -
    Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate;

  /* Gain: '<S369>/Proportional Gain' */
  Wind_Turbine_B.ProportionalGain_e2[0] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.Yaw_Rate.P_Gain *
    Wind_Turbine_B.Sum1_g[0];
  Wind_Turbine_B.ProportionalGain_e2[1] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.Yaw_Rate.P_Gain *
    Wind_Turbine_B.Sum1_g[1];
  Wind_Turbine_B.ProportionalGain_e2[2] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.Yaw_Rate.P_Gain *
    Wind_Turbine_B.Sum1_g[2];
  Wind_Turbine_B.ProportionalGain_e2[3] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.Yaw_Rate.P_Gain *
    Wind_Turbine_B.Sum1_g[3];

  /* Integrator: '<S369>/Integrator' */
  /* Limited  Integrator  */
  if (Wind_Turbine_X.Integrator_CSTATE_bc[0] >=
      Wind_Turbine_P.Integrator_UpperSat) {
    if (Wind_Turbine_X.Integrator_CSTATE_bc[0] >
        Wind_Turbine_P.Integrator_UpperSat) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
        true);
    }

    Wind_Turbine_X.Integrator_CSTATE_bc[0] = Wind_Turbine_P.Integrator_UpperSat;
  } else {
    if (Wind_Turbine_X.Integrator_CSTATE_bc[0] <=
        Wind_Turbine_P.Integrator_LowerSat) {
      if (Wind_Turbine_X.Integrator_CSTATE_bc[0] <
          Wind_Turbine_P.Integrator_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
          true);
      }

      Wind_Turbine_X.Integrator_CSTATE_bc[0] =
        Wind_Turbine_P.Integrator_LowerSat;
    }
  }

  if (Wind_Turbine_X.Integrator_CSTATE_bc[1] >=
      Wind_Turbine_P.Integrator_UpperSat) {
    if (Wind_Turbine_X.Integrator_CSTATE_bc[1] >
        Wind_Turbine_P.Integrator_UpperSat) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
        true);
    }

    Wind_Turbine_X.Integrator_CSTATE_bc[1] = Wind_Turbine_P.Integrator_UpperSat;
  } else {
    if (Wind_Turbine_X.Integrator_CSTATE_bc[1] <=
        Wind_Turbine_P.Integrator_LowerSat) {
      if (Wind_Turbine_X.Integrator_CSTATE_bc[1] <
          Wind_Turbine_P.Integrator_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
          true);
      }

      Wind_Turbine_X.Integrator_CSTATE_bc[1] =
        Wind_Turbine_P.Integrator_LowerSat;
    }
  }

  if (Wind_Turbine_X.Integrator_CSTATE_bc[2] >=
      Wind_Turbine_P.Integrator_UpperSat) {
    if (Wind_Turbine_X.Integrator_CSTATE_bc[2] >
        Wind_Turbine_P.Integrator_UpperSat) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
        true);
    }

    Wind_Turbine_X.Integrator_CSTATE_bc[2] = Wind_Turbine_P.Integrator_UpperSat;
  } else {
    if (Wind_Turbine_X.Integrator_CSTATE_bc[2] <=
        Wind_Turbine_P.Integrator_LowerSat) {
      if (Wind_Turbine_X.Integrator_CSTATE_bc[2] <
          Wind_Turbine_P.Integrator_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
          true);
      }

      Wind_Turbine_X.Integrator_CSTATE_bc[2] =
        Wind_Turbine_P.Integrator_LowerSat;
    }
  }

  if (Wind_Turbine_X.Integrator_CSTATE_bc[3] >=
      Wind_Turbine_P.Integrator_UpperSat) {
    if (Wind_Turbine_X.Integrator_CSTATE_bc[3] >
        Wind_Turbine_P.Integrator_UpperSat) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
        true);
    }

    Wind_Turbine_X.Integrator_CSTATE_bc[3] = Wind_Turbine_P.Integrator_UpperSat;
  } else {
    if (Wind_Turbine_X.Integrator_CSTATE_bc[3] <=
        Wind_Turbine_P.Integrator_LowerSat) {
      if (Wind_Turbine_X.Integrator_CSTATE_bc[3] <
          Wind_Turbine_P.Integrator_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(&Wind_Turbine_M->solverInfo,
          true);
      }

      Wind_Turbine_X.Integrator_CSTATE_bc[3] =
        Wind_Turbine_P.Integrator_LowerSat;
    }
  }

  Wind_Turbine_B.Integrator_b[0] = Wind_Turbine_X.Integrator_CSTATE_bc[0];

  /* Sum: '<S369>/Sum' */
  Wind_Turbine_B.Sum_eb[0] = Wind_Turbine_B.ProportionalGain_e2[0] +
    Wind_Turbine_B.Integrator_b[0];

  /* Integrator: '<S369>/Integrator' */
  Wind_Turbine_B.Integrator_b[1] = Wind_Turbine_X.Integrator_CSTATE_bc[1];

  /* Sum: '<S369>/Sum' */
  Wind_Turbine_B.Sum_eb[1] = Wind_Turbine_B.ProportionalGain_e2[1] +
    Wind_Turbine_B.Integrator_b[1];

  /* Integrator: '<S369>/Integrator' */
  Wind_Turbine_B.Integrator_b[2] = Wind_Turbine_X.Integrator_CSTATE_bc[2];

  /* Sum: '<S369>/Sum' */
  Wind_Turbine_B.Sum_eb[2] = Wind_Turbine_B.ProportionalGain_e2[2] +
    Wind_Turbine_B.Integrator_b[2];

  /* Integrator: '<S369>/Integrator' */
  Wind_Turbine_B.Integrator_b[3] = Wind_Turbine_X.Integrator_CSTATE_bc[3];

  /* Sum: '<S369>/Sum' */
  Wind_Turbine_B.Sum_eb[3] = Wind_Turbine_B.ProportionalGain_e2[3] +
    Wind_Turbine_B.Integrator_b[3];

  /* Saturate: '<S367>/Limit Servomotor Torque Cmd' */
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum_eb[0];
  if (tmpForInput_idx_1_re > Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS) {
    tmpForInput_idx_1_re = Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS;
  } else {
    if (tmpForInput_idx_1_re < Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS) {
      tmpForInput_idx_1_re = Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS;
    }
  }

  Wind_Turbine_B.TorqueCommand[0] = tmpForInput_idx_1_re;
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum_eb[1];
  if (tmpForInput_idx_1_re > Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS) {
    tmpForInput_idx_1_re = Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS;
  } else {
    if (tmpForInput_idx_1_re < Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS) {
      tmpForInput_idx_1_re = Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS;
    }
  }

  Wind_Turbine_B.TorqueCommand[1] = tmpForInput_idx_1_re;
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum_eb[2];
  if (tmpForInput_idx_1_re > Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS) {
    tmpForInput_idx_1_re = Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS;
  } else {
    if (tmpForInput_idx_1_re < Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS) {
      tmpForInput_idx_1_re = Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS;
    }
  }

  Wind_Turbine_B.TorqueCommand[2] = tmpForInput_idx_1_re;
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum_eb[3];
  if (tmpForInput_idx_1_re > Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS) {
    tmpForInput_idx_1_re = Wind_Turbine_P.LimitServomotorTorqueCmd_UpperS;
  } else {
    if (tmpForInput_idx_1_re < Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS) {
      tmpForInput_idx_1_re = Wind_Turbine_P.LimitServomotorTorqueCmd_LowerS;
    }
  }

  Wind_Turbine_B.TorqueCommand[3] = tmpForInput_idx_1_re;

  /* End of Saturate: '<S367>/Limit Servomotor Torque Cmd' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
  }

  /* Gain: '<S158>/Gain' */
  Wind_Turbine_B.Gain_ag = Wind_Turbine_P.Gain_Gain_j *
    Wind_Turbine_B.OUTPUT_6_0[5];

  /* Sum: '<S18>/Sum' */
  Wind_Turbine_B.Sum_c = Wind_Turbine_B.Gain_ag - Wind_Turbine_B.Gain_j;

  /* Sum: '<S19>/Sum' */
  Wind_Turbine_B.Sum_m = Wind_Turbine_B.Gain_ax - Wind_Turbine_B.Gain_ep;

  /* Derivative: '<S41>/Derivative' */
  if ((Wind_Turbine_DW.TimeStampA >= Wind_Turbine_M->Timing.t[0]) &&
      (Wind_Turbine_DW.TimeStampB >= Wind_Turbine_M->Timing.t[0])) {
    Wind_Turbine_B.Derivative = 0.0;
  } else {
    Bias = Wind_Turbine_DW.TimeStampA;
    parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeA;
    if (Wind_Turbine_DW.TimeStampA < Wind_Turbine_DW.TimeStampB) {
      if (Wind_Turbine_DW.TimeStampB < Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB;
      }
    } else {
      if (Wind_Turbine_DW.TimeStampA >= Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB;
      }
    }

    Bias = Wind_Turbine_M->Timing.t[0] - Bias;
    Wind_Turbine_B.Derivative = (Wind_Turbine_B.LookUpTable -
      *parameterBundle_mRealParameters) / Bias;
  }

  /* End of Derivative: '<S41>/Derivative' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* RelationalOperator: '<S40>/Relational Operator' incorporates:
     *  Constant: '<S36>/valp_nom5'
     *  Constant: '<S40>/Constant'
     */
    Wind_Turbine_B.RelationalOperator = (Wind_Turbine_P.valp_nom5_Value ==
      Wind_Turbine_P.Constant_Value_c);

    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S40>/Constant2'
     *  Constant: '<S40>/valp_nom7'
     */
    if (Wind_Turbine_B.RelationalOperator) {
      Wind_Turbine_B.Switch1_d = Wind_Turbine_P.VariationSubSystem_VariationRat;
    } else {
      Wind_Turbine_B.Switch1_d = Wind_Turbine_P.Constant2_Value;
    }

    /* End of Switch: '<S40>/Switch1' */
  }

  /* Switch: '<S40>/Switch' incorporates:
   *  Constant: '<S40>/Constant4'
   */
  if (Wind_Turbine_B.Ton >= Wind_Turbine_P.Switch_Threshold_j) {
    Wind_Turbine_B.Switch_o = Wind_Turbine_B.Switch1_d;
  } else {
    Wind_Turbine_B.Switch_o = Wind_Turbine_P.Constant4_Value_f;
  }

  /* End of Switch: '<S40>/Switch' */

  /* Gain: '<S45>/do not delete this gain' */
  Wind_Turbine_B.donotdeletethisgain_h.re =
    Wind_Turbine_P.donotdeletethisgain_Gain_f *
    Wind_Turbine_B.RealImagtoComplex[8].re;
  Wind_Turbine_B.donotdeletethisgain_h.im =
    Wind_Turbine_P.donotdeletethisgain_Gain_f *
    Wind_Turbine_B.RealImagtoComplex[8].im;

  /* Gain: '<S46>/do not delete this gain' */
  Wind_Turbine_B.donotdeletethisgain_a.re =
    Wind_Turbine_P.donotdeletethisgain_Gain_n *
    Wind_Turbine_B.RealImagtoComplex[9].re;
  Wind_Turbine_B.donotdeletethisgain_a.im =
    Wind_Turbine_P.donotdeletethisgain_Gain_n *
    Wind_Turbine_B.RealImagtoComplex[9].im;

  /* Gain: '<S47>/do not delete this gain' */
  Wind_Turbine_B.donotdeletethisgain_k.re =
    Wind_Turbine_P.donotdeletethisgain_Gain_b *
    Wind_Turbine_B.RealImagtoComplex[10].re;
  Wind_Turbine_B.donotdeletethisgain_k.im =
    Wind_Turbine_P.donotdeletethisgain_Gain_b *
    Wind_Turbine_B.RealImagtoComplex[10].im;

  /* Gain: '<S35>/Kv' */
  Wind_Turbine_B.Kv_p[0].re = Wind_Turbine_P.Kv_Gain_l *
    Wind_Turbine_B.donotdeletethisgain_h.re;
  Wind_Turbine_B.Kv_p[0].im = Wind_Turbine_P.Kv_Gain_l *
    Wind_Turbine_B.donotdeletethisgain_h.im;
  Wind_Turbine_B.Kv_p[1].re = Wind_Turbine_P.Kv_Gain_l *
    Wind_Turbine_B.donotdeletethisgain_a.re;
  Wind_Turbine_B.Kv_p[1].im = Wind_Turbine_P.Kv_Gain_l *
    Wind_Turbine_B.donotdeletethisgain_a.im;
  Wind_Turbine_B.Kv_p[2].re = Wind_Turbine_P.Kv_Gain_l *
    Wind_Turbine_B.donotdeletethisgain_k.re;
  Wind_Turbine_B.Kv_p[2].im = Wind_Turbine_P.Kv_Gain_l *
    Wind_Turbine_B.donotdeletethisgain_k.im;

  /* Gain: '<S35>/Kv1' */
  Wind_Turbine_B.Kv1_p[0].re = Wind_Turbine_P.Kv1_Gain_p *
    Wind_Turbine_B.donotdeletethisgain_h.re;
  Wind_Turbine_B.Kv1_p[0].im = Wind_Turbine_P.Kv1_Gain_p *
    Wind_Turbine_B.donotdeletethisgain_h.im;
  Wind_Turbine_B.Kv1_p[1].re = Wind_Turbine_P.Kv1_Gain_p *
    Wind_Turbine_B.donotdeletethisgain_a.re;
  Wind_Turbine_B.Kv1_p[1].im = Wind_Turbine_P.Kv1_Gain_p *
    Wind_Turbine_B.donotdeletethisgain_a.im;
  Wind_Turbine_B.Kv1_p[2].re = Wind_Turbine_P.Kv1_Gain_p *
    Wind_Turbine_B.donotdeletethisgain_k.re;
  Wind_Turbine_B.Kv1_p[2].im = Wind_Turbine_P.Kv1_Gain_p *
    Wind_Turbine_B.donotdeletethisgain_k.im;

  /* ComplexToMagnitudeAngle: '<S43>/Magnitude' */
  Wind_Turbine_B.Magnitude[0] = rt_hypotd_snf(Wind_Turbine_B.Kv1_p[0].re,
    Wind_Turbine_B.Kv1_p[0].im);
  Wind_Turbine_B.Magnitude[1] = rt_hypotd_snf(Wind_Turbine_B.Kv1_p[1].re,
    Wind_Turbine_B.Kv1_p[1].im);
  Wind_Turbine_B.Magnitude[2] = rt_hypotd_snf(Wind_Turbine_B.Kv1_p[2].re,
    Wind_Turbine_B.Kv1_p[2].im);

  /* Gain: '<S71>/pu2rpm' */
  Bias = 1.0 / Wind_Turbine_P.WT_Params.Generator.radps2pu *
    Wind_Turbine_P.radps2rpm;
  Wind_Turbine_B.pu2rpm = Bias * Wind_Turbine_B.Gain_o[0];
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
  }

  /* Derivative: '<S128>/Derivative' */
  if ((Wind_Turbine_DW.TimeStampA_n >= Wind_Turbine_M->Timing.t[0]) &&
      (Wind_Turbine_DW.TimeStampB_j >= Wind_Turbine_M->Timing.t[0])) {
    Wind_Turbine_B.Derivative_m = 0.0;
  } else {
    Bias = Wind_Turbine_DW.TimeStampA_n;
    parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeA_l;
    if (Wind_Turbine_DW.TimeStampA_n < Wind_Turbine_DW.TimeStampB_j) {
      if (Wind_Turbine_DW.TimeStampB_j < Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_j;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_g;
      }
    } else {
      if (Wind_Turbine_DW.TimeStampA_n >= Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_j;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_g;
      }
    }

    Bias = Wind_Turbine_M->Timing.t[0] - Bias;
    Wind_Turbine_B.Derivative_m = (Wind_Turbine_B.LookUpTable_n -
      *parameterBundle_mRealParameters) / Bias;
  }

  /* End of Derivative: '<S128>/Derivative' */

  /* Derivative: '<S130>/Derivative' */
  if ((Wind_Turbine_DW.TimeStampA_g >= Wind_Turbine_M->Timing.t[0]) &&
      (Wind_Turbine_DW.TimeStampB_k >= Wind_Turbine_M->Timing.t[0])) {
    Wind_Turbine_B.Derivative_o = 0.0;
  } else {
    Bias = Wind_Turbine_DW.TimeStampA_g;
    parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeA_h;
    if (Wind_Turbine_DW.TimeStampA_g < Wind_Turbine_DW.TimeStampB_k) {
      if (Wind_Turbine_DW.TimeStampB_k < Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_k;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_gr;
      }
    } else {
      if (Wind_Turbine_DW.TimeStampA_g >= Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_k;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_gr;
      }
    }

    Bias = Wind_Turbine_M->Timing.t[0] - Bias;
    Wind_Turbine_B.Derivative_o = (Wind_Turbine_B.LookUpTable_k -
      *parameterBundle_mRealParameters) / Bias;
  }

  /* End of Derivative: '<S130>/Derivative' */

  /* Derivative: '<S132>/Derivative' */
  if ((Wind_Turbine_DW.TimeStampA_o >= Wind_Turbine_M->Timing.t[0]) &&
      (Wind_Turbine_DW.TimeStampB_m >= Wind_Turbine_M->Timing.t[0])) {
    Wind_Turbine_B.Derivative_f = 0.0;
  } else {
    Bias = Wind_Turbine_DW.TimeStampA_o;
    parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeA_e;
    if (Wind_Turbine_DW.TimeStampA_o < Wind_Turbine_DW.TimeStampB_m) {
      if (Wind_Turbine_DW.TimeStampB_m < Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_m;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_a;
      }
    } else {
      if (Wind_Turbine_DW.TimeStampA_o >= Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_m;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_a;
      }
    }

    Bias = Wind_Turbine_M->Timing.t[0] - Bias;
    Wind_Turbine_B.Derivative_f = (Wind_Turbine_B.LookUpTable_l -
      *parameterBundle_mRealParameters) / Bias;
  }

  /* End of Derivative: '<S132>/Derivative' */

  /* Derivative: '<S133>/Derivative' */
  if ((Wind_Turbine_DW.TimeStampA_f >= Wind_Turbine_M->Timing.t[0]) &&
      (Wind_Turbine_DW.TimeStampB_l >= Wind_Turbine_M->Timing.t[0])) {
    Wind_Turbine_B.Derivative_p = 0.0;
  } else {
    Bias = Wind_Turbine_DW.TimeStampA_f;
    parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeA_i;
    if (Wind_Turbine_DW.TimeStampA_f < Wind_Turbine_DW.TimeStampB_l) {
      if (Wind_Turbine_DW.TimeStampB_l < Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_l;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_c;
      }
    } else {
      if (Wind_Turbine_DW.TimeStampA_f >= Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_l;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_c;
      }
    }

    Bias = Wind_Turbine_M->Timing.t[0] - Bias;
    Wind_Turbine_B.Derivative_p = (Wind_Turbine_B.LookUpTable_i -
      *parameterBundle_mRealParameters) / Bias;
  }

  /* End of Derivative: '<S133>/Derivative' */

  /* Derivative: '<S139>/Derivative' */
  if ((Wind_Turbine_DW.TimeStampA_fn >= Wind_Turbine_M->Timing.t[0]) &&
      (Wind_Turbine_DW.TimeStampB_e >= Wind_Turbine_M->Timing.t[0])) {
    Wind_Turbine_B.Derivative_pb = 0.0;
  } else {
    Bias = Wind_Turbine_DW.TimeStampA_fn;
    parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeA_f;
    if (Wind_Turbine_DW.TimeStampA_fn < Wind_Turbine_DW.TimeStampB_e) {
      if (Wind_Turbine_DW.TimeStampB_e < Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_e;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_m;
      }
    } else {
      if (Wind_Turbine_DW.TimeStampA_fn >= Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_e;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_m;
      }
    }

    Bias = Wind_Turbine_M->Timing.t[0] - Bias;
    Wind_Turbine_B.Derivative_pb = (Wind_Turbine_B.LookUpTable_j -
      *parameterBundle_mRealParameters) / Bias;
  }

  /* End of Derivative: '<S139>/Derivative' */

  /* Derivative: '<S141>/Derivative' */
  if ((Wind_Turbine_DW.TimeStampA_p >= Wind_Turbine_M->Timing.t[0]) &&
      (Wind_Turbine_DW.TimeStampB_f >= Wind_Turbine_M->Timing.t[0])) {
    Wind_Turbine_B.Derivative_m5 = 0.0;
  } else {
    Bias = Wind_Turbine_DW.TimeStampA_p;
    parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeA_c;
    if (Wind_Turbine_DW.TimeStampA_p < Wind_Turbine_DW.TimeStampB_f) {
      if (Wind_Turbine_DW.TimeStampB_f < Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_f;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_h;
      }
    } else {
      if (Wind_Turbine_DW.TimeStampA_p >= Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_f;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_h;
      }
    }

    Bias = Wind_Turbine_M->Timing.t[0] - Bias;
    Wind_Turbine_B.Derivative_m5 = (Wind_Turbine_B.LookUpTable_o -
      *parameterBundle_mRealParameters) / Bias;
  }

  /* End of Derivative: '<S141>/Derivative' */

  /* Derivative: '<S143>/Derivative' */
  if ((Wind_Turbine_DW.TimeStampA_na >= Wind_Turbine_M->Timing.t[0]) &&
      (Wind_Turbine_DW.TimeStampB_kf >= Wind_Turbine_M->Timing.t[0])) {
    Wind_Turbine_B.Derivative_j = 0.0;
  } else {
    Bias = Wind_Turbine_DW.TimeStampA_na;
    parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeA_is;
    if (Wind_Turbine_DW.TimeStampA_na < Wind_Turbine_DW.TimeStampB_kf) {
      if (Wind_Turbine_DW.TimeStampB_kf < Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_kf;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_b;
      }
    } else {
      if (Wind_Turbine_DW.TimeStampA_na >= Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_kf;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_b;
      }
    }

    Bias = Wind_Turbine_M->Timing.t[0] - Bias;
    Wind_Turbine_B.Derivative_j = (Wind_Turbine_B.LookUpTable_h -
      *parameterBundle_mRealParameters) / Bias;
  }

  /* End of Derivative: '<S143>/Derivative' */

  /* Derivative: '<S144>/Derivative' */
  if ((Wind_Turbine_DW.TimeStampA_fy >= Wind_Turbine_M->Timing.t[0]) &&
      (Wind_Turbine_DW.TimeStampB_fl >= Wind_Turbine_M->Timing.t[0])) {
    Wind_Turbine_B.Derivative_i = 0.0;
  } else {
    Bias = Wind_Turbine_DW.TimeStampA_fy;
    parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeA_p;
    if (Wind_Turbine_DW.TimeStampA_fy < Wind_Turbine_DW.TimeStampB_fl) {
      if (Wind_Turbine_DW.TimeStampB_fl < Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_fl;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_p;
      }
    } else {
      if (Wind_Turbine_DW.TimeStampA_fy >= Wind_Turbine_M->Timing.t[0]) {
        Bias = Wind_Turbine_DW.TimeStampB_fl;
        parameterBundle_mRealParameters = &Wind_Turbine_DW.LastUAtTimeB_p;
      }
    }

    Bias = Wind_Turbine_M->Timing.t[0] - Bias;
    Wind_Turbine_B.Derivative_i = (Wind_Turbine_B.LookUpTable_g -
      *parameterBundle_mRealParameters) / Bias;
  }

  /* End of Derivative: '<S144>/Derivative' */

  /* Gain: '<S71>/torque_pu2Nm' */
  Wind_Turbine_B.torque_pu2Nm = Wind_Turbine_P.WT_Params.Generator.torque_pu2Nm *
    Wind_Turbine_B.Gain_o[1];

  /* Sum: '<S72>/Sum' */
  Wind_Turbine_B.Sum_d = Wind_Turbine_B.torque_pu2Nm - Wind_Turbine_B.Gain_l;

  /* Sum: '<S73>/Sum' */
  Wind_Turbine_B.Sum_n = Wind_Turbine_B.pu2rpm - Wind_Turbine_B.Gain_e;

  /* RealImagToComplex: '<S89>/Real-Imag to Complex' */
  Wind_Turbine_B.I1_c.re = Wind_Turbine_B.Product3_l[3];
  Wind_Turbine_B.I1_c.im = Wind_Turbine_B.Product3_l[2];
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Sum: '<S81>/Sum2' incorporates:
     *  Constant: '<S81>/ws2'
     */
    Wind_Turbine_B.s2wswr = Wind_Turbine_B.web_psb1 + Wind_Turbine_P.ws2_Value;

    /* Product: '<S99>/Product2' incorporates:
     *  Constant: '<S99>/Constant2'
     */
    Wind_Turbine_B.Product2_g = Wind_Turbine_P.Constant2_Value_l /
      Wind_Turbine_B.s2wswr;

    /* Sum: '<S99>/Sum2' incorporates:
     *  Constant: '<S99>/Constant4'
     */
    Wind_Turbine_B.Sum2.re = Wind_Turbine_B.Product2_g +
      Wind_Turbine_P.Constant4_Value_l.re;
    Wind_Turbine_B.Sum2.im = Wind_Turbine_P.Constant4_Value_l.im;

    /* Sum: '<S98>/Sum1' incorporates:
     *  Constant: '<S98>/Constant4'
     */
    Wind_Turbine_B.ZrZm.re = Wind_Turbine_B.Sum2.re +
      Wind_Turbine_P.Constant4_Value_j.re;
    Wind_Turbine_B.ZrZm.im = Wind_Turbine_B.Sum2.im +
      Wind_Turbine_P.Constant4_Value_j.im;

    /* Product: '<S98>/Product4' incorporates:
     *  Constant: '<S98>/Constant4'
     */
    br = Wind_Turbine_B.ZrZm.re;
    bi = Wind_Turbine_B.ZrZm.im;
    if (bi == 0.0) {
      uTmp_idx_0 = 1.0 / br;
      tmpForInput_idx_1_re = 0.0;
    } else if (br == 0.0) {
      uTmp_idx_0 = 0.0;
      tmpForInput_idx_1_re = -(1.0 / bi);
    } else {
      tmpForInput_idx_1_im = fabs(br);
      uTmp_idx_0 = fabs(bi);
      if (tmpForInput_idx_1_im > uTmp_idx_0) {
        tmpForInput_idx_1_im = bi / br;
        bi = tmpForInput_idx_1_im * bi + br;
        uTmp_idx_0 = 1.0 / bi;
        tmpForInput_idx_1_re = -(tmpForInput_idx_1_im / bi);
      } else if (uTmp_idx_0 == tmpForInput_idx_1_im) {
        br = br > 0.0 ? 0.5 : -0.5;
        bi = bi > 0.0 ? 0.5 : -0.5;
        Bias = -bi;
        uTmp_idx_0 = br / tmpForInput_idx_1_im;
        tmpForInput_idx_1_re = Bias / tmpForInput_idx_1_im;
      } else {
        tmpForInput_idx_1_im = br / bi;
        bi += tmpForInput_idx_1_im * br;
        uTmp_idx_0 = tmpForInput_idx_1_im / bi;
        tmpForInput_idx_1_re = -(1.0 / bi);
      }
    }

    Bias = uTmp_idx_0 * Wind_Turbine_P.Constant4_Value_j.re -
      tmpForInput_idx_1_re * Wind_Turbine_P.Constant4_Value_j.im;
    tmpForInput_idx_1_re = uTmp_idx_0 * Wind_Turbine_P.Constant4_Value_j.im +
      tmpForInput_idx_1_re * Wind_Turbine_P.Constant4_Value_j.re;
    Wind_Turbine_B.Product4.re = Bias;
    Wind_Turbine_B.Product4.im = tmpForInput_idx_1_re;

    /* End of Product: '<S98>/Product4' */
  }

  /* Product: '<S88>/Product3' */
  uTmp_idx_0 = Wind_Turbine_B.RealImagtoComplex1.re * Wind_Turbine_B.Product4.re
    - Wind_Turbine_B.RealImagtoComplex1.im * Wind_Turbine_B.Product4.im;
  tmpForInput_idx_1_re = Wind_Turbine_B.RealImagtoComplex1.re *
    Wind_Turbine_B.Product4.im + Wind_Turbine_B.RealImagtoComplex1.im *
    Wind_Turbine_B.Product4.re;
  Wind_Turbine_B.Product3.re = uTmp_idx_0;
  Wind_Turbine_B.Product3.im = tmpForInput_idx_1_re;

  /* Gain: '<S88>/Gain1' */
  Wind_Turbine_B.Gain1_e.re = Wind_Turbine_P.Gain1_Gain_h *
    Wind_Turbine_B.Product3.re;
  Wind_Turbine_B.Gain1_e.im = Wind_Turbine_P.Gain1_Gain_h *
    Wind_Turbine_B.Product3.im;

  /* Sum: '<S89>/Sum3' */
  Wind_Turbine_B.Sum3_i.re = Wind_Turbine_B.I1_c.re + Wind_Turbine_B.Gain1_e.re;
  Wind_Turbine_B.Sum3_i.im = Wind_Turbine_B.I1_c.im + Wind_Turbine_B.Gain1_e.im;

  /* Gain: '<S89>/a^2' */
  uTmp_idx_0 = Wind_Turbine_P.a2_Gain_j.re * Wind_Turbine_B.I1_c.re -
    Wind_Turbine_P.a2_Gain_j.im * Wind_Turbine_B.I1_c.im;
  tmpForInput_idx_1_re = Wind_Turbine_P.a2_Gain_j.re * Wind_Turbine_B.I1_c.im +
    Wind_Turbine_P.a2_Gain_j.im * Wind_Turbine_B.I1_c.re;
  Wind_Turbine_B.a2_k.re = uTmp_idx_0;
  Wind_Turbine_B.a2_k.im = tmpForInput_idx_1_re;

  /* Gain: '<S89>/a' */
  uTmp_idx_0 = Wind_Turbine_P.a_Gain_o.re * Wind_Turbine_B.Gain1_e.re -
    Wind_Turbine_P.a_Gain_o.im * Wind_Turbine_B.Gain1_e.im;
  tmpForInput_idx_1_re = Wind_Turbine_P.a_Gain_o.re * Wind_Turbine_B.Gain1_e.im
    + Wind_Turbine_P.a_Gain_o.im * Wind_Turbine_B.Gain1_e.re;
  Wind_Turbine_B.a_g.re = uTmp_idx_0;
  Wind_Turbine_B.a_g.im = tmpForInput_idx_1_re;

  /* Sum: '<S89>/Sum1' */
  Wind_Turbine_B.Sum1_b.re = Wind_Turbine_B.a2_k.re + Wind_Turbine_B.a_g.re;
  Wind_Turbine_B.Sum1_b.im = Wind_Turbine_B.a2_k.im + Wind_Turbine_B.a_g.im;

  /* Sum: '<S89>/Sum' */
  uTmp_idx_0 = Wind_Turbine_B.Sum3_i.re;
  Bias = Wind_Turbine_B.Sum3_i.im;
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum1_b.re;
  tmpForInput_idx_1_im = Wind_Turbine_B.Sum1_b.im;
  uTmp_idx_0 += tmpForInput_idx_1_re;
  Bias += tmpForInput_idx_1_im;
  Wind_Turbine_B.Sum.re = uTmp_idx_0;
  Wind_Turbine_B.Sum.im = Bias;

  /* Gain: '<S89>/inv' */
  Wind_Turbine_B.ic.re = Wind_Turbine_P.inv_Gain * Wind_Turbine_B.Sum.re;
  Wind_Turbine_B.ic.im = Wind_Turbine_P.inv_Gain * Wind_Turbine_B.Sum.im;

  /* ComplexToMagnitudeAngle: '<S81>/Complex to Magnitude-Angle' */
  Wind_Turbine_B.irabc[0] = rt_hypotd_snf(Wind_Turbine_B.Sum3_i.re,
    Wind_Turbine_B.Sum3_i.im);
  Wind_Turbine_B.irabc[1] = rt_hypotd_snf(Wind_Turbine_B.Sum1_b.re,
    Wind_Turbine_B.Sum1_b.im);
  Wind_Turbine_B.irabc[2] = rt_hypotd_snf(Wind_Turbine_B.ic.re,
    Wind_Turbine_B.ic.im);

  /* Sum: '<S90>/Sum' */
  uTmp_idx_0 = Wind_Turbine_B.Sum3.re;
  Bias = Wind_Turbine_B.Sum3.im;
  tmpForInput_idx_1_re = Wind_Turbine_B.Sum1.re;
  tmpForInput_idx_1_im = Wind_Turbine_B.Sum1.im;
  uTmp_idx_0 += tmpForInput_idx_1_re;
  Bias += tmpForInput_idx_1_im;
  Wind_Turbine_B.Sum_f.re = uTmp_idx_0;
  Wind_Turbine_B.Sum_f.im = Bias;

  /* Gain: '<S90>/inv' */
  Wind_Turbine_B.ic_g.re = Wind_Turbine_P.inv_Gain_h * Wind_Turbine_B.Sum_f.re;
  Wind_Turbine_B.ic_g.im = Wind_Turbine_P.inv_Gain_h * Wind_Turbine_B.Sum_f.im;

  /* ComplexToMagnitudeAngle: '<S81>/Complex to Magnitude-Angle1' */
  Wind_Turbine_B.isabc[0] = rt_hypotd_snf(Wind_Turbine_B.Sum3.re,
    Wind_Turbine_B.Sum3.im);
  Wind_Turbine_B.isabc[1] = rt_hypotd_snf(Wind_Turbine_B.Sum1.re,
    Wind_Turbine_B.Sum1.im);
  Wind_Turbine_B.isabc[2] = rt_hypotd_snf(Wind_Turbine_B.ic_g.re,
    Wind_Turbine_B.ic_g.im);

  /* Gain: '<S85>/Gain' */
  Wind_Turbine_B.Gain.re = Wind_Turbine_P.Gain_Gain_h * Wind_Turbine_B.u_Vb[0].
    re;
  Wind_Turbine_B.Gain.im = Wind_Turbine_P.Gain_Gain_h * Wind_Turbine_B.u_Vb[0].
    im;

  /* Gain: '<S85>/(a^2)//3' */
  uTmp_idx_0 = Wind_Turbine_P.a23_Gain.re * Wind_Turbine_B.u_Vb[1].re -
    Wind_Turbine_P.a23_Gain.im * Wind_Turbine_B.u_Vb[1].im;
  tmpForInput_idx_1_re = Wind_Turbine_P.a23_Gain.re * Wind_Turbine_B.u_Vb[1].im
    + Wind_Turbine_P.a23_Gain.im * Wind_Turbine_B.u_Vb[1].re;
  Wind_Turbine_B.a23.re = uTmp_idx_0;
  Wind_Turbine_B.a23.im = tmpForInput_idx_1_re;

  /* Sum: '<S85>/Sum3' */
  Wind_Turbine_B.V1.re = Wind_Turbine_B.Gain.re - Wind_Turbine_B.a23.re;
  Wind_Turbine_B.V1.im = Wind_Turbine_B.Gain.im - Wind_Turbine_B.a23.im;

  /* ComplexToRealImag: '<S85>/Complex to Real-Imag' */
  Wind_Turbine_B.ComplextoRealImag_o1_p = Wind_Turbine_B.V1.re;
  Wind_Turbine_B.ComplextoRealImag_o2_f = Wind_Turbine_B.V1.im;

  /* Switch: '<S87>/Switch2' incorporates:
   *  Constant: '<S87>/Constant5'
   *  Constant: '<S87>/Lm_nosat'
   */
  if (Wind_Turbine_P.Constant5_Value_a >= Wind_Turbine_P.Switch2_Threshold_h) {
    Wind_Turbine_B.Switch2_a = Wind_Turbine_B.Lm;
  } else {
    Wind_Turbine_B.Switch2_a = Wind_Turbine_P.Lm_nosat_Value;
  }

  /* End of Switch: '<S87>/Switch2' */

  /* Gain: '<S81>/Gain' incorporates:
   *  Constant: '<S81>/Vqdr1'
   */
  Wind_Turbine_B.Gain_lj[0] = Wind_Turbine_P.Gain_Gain_d[0] *
    Wind_Turbine_B.irabc[0];
  Wind_Turbine_B.Gain_lj[1] = Wind_Turbine_P.Gain_Gain_d[1] *
    Wind_Turbine_B.irabc[1];
  Wind_Turbine_B.Gain_lj[2] = Wind_Turbine_P.Gain_Gain_d[2] *
    Wind_Turbine_B.irabc[2];
  Wind_Turbine_B.Gain_lj[3] = Wind_Turbine_P.Gain_Gain_d[3] *
    Wind_Turbine_B.Product3_l[2];
  Wind_Turbine_B.Gain_lj[4] = Wind_Turbine_P.Gain_Gain_d[4] *
    Wind_Turbine_B.Product3_l[3];
  Wind_Turbine_B.Gain_lj[5] = Wind_Turbine_P.Gain_Gain_d[5] *
    Wind_Turbine_B.Integrator_pj[2];
  Wind_Turbine_B.Gain_lj[6] = Wind_Turbine_P.Gain_Gain_d[6] *
    Wind_Turbine_B.Integrator_pj[3];
  Wind_Turbine_B.Gain_lj[7] = Wind_Turbine_P.Gain_Gain_d[7] *
    Wind_Turbine_P.Vqdr1_Value[0];
  Wind_Turbine_B.Gain_lj[8] = Wind_Turbine_P.Gain_Gain_d[8] *
    Wind_Turbine_P.Vqdr1_Value[1];
  Wind_Turbine_B.Gain_lj[9] = Wind_Turbine_P.Gain_Gain_d[9] *
    Wind_Turbine_B.isabc[0];
  Wind_Turbine_B.Gain_lj[10] = Wind_Turbine_P.Gain_Gain_d[10] *
    Wind_Turbine_B.isabc[1];
  Wind_Turbine_B.Gain_lj[11] = Wind_Turbine_P.Gain_Gain_d[11] *
    Wind_Turbine_B.isabc[2];
  Wind_Turbine_B.Gain_lj[12] = Wind_Turbine_P.Gain_Gain_d[12] *
    Wind_Turbine_B.Product3_l[0];
  Wind_Turbine_B.Gain_lj[13] = Wind_Turbine_P.Gain_Gain_d[13] *
    Wind_Turbine_B.Product3_l[1];
  Wind_Turbine_B.Gain_lj[14] = Wind_Turbine_P.Gain_Gain_d[14] *
    Wind_Turbine_B.Integrator_pj[0];
  Wind_Turbine_B.Gain_lj[15] = Wind_Turbine_P.Gain_Gain_d[15] *
    Wind_Turbine_B.Integrator_pj[1];
  Wind_Turbine_B.Gain_lj[16] = Wind_Turbine_P.Gain_Gain_d[16] *
    Wind_Turbine_B.ComplextoRealImag_o2_f;
  Wind_Turbine_B.Gain_lj[17] = Wind_Turbine_P.Gain_Gain_d[17] *
    Wind_Turbine_B.ComplextoRealImag_o1_p;
  Wind_Turbine_B.Gain_lj[18] = Wind_Turbine_P.Gain_Gain_d[18] *
    Wind_Turbine_B.Switch2_a;

  /* Outputs for Atomic SubSystem: '<S81>/Matrix W Synchronous Ref. Frame ' */
  /* Sum: '<S84>/Sum' incorporates:
   *  Constant: '<S84>/we'
   */
  Wind_Turbine_B.wewr = Wind_Turbine_P.we_Value - Wind_Turbine_B.web_psb1;

  /* Gain: '<S84>/Gain2' */
  Wind_Turbine_B.Gain2_o = Wind_Turbine_P.Gain2_Gain * Wind_Turbine_B.wewr;

  /* Assignment: '<S84>/W(3,4)=1-wr' incorporates:
   *  Constant: '<S84>/u3'
   */
  memcpy(&Wind_Turbine_B.W341wr[0], &Wind_Turbine_P.u3_Value[0], sizeof(real_T) <<
         4U);
  Wind_Turbine_B.W341wr[14] = Wind_Turbine_B.wewr;

  /* End of Outputs for SubSystem: '<S81>/Matrix W Synchronous Ref. Frame ' */

  /* Switch: '<S87>/Switch1' incorporates:
   *  Constant: '<S87>/Constant3'
   *  Constant: '<S87>/Constant4'
   */
  if (Wind_Turbine_P.Constant3_Value_b >= Wind_Turbine_P.Switch1_Threshold_i) {
    memcpy(&Wind_Turbine_B.RLinv[0], &Wind_Turbine_B.RLinv_n[0], sizeof(real_T) <<
           4U);
  } else {
    memcpy(&Wind_Turbine_B.RLinv[0], &Wind_Turbine_P.Constant4_Value_b[0],
           sizeof(real_T) << 4U);
  }

  /* End of Switch: '<S87>/Switch1' */

  /* Outputs for Atomic SubSystem: '<S81>/Matrix W Synchronous Ref. Frame ' */
  for (i = 0; i < 16; i++) {
    /* Assignment: '<S84>/W(4,3)=wr-1' */
    Wind_Turbine_B.W43wr1[i] = Wind_Turbine_B.W341wr[i];
  }

  /* Assignment: '<S84>/W(4,3)=wr-1' */
  Wind_Turbine_B.W43wr1[11] = Wind_Turbine_B.Gain2_o;

  /* End of Outputs for SubSystem: '<S81>/Matrix W Synchronous Ref. Frame ' */
  for (i = 0; i < 16; i++) {
    /* Sum: '<S87>/Sum1' */
    Wind_Turbine_B.A[i] = (0.0 - Wind_Turbine_B.W43wr1[i]) -
      Wind_Turbine_B.RLinv[i];

    /* Product: '<S93>/Product1' */
    tmp_s[i] = Wind_Turbine_B.A[i];
  }

  /* Product: '<S93>/Product1' */
  uTmp_idx_0 = Wind_Turbine_B.Integrator_pj[0];
  Bias = Wind_Turbine_B.Integrator_pj[1];
  tmpForInput_idx_1_re = Wind_Turbine_B.Integrator_pj[2];
  tmpForInput_idx_1_im = Wind_Turbine_B.Integrator_pj[3];
  for (i = 0; i < 4; i++) {
    bi = tmp_s[i] * uTmp_idx_0;
    bi += tmp_s[i + 4] * Bias;
    bi += tmp_s[i + 8] * tmpForInput_idx_1_re;
    bi += tmp_s[i + 12] * tmpForInput_idx_1_im;
    Wind_Turbine_B.Product1_j[i] = bi;
  }

  /* Sum: '<S93>/sum1' incorporates:
   *  Constant: '<S81>/Vqdr3'
   */
  Wind_Turbine_B.sum1[0] = Wind_Turbine_B.ComplextoRealImag_o2_f +
    Wind_Turbine_B.Product1_j[0];
  Wind_Turbine_B.sum1[1] = Wind_Turbine_B.ComplextoRealImag_o1_p +
    Wind_Turbine_B.Product1_j[1];
  Wind_Turbine_B.sum1[2] = Wind_Turbine_P.Vqdr3_Value[0] +
    Wind_Turbine_B.Product1_j[2];
  Wind_Turbine_B.sum1[3] = Wind_Turbine_P.Vqdr3_Value[1] +
    Wind_Turbine_B.Product1_j[3];

  /* Gain: '<S93>/wbase' */
  Wind_Turbine_B.wbase[0] = Wind_Turbine_P.wbase_Gain * Wind_Turbine_B.sum1[0];
  Wind_Turbine_B.wbase[1] = Wind_Turbine_P.wbase_Gain * Wind_Turbine_B.sum1[1];
  Wind_Turbine_B.wbase[2] = Wind_Turbine_P.wbase_Gain * Wind_Turbine_B.sum1[2];
  Wind_Turbine_B.wbase[3] = Wind_Turbine_P.wbase_Gain * Wind_Turbine_B.sum1[3];
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Product: '<S98>/Product2' incorporates:
     *  Constant: '<S98>/Constant4'
     */
    uTmp_idx_0 = Wind_Turbine_B.Sum2.re * Wind_Turbine_P.Constant4_Value_j.re -
      Wind_Turbine_B.Sum2.im * Wind_Turbine_P.Constant4_Value_j.im;
    tmpForInput_idx_1_re = Wind_Turbine_B.Sum2.re *
      Wind_Turbine_P.Constant4_Value_j.im + Wind_Turbine_B.Sum2.im *
      Wind_Turbine_P.Constant4_Value_j.re;
    Wind_Turbine_B.ZrZm_k.re = uTmp_idx_0;
    Wind_Turbine_B.ZrZm_k.im = tmpForInput_idx_1_re;

    /* Product: '<S98>/Product3' */
    Bias = Wind_Turbine_B.ZrZm_k.re;
    tmpForInput_idx_1_re = Wind_Turbine_B.ZrZm_k.im;
    br = Wind_Turbine_B.ZrZm.re;
    bi = Wind_Turbine_B.ZrZm.im;
    if (bi == 0.0) {
      if (tmpForInput_idx_1_re == 0.0) {
        uTmp_idx_0 = Bias / br;
        tmpForInput_idx_1_re = 0.0;
      } else if (Bias == 0.0) {
        uTmp_idx_0 = 0.0;
        tmpForInput_idx_1_re /= br;
      } else {
        uTmp_idx_0 = Bias / br;
        tmpForInput_idx_1_re /= br;
      }
    } else if (br == 0.0) {
      if (Bias == 0.0) {
        uTmp_idx_0 = tmpForInput_idx_1_re / bi;
        tmpForInput_idx_1_re = 0.0;
      } else if (tmpForInput_idx_1_re == 0.0) {
        uTmp_idx_0 = 0.0;
        tmpForInput_idx_1_re = -(Bias / bi);
      } else {
        uTmp_idx_0 = tmpForInput_idx_1_re / bi;
        tmpForInput_idx_1_re = -(Bias / bi);
      }
    } else {
      tmpForInput_idx_1_im = fabs(br);
      uTmp_idx_0 = fabs(bi);
      if (tmpForInput_idx_1_im > uTmp_idx_0) {
        tmpForInput_idx_1_im = bi / br;
        bi = tmpForInput_idx_1_im * bi + br;
        uTmp_idx_0 = tmpForInput_idx_1_im * tmpForInput_idx_1_re + Bias;
        Bias = tmpForInput_idx_1_re - tmpForInput_idx_1_im * Bias;
        uTmp_idx_0 /= bi;
        tmpForInput_idx_1_re = Bias / bi;
      } else if (uTmp_idx_0 == tmpForInput_idx_1_im) {
        br = br > 0.0 ? 0.5 : -0.5;
        bi = bi > 0.0 ? 0.5 : -0.5;
        uTmp_idx_0 = Bias * br + tmpForInput_idx_1_re * bi;
        Bias = tmpForInput_idx_1_re * br - Bias * bi;
        uTmp_idx_0 /= tmpForInput_idx_1_im;
        tmpForInput_idx_1_re = Bias / tmpForInput_idx_1_im;
      } else {
        tmpForInput_idx_1_im = br / bi;
        bi += tmpForInput_idx_1_im * br;
        uTmp_idx_0 = tmpForInput_idx_1_im * Bias + tmpForInput_idx_1_re;
        Bias = tmpForInput_idx_1_im * tmpForInput_idx_1_re - Bias;
        uTmp_idx_0 /= bi;
        tmpForInput_idx_1_re = Bias / bi;
      }
    }

    Wind_Turbine_B.ZrZm_m.re = uTmp_idx_0;
    Wind_Turbine_B.ZrZm_m.im = tmpForInput_idx_1_re;

    /* End of Product: '<S98>/Product3' */

    /* Sum: '<S98>/Sum2' incorporates:
     *  Constant: '<S98>/Constant5'
     */
    Wind_Turbine_B.Z2.re = Wind_Turbine_B.ZrZm_m.re +
      Wind_Turbine_P.Constant5_Value_j.re;
    Wind_Turbine_B.Z2.im = Wind_Turbine_B.ZrZm_m.im +
      Wind_Turbine_P.Constant5_Value_j.im;

    /* ComplexToRealImag: '<S98>/Complex to Real-Imag' */
    Wind_Turbine_B.ComplextoRealImag_o1_a = Wind_Turbine_B.Z2.re;
    Wind_Turbine_B.ComplextoRealImag_o2_d = Wind_Turbine_B.Z2.im;

    /* Product: '<S98>/Product1' */
    Wind_Turbine_B.Product1_c = Wind_Turbine_B.ComplextoRealImag_o1_a /
      Wind_Turbine_B.ComplextoRealImag_o2_d;

    /* Gain: '<S83>/web_psb' */
    Wind_Turbine_B.web_psb = Wind_Turbine_P.web_psb_Gain *
      Wind_Turbine_B.web_psb1;
  }

  /* Product: '<S88>/Product2' */
  Wind_Turbine_B.Vqd2L2[0] = Wind_Turbine_B.ComplextoRealImag3_o2 /
    Wind_Turbine_B.ComplextoRealImag_o2_d;
  Wind_Turbine_B.Vqd2L2[1] = Wind_Turbine_B.ComplextoRealImag3_o1 /
    Wind_Turbine_B.ComplextoRealImag_o2_d;

  /* Gain: '<S88>/Gain3' */
  Wind_Turbine_B.Gain3_d[0] = Wind_Turbine_P.Gain3_Gain_j[0] *
    Wind_Turbine_B.Iqds2[0];

  /* Product: '<S88>/Product1' */
  Wind_Turbine_B.Iqd2R2L2[0] = Wind_Turbine_B.Iqds2[0] *
    Wind_Turbine_B.Product1_c;

  /* Gain: '<S88>/Gain3' */
  Wind_Turbine_B.Gain3_d[1] = Wind_Turbine_P.Gain3_Gain_j[1] *
    Wind_Turbine_B.Iqds2[1];

  /* Product: '<S88>/Product1' */
  Wind_Turbine_B.Iqd2R2L2[1] = Wind_Turbine_B.Iqds2[1] *
    Wind_Turbine_B.Product1_c;

  /* Sum: '<S88>/Sum' */
  Wind_Turbine_B.Sum_df[0] = (Wind_Turbine_B.Vqd2L2[0] -
    Wind_Turbine_B.Iqd2R2L2[0]) + Wind_Turbine_B.Gain3_d[1];
  Wind_Turbine_B.Sum_df[1] = (Wind_Turbine_B.Vqd2L2[1] -
    Wind_Turbine_B.Iqd2R2L2[1]) + Wind_Turbine_B.Gain3_d[0];

  /* Gain: '<S88>/Gain4' */
  Wind_Turbine_B.Gain4[0] = Wind_Turbine_P.Gain4_Gain_k * Wind_Turbine_B.Sum_df
    [0];
  Wind_Turbine_B.Gain4[1] = Wind_Turbine_P.Gain4_Gain_k * Wind_Turbine_B.Sum_df
    [1];

  /* Gain: '<S150>/GAIN' */
  Wind_Turbine_B.GAIN_i = Wind_Turbine_P.GAIN_Gain_n *
    Wind_Turbine_B.OUTPUT_6_0[0];

  /* Gain: '<S147>/Gain1' */
  Wind_Turbine_B.Gain1_c = Wind_Turbine_P.Gain1_Gain_k * Wind_Turbine_B.GAIN_i;

  /* Gain: '<S347>/Lookup Fix' */
  Wind_Turbine_B.LookupFix = Wind_Turbine_P.LookupFix_Gain *
    Wind_Turbine_B.LimitPitchCommand;

  /* Lookup: '<S347>/Angle to Extension' */
  /*
   * About '<S347>/Angle to Extension':
   * Input0  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real_T
   * Lookup Method: Linear_Endpoint
   *
   * XData parameter uses the same data type and scaling as Input0
   * YData parameter uses the same data type and scaling as Output0
   */
  LookUp_real_T_real_T( &(Wind_Turbine_B.AngletoExtension),
                       Wind_Turbine_P.Actuator_Lookup.extension,
                       Wind_Turbine_B.LookupFix,
                       Wind_Turbine_P.AngletoExtension_XData, 87U);
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Gain: '<S347>/Derivative_Gain' */
    Wind_Turbine_B.Derivative_Gain[0] =
      Wind_Turbine_P.WT_Params.Pitch_Controller.D_Gain *
      Wind_Turbine_B.OUTPUT_5_0[2];
    Wind_Turbine_B.Derivative_Gain[1] =
      Wind_Turbine_P.WT_Params.Pitch_Controller.D_Gain *
      Wind_Turbine_B.OUTPUT_2_0[2];
    Wind_Turbine_B.Derivative_Gain[2] =
      Wind_Turbine_P.WT_Params.Pitch_Controller.D_Gain *
      Wind_Turbine_B.OUTPUT_3_0[2];

    /* Sum: '<S347>/Sum1' */
    Wind_Turbine_B.Sum1_k[0] = Wind_Turbine_B.OUTPUT_5_0[1] +
      Wind_Turbine_B.Derivative_Gain[0];
    Wind_Turbine_B.Sum1_k[1] = Wind_Turbine_B.OUTPUT_2_0[1] +
      Wind_Turbine_B.Derivative_Gain[1];
    Wind_Turbine_B.Sum1_k[2] = Wind_Turbine_B.OUTPUT_3_0[1] +
      Wind_Turbine_B.Derivative_Gain[2];
  }

  /* Sum: '<S347>/Sum' */
  Wind_Turbine_B.Sum_l[0] = Wind_Turbine_B.AngletoExtension -
    Wind_Turbine_B.Sum1_k[0];
  Wind_Turbine_B.Sum_l[1] = Wind_Turbine_B.AngletoExtension -
    Wind_Turbine_B.Sum1_k[1];
  Wind_Turbine_B.Sum_l[2] = Wind_Turbine_B.AngletoExtension -
    Wind_Turbine_B.Sum1_k[2];

  /* Gain: '<S349>/Proportional Gain' */
  Wind_Turbine_B.ProportionalGain_b[0] =
    Wind_Turbine_P.WT_Params.Pitch_Controller.P_Gain * Wind_Turbine_B.Sum_l[0];

  /* Integrator: '<S349>/Integrator' */
  Wind_Turbine_B.Integrator_l[0] = Wind_Turbine_X.Integrator_CSTATE_i[0];

  /* Sum: '<S349>/Sum' */
  Wind_Turbine_B.Sum_e5[0] = Wind_Turbine_B.ProportionalGain_b[0] +
    Wind_Turbine_B.Integrator_l[0];

  /* Gain: '<S154>/Scaling Factor' */
  Wind_Turbine_B.ScalingFactor[0] =
    Wind_Turbine_P.WT_Params.Pitch_Actuator.hydraulic_actuator_scale_factor *
    Wind_Turbine_B.Sum_e5[0];

  /* Gain: '<S349>/Proportional Gain' */
  Wind_Turbine_B.ProportionalGain_b[1] =
    Wind_Turbine_P.WT_Params.Pitch_Controller.P_Gain * Wind_Turbine_B.Sum_l[1];

  /* Integrator: '<S349>/Integrator' */
  Wind_Turbine_B.Integrator_l[1] = Wind_Turbine_X.Integrator_CSTATE_i[1];

  /* Sum: '<S349>/Sum' */
  Wind_Turbine_B.Sum_e5[1] = Wind_Turbine_B.ProportionalGain_b[1] +
    Wind_Turbine_B.Integrator_l[1];

  /* Gain: '<S154>/Scaling Factor' */
  Wind_Turbine_B.ScalingFactor[1] =
    Wind_Turbine_P.WT_Params.Pitch_Actuator.hydraulic_actuator_scale_factor *
    Wind_Turbine_B.Sum_e5[1];

  /* Gain: '<S349>/Proportional Gain' */
  Wind_Turbine_B.ProportionalGain_b[2] =
    Wind_Turbine_P.WT_Params.Pitch_Controller.P_Gain * Wind_Turbine_B.Sum_l[2];

  /* Integrator: '<S349>/Integrator' */
  Wind_Turbine_B.Integrator_l[2] = Wind_Turbine_X.Integrator_CSTATE_i[2];

  /* Sum: '<S349>/Sum' */
  Wind_Turbine_B.Sum_e5[2] = Wind_Turbine_B.ProportionalGain_b[2] +
    Wind_Turbine_B.Integrator_l[2];

  /* Gain: '<S154>/Scaling Factor' */
  Wind_Turbine_B.ScalingFactor[2] =
    Wind_Turbine_P.WT_Params.Pitch_Actuator.hydraulic_actuator_scale_factor *
    Wind_Turbine_B.Sum_e5[2];

  /* Switch: '<S166>/Switch' incorporates:
   *  Constant: '<S166>/Emergeny Brake Pitch  Close Valve'
   */
  if (Wind_Turbine_B.PitchPowerOn > Wind_Turbine_P.Switch_Threshold_d) {
    Wind_Turbine_B.Switch_h = Wind_Turbine_B.ScalingFactor[0];
  } else {
    Wind_Turbine_B.Switch_h = Wind_Turbine_P.EmergenyBrakePitchCloseValve_Va;
  }

  /* End of Switch: '<S166>/Switch' */

  /* Sum: '<S176>/Sum' */
  Wind_Turbine_B.Sum_gk = Wind_Turbine_B.Switch_h - Wind_Turbine_B.Gain_d;

  /* Switch: '<S196>/Switch' incorporates:
   *  Constant: '<S196>/Emergeny Brake Pitch  Close Valve'
   */
  if (Wind_Turbine_B.PitchPowerOn > Wind_Turbine_P.Switch_Threshold_cr) {
    Wind_Turbine_B.Switch_hx = Wind_Turbine_B.ScalingFactor[1];
  } else {
    Wind_Turbine_B.Switch_hx = Wind_Turbine_P.EmergenyBrakePitchCloseValve__h;
  }

  /* End of Switch: '<S196>/Switch' */

  /* Sum: '<S206>/Sum' */
  Wind_Turbine_B.Sum_g5 = Wind_Turbine_B.Switch_hx - Wind_Turbine_B.Gain_a;

  /* Switch: '<S226>/Switch' incorporates:
   *  Constant: '<S226>/Emergeny Brake Pitch  Close Valve'
   */
  if (Wind_Turbine_B.PitchPowerOn > Wind_Turbine_P.Switch_Threshold_k0) {
    Wind_Turbine_B.Switch_d = Wind_Turbine_B.ScalingFactor[2];
  } else {
    Wind_Turbine_B.Switch_d = Wind_Turbine_P.EmergenyBrakePitchCloseValve__f;
  }

  /* End of Switch: '<S226>/Switch' */

  /* Sum: '<S236>/Sum' */
  Wind_Turbine_B.Sum_p = Wind_Turbine_B.Switch_d - Wind_Turbine_B.Gain_g;

  /* Gain: '<S159>/Gain' */
  Wind_Turbine_B.Gain_jy = Wind_Turbine_P.Gain_Gain_n *
    Wind_Turbine_B.OUTPUT_6_0[6];

  /* Gain: '<S160>/Gain' */
  Wind_Turbine_B.Gain_i = Wind_Turbine_P.Gain_Gain_c *
    Wind_Turbine_B.OUTPUT_6_0[7];

  /* Sum: '<S287>/Sum' */
  Wind_Turbine_B.Sum_a[0] = Wind_Turbine_B.TorqueCommand[0] -
    Wind_Turbine_B.Gain_lm[0];
  Wind_Turbine_B.Sum_a[1] = Wind_Turbine_B.TorqueCommand[1] -
    Wind_Turbine_B.Gain_lm[1];
  Wind_Turbine_B.Sum_a[2] = Wind_Turbine_B.TorqueCommand[2] -
    Wind_Turbine_B.Gain_lm[2];
  Wind_Turbine_B.Sum_a[3] = Wind_Turbine_B.TorqueCommand[3] -
    Wind_Turbine_B.Gain_lm[3];
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Gain: '<S298>/GAIN' */
    Wind_Turbine_B.GAIN_ds = Wind_Turbine_P.GAIN_Gain_g *
      Wind_Turbine_B.OUTPUT_1_0[2];

    /* Gain: '<S288>/Actuator Speed to Nacelle Yaw Rate' */
    Bias = Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_gear_diameter /
      Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_ring_diameter;
    Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_d = Bias *
      Wind_Turbine_B.GAIN_ds;

    /* Gain: '<S301>/GAIN' */
    Wind_Turbine_B.GAIN_dl = Wind_Turbine_P.GAIN_Gain_ne *
      Wind_Turbine_B.OUTPUT_1_0[3];

    /* Gain: '<S311>/GAIN' */
    Wind_Turbine_B.GAIN_o = Wind_Turbine_P.GAIN_Gain_m *
      Wind_Turbine_B.OUTPUT_1_0[6];

    /* Gain: '<S289>/Actuator Speed to Nacelle Yaw Rate' */
    Bias = Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_gear_diameter /
      Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_ring_diameter;
    Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_a = Bias *
      Wind_Turbine_B.GAIN_o;

    /* Gain: '<S314>/GAIN' */
    Wind_Turbine_B.GAIN_d1 = Wind_Turbine_P.GAIN_Gain_ey *
      Wind_Turbine_B.OUTPUT_1_0[7];

    /* Gain: '<S324>/GAIN' */
    Wind_Turbine_B.GAIN_oq = Wind_Turbine_P.GAIN_Gain_nu *
      Wind_Turbine_B.OUTPUT_1_0[10];

    /* Gain: '<S290>/Actuator Speed to Nacelle Yaw Rate' */
    Bias = Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_gear_diameter /
      Wind_Turbine_P.WT_Params.Yaw_Actuator.yaw_ring_diameter;
    Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_f = Bias *
      Wind_Turbine_B.GAIN_oq;

    /* Gain: '<S327>/GAIN' */
    Wind_Turbine_B.GAIN_g = Wind_Turbine_P.GAIN_Gain_nex *
      Wind_Turbine_B.OUTPUT_1_0[11];

    /* Gain: '<S340>/GAIN' */
    Wind_Turbine_B.GAIN_o1 = Wind_Turbine_P.GAIN_Gain_j *
      Wind_Turbine_B.OUTPUT_1_0[15];
  }

  /* Gain: '<S349>/Integral Gain' */
  Wind_Turbine_B.IntegralGain[0] =
    Wind_Turbine_P.WT_Params.Pitch_Controller.I_Gain * Wind_Turbine_B.Sum_l[0];
  Wind_Turbine_B.IntegralGain[1] =
    Wind_Turbine_P.WT_Params.Pitch_Controller.I_Gain * Wind_Turbine_B.Sum_l[1];
  Wind_Turbine_B.IntegralGain[2] =
    Wind_Turbine_P.WT_Params.Pitch_Controller.I_Gain * Wind_Turbine_B.Sum_l[2];

  /* Gain: '<S352>/Integral Gain' */
  Wind_Turbine_B.IntegralGain_b =
    Wind_Turbine_P.WT_Params.Pitch_Controller.Angle_Of_Attack.I_Gain *
    Wind_Turbine_B.Sum_k;

  /* Gain: '<S368>/Integral Gain' */
  Wind_Turbine_B.IntegralGain_l[0] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.I_Gain * Wind_Turbine_B.Sum_gv[0];
  Wind_Turbine_B.IntegralGain_l[1] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.I_Gain * Wind_Turbine_B.Sum_gv[1];
  Wind_Turbine_B.IntegralGain_l[2] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.I_Gain * Wind_Turbine_B.Sum_gv[2];
  Wind_Turbine_B.IntegralGain_l[3] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.I_Gain * Wind_Turbine_B.Sum_gv[3];

  /* Gain: '<S369>/Integral Gain' */
  Wind_Turbine_B.IntegralGain_o[0] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.Yaw_Rate.I_Gain *
    Wind_Turbine_B.Sum1_g[0];
  Wind_Turbine_B.IntegralGain_o[1] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.Yaw_Rate.I_Gain *
    Wind_Turbine_B.Sum1_g[1];
  Wind_Turbine_B.IntegralGain_o[2] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.Yaw_Rate.I_Gain *
    Wind_Turbine_B.Sum1_g[2];
  Wind_Turbine_B.IntegralGain_o[3] =
    Wind_Turbine_P.WT_Params.Yaw_Controller.Yaw_Rate.I_Gain *
    Wind_Turbine_B.Sum1_g[3];
}

/* Model update function */
void Wind_Turbine_update(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  real_T tmp_0[56];
  int_T tmp_1[15];
  NeslSimulator *simulator;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;
  real_T time_0;
  real_T tmp_3[16];
  int_T tmp_4[5];
  real_T time_1;
  real_T tmp_5[16];
  int_T tmp_6[5];
  real_T time_2;
  real_T tmp_7[16];
  int_T tmp_8[5];
  real_T time_3;
  real_T tmp_9[12];
  int_T tmp_a[4];
  real_T time_4;
  real_T tmp_b[20];
  int_T tmp_c[6];
  real_T *lastU;

  /* Update for SimscapeExecutionBlock: '<S363>/STATE_6' */
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_6_SimData;
  time = Wind_Turbine_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 28;
  simulationData->mData->mContStates.mX =
    &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_6_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_6_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(Wind_Turbine_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&Wind_Turbine_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_1[0] = 0;
  tmp_0[0] = Wind_Turbine_B.INTERNAL_2_1_1[0];
  tmp_0[1] = Wind_Turbine_B.INTERNAL_2_1_1[1];
  tmp_0[2] = Wind_Turbine_B.INTERNAL_2_1_1[2];
  tmp_0[3] = Wind_Turbine_B.INTERNAL_2_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = Wind_Turbine_B.INTERNAL_4_1_1[0];
  tmp_0[5] = Wind_Turbine_B.INTERNAL_4_1_1[1];
  tmp_0[6] = Wind_Turbine_B.INTERNAL_4_1_1[2];
  tmp_0[7] = Wind_Turbine_B.INTERNAL_4_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = Wind_Turbine_B.INTERNAL_6_1_1[0];
  tmp_0[9] = Wind_Turbine_B.INTERNAL_6_1_1[1];
  tmp_0[10] = Wind_Turbine_B.INTERNAL_6_1_1[2];
  tmp_0[11] = Wind_Turbine_B.INTERNAL_6_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = Wind_Turbine_B.INTERNAL_8_1_1[0];
  tmp_0[13] = Wind_Turbine_B.INTERNAL_8_1_1[1];
  tmp_0[14] = Wind_Turbine_B.INTERNAL_8_1_1[2];
  tmp_0[15] = Wind_Turbine_B.INTERNAL_8_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = Wind_Turbine_B.INTERNAL_10_1_1[0];
  tmp_0[17] = Wind_Turbine_B.INTERNAL_10_1_1[1];
  tmp_0[18] = Wind_Turbine_B.INTERNAL_10_1_1[2];
  tmp_0[19] = Wind_Turbine_B.INTERNAL_10_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = Wind_Turbine_B.INPUT_1_1_1[0];
  tmp_0[21] = Wind_Turbine_B.INPUT_1_1_1[1];
  tmp_0[22] = Wind_Turbine_B.INPUT_1_1_1[2];
  tmp_0[23] = Wind_Turbine_B.INPUT_1_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = Wind_Turbine_B.INPUT_2_1_1[0];
  tmp_0[25] = Wind_Turbine_B.INPUT_2_1_1[1];
  tmp_0[26] = Wind_Turbine_B.INPUT_2_1_1[2];
  tmp_0[27] = Wind_Turbine_B.INPUT_2_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = Wind_Turbine_B.INPUT_3_1_1[0];
  tmp_0[29] = Wind_Turbine_B.INPUT_3_1_1[1];
  tmp_0[30] = Wind_Turbine_B.INPUT_3_1_1[2];
  tmp_0[31] = Wind_Turbine_B.INPUT_3_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = Wind_Turbine_B.INPUT_1_2_1[0];
  tmp_0[33] = Wind_Turbine_B.INPUT_1_2_1[1];
  tmp_0[34] = Wind_Turbine_B.INPUT_1_2_1[2];
  tmp_0[35] = Wind_Turbine_B.INPUT_1_2_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = Wind_Turbine_B.INPUT_2_2_1[0];
  tmp_0[37] = Wind_Turbine_B.INPUT_2_2_1[1];
  tmp_0[38] = Wind_Turbine_B.INPUT_2_2_1[2];
  tmp_0[39] = Wind_Turbine_B.INPUT_2_2_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = Wind_Turbine_B.INPUT_3_2_1[0];
  tmp_0[41] = Wind_Turbine_B.INPUT_3_2_1[1];
  tmp_0[42] = Wind_Turbine_B.INPUT_3_2_1[2];
  tmp_0[43] = Wind_Turbine_B.INPUT_3_2_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = Wind_Turbine_B.INPUT_1_3_1[0];
  tmp_0[45] = Wind_Turbine_B.INPUT_1_3_1[1];
  tmp_0[46] = Wind_Turbine_B.INPUT_1_3_1[2];
  tmp_0[47] = Wind_Turbine_B.INPUT_1_3_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = Wind_Turbine_B.INPUT_2_3_1[0];
  tmp_0[49] = Wind_Turbine_B.INPUT_2_3_1[1];
  tmp_0[50] = Wind_Turbine_B.INPUT_2_3_1[2];
  tmp_0[51] = Wind_Turbine_B.INPUT_2_3_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = Wind_Turbine_B.INPUT_3_3_1[0];
  tmp_0[53] = Wind_Turbine_B.INPUT_3_3_1[1];
  tmp_0[54] = Wind_Turbine_B.INPUT_3_3_1[2];
  tmp_0[55] = Wind_Turbine_B.INPUT_3_3_1[3];
  tmp_1[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_6_Simulator;
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_6_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method(simulator, NESL_SIM_UPDATE, simulationData,
    diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Wind_Turbine_M, msg);
    }
  }

  /* End of Update for SimscapeExecutionBlock: '<S363>/STATE_6' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Update for SimscapeExecutionBlock: '<S363>/STATE_5' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_5_SimData;
    time_0 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 25;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_5_Discrete[0];
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_5_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_4[0] = 0;
    tmp_3[0] = Wind_Turbine_B.INPUT_6_1_1[0];
    tmp_3[1] = Wind_Turbine_B.INPUT_6_1_1[1];
    tmp_3[2] = Wind_Turbine_B.INPUT_6_1_1[2];
    tmp_3[3] = Wind_Turbine_B.INPUT_6_1_1[3];
    tmp_4[1] = 4;
    tmp_3[4] = Wind_Turbine_B.INPUT_7_1_1[0];
    tmp_3[5] = Wind_Turbine_B.INPUT_7_1_1[1];
    tmp_3[6] = Wind_Turbine_B.INPUT_7_1_1[2];
    tmp_3[7] = Wind_Turbine_B.INPUT_7_1_1[3];
    tmp_4[2] = 8;
    tmp_3[8] = Wind_Turbine_B.INPUT_8_1_1[0];
    tmp_3[9] = Wind_Turbine_B.INPUT_8_1_1[1];
    tmp_3[10] = Wind_Turbine_B.INPUT_8_1_1[2];
    tmp_3[11] = Wind_Turbine_B.INPUT_8_1_1[3];
    tmp_4[3] = 12;
    tmp_3[12] = Wind_Turbine_B.INTERNAL_3_1_1[0];
    tmp_3[13] = Wind_Turbine_B.INTERNAL_3_1_1[1];
    tmp_3[14] = Wind_Turbine_B.INTERNAL_3_1_1[2];
    tmp_3[15] = Wind_Turbine_B.INTERNAL_3_1_1[3];
    tmp_4[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_3[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_4[0];
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_5_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_5_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method(simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S363>/STATE_5' */

    /* Update for SimscapeExecutionBlock: '<S363>/STATE_2' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_2_SimData;
    time_1 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 25;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_2_Discrete[0];
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_2_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_6[0] = 0;
    tmp_5[0] = Wind_Turbine_B.INPUT_9_1_1[0];
    tmp_5[1] = Wind_Turbine_B.INPUT_9_1_1[1];
    tmp_5[2] = Wind_Turbine_B.INPUT_9_1_1[2];
    tmp_5[3] = Wind_Turbine_B.INPUT_9_1_1[3];
    tmp_6[1] = 4;
    tmp_5[4] = Wind_Turbine_B.INPUT_10_1_1[0];
    tmp_5[5] = Wind_Turbine_B.INPUT_10_1_1[1];
    tmp_5[6] = Wind_Turbine_B.INPUT_10_1_1[2];
    tmp_5[7] = Wind_Turbine_B.INPUT_10_1_1[3];
    tmp_6[2] = 8;
    tmp_5[8] = Wind_Turbine_B.INPUT_11_1_1[0];
    tmp_5[9] = Wind_Turbine_B.INPUT_11_1_1[1];
    tmp_5[10] = Wind_Turbine_B.INPUT_11_1_1[2];
    tmp_5[11] = Wind_Turbine_B.INPUT_11_1_1[3];
    tmp_6[3] = 12;
    tmp_5[12] = Wind_Turbine_B.INTERNAL_5_1_1[0];
    tmp_5[13] = Wind_Turbine_B.INTERNAL_5_1_1[1];
    tmp_5[14] = Wind_Turbine_B.INTERNAL_5_1_1[2];
    tmp_5[15] = Wind_Turbine_B.INTERNAL_5_1_1[3];
    tmp_6[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_5[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_6[0];
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_2_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_2_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method(simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S363>/STATE_2' */

    /* Update for SimscapeExecutionBlock: '<S363>/STATE_3' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_3_SimData;
    time_2 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_2;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 25;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_3_Discrete[0];
    simulationData->mData->mModeVector.mN = 23;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_3_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_8[0] = 0;
    tmp_7[0] = Wind_Turbine_B.INPUT_12_1_1[0];
    tmp_7[1] = Wind_Turbine_B.INPUT_12_1_1[1];
    tmp_7[2] = Wind_Turbine_B.INPUT_12_1_1[2];
    tmp_7[3] = Wind_Turbine_B.INPUT_12_1_1[3];
    tmp_8[1] = 4;
    tmp_7[4] = Wind_Turbine_B.INPUT_13_1_1[0];
    tmp_7[5] = Wind_Turbine_B.INPUT_13_1_1[1];
    tmp_7[6] = Wind_Turbine_B.INPUT_13_1_1[2];
    tmp_7[7] = Wind_Turbine_B.INPUT_13_1_1[3];
    tmp_8[2] = 8;
    tmp_7[8] = Wind_Turbine_B.INPUT_14_1_1[0];
    tmp_7[9] = Wind_Turbine_B.INPUT_14_1_1[1];
    tmp_7[10] = Wind_Turbine_B.INPUT_14_1_1[2];
    tmp_7[11] = Wind_Turbine_B.INPUT_14_1_1[3];
    tmp_8[3] = 12;
    tmp_7[12] = Wind_Turbine_B.INTERNAL_7_1_1[0];
    tmp_7[13] = Wind_Turbine_B.INTERNAL_7_1_1[1];
    tmp_7[14] = Wind_Turbine_B.INTERNAL_7_1_1[2];
    tmp_7[15] = Wind_Turbine_B.INTERNAL_7_1_1[3];
    tmp_8[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_7[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_8[0];
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_3_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_3_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method(simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S363>/STATE_3' */

    /* Update for SimscapeExecutionBlock: '<S363>/STATE_4' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_4_SimData;
    time_3 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_3;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 37;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_4_Discrete[0];
    simulationData->mData->mModeVector.mN = 16;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_4_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_a[0] = 0;
    tmp_9[0] = Wind_Turbine_B.INPUT_4_1_1[0];
    tmp_9[1] = Wind_Turbine_B.INPUT_4_1_1[1];
    tmp_9[2] = Wind_Turbine_B.INPUT_4_1_1[2];
    tmp_9[3] = Wind_Turbine_B.INPUT_4_1_1[3];
    tmp_a[1] = 4;
    tmp_9[4] = Wind_Turbine_B.INPUT_5_1_1[0];
    tmp_9[5] = Wind_Turbine_B.INPUT_5_1_1[1];
    tmp_9[6] = Wind_Turbine_B.INPUT_5_1_1[2];
    tmp_9[7] = Wind_Turbine_B.INPUT_5_1_1[3];
    tmp_a[2] = 8;
    tmp_9[8] = Wind_Turbine_B.INTERNAL_1_1_1[0];
    tmp_9[9] = Wind_Turbine_B.INTERNAL_1_1_1[1];
    tmp_9[10] = Wind_Turbine_B.INTERNAL_1_1_1[2];
    tmp_9[11] = Wind_Turbine_B.INTERNAL_1_1_1[3];
    tmp_a[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &tmp_9[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &tmp_a[0];
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_4_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_4_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method(simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S363>/STATE_4' */

    /* Update for SimscapeExecutionBlock: '<S363>/STATE_1' */
    simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_1_SimData;
    time_4 = Wind_Turbine_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_4;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 110;
    simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 8;
    simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_1_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_c[0] = 0;
    tmp_b[0] = Wind_Turbine_B.INTERNAL_9_1_1[0];
    tmp_b[1] = Wind_Turbine_B.INTERNAL_9_1_1[1];
    tmp_b[2] = Wind_Turbine_B.INTERNAL_9_1_1[2];
    tmp_b[3] = Wind_Turbine_B.INTERNAL_9_1_1[3];
    tmp_c[1] = 4;
    tmp_b[4] = Wind_Turbine_B.INPUT_15_1_1[0];
    tmp_b[5] = Wind_Turbine_B.INPUT_15_1_1[1];
    tmp_b[6] = Wind_Turbine_B.INPUT_15_1_1[2];
    tmp_b[7] = Wind_Turbine_B.INPUT_15_1_1[3];
    tmp_c[2] = 8;
    tmp_b[8] = Wind_Turbine_B.INPUT_16_1_1[0];
    tmp_b[9] = Wind_Turbine_B.INPUT_16_1_1[1];
    tmp_b[10] = Wind_Turbine_B.INPUT_16_1_1[2];
    tmp_b[11] = Wind_Turbine_B.INPUT_16_1_1[3];
    tmp_c[3] = 12;
    tmp_b[12] = Wind_Turbine_B.INPUT_17_1_1[0];
    tmp_b[13] = Wind_Turbine_B.INPUT_17_1_1[1];
    tmp_b[14] = Wind_Turbine_B.INPUT_17_1_1[2];
    tmp_b[15] = Wind_Turbine_B.INPUT_17_1_1[3];
    tmp_c[4] = 16;
    tmp_b[16] = Wind_Turbine_B.INPUT_18_1_1[0];
    tmp_b[17] = Wind_Turbine_B.INPUT_18_1_1[1];
    tmp_b[18] = Wind_Turbine_B.INPUT_18_1_1[2];
    tmp_b[19] = Wind_Turbine_B.INPUT_18_1_1[3];
    tmp_c[5] = 20;
    simulationData->mData->mInputValues.mN = 20;
    simulationData->mData->mInputValues.mX = &tmp_b[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_c[0];
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_1_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method(simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S363>/STATE_1' */
  }

  /* Update for TransportDelay: '<S361>/Transport Delay' */
  {
    real_T **uBuffer = (real_T**)
      &Wind_Turbine_DW.TransportDelay_PWORK.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)
      &Wind_Turbine_DW.TransportDelay_PWORK.TUbufferPtrs[1];
    real_T simTime = Wind_Turbine_M->Timing.t[0];
    Wind_Turbine_DW.TransportDelay_IWORK.Head =
      ((Wind_Turbine_DW.TransportDelay_IWORK.Head <
        (Wind_Turbine_DW.TransportDelay_IWORK.CircularBufSize-1)) ?
       (Wind_Turbine_DW.TransportDelay_IWORK.Head+1) : 0);
    if (Wind_Turbine_DW.TransportDelay_IWORK.Head ==
        Wind_Turbine_DW.TransportDelay_IWORK.Tail) {
      Wind_Turbine_DW.TransportDelay_IWORK.Tail =
        ((Wind_Turbine_DW.TransportDelay_IWORK.Tail <
          (Wind_Turbine_DW.TransportDelay_IWORK.CircularBufSize-1)) ?
         (Wind_Turbine_DW.TransportDelay_IWORK.Tail+1) : 0);
    }

    (*tBuffer)[Wind_Turbine_DW.TransportDelay_IWORK.Head] = simTime;
    (*uBuffer)[Wind_Turbine_DW.TransportDelay_IWORK.Head] =
      Wind_Turbine_B.integrator;
  }

  /* Update for TransportDelay: '<S362>/Transport Delay' */
  {
    real_T **uBuffer = (real_T**)
      &Wind_Turbine_DW.TransportDelay_PWORK_h.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)
      &Wind_Turbine_DW.TransportDelay_PWORK_h.TUbufferPtrs[1];
    real_T simTime = Wind_Turbine_M->Timing.t[0];
    Wind_Turbine_DW.TransportDelay_IWORK_a.Head =
      ((Wind_Turbine_DW.TransportDelay_IWORK_a.Head <
        (Wind_Turbine_DW.TransportDelay_IWORK_a.CircularBufSize-1)) ?
       (Wind_Turbine_DW.TransportDelay_IWORK_a.Head+1) : 0);
    if (Wind_Turbine_DW.TransportDelay_IWORK_a.Head ==
        Wind_Turbine_DW.TransportDelay_IWORK_a.Tail) {
      Wind_Turbine_DW.TransportDelay_IWORK_a.Tail =
        ((Wind_Turbine_DW.TransportDelay_IWORK_a.Tail <
          (Wind_Turbine_DW.TransportDelay_IWORK_a.CircularBufSize-1)) ?
         (Wind_Turbine_DW.TransportDelay_IWORK_a.Tail+1) : 0);
    }

    (*tBuffer)[Wind_Turbine_DW.TransportDelay_IWORK_a.Head] = simTime;
    (*uBuffer)[Wind_Turbine_DW.TransportDelay_IWORK_a.Head] =
      Wind_Turbine_B.integrator_h;
  }

  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    /* Update for Memory: '<S40>/Memory' */
    Wind_Turbine_DW.Memory_PreviousInput = Wind_Turbine_B.Switch2;
  }

  /* Update for Derivative: '<S41>/Derivative' */
  if (Wind_Turbine_DW.TimeStampA == (rtInf)) {
    Wind_Turbine_DW.TimeStampA = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA;
  } else if (Wind_Turbine_DW.TimeStampB == (rtInf)) {
    Wind_Turbine_DW.TimeStampB = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB;
  } else if (Wind_Turbine_DW.TimeStampA < Wind_Turbine_DW.TimeStampB) {
    Wind_Turbine_DW.TimeStampA = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA;
  } else {
    Wind_Turbine_DW.TimeStampB = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB;
  }

  *lastU = Wind_Turbine_B.LookUpTable;

  /* End of Update for Derivative: '<S41>/Derivative' */

  /* Update for Derivative: '<S128>/Derivative' */
  if (Wind_Turbine_DW.TimeStampA_n == (rtInf)) {
    Wind_Turbine_DW.TimeStampA_n = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_l;
  } else if (Wind_Turbine_DW.TimeStampB_j == (rtInf)) {
    Wind_Turbine_DW.TimeStampB_j = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_g;
  } else if (Wind_Turbine_DW.TimeStampA_n < Wind_Turbine_DW.TimeStampB_j) {
    Wind_Turbine_DW.TimeStampA_n = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_l;
  } else {
    Wind_Turbine_DW.TimeStampB_j = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_g;
  }

  *lastU = Wind_Turbine_B.LookUpTable_n;

  /* End of Update for Derivative: '<S128>/Derivative' */

  /* Update for Derivative: '<S130>/Derivative' */
  if (Wind_Turbine_DW.TimeStampA_g == (rtInf)) {
    Wind_Turbine_DW.TimeStampA_g = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_h;
  } else if (Wind_Turbine_DW.TimeStampB_k == (rtInf)) {
    Wind_Turbine_DW.TimeStampB_k = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_gr;
  } else if (Wind_Turbine_DW.TimeStampA_g < Wind_Turbine_DW.TimeStampB_k) {
    Wind_Turbine_DW.TimeStampA_g = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_h;
  } else {
    Wind_Turbine_DW.TimeStampB_k = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_gr;
  }

  *lastU = Wind_Turbine_B.LookUpTable_k;

  /* End of Update for Derivative: '<S130>/Derivative' */

  /* Update for Derivative: '<S132>/Derivative' */
  if (Wind_Turbine_DW.TimeStampA_o == (rtInf)) {
    Wind_Turbine_DW.TimeStampA_o = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_e;
  } else if (Wind_Turbine_DW.TimeStampB_m == (rtInf)) {
    Wind_Turbine_DW.TimeStampB_m = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_a;
  } else if (Wind_Turbine_DW.TimeStampA_o < Wind_Turbine_DW.TimeStampB_m) {
    Wind_Turbine_DW.TimeStampA_o = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_e;
  } else {
    Wind_Turbine_DW.TimeStampB_m = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_a;
  }

  *lastU = Wind_Turbine_B.LookUpTable_l;

  /* End of Update for Derivative: '<S132>/Derivative' */

  /* Update for Derivative: '<S133>/Derivative' */
  if (Wind_Turbine_DW.TimeStampA_f == (rtInf)) {
    Wind_Turbine_DW.TimeStampA_f = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_i;
  } else if (Wind_Turbine_DW.TimeStampB_l == (rtInf)) {
    Wind_Turbine_DW.TimeStampB_l = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_c;
  } else if (Wind_Turbine_DW.TimeStampA_f < Wind_Turbine_DW.TimeStampB_l) {
    Wind_Turbine_DW.TimeStampA_f = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_i;
  } else {
    Wind_Turbine_DW.TimeStampB_l = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_c;
  }

  *lastU = Wind_Turbine_B.LookUpTable_i;

  /* End of Update for Derivative: '<S133>/Derivative' */

  /* Update for Derivative: '<S139>/Derivative' */
  if (Wind_Turbine_DW.TimeStampA_fn == (rtInf)) {
    Wind_Turbine_DW.TimeStampA_fn = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_f;
  } else if (Wind_Turbine_DW.TimeStampB_e == (rtInf)) {
    Wind_Turbine_DW.TimeStampB_e = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_m;
  } else if (Wind_Turbine_DW.TimeStampA_fn < Wind_Turbine_DW.TimeStampB_e) {
    Wind_Turbine_DW.TimeStampA_fn = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_f;
  } else {
    Wind_Turbine_DW.TimeStampB_e = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_m;
  }

  *lastU = Wind_Turbine_B.LookUpTable_j;

  /* End of Update for Derivative: '<S139>/Derivative' */

  /* Update for Derivative: '<S141>/Derivative' */
  if (Wind_Turbine_DW.TimeStampA_p == (rtInf)) {
    Wind_Turbine_DW.TimeStampA_p = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_c;
  } else if (Wind_Turbine_DW.TimeStampB_f == (rtInf)) {
    Wind_Turbine_DW.TimeStampB_f = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_h;
  } else if (Wind_Turbine_DW.TimeStampA_p < Wind_Turbine_DW.TimeStampB_f) {
    Wind_Turbine_DW.TimeStampA_p = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_c;
  } else {
    Wind_Turbine_DW.TimeStampB_f = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_h;
  }

  *lastU = Wind_Turbine_B.LookUpTable_o;

  /* End of Update for Derivative: '<S141>/Derivative' */

  /* Update for Derivative: '<S143>/Derivative' */
  if (Wind_Turbine_DW.TimeStampA_na == (rtInf)) {
    Wind_Turbine_DW.TimeStampA_na = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_is;
  } else if (Wind_Turbine_DW.TimeStampB_kf == (rtInf)) {
    Wind_Turbine_DW.TimeStampB_kf = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_b;
  } else if (Wind_Turbine_DW.TimeStampA_na < Wind_Turbine_DW.TimeStampB_kf) {
    Wind_Turbine_DW.TimeStampA_na = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_is;
  } else {
    Wind_Turbine_DW.TimeStampB_kf = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_b;
  }

  *lastU = Wind_Turbine_B.LookUpTable_h;

  /* End of Update for Derivative: '<S143>/Derivative' */

  /* Update for Derivative: '<S144>/Derivative' */
  if (Wind_Turbine_DW.TimeStampA_fy == (rtInf)) {
    Wind_Turbine_DW.TimeStampA_fy = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_p;
  } else if (Wind_Turbine_DW.TimeStampB_fl == (rtInf)) {
    Wind_Turbine_DW.TimeStampB_fl = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_p;
  } else if (Wind_Turbine_DW.TimeStampA_fy < Wind_Turbine_DW.TimeStampB_fl) {
    Wind_Turbine_DW.TimeStampA_fy = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeA_p;
  } else {
    Wind_Turbine_DW.TimeStampB_fl = Wind_Turbine_M->Timing.t[0];
    lastU = &Wind_Turbine_DW.LastUAtTimeB_p;
  }

  *lastU = Wind_Turbine_B.LookUpTable_g;

  /* End of Update for Derivative: '<S144>/Derivative' */
  if (rtmIsMajorTimeStep(Wind_Turbine_M)) {
    rt_ertODEUpdateContinuousStates(&Wind_Turbine_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Wind_Turbine_M->Timing.clockTick0)) {
    ++Wind_Turbine_M->Timing.clockTickH0;
  }

  Wind_Turbine_M->Timing.t[0] = rtsiGetSolverStopTime
    (&Wind_Turbine_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.0015s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Wind_Turbine_M->Timing.clockTick1)) {
      ++Wind_Turbine_M->Timing.clockTickH1;
    }

    Wind_Turbine_M->Timing.t[1] = Wind_Turbine_M->Timing.clockTick1 *
      Wind_Turbine_M->Timing.stepSize1 + Wind_Turbine_M->Timing.clockTickH1 *
      Wind_Turbine_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void Wind_Turbine_derivatives(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  real_T tmp[56];
  int_T tmp_0[15];
  NeslSimulator *simulator;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  int_T iS;
  boolean_T lsat;
  boolean_T usat;
  real_T tmp_1;
  XDot_Wind_Turbine_T *_rtXdot;
  _rtXdot = ((XDot_Wind_Turbine_T *) Wind_Turbine_M->derivs);

  /* Derivatives for Integrator: '<S176>/Integrator' */
  _rtXdot->Integrator_CSTATE = Wind_Turbine_B.Sum_gk;

  /* Derivatives for SimscapeExecutionBlock: '<S363>/STATE_6' */
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_6_SimData;
  time = Wind_Turbine_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 28;
  simulationData->mData->mContStates.mX =
    &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &Wind_Turbine_DW.STATE_6_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &Wind_Turbine_DW.STATE_6_Modes;
  lsat = false;
  simulationData->mData->mFoundZcEvents = lsat;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(Wind_Turbine_M);
  lsat = false;
  simulationData->mData->mIsSolverAssertCheck = lsat;
  simulationData->mData->mIsSolverCheckingCIC = false;
  lsat = rtsiIsSolverComputingJacobian(&Wind_Turbine_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = lsat;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_0[0] = 0;
  tmp[0] = Wind_Turbine_B.INTERNAL_2_1_1[0];
  tmp[1] = Wind_Turbine_B.INTERNAL_2_1_1[1];
  tmp[2] = Wind_Turbine_B.INTERNAL_2_1_1[2];
  tmp[3] = Wind_Turbine_B.INTERNAL_2_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = Wind_Turbine_B.INTERNAL_4_1_1[0];
  tmp[5] = Wind_Turbine_B.INTERNAL_4_1_1[1];
  tmp[6] = Wind_Turbine_B.INTERNAL_4_1_1[2];
  tmp[7] = Wind_Turbine_B.INTERNAL_4_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = Wind_Turbine_B.INTERNAL_6_1_1[0];
  tmp[9] = Wind_Turbine_B.INTERNAL_6_1_1[1];
  tmp[10] = Wind_Turbine_B.INTERNAL_6_1_1[2];
  tmp[11] = Wind_Turbine_B.INTERNAL_6_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = Wind_Turbine_B.INTERNAL_8_1_1[0];
  tmp[13] = Wind_Turbine_B.INTERNAL_8_1_1[1];
  tmp[14] = Wind_Turbine_B.INTERNAL_8_1_1[2];
  tmp[15] = Wind_Turbine_B.INTERNAL_8_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = Wind_Turbine_B.INTERNAL_10_1_1[0];
  tmp[17] = Wind_Turbine_B.INTERNAL_10_1_1[1];
  tmp[18] = Wind_Turbine_B.INTERNAL_10_1_1[2];
  tmp[19] = Wind_Turbine_B.INTERNAL_10_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = Wind_Turbine_B.INPUT_1_1_1[0];
  tmp[21] = Wind_Turbine_B.INPUT_1_1_1[1];
  tmp[22] = Wind_Turbine_B.INPUT_1_1_1[2];
  tmp[23] = Wind_Turbine_B.INPUT_1_1_1[3];
  tmp_0[6] = 24;
  tmp[24] = Wind_Turbine_B.INPUT_2_1_1[0];
  tmp[25] = Wind_Turbine_B.INPUT_2_1_1[1];
  tmp[26] = Wind_Turbine_B.INPUT_2_1_1[2];
  tmp[27] = Wind_Turbine_B.INPUT_2_1_1[3];
  tmp_0[7] = 28;
  tmp[28] = Wind_Turbine_B.INPUT_3_1_1[0];
  tmp[29] = Wind_Turbine_B.INPUT_3_1_1[1];
  tmp[30] = Wind_Turbine_B.INPUT_3_1_1[2];
  tmp[31] = Wind_Turbine_B.INPUT_3_1_1[3];
  tmp_0[8] = 32;
  tmp[32] = Wind_Turbine_B.INPUT_1_2_1[0];
  tmp[33] = Wind_Turbine_B.INPUT_1_2_1[1];
  tmp[34] = Wind_Turbine_B.INPUT_1_2_1[2];
  tmp[35] = Wind_Turbine_B.INPUT_1_2_1[3];
  tmp_0[9] = 36;
  tmp[36] = Wind_Turbine_B.INPUT_2_2_1[0];
  tmp[37] = Wind_Turbine_B.INPUT_2_2_1[1];
  tmp[38] = Wind_Turbine_B.INPUT_2_2_1[2];
  tmp[39] = Wind_Turbine_B.INPUT_2_2_1[3];
  tmp_0[10] = 40;
  tmp[40] = Wind_Turbine_B.INPUT_3_2_1[0];
  tmp[41] = Wind_Turbine_B.INPUT_3_2_1[1];
  tmp[42] = Wind_Turbine_B.INPUT_3_2_1[2];
  tmp[43] = Wind_Turbine_B.INPUT_3_2_1[3];
  tmp_0[11] = 44;
  tmp[44] = Wind_Turbine_B.INPUT_1_3_1[0];
  tmp[45] = Wind_Turbine_B.INPUT_1_3_1[1];
  tmp[46] = Wind_Turbine_B.INPUT_1_3_1[2];
  tmp[47] = Wind_Turbine_B.INPUT_1_3_1[3];
  tmp_0[12] = 48;
  tmp[48] = Wind_Turbine_B.INPUT_2_3_1[0];
  tmp[49] = Wind_Turbine_B.INPUT_2_3_1[1];
  tmp[50] = Wind_Turbine_B.INPUT_2_3_1[2];
  tmp[51] = Wind_Turbine_B.INPUT_2_3_1[3];
  tmp_0[13] = 52;
  tmp[52] = Wind_Turbine_B.INPUT_3_3_1[0];
  tmp[53] = Wind_Turbine_B.INPUT_3_3_1[1];
  tmp[54] = Wind_Turbine_B.INPUT_3_3_1[2];
  tmp[55] = Wind_Turbine_B.INPUT_3_3_1[3];
  tmp_0[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mDx.mN = 28;
  simulationData->mData->mDx.mX = &_rtXdot->Wind_TurbineNacelleYaw_SystemSe[0];
  simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_6_Simulator;
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_6_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  iS = ne_simulator_method(simulator, NESL_SIM_DERIVATIVES, simulationData,
    diagnosticManager);
  if (iS != 0) {
    lsat = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
    if (lsat) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Wind_Turbine_M, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S363>/STATE_6' */

  /* Derivatives for Integrator: '<S206>/Integrator' */
  _rtXdot->Integrator_CSTATE_j = Wind_Turbine_B.Sum_g5;

  /* Derivatives for Integrator: '<S236>/Integrator' */
  _rtXdot->Integrator_CSTATE_n = Wind_Turbine_B.Sum_p;

  /* Derivatives for Integrator: '<S73>/Integrator' */
  _rtXdot->Integrator_CSTATE_m = Wind_Turbine_B.Sum_n;

  /* Derivatives for Integrator: '<S352>/Integrator' */
  tmp_1 = -Wind_Turbine_P.WT_Params.Pitch_Controller.Angle_Of_Attack.max_angle;
  lsat = (Wind_Turbine_X.Integrator_CSTATE_h <= tmp_1);
  usat = (Wind_Turbine_X.Integrator_CSTATE_h >=
          Wind_Turbine_P.WT_Params.Pitch_Controller.Angle_Of_Attack.max_angle);
  if (((!lsat) && (!usat)) || (lsat && (Wind_Turbine_B.IntegralGain_b > 0.0)) ||
      (usat && (Wind_Turbine_B.IntegralGain_b < 0.0))) {
    _rtXdot->Integrator_CSTATE_h = Wind_Turbine_B.IntegralGain_b;
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE_h = 0.0;
  }

  /* End of Derivatives for Integrator: '<S352>/Integrator' */

  /* Derivatives for Integrator: '<S72>/Integrator' */
  _rtXdot->Integrator_CSTATE_e = Wind_Turbine_B.Sum_d;

  /* Derivatives for SimscapeInputBlock: '<S363>/INPUT_5_1_1' */
  _rtXdot->Wind_TurbineNacelleGeneratorFul = (Wind_Turbine_B.Gain_l -
    Wind_Turbine_X.Wind_TurbineNacelleGeneratorFul) * 200.0;

  /* Derivatives for Integrator: '<S287>/Integrator' */
  _rtXdot->Integrator_CSTATE_a[0] = Wind_Turbine_B.Sum_a[0];
  _rtXdot->Integrator_CSTATE_a[1] = Wind_Turbine_B.Sum_a[1];
  _rtXdot->Integrator_CSTATE_a[2] = Wind_Turbine_B.Sum_a[2];
  _rtXdot->Integrator_CSTATE_a[3] = Wind_Turbine_B.Sum_a[3];

  /* Derivatives for SimscapeInputBlock: '<S363>/INPUT_15_1_1' */
  _rtXdot->Wind_TurbineNacelleYaw_System_j = (Wind_Turbine_B.Gain_lm[0] -
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_j) * 200.0;

  /* Derivatives for SimscapeInputBlock: '<S363>/INPUT_16_1_1' */
  _rtXdot->Wind_TurbineNacelleYaw_System_m = (Wind_Turbine_B.Gain_lm[1] -
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_m) * 200.0;

  /* Derivatives for SimscapeInputBlock: '<S363>/INPUT_17_1_1' */
  _rtXdot->Wind_TurbineNacelleYaw_System_p = (Wind_Turbine_B.Gain_lm[2] -
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_p) * 200.0;

  /* Derivatives for SimscapeInputBlock: '<S363>/INPUT_18_1_1' */
  _rtXdot->Wind_TurbineNacelleYaw_System_a = (Wind_Turbine_B.Gain_lm[3] -
    Wind_Turbine_X.Wind_TurbineNacelleYaw_System_a) * 200.0;

  /* Derivatives for Integrator: '<S19>/Integrator' */
  _rtXdot->Integrator_CSTATE_mj = Wind_Turbine_B.Sum_m;

  /* Derivatives for Integrator: '<S18>/Integrator' */
  _rtXdot->Integrator_CSTATE_mt = Wind_Turbine_B.Sum_c;

  /* Derivatives for Integrator: '<S361>/integrator' */
  _rtXdot->integrator_CSTATE = Wind_Turbine_B.putoMW;

  /* Derivatives for Integrator: '<S362>/integrator' */
  _rtXdot->integrator_CSTATE_g = Wind_Turbine_B.putoMvar;

  /* Derivatives for Integrator: '<S93>/Integrator' */
  _rtXdot->Integrator_CSTATE_e1[0] = Wind_Turbine_B.wbase[0];
  _rtXdot->Integrator_CSTATE_e1[1] = Wind_Turbine_B.wbase[1];
  _rtXdot->Integrator_CSTATE_e1[2] = Wind_Turbine_B.wbase[2];
  _rtXdot->Integrator_CSTATE_e1[3] = Wind_Turbine_B.wbase[3];

  /* Derivatives for Enabled SubSystem: '<S87>/Saturation' */
  if (Wind_Turbine_DW.Saturation_MODE) {
    /* Derivatives for Integrator: '<S96>/Integrator' */
    _rtXdot->Integrator_CSTATE_g = Wind_Turbine_B.uTT1e6s;
  } else {
    ((XDot_Wind_Turbine_T *) Wind_Turbine_M->derivs)->Integrator_CSTATE_g = 0.0;
  }

  /* End of Derivatives for SubSystem: '<S87>/Saturation' */

  /* Derivatives for Integrator: '<S88>/Integrator' */
  _rtXdot->Integrator_CSTATE_mr[0] = Wind_Turbine_B.Gain4[0];
  _rtXdot->Integrator_CSTATE_mr[1] = Wind_Turbine_B.Gain4[1];

  /* Derivatives for Integrator: '<S40>/Integrator' */
  _rtXdot->Integrator_CSTATE_eo = Wind_Turbine_B.Switch_o;

  /* Derivatives for Integrator: '<S83>/Rotor angle thetam' */
  _rtXdot->Rotoranglethetam_CSTATE = Wind_Turbine_B.web_psb;

  /* Derivatives for Integrator: '<S368>/Integrator' */
  tmp_1 = -Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  lsat = (Wind_Turbine_X.Integrator_CSTATE_b[0] <= tmp_1);
  usat = (Wind_Turbine_X.Integrator_CSTATE_b[0] >=
          Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate);
  if (((!lsat) && (!usat)) || (lsat && (Wind_Turbine_B.IntegralGain_l[0] > 0.0))
      || (usat && (Wind_Turbine_B.IntegralGain_l[0] < 0.0))) {
    _rtXdot->Integrator_CSTATE_b[0] = Wind_Turbine_B.IntegralGain_l[0];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE_b[0] = 0.0;
  }

  tmp_1 = -Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  lsat = (Wind_Turbine_X.Integrator_CSTATE_b[1] <= tmp_1);
  usat = (Wind_Turbine_X.Integrator_CSTATE_b[1] >=
          Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate);
  if (((!lsat) && (!usat)) || (lsat && (Wind_Turbine_B.IntegralGain_l[1] > 0.0))
      || (usat && (Wind_Turbine_B.IntegralGain_l[1] < 0.0))) {
    _rtXdot->Integrator_CSTATE_b[1] = Wind_Turbine_B.IntegralGain_l[1];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE_b[1] = 0.0;
  }

  tmp_1 = -Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  lsat = (Wind_Turbine_X.Integrator_CSTATE_b[2] <= tmp_1);
  usat = (Wind_Turbine_X.Integrator_CSTATE_b[2] >=
          Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate);
  if (((!lsat) && (!usat)) || (lsat && (Wind_Turbine_B.IntegralGain_l[2] > 0.0))
      || (usat && (Wind_Turbine_B.IntegralGain_l[2] < 0.0))) {
    _rtXdot->Integrator_CSTATE_b[2] = Wind_Turbine_B.IntegralGain_l[2];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE_b[2] = 0.0;
  }

  tmp_1 = -Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate;
  lsat = (Wind_Turbine_X.Integrator_CSTATE_b[3] <= tmp_1);
  usat = (Wind_Turbine_X.Integrator_CSTATE_b[3] >=
          Wind_Turbine_P.WT_Params.Yaw_Actuator.max_yaw_rate);
  if (((!lsat) && (!usat)) || (lsat && (Wind_Turbine_B.IntegralGain_l[3] > 0.0))
      || (usat && (Wind_Turbine_B.IntegralGain_l[3] < 0.0))) {
    _rtXdot->Integrator_CSTATE_b[3] = Wind_Turbine_B.IntegralGain_l[3];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE_b[3] = 0.0;
  }

  /* End of Derivatives for Integrator: '<S368>/Integrator' */

  /* Derivatives for Integrator: '<S369>/Integrator' */
  lsat = (Wind_Turbine_X.Integrator_CSTATE_bc[0] <=
          Wind_Turbine_P.Integrator_LowerSat);
  usat = (Wind_Turbine_X.Integrator_CSTATE_bc[0] >=
          Wind_Turbine_P.Integrator_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (Wind_Turbine_B.IntegralGain_o[0] > 0.0))
      || (usat && (Wind_Turbine_B.IntegralGain_o[0] < 0.0))) {
    _rtXdot->Integrator_CSTATE_bc[0] = Wind_Turbine_B.IntegralGain_o[0];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE_bc[0] = 0.0;
  }

  lsat = (Wind_Turbine_X.Integrator_CSTATE_bc[1] <=
          Wind_Turbine_P.Integrator_LowerSat);
  usat = (Wind_Turbine_X.Integrator_CSTATE_bc[1] >=
          Wind_Turbine_P.Integrator_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (Wind_Turbine_B.IntegralGain_o[1] > 0.0))
      || (usat && (Wind_Turbine_B.IntegralGain_o[1] < 0.0))) {
    _rtXdot->Integrator_CSTATE_bc[1] = Wind_Turbine_B.IntegralGain_o[1];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE_bc[1] = 0.0;
  }

  lsat = (Wind_Turbine_X.Integrator_CSTATE_bc[2] <=
          Wind_Turbine_P.Integrator_LowerSat);
  usat = (Wind_Turbine_X.Integrator_CSTATE_bc[2] >=
          Wind_Turbine_P.Integrator_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (Wind_Turbine_B.IntegralGain_o[2] > 0.0))
      || (usat && (Wind_Turbine_B.IntegralGain_o[2] < 0.0))) {
    _rtXdot->Integrator_CSTATE_bc[2] = Wind_Turbine_B.IntegralGain_o[2];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE_bc[2] = 0.0;
  }

  lsat = (Wind_Turbine_X.Integrator_CSTATE_bc[3] <=
          Wind_Turbine_P.Integrator_LowerSat);
  usat = (Wind_Turbine_X.Integrator_CSTATE_bc[3] >=
          Wind_Turbine_P.Integrator_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (Wind_Turbine_B.IntegralGain_o[3] > 0.0))
      || (usat && (Wind_Turbine_B.IntegralGain_o[3] < 0.0))) {
    _rtXdot->Integrator_CSTATE_bc[3] = Wind_Turbine_B.IntegralGain_o[3];
  } else {
    /* in saturation */
    _rtXdot->Integrator_CSTATE_bc[3] = 0.0;
  }

  /* End of Derivatives for Integrator: '<S369>/Integrator' */

  /* Derivatives for Integrator: '<S349>/Integrator' */
  _rtXdot->Integrator_CSTATE_i[0] = Wind_Turbine_B.IntegralGain[0];
  _rtXdot->Integrator_CSTATE_i[1] = Wind_Turbine_B.IntegralGain[1];
  _rtXdot->Integrator_CSTATE_i[2] = Wind_Turbine_B.IntegralGain[2];
}

/* Model initialize function */
void Wind_Turbine_initialize(void)
{
  {
    boolean_T tmp;
    NeslSimulationData *tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeModelParameters modelParameters;
    real_T tmp_1;
    NeslSimulator *simulator;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_2;
    char *msg;
    NeModelParameters modelParameters_0;
    NeslRtpManager *manager;
    NeModelParameters modelParameters_1;
    NeModelParameters modelParameters_2;
    NeModelParameters modelParameters_3;
    NeModelParameters modelParameters_4;
    NeModelParameters modelParameters_5;
    NeModelParameters modelParameters_6;
    NeModelParameters modelParameters_7;
    NeModelParameters modelParameters_8;
    NeModelParameters modelParameters_9;
    NeModelParameters modelParameters_a;
    NeModelParameters modelParameters_b;

    /* Start for SimscapeExecutionBlock: '<S363>/STATE_6' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_6", 0, 0);
    Wind_Turbine_DW.STATE_6_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.STATE_6_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_6_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_6", 0,
        0);
      Wind_Turbine_DW.STATE_6_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.STATE_6_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.STATE_6_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mIsUsingODEN = false;
    modelParameters.mFixedStepSize = 0.001;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters.mRTWModifiedTimeStamp = 5.79692665E+8;
    tmp_1 = 0.001;
    modelParameters.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters.mIsUsingODEN = tmp;
    modelParameters.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_6_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_6_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/STATE_6' */

    /* Start for SimscapeExecutionBlock: '<S363>/OUTPUT_6_0' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_6", 1, 0);
    Wind_Turbine_DW.OUTPUT_6_0_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.OUTPUT_6_0_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_6_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_6", 1,
        0);
      Wind_Turbine_DW.OUTPUT_6_0_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.OUTPUT_6_0_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.OUTPUT_6_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mIsUsingODEN = false;
    modelParameters_0.mFixedStepSize = 0.001;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_0.mRTWModifiedTimeStamp = 5.79692665E+8;
    tmp_1 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_0.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_0.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_0.mIsUsingODEN = tmp;
    modelParameters_0.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_6_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_6_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/OUTPUT_6_0' */

    /* Start for SimscapeRtp: '<S8>/RTP_5' */
    manager = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_5", 0);
    tmp = pointer_is_null(manager);
    if (tmp) {
      Wind_Turbine_31c4daf8_5_gateway();
      manager = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_5", 0);
    }

    Wind_Turbine_DW.RTP_5_RtpManager = (void *)manager;
    Wind_Turbine_DW.RTP_5_SetParametersNeeded = true;

    /* End of Start for SimscapeRtp: '<S8>/RTP_5' */

    /* Start for SimscapeExecutionBlock: '<S363>/STATE_5' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_5", 0, 0);
    Wind_Turbine_DW.STATE_5_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.STATE_5_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_5_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_5", 0,
        0);
      Wind_Turbine_DW.STATE_5_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.STATE_5_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.STATE_5_DiagMgr = (void *)diagnosticManager;
    modelParameters_1.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_1.mSolverTolerance = 0.001;
    modelParameters_1.mVariableStepSolver = false;
    modelParameters_1.mIsUsingODEN = false;
    modelParameters_1.mFixedStepSize = 0.001;
    modelParameters_1.mStartTime = 0.0;
    modelParameters_1.mLoadInitialState = false;
    modelParameters_1.mUseSimState = false;
    modelParameters_1.mLinTrimCompile = false;
    modelParameters_1.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_1.mRTWModifiedTimeStamp = 5.79692622E+8;
    tmp_1 = 0.001;
    modelParameters_1.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_1.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_1.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_1.mIsUsingODEN = tmp;
    modelParameters_1.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_5_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_5_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_1,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/STATE_5' */

    /* Start for SimscapeExecutionBlock: '<S363>/OUTPUT_5_0' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_5", 1, 0);
    Wind_Turbine_DW.OUTPUT_5_0_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.OUTPUT_5_0_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_5_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_5", 1,
        0);
      Wind_Turbine_DW.OUTPUT_5_0_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.OUTPUT_5_0_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.OUTPUT_5_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_2.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_2.mSolverTolerance = 0.001;
    modelParameters_2.mVariableStepSolver = false;
    modelParameters_2.mIsUsingODEN = false;
    modelParameters_2.mFixedStepSize = 0.001;
    modelParameters_2.mStartTime = 0.0;
    modelParameters_2.mLoadInitialState = false;
    modelParameters_2.mUseSimState = false;
    modelParameters_2.mLinTrimCompile = false;
    modelParameters_2.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_2.mRTWModifiedTimeStamp = 5.79692622E+8;
    tmp_1 = 0.001;
    modelParameters_2.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_2.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_2.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_2.mIsUsingODEN = tmp;
    modelParameters_2.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_5_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_5_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_2,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/OUTPUT_5_0' */

    /* Start for SimscapeRtp: '<S8>/RTP_2' */
    manager = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_2", 0);
    tmp = pointer_is_null(manager);
    if (tmp) {
      Wind_Turbine_31c4daf8_2_gateway();
      manager = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_2", 0);
    }

    Wind_Turbine_DW.RTP_2_RtpManager = (void *)manager;
    Wind_Turbine_DW.RTP_2_SetParametersNeeded = true;

    /* End of Start for SimscapeRtp: '<S8>/RTP_2' */

    /* Start for SimscapeExecutionBlock: '<S363>/STATE_2' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_2", 0, 0);
    Wind_Turbine_DW.STATE_2_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.STATE_2_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_2_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_2", 0,
        0);
      Wind_Turbine_DW.STATE_2_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.STATE_2_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.STATE_2_DiagMgr = (void *)diagnosticManager;
    modelParameters_3.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_3.mSolverTolerance = 0.001;
    modelParameters_3.mVariableStepSolver = false;
    modelParameters_3.mIsUsingODEN = false;
    modelParameters_3.mFixedStepSize = 0.001;
    modelParameters_3.mStartTime = 0.0;
    modelParameters_3.mLoadInitialState = false;
    modelParameters_3.mUseSimState = false;
    modelParameters_3.mLinTrimCompile = false;
    modelParameters_3.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_3.mRTWModifiedTimeStamp = 5.79692622E+8;
    tmp_1 = 0.001;
    modelParameters_3.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_3.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_3.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_3.mIsUsingODEN = tmp;
    modelParameters_3.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_2_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_2_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_3,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/STATE_2' */

    /* Start for SimscapeExecutionBlock: '<S363>/OUTPUT_2_0' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_2", 1, 0);
    Wind_Turbine_DW.OUTPUT_2_0_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.OUTPUT_2_0_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_2_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_2", 1,
        0);
      Wind_Turbine_DW.OUTPUT_2_0_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.OUTPUT_2_0_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.OUTPUT_2_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_4.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_4.mSolverTolerance = 0.001;
    modelParameters_4.mVariableStepSolver = false;
    modelParameters_4.mIsUsingODEN = false;
    modelParameters_4.mFixedStepSize = 0.001;
    modelParameters_4.mStartTime = 0.0;
    modelParameters_4.mLoadInitialState = false;
    modelParameters_4.mUseSimState = false;
    modelParameters_4.mLinTrimCompile = false;
    modelParameters_4.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_4.mRTWModifiedTimeStamp = 5.79692622E+8;
    tmp_1 = 0.001;
    modelParameters_4.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_4.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_4.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_4.mIsUsingODEN = tmp;
    modelParameters_4.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_2_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_2_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_4,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/OUTPUT_2_0' */

    /* Start for SimscapeRtp: '<S8>/RTP_3' */
    manager = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_3", 0);
    tmp = pointer_is_null(manager);
    if (tmp) {
      Wind_Turbine_31c4daf8_3_gateway();
      manager = nesl_lease_rtp_manager("Wind_Turbine/Solver Configuration_3", 0);
    }

    Wind_Turbine_DW.RTP_3_RtpManager = (void *)manager;
    Wind_Turbine_DW.RTP_3_SetParametersNeeded = true;

    /* End of Start for SimscapeRtp: '<S8>/RTP_3' */

    /* Start for SimscapeExecutionBlock: '<S363>/STATE_3' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_3", 0, 0);
    Wind_Turbine_DW.STATE_3_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.STATE_3_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_3_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_3", 0,
        0);
      Wind_Turbine_DW.STATE_3_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.STATE_3_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.STATE_3_DiagMgr = (void *)diagnosticManager;
    modelParameters_5.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_5.mSolverTolerance = 0.001;
    modelParameters_5.mVariableStepSolver = false;
    modelParameters_5.mIsUsingODEN = false;
    modelParameters_5.mFixedStepSize = 0.001;
    modelParameters_5.mStartTime = 0.0;
    modelParameters_5.mLoadInitialState = false;
    modelParameters_5.mUseSimState = false;
    modelParameters_5.mLinTrimCompile = false;
    modelParameters_5.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_5.mRTWModifiedTimeStamp = 5.79692622E+8;
    tmp_1 = 0.001;
    modelParameters_5.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_5.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_5.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_5.mIsUsingODEN = tmp;
    modelParameters_5.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_3_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_3_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_5,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/STATE_3' */

    /* Start for SimscapeExecutionBlock: '<S363>/OUTPUT_3_0' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_3", 1, 0);
    Wind_Turbine_DW.OUTPUT_3_0_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.OUTPUT_3_0_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_3_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_3", 1,
        0);
      Wind_Turbine_DW.OUTPUT_3_0_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.OUTPUT_3_0_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.OUTPUT_3_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_6.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_6.mSolverTolerance = 0.001;
    modelParameters_6.mVariableStepSolver = false;
    modelParameters_6.mIsUsingODEN = false;
    modelParameters_6.mFixedStepSize = 0.001;
    modelParameters_6.mStartTime = 0.0;
    modelParameters_6.mLoadInitialState = false;
    modelParameters_6.mUseSimState = false;
    modelParameters_6.mLinTrimCompile = false;
    modelParameters_6.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_6.mRTWModifiedTimeStamp = 5.79692622E+8;
    tmp_1 = 0.001;
    modelParameters_6.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_6.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_6.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_6.mIsUsingODEN = tmp;
    modelParameters_6.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_3_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_3_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_6,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/OUTPUT_3_0' */

    /* Start for FromWorkspace: '<S365>/FromWs' */
    {
      static real_T pTimeValues0[] = { 0.0, 1.0, 1.0, 5.0, 5.0, 11.0, 11.0, 21.0,
        21.0, 25.0, 25.0, 28.0, 28.0, 31.0, 31.0, 36.6, 36.6, 54.800000000000004,
        54.800000000000004, 55.0, 55.0, 75.0, 75.0, 80.0, 130.0 } ;

      static real_T pDataValues0[] = { 2.0, 2.0, 2.0, 2.0, 2.0,
        5.3000000000000007, 5.3000000000000007, 10.8, 10.8, 13.0, 13.0, 10.0,
        10.0, 10.555555555555555, 10.555555555555555, 11.592592592592592,
        11.592592592592592, 14.962962962962964, 14.962962962962964, 15.0, 15.0,
        2.0, 2.0, 2.0, 2.0, 0.0, 0.0, 0.0, 1.1600000000000001,
        1.1600000000000001, 2.9000000000000004, 2.9000000000000004, 0.5, 0.5,
        0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 1.5717171717171718, 1.5717171717171718,
        -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0, -4.0 } ;

      Wind_Turbine_DW.FromWs_PWORK.TimePtr = (void *) pTimeValues0;
      Wind_Turbine_DW.FromWs_PWORK.DataPtr = (void *) pDataValues0;
      Wind_Turbine_DW.FromWs_IWORK.PrevIndex = 0;
    }

    /* Start for SimscapeExecutionBlock: '<S363>/STATE_4' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_4", 0, 0);
    Wind_Turbine_DW.STATE_4_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.STATE_4_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_4_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_4", 0,
        0);
      Wind_Turbine_DW.STATE_4_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.STATE_4_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.STATE_4_DiagMgr = (void *)diagnosticManager;
    modelParameters_7.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_7.mSolverTolerance = 0.001;
    modelParameters_7.mVariableStepSolver = false;
    modelParameters_7.mIsUsingODEN = false;
    modelParameters_7.mFixedStepSize = 0.001;
    modelParameters_7.mStartTime = 0.0;
    modelParameters_7.mLoadInitialState = false;
    modelParameters_7.mUseSimState = false;
    modelParameters_7.mLinTrimCompile = false;
    modelParameters_7.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_7.mRTWModifiedTimeStamp = 5.79692622E+8;
    tmp_1 = 0.001;
    modelParameters_7.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_7.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_7.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_7.mIsUsingODEN = tmp;
    modelParameters_7.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_4_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_4_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_7,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/STATE_4' */

    /* Start for SimscapeExecutionBlock: '<S363>/OUTPUT_4_0' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_4", 1, 0);
    Wind_Turbine_DW.OUTPUT_4_0_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.OUTPUT_4_0_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_4_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_4", 1,
        0);
      Wind_Turbine_DW.OUTPUT_4_0_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.OUTPUT_4_0_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.OUTPUT_4_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_8.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_8.mSolverTolerance = 0.001;
    modelParameters_8.mVariableStepSolver = false;
    modelParameters_8.mIsUsingODEN = false;
    modelParameters_8.mFixedStepSize = 0.001;
    modelParameters_8.mStartTime = 0.0;
    modelParameters_8.mLoadInitialState = false;
    modelParameters_8.mUseSimState = false;
    modelParameters_8.mLinTrimCompile = false;
    modelParameters_8.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_8.mRTWModifiedTimeStamp = 5.79692622E+8;
    tmp_1 = 0.001;
    modelParameters_8.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_8.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_8.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_8.mIsUsingODEN = tmp;
    modelParameters_8.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_4_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_4_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_8,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/OUTPUT_4_0' */

    /* Start for SimscapeExecutionBlock: '<S363>/STATE_1' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_1", 0, 0);
    Wind_Turbine_DW.STATE_1_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.STATE_1_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_1_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_1", 0,
        0);
      Wind_Turbine_DW.STATE_1_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.STATE_1_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_9.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_9.mSolverTolerance = 0.001;
    modelParameters_9.mVariableStepSolver = false;
    modelParameters_9.mIsUsingODEN = false;
    modelParameters_9.mFixedStepSize = 0.001;
    modelParameters_9.mStartTime = 0.0;
    modelParameters_9.mLoadInitialState = false;
    modelParameters_9.mUseSimState = false;
    modelParameters_9.mLinTrimCompile = false;
    modelParameters_9.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_9.mRTWModifiedTimeStamp = 5.79692622E+8;
    tmp_1 = 0.001;
    modelParameters_9.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_9.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_9.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_9.mIsUsingODEN = tmp;
    modelParameters_9.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.STATE_1_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_9,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S363>/OUTPUT_1_0' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_1", 1, 0);
    Wind_Turbine_DW.OUTPUT_1_0_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.OUTPUT_1_0_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_1_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_1", 1,
        0);
      Wind_Turbine_DW.OUTPUT_1_0_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.OUTPUT_1_0_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_a.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_a.mSolverTolerance = 0.001;
    modelParameters_a.mVariableStepSolver = false;
    modelParameters_a.mIsUsingODEN = false;
    modelParameters_a.mFixedStepSize = 0.001;
    modelParameters_a.mStartTime = 0.0;
    modelParameters_a.mLoadInitialState = false;
    modelParameters_a.mUseSimState = false;
    modelParameters_a.mLinTrimCompile = false;
    modelParameters_a.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_a.mRTWModifiedTimeStamp = 5.79692622E+8;
    tmp_1 = 0.001;
    modelParameters_a.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_a.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_a.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_a.mIsUsingODEN = tmp;
    modelParameters_a.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_1_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_a,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/OUTPUT_1_0' */

    /* Start for SimscapeExecutionBlock: '<S363>/OUTPUT_6_1' */
    simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_6", 1, 1);
    Wind_Turbine_DW.OUTPUT_6_1_Simulator = (void *)simulator;
    tmp = pointer_is_null(Wind_Turbine_DW.OUTPUT_6_1_Simulator);
    if (tmp) {
      Wind_Turbine_31c4daf8_6_gateway();
      simulator = nesl_lease_simulator("Wind_Turbine/Solver Configuration_6", 1,
        1);
      Wind_Turbine_DW.OUTPUT_6_1_Simulator = (void *)simulator;
    }

    tmp_0 = nesl_create_simulation_data();
    Wind_Turbine_DW.OUTPUT_6_1_SimData = (void *)tmp_0;
    diagnosticManager = rtw_create_diagnostics();
    Wind_Turbine_DW.OUTPUT_6_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_b.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_b.mSolverTolerance = 0.001;
    modelParameters_b.mVariableStepSolver = false;
    modelParameters_b.mIsUsingODEN = false;
    modelParameters_b.mFixedStepSize = 0.001;
    modelParameters_b.mStartTime = 0.0;
    modelParameters_b.mLoadInitialState = false;
    modelParameters_b.mUseSimState = false;
    modelParameters_b.mLinTrimCompile = false;
    modelParameters_b.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_b.mRTWModifiedTimeStamp = 5.79692665E+8;
    tmp_1 = 0.001;
    modelParameters_b.mSolverTolerance = tmp_1;
    tmp_1 = 0.0015;
    modelParameters_b.mFixedStepSize = tmp_1;
    tmp = false;
    modelParameters_b.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_b.mIsUsingODEN = tmp;
    modelParameters_b.mLoadInitialState = false;
    simulator = (NeslSimulator *)Wind_Turbine_DW.OUTPUT_6_1_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)
      Wind_Turbine_DW.OUTPUT_6_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_b,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Wind_Turbine_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Wind_Turbine_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S363>/OUTPUT_6_1' */

    /* Start for TransportDelay: '<S361>/Transport Delay' */
    {
      real_T *pBuffer = &Wind_Turbine_DW.TransportDelay_RWORK.TUbufferArea[0];
      Wind_Turbine_DW.TransportDelay_IWORK.Tail = 0;
      Wind_Turbine_DW.TransportDelay_IWORK.Head = 0;
      Wind_Turbine_DW.TransportDelay_IWORK.Last = 0;
      Wind_Turbine_DW.TransportDelay_IWORK.CircularBufSize = 1024;
      pBuffer[0] = Wind_Turbine_P.TransportDelay_InitOutput;
      pBuffer[1024] = Wind_Turbine_M->Timing.t[0];
      Wind_Turbine_DW.TransportDelay_PWORK.TUbufferPtrs[0] = (void *) &pBuffer[0];
      Wind_Turbine_DW.TransportDelay_PWORK.TUbufferPtrs[1] = (void *) &pBuffer
        [1024];
    }

    /* Start for TransportDelay: '<S362>/Transport Delay' */
    {
      real_T *pBuffer = &Wind_Turbine_DW.TransportDelay_RWORK_f.TUbufferArea[0];
      Wind_Turbine_DW.TransportDelay_IWORK_a.Tail = 0;
      Wind_Turbine_DW.TransportDelay_IWORK_a.Head = 0;
      Wind_Turbine_DW.TransportDelay_IWORK_a.Last = 0;
      Wind_Turbine_DW.TransportDelay_IWORK_a.CircularBufSize = 1024;
      pBuffer[0] = Wind_Turbine_P.TransportDelay_InitOutput_e;
      pBuffer[1024] = Wind_Turbine_M->Timing.t[0];
      Wind_Turbine_DW.TransportDelay_PWORK_h.TUbufferPtrs[0] = (void *)
        &pBuffer[0];
      Wind_Turbine_DW.TransportDelay_PWORK_h.TUbufferPtrs[1] = (void *)
        &pBuffer[1024];
    }

    /* Start for Enabled SubSystem: '<S87>/Saturation' */
    Wind_Turbine_DW.Saturation_MODE = false;

    /* End of Start for SubSystem: '<S87>/Saturation' */

    /* Start for S-Function (sfun_psbdqc): '<S370>/State-Space' */
    /* Level2 S-Function Block: '<S370>/State-Space' (sfun_psbdqc) */
    {
      SimStruct *rts = Wind_Turbine_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  {
    boolean_T tmp;
    int_T tmp_0;
    char *tmp_1;

    /* InitializeConditions for Integrator: '<S176>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE = Wind_Turbine_P.ActuatorDynamics_x_initial;

    /* InitializeConditions for SimscapeExecutionBlock: '<S363>/STATE_6' */
    tmp = false;
    if (tmp) {
      tmp_0 = strcmp("ode3", rtsiGetSolverName(&Wind_Turbine_M->solverInfo));
      if (tmp_0 != 0) {
        tmp_1 = solver_mismatch_message("ode3", rtsiGetSolverName
          (&Wind_Turbine_M->solverInfo));
        rtmSetErrorStatus(Wind_Turbine_M, tmp_1);
      }
    }

    /* End of InitializeConditions for SimscapeExecutionBlock: '<S363>/STATE_6' */

    /* InitializeConditions for Integrator: '<S206>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_j =
      Wind_Turbine_P.ActuatorDynamics_x_initial_o;

    /* InitializeConditions for Integrator: '<S236>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_n =
      Wind_Turbine_P.ActuatorDynamics_x_initial_b;

    /* InitializeConditions for Integrator: '<S73>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_m =
      Wind_Turbine_P.ActuatorDynamics1_x_initial;

    /* InitializeConditions for Integrator: '<S352>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_h = Wind_Turbine_P.Integrator_IC_d;

    /* InitializeConditions for Integrator: '<S72>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_e =
      Wind_Turbine_P.ActuatorDynamics_x_initial_n;

    /* InitializeConditions for Integrator: '<S19>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_mj = Wind_Turbine_P.LagRotorSpd_x_initial;

    /* InitializeConditions for Integrator: '<S18>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_mt = Wind_Turbine_P.LagPitch_x_initial;

    /* InitializeConditions for Integrator: '<S361>/integrator' */
    Wind_Turbine_X.integrator_CSTATE = Wind_Turbine_P.integrator_IC;

    /* InitializeConditions for Integrator: '<S362>/integrator' */
    Wind_Turbine_X.integrator_CSTATE_g = Wind_Turbine_P.integrator_IC_j;

    /* InitializeConditions for Integrator: '<S287>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_a[0] =
      Wind_Turbine_P.ActuatorDynamics_x_initial_of;

    /* InitializeConditions for Integrator: '<S93>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_e1[0] = Wind_Turbine_P.Integrator_IC_j[0];

    /* InitializeConditions for Integrator: '<S287>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_a[1] =
      Wind_Turbine_P.ActuatorDynamics_x_initial_of;

    /* InitializeConditions for Integrator: '<S93>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_e1[1] = Wind_Turbine_P.Integrator_IC_j[1];

    /* InitializeConditions for Integrator: '<S287>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_a[2] =
      Wind_Turbine_P.ActuatorDynamics_x_initial_of;

    /* InitializeConditions for Integrator: '<S93>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_e1[2] = Wind_Turbine_P.Integrator_IC_j[2];

    /* InitializeConditions for Integrator: '<S287>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_a[3] =
      Wind_Turbine_P.ActuatorDynamics_x_initial_of;

    /* InitializeConditions for Integrator: '<S93>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_e1[3] = Wind_Turbine_P.Integrator_IC_j[3];

    /* InitializeConditions for Integrator: '<S88>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_mr[0] = Wind_Turbine_P.Integrator_IC_a[0];
    Wind_Turbine_X.Integrator_CSTATE_mr[1] = Wind_Turbine_P.Integrator_IC_a[1];

    /* InitializeConditions for Integrator: '<S40>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_eo = Wind_Turbine_P.Integrator_IC_g;

    /* InitializeConditions for Memory: '<S40>/Memory' */
    Wind_Turbine_DW.Memory_PreviousInput =
      Wind_Turbine_P.Memory_InitialCondition;

    /* InitializeConditions for Integrator: '<S83>/Rotor angle thetam' */
    Wind_Turbine_X.Rotoranglethetam_CSTATE = Wind_Turbine_P.Rotoranglethetam_IC;

    /* InitializeConditions for Integrator: '<S368>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_b[0] = Wind_Turbine_P.Integrator_IC_di;

    /* InitializeConditions for Integrator: '<S369>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_bc[0] = Wind_Turbine_P.Integrator_IC_gs;

    /* InitializeConditions for Integrator: '<S368>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_b[1] = Wind_Turbine_P.Integrator_IC_di;

    /* InitializeConditions for Integrator: '<S369>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_bc[1] = Wind_Turbine_P.Integrator_IC_gs;

    /* InitializeConditions for Integrator: '<S368>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_b[2] = Wind_Turbine_P.Integrator_IC_di;

    /* InitializeConditions for Integrator: '<S369>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_bc[2] = Wind_Turbine_P.Integrator_IC_gs;

    /* InitializeConditions for Integrator: '<S368>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_b[3] = Wind_Turbine_P.Integrator_IC_di;

    /* InitializeConditions for Integrator: '<S369>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_bc[3] = Wind_Turbine_P.Integrator_IC_gs;

    /* InitializeConditions for Derivative: '<S41>/Derivative' */
    Wind_Turbine_DW.TimeStampA = (rtInf);
    Wind_Turbine_DW.TimeStampB = (rtInf);

    /* InitializeConditions for Derivative: '<S128>/Derivative' */
    Wind_Turbine_DW.TimeStampA_n = (rtInf);
    Wind_Turbine_DW.TimeStampB_j = (rtInf);

    /* InitializeConditions for Derivative: '<S130>/Derivative' */
    Wind_Turbine_DW.TimeStampA_g = (rtInf);
    Wind_Turbine_DW.TimeStampB_k = (rtInf);

    /* InitializeConditions for Derivative: '<S132>/Derivative' */
    Wind_Turbine_DW.TimeStampA_o = (rtInf);
    Wind_Turbine_DW.TimeStampB_m = (rtInf);

    /* InitializeConditions for Derivative: '<S133>/Derivative' */
    Wind_Turbine_DW.TimeStampA_f = (rtInf);
    Wind_Turbine_DW.TimeStampB_l = (rtInf);

    /* InitializeConditions for Derivative: '<S139>/Derivative' */
    Wind_Turbine_DW.TimeStampA_fn = (rtInf);
    Wind_Turbine_DW.TimeStampB_e = (rtInf);

    /* InitializeConditions for Derivative: '<S141>/Derivative' */
    Wind_Turbine_DW.TimeStampA_p = (rtInf);
    Wind_Turbine_DW.TimeStampB_f = (rtInf);

    /* InitializeConditions for Derivative: '<S143>/Derivative' */
    Wind_Turbine_DW.TimeStampA_na = (rtInf);
    Wind_Turbine_DW.TimeStampB_kf = (rtInf);

    /* InitializeConditions for Derivative: '<S144>/Derivative' */
    Wind_Turbine_DW.TimeStampA_fy = (rtInf);
    Wind_Turbine_DW.TimeStampB_fl = (rtInf);

    /* InitializeConditions for Integrator: '<S349>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_i[0] = Wind_Turbine_P.Integrator_IC_p;
    Wind_Turbine_X.Integrator_CSTATE_i[1] = Wind_Turbine_P.Integrator_IC_p;
    Wind_Turbine_X.Integrator_CSTATE_i[2] = Wind_Turbine_P.Integrator_IC_p;

    /* SystemInitialize for Chart: '<S51>/Turbine State Machine' */
    Wind_Turbine_DW.sfEvent = Wind_Turbine_CALL_EVENT;
    Wind_Turbine_DW.is_active_c1_Turbine_State_Mach = 0U;
    Wind_Turbine_DW.is_c1_Turbine_State_Machine_Lib = 0U;
    Wind_Turbine_DW.wind_speed_cut_in_lower = 4.0;
    Wind_Turbine_DW.turbine_speed_cut_in = 1200.0;
    Wind_Turbine_DW.wind_speed_cut_out = 20.0;
    Wind_Turbine_DW.wind_speed_cut_in_upper = 18.0;
    Wind_Turbine_DW.turbine_speed_cut_out = 2200.0;
    Wind_Turbine_B.pitch_brake = 0.0;
    Wind_Turbine_B.parking_brake = 0.0;
    Wind_Turbine_B.generator_trip = 0.0;
    Wind_Turbine_B.turbine_state = 0.0;

    /* SystemInitialize for Enabled SubSystem: '<S87>/Saturation' */
    /* InitializeConditions for Integrator: '<S96>/Integrator' */
    Wind_Turbine_X.Integrator_CSTATE_g = Wind_Turbine_P.Integrator_IC;

    /* End of SystemInitialize for SubSystem: '<S87>/Saturation' */
  }
}

/* Model terminate function */
void Wind_Turbine_terminate(void)
{
  NeuDiagnosticManager *diagnosticManager;
  NeslSimulationData *simulationData;

  /* Terminate for SimscapeExecutionBlock: '<S363>/STATE_6' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_6_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_6_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_6");

  /* Terminate for SimscapeExecutionBlock: '<S363>/OUTPUT_6_0' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.OUTPUT_6_0_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_6_0_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_6");

  /* Terminate for SimscapeExecutionBlock: '<S363>/STATE_5' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_5_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_5_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S363>/OUTPUT_5_0' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.OUTPUT_5_0_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_5_0_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_5");

  /* Terminate for SimscapeExecutionBlock: '<S363>/STATE_2' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_2_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_2_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S363>/OUTPUT_2_0' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.OUTPUT_2_0_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_2_0_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_2");

  /* Terminate for SimscapeExecutionBlock: '<S363>/STATE_3' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_3_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_3_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S363>/OUTPUT_3_0' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.OUTPUT_3_0_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_3_0_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_3");

  /* Terminate for SimscapeExecutionBlock: '<S363>/STATE_4' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_4_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_4_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S363>/OUTPUT_4_0' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.OUTPUT_4_0_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_4_0_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_4");

  /* Terminate for SimscapeExecutionBlock: '<S363>/STATE_1' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.STATE_1_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.STATE_1_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S363>/OUTPUT_1_0' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.OUTPUT_1_0_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_1_0_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S363>/OUTPUT_6_1' */
  diagnosticManager = (NeuDiagnosticManager *)Wind_Turbine_DW.OUTPUT_6_1_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)Wind_Turbine_DW.OUTPUT_6_1_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("Wind_Turbine/Solver Configuration_6");

  /* Terminate for S-Function (sfun_psbdqc): '<S370>/State-Space' */
  /* Level2 S-Function Block: '<S370>/State-Space' (sfun_psbdqc) */
  {
    SimStruct *rts = Wind_Turbine_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  Wind_Turbine_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Wind_Turbine_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  Wind_Turbine_initialize();
}

void MdlTerminate(void)
{
  Wind_Turbine_terminate();
}

/* Registration function */
RT_MODEL_Wind_Turbine_T *Wind_Turbine(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  Wind_Turbine_P.Saturation_LowerSat = rtMinusInf;
  Wind_Turbine_P.Saturation_UpperSat_h = rtInf;

  /* initialize real-time model */
  (void) memset((void *)Wind_Turbine_M, 0,
                sizeof(RT_MODEL_Wind_Turbine_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Wind_Turbine_M->solverInfo,
                          &Wind_Turbine_M->Timing.simTimeStep);
    rtsiSetTPtr(&Wind_Turbine_M->solverInfo, &rtmGetTPtr(Wind_Turbine_M));
    rtsiSetStepSizePtr(&Wind_Turbine_M->solverInfo,
                       &Wind_Turbine_M->Timing.stepSize0);
    rtsiSetdXPtr(&Wind_Turbine_M->solverInfo, &Wind_Turbine_M->derivs);
    rtsiSetContStatesPtr(&Wind_Turbine_M->solverInfo, (real_T **)
                         &Wind_Turbine_M->contStates);
    rtsiSetNumContStatesPtr(&Wind_Turbine_M->solverInfo,
      &Wind_Turbine_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Wind_Turbine_M->solverInfo,
      &Wind_Turbine_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&Wind_Turbine_M->solverInfo,
      &Wind_Turbine_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&Wind_Turbine_M->solverInfo,
      &Wind_Turbine_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&Wind_Turbine_M->solverInfo, (&rtmGetErrorStatus
      (Wind_Turbine_M)));
    rtsiSetRTModelPtr(&Wind_Turbine_M->solverInfo, Wind_Turbine_M);
  }

  rtsiSetSimTimeStep(&Wind_Turbine_M->solverInfo, MAJOR_TIME_STEP);
  Wind_Turbine_M->intgData.y = Wind_Turbine_M->odeY;
  Wind_Turbine_M->intgData.f[0] = Wind_Turbine_M->odeF[0];
  Wind_Turbine_M->intgData.f[1] = Wind_Turbine_M->odeF[1];
  Wind_Turbine_M->intgData.f[2] = Wind_Turbine_M->odeF[2];
  Wind_Turbine_M->contStates = ((real_T *) &Wind_Turbine_X);
  rtsiSetSolverData(&Wind_Turbine_M->solverInfo, (void *)
                    &Wind_Turbine_M->intgData);
  rtsiSetSolverName(&Wind_Turbine_M->solverInfo,"ode3");
  Wind_Turbine_M->solverInfoPtr = (&Wind_Turbine_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Wind_Turbine_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    Wind_Turbine_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Wind_Turbine_M->Timing.sampleTimes =
      (&Wind_Turbine_M->Timing.sampleTimesArray[0]);
    Wind_Turbine_M->Timing.offsetTimes =
      (&Wind_Turbine_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Wind_Turbine_M->Timing.sampleTimes[0] = (0.0);
    Wind_Turbine_M->Timing.sampleTimes[1] = (0.0015);

    /* task offsets */
    Wind_Turbine_M->Timing.offsetTimes[0] = (0.0);
    Wind_Turbine_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Wind_Turbine_M, &Wind_Turbine_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Wind_Turbine_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Wind_Turbine_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Wind_Turbine_M, 69.999);
  Wind_Turbine_M->Timing.stepSize0 = 0.0015;
  Wind_Turbine_M->Timing.stepSize1 = 0.0015;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Wind_Turbine_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    /*
     * Set pointers to the data and signal info each state
     */
    {
      static int_T rt_LoggedStateWidths[] = {
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        4,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        4,
        2,
        1,
        1,
        4,
        4,
        3,
        1,
        2,
        2,
        2,
        2,
        25,
        2,
        2,
        2,
        2,
        25,
        2,
        2,
        2,
        2,
        25,
        2,
        1,
        1,
        2,
        37,
        2,
        2,
        2,
        2,
        2,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        110,
        2,
        2,
        2,
        2,
        2,
        2,
        2,
        2,
        2,
        2
      };

      static int_T rt_LoggedStateNumDimensions[] = {
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1
      };

      static int_T rt_LoggedStateDimensions[] = {
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        4,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        4,
        2,
        1,
        1,
        4,
        4,
        3,
        1,
        2,
        2,
        2,
        2,
        25,
        2,
        2,
        2,
        2,
        25,
        2,
        2,
        2,
        2,
        25,
        2,
        1,
        1,
        2,
        37,
        2,
        2,
        2,
        2,
        2,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        110,
        2,
        2,
        2,
        2,
        2,
        2,
        2,
        2,
        2,
        2
      };

      static boolean_T rt_LoggedStateIsVarDims[] = {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0
      };

      static BuiltInDTypeId rt_LoggedStateDataTypeIds[] = {
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE,
        SS_DOUBLE
      };

      static int_T rt_LoggedStateComplexSignals[] = {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0
      };

      static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs[] = {
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL),
        (NULL)
      };

      static const char_T *rt_LoggedStateLabels[] = {
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "CSTATE",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "FirstOutput",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "FirstOutput",
        "Discrete",
        "FirstOutput",
        "Discrete",
        "FirstOutput",
        "Discrete",
        "FirstOutput",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete",
        "Discrete"
      };

      static const char_T *rt_LoggedStateBlockNames[] = {
        "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Actuator Dynamics/Integrator",
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
        "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Linkage3/Prismatic  Joint",
        "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Actuator Dynamics/Integrator",
        "Wind_Turbine/Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Actuator Dynamics/Integrator",
        "Wind_Turbine/Nacelle/Generator/Full/Actuator Dynamics1/Integrator",
        "Wind_Turbine/Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired\nAngle of Attack/PI Controller\nRotor Speed/Integrator",
        "Wind_Turbine/Nacelle/Generator/Full/Actuator Dynamics/Integrator",
        "Wind_Turbine/Nacelle/Generator/Full/Torque Actuator/Simulink-PS\nConverter",
        "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Actuator Dynamics/Integrator",
        "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/Simulink-PS\nConverter",
        "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/Simulink-PS\nConverter",
        "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/Simulink-PS\nConverter",
        "Wind_Turbine/Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/Simulink-PS\nConverter",
        "Wind_Turbine/Blade Load/Lift and Drag/Lag Rotor Spd/Integrator",
        "Wind_Turbine/Blade Load/Lift and Drag/Lag Pitch/Integrator",
        "Wind_Turbine/Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/integrator",
        "Wind_Turbine/Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/integrator",
        "Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine\npu Units/Electrical model/positive-sequence\nstate-space model\n(4 states, with saturation)/phi/Integrator",
        "Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine\npu Units/Electrical model/simpilified negative-sequence\nmodel\n(2 states, no saturation)/Integrator",
        "Wind_Turbine/Grid/Grid/Model/Variation\nSubSystem/Integrator",
        "Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine\npu Units/Mechanical model/Rotor angle thetam",
        "Wind_Turbine/Yaw Controller/Yaw Controller/PI Controller\nNacelle Yaw/Integrator",
        "Wind_Turbine/Yaw Controller/Yaw Controller/PI Controller\nNacelle Yaw Rate/Integrator",
        "Wind_Turbine/Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller/Integrator",
        "Wind_Turbine/Nacelle/Generator/Full/Asynchronous Machine\npu Units/Electrical model/positive-sequence\nstate-space model\n(4 states, with saturation)/Saturation/Time Constant/Integrator",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INTERNAL_3_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/STATE_5",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INTERNAL_5_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/STATE_2",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_12_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_13_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_14_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INTERNAL_7_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/STATE_3",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INTERNAL_1_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/STATE_4",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INTERNAL_8_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INTERNAL_9_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_15_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_15_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_16_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_16_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_17_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_17_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_18_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_18_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/STATE_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INTERNAL_10_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_1_2_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_2_2_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_3_2_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_1_3_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_2_3_1",
        "Wind_Turbine/Solver\nConfiguration/EVAL_KEY/INPUT_3_3_1"
      };

      static const char_T *rt_LoggedStateNames[] = {
        "",
        "Wind_Turbine.Nacelle.Yaw_System.Servomotor.Revolute_Joint.Rz.q",
        "Wind_Turbine.Nacelle.Yaw_System.Servomotor.Revolute_Joint.Rz.w",
        "Wind_Turbine.Nacelle.Hub_Axis.Rotate.Revolute_Joint.Rz.q",
        "Wind_Turbine.Nacelle.Hub_Axis.Rotate.Revolute_Joint.Rz.w",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Rev_RB1.Revolute_Joint.Rz.q",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Rev_RB1.Revolute_Joint.Rz.w",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage1.Universal_Joint.Rx.q",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage1.Universal_Joint.Ry.q",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage1.Universal_Joint.Rx.w",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage1.Universal_Joint.Ry.w",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage1.Prismatic_Joint.Pz.p",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage1.Prismatic_Joint.Pz.v",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Rev_RB2.Revolute_Joint.Rz.q",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Rev_RB2.Revolute_Joint.Rz.w",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage2.Universal_Joint.Rx.q",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage2.Universal_Joint.Ry.q",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage2.Universal_Joint.Rx.w",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage2.Universal_Joint.Ry.w",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage2.Prismatic_Joint.Pz.p",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage2.Prismatic_Joint.Pz.v",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Rev_RB3.Revolute_Joint.Rz.q",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Rev_RB3.Revolute_Joint.Rz.w",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage3.Universal_Joint.Rx.q",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage3.Universal_Joint.Ry.q",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage3.Universal_Joint.Rx.w",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage3.Universal_Joint.Ry.w",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage3.Prismatic_Joint.Pz.p",
        "Wind_Turbine.Nacelle.Pitch_System.Hydraulic.Linkage3.Prismatic_Joint.Pz.v",
        "",
        "",
        "",
        "",
        "",
        "Wind_Turbine.Nacelle.Generator.Full.Torque_Actuator.Simulink_PS_Converter.outputFiltered_3108978447_0",
        "",
        "Wind_Turbine.Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_1.Servomotor.Simulink_PS_Converter.outputFiltered_3942997853_0",
        "Wind_Turbine.Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_2.Servomotor.Simulink_PS_Converter.outputFiltered_2896504205_0",
        "Wind_Turbine.Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_3.Servomotor.Simulink_PS_Converter.outputFiltered_2445610045_0",
        "Wind_Turbine.Nacelle.Yaw_System.Servomotor.Servomotor.Yaw_Motor_4.Servomotor.Simulink_PS_Converter.outputFiltered_328571884_0",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
      };

      static boolean_T rt_LoggedStateCrossMdlRef[] = {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0
      };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedStateSignalInfo = {
        96,
        rt_LoggedStateWidths,
        rt_LoggedStateNumDimensions,
        rt_LoggedStateDimensions,
        rt_LoggedStateIsVarDims,
        (NULL),
        (NULL),
        rt_LoggedStateDataTypeIds,
        rt_LoggedStateComplexSignals,
        (NULL),
        rt_LoggingStatePreprocessingFcnPtrs,

        { rt_LoggedStateLabels },
        (NULL),
        (NULL),
        (NULL),

        { rt_LoggedStateBlockNames },

        { rt_LoggedStateNames },
        rt_LoggedStateCrossMdlRef,
        rt_RTWLogDataTypeConvert
      };

      static void * rt_LoggedStateSignalPtrs[96];
      rtliSetLogXSignalPtrs(Wind_Turbine_M->rtwLogInfo, (LogSignalPtrsType)
                            rt_LoggedStateSignalPtrs);
      rtliSetLogXSignalInfo(Wind_Turbine_M->rtwLogInfo,
                            &rt_LoggedStateSignalInfo);
      rt_LoggedStateSignalPtrs[0] = (void*)&Wind_Turbine_X.Integrator_CSTATE;
      rt_LoggedStateSignalPtrs[1] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[0];
      rt_LoggedStateSignalPtrs[2] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[1];
      rt_LoggedStateSignalPtrs[3] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[2];
      rt_LoggedStateSignalPtrs[4] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[3];
      rt_LoggedStateSignalPtrs[5] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[4];
      rt_LoggedStateSignalPtrs[6] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[5];
      rt_LoggedStateSignalPtrs[7] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[6];
      rt_LoggedStateSignalPtrs[8] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[7];
      rt_LoggedStateSignalPtrs[9] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[8];
      rt_LoggedStateSignalPtrs[10] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[9];
      rt_LoggedStateSignalPtrs[11] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[10];
      rt_LoggedStateSignalPtrs[12] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[11];
      rt_LoggedStateSignalPtrs[13] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[12];
      rt_LoggedStateSignalPtrs[14] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[13];
      rt_LoggedStateSignalPtrs[15] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[14];
      rt_LoggedStateSignalPtrs[16] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[15];
      rt_LoggedStateSignalPtrs[17] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[16];
      rt_LoggedStateSignalPtrs[18] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[17];
      rt_LoggedStateSignalPtrs[19] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[18];
      rt_LoggedStateSignalPtrs[20] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[19];
      rt_LoggedStateSignalPtrs[21] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[20];
      rt_LoggedStateSignalPtrs[22] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[21];
      rt_LoggedStateSignalPtrs[23] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[22];
      rt_LoggedStateSignalPtrs[24] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[23];
      rt_LoggedStateSignalPtrs[25] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[24];
      rt_LoggedStateSignalPtrs[26] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[25];
      rt_LoggedStateSignalPtrs[27] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[26];
      rt_LoggedStateSignalPtrs[28] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_SystemSe[27];
      rt_LoggedStateSignalPtrs[29] = (void*)&Wind_Turbine_X.Integrator_CSTATE_j;
      rt_LoggedStateSignalPtrs[30] = (void*)&Wind_Turbine_X.Integrator_CSTATE_n;
      rt_LoggedStateSignalPtrs[31] = (void*)&Wind_Turbine_X.Integrator_CSTATE_m;
      rt_LoggedStateSignalPtrs[32] = (void*)&Wind_Turbine_X.Integrator_CSTATE_h;
      rt_LoggedStateSignalPtrs[33] = (void*)&Wind_Turbine_X.Integrator_CSTATE_e;
      rt_LoggedStateSignalPtrs[34] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleGeneratorFul;
      rt_LoggedStateSignalPtrs[35] = (void*)&Wind_Turbine_X.Integrator_CSTATE_a
        [0];
      rt_LoggedStateSignalPtrs[36] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_System_j;
      rt_LoggedStateSignalPtrs[37] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_System_m;
      rt_LoggedStateSignalPtrs[38] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_System_p;
      rt_LoggedStateSignalPtrs[39] = (void*)
        &Wind_Turbine_X.Wind_TurbineNacelleYaw_System_a;
      rt_LoggedStateSignalPtrs[40] = (void*)&Wind_Turbine_X.Integrator_CSTATE_mj;
      rt_LoggedStateSignalPtrs[41] = (void*)&Wind_Turbine_X.Integrator_CSTATE_mt;
      rt_LoggedStateSignalPtrs[42] = (void*)&Wind_Turbine_X.integrator_CSTATE;
      rt_LoggedStateSignalPtrs[43] = (void*)&Wind_Turbine_X.integrator_CSTATE_g;
      rt_LoggedStateSignalPtrs[44] = (void*)
        &Wind_Turbine_X.Integrator_CSTATE_e1[0];
      rt_LoggedStateSignalPtrs[45] = (void*)
        &Wind_Turbine_X.Integrator_CSTATE_mr[0];
      rt_LoggedStateSignalPtrs[46] = (void*)&Wind_Turbine_X.Integrator_CSTATE_eo;
      rt_LoggedStateSignalPtrs[47] = (void*)
        &Wind_Turbine_X.Rotoranglethetam_CSTATE;
      rt_LoggedStateSignalPtrs[48] = (void*)&Wind_Turbine_X.Integrator_CSTATE_b
        [0];
      rt_LoggedStateSignalPtrs[49] = (void*)
        &Wind_Turbine_X.Integrator_CSTATE_bc[0];
      rt_LoggedStateSignalPtrs[50] = (void*)&Wind_Turbine_X.Integrator_CSTATE_i
        [0];
      rt_LoggedStateSignalPtrs[51] = (void*)&Wind_Turbine_X.Integrator_CSTATE_g;
      rt_LoggedStateSignalPtrs[52] = (void*)Wind_Turbine_DW.INPUT_6_1_1_Discrete;
      rt_LoggedStateSignalPtrs[53] = (void*)Wind_Turbine_DW.INPUT_7_1_1_Discrete;
      rt_LoggedStateSignalPtrs[54] = (void*)Wind_Turbine_DW.INPUT_8_1_1_Discrete;
      rt_LoggedStateSignalPtrs[55] = (void*)
        Wind_Turbine_DW.INTERNAL_3_1_1_Discrete;
      rt_LoggedStateSignalPtrs[56] = (void*)Wind_Turbine_DW.STATE_5_Discrete;
      rt_LoggedStateSignalPtrs[57] = (void*)Wind_Turbine_DW.INPUT_9_1_1_Discrete;
      rt_LoggedStateSignalPtrs[58] = (void*)
        Wind_Turbine_DW.INPUT_10_1_1_Discrete;
      rt_LoggedStateSignalPtrs[59] = (void*)
        Wind_Turbine_DW.INPUT_11_1_1_Discrete;
      rt_LoggedStateSignalPtrs[60] = (void*)
        Wind_Turbine_DW.INTERNAL_5_1_1_Discrete;
      rt_LoggedStateSignalPtrs[61] = (void*)Wind_Turbine_DW.STATE_2_Discrete;
      rt_LoggedStateSignalPtrs[62] = (void*)
        Wind_Turbine_DW.INPUT_12_1_1_Discrete;
      rt_LoggedStateSignalPtrs[63] = (void*)
        Wind_Turbine_DW.INPUT_13_1_1_Discrete;
      rt_LoggedStateSignalPtrs[64] = (void*)
        Wind_Turbine_DW.INPUT_14_1_1_Discrete;
      rt_LoggedStateSignalPtrs[65] = (void*)
        Wind_Turbine_DW.INTERNAL_7_1_1_Discrete;
      rt_LoggedStateSignalPtrs[66] = (void*)Wind_Turbine_DW.STATE_3_Discrete;
      rt_LoggedStateSignalPtrs[67] = (void*)Wind_Turbine_DW.INPUT_4_1_1_Discrete;
      rt_LoggedStateSignalPtrs[68] = (void*)
        &Wind_Turbine_DW.INPUT_5_1_1_Discrete;
      rt_LoggedStateSignalPtrs[69] = (void*)
        &Wind_Turbine_DW.INPUT_5_1_1_FirstOutput;
      rt_LoggedStateSignalPtrs[70] = (void*)
        Wind_Turbine_DW.INTERNAL_1_1_1_Discrete;
      rt_LoggedStateSignalPtrs[71] = (void*)Wind_Turbine_DW.STATE_4_Discrete;
      rt_LoggedStateSignalPtrs[72] = (void*)
        Wind_Turbine_DW.INTERNAL_2_1_1_Discrete;
      rt_LoggedStateSignalPtrs[73] = (void*)
        Wind_Turbine_DW.INTERNAL_4_1_1_Discrete;
      rt_LoggedStateSignalPtrs[74] = (void*)
        Wind_Turbine_DW.INTERNAL_6_1_1_Discrete;
      rt_LoggedStateSignalPtrs[75] = (void*)
        Wind_Turbine_DW.INTERNAL_8_1_1_Discrete;
      rt_LoggedStateSignalPtrs[76] = (void*)
        Wind_Turbine_DW.INTERNAL_9_1_1_Discrete;
      rt_LoggedStateSignalPtrs[77] = (void*)
        &Wind_Turbine_DW.INPUT_15_1_1_Discrete;
      rt_LoggedStateSignalPtrs[78] = (void*)
        &Wind_Turbine_DW.INPUT_15_1_1_FirstOutput;
      rt_LoggedStateSignalPtrs[79] = (void*)
        &Wind_Turbine_DW.INPUT_16_1_1_Discrete;
      rt_LoggedStateSignalPtrs[80] = (void*)
        &Wind_Turbine_DW.INPUT_16_1_1_FirstOutput;
      rt_LoggedStateSignalPtrs[81] = (void*)
        &Wind_Turbine_DW.INPUT_17_1_1_Discrete;
      rt_LoggedStateSignalPtrs[82] = (void*)
        &Wind_Turbine_DW.INPUT_17_1_1_FirstOutput;
      rt_LoggedStateSignalPtrs[83] = (void*)
        &Wind_Turbine_DW.INPUT_18_1_1_Discrete;
      rt_LoggedStateSignalPtrs[84] = (void*)
        &Wind_Turbine_DW.INPUT_18_1_1_FirstOutput;
      rt_LoggedStateSignalPtrs[85] = (void*)Wind_Turbine_DW.STATE_1_Discrete;
      rt_LoggedStateSignalPtrs[86] = (void*)
        Wind_Turbine_DW.INTERNAL_10_1_1_Discrete;
      rt_LoggedStateSignalPtrs[87] = (void*)Wind_Turbine_DW.INPUT_1_1_1_Discrete;
      rt_LoggedStateSignalPtrs[88] = (void*)Wind_Turbine_DW.INPUT_2_1_1_Discrete;
      rt_LoggedStateSignalPtrs[89] = (void*)Wind_Turbine_DW.INPUT_3_1_1_Discrete;
      rt_LoggedStateSignalPtrs[90] = (void*)Wind_Turbine_DW.INPUT_1_2_1_Discrete;
      rt_LoggedStateSignalPtrs[91] = (void*)Wind_Turbine_DW.INPUT_2_2_1_Discrete;
      rt_LoggedStateSignalPtrs[92] = (void*)Wind_Turbine_DW.INPUT_3_2_1_Discrete;
      rt_LoggedStateSignalPtrs[93] = (void*)Wind_Turbine_DW.INPUT_1_3_1_Discrete;
      rt_LoggedStateSignalPtrs[94] = (void*)Wind_Turbine_DW.INPUT_2_3_1_Discrete;
      rt_LoggedStateSignalPtrs[95] = (void*)Wind_Turbine_DW.INPUT_3_3_1_Discrete;
    }

    rtliSetLogT(Wind_Turbine_M->rtwLogInfo, "tout");
    rtliSetLogX(Wind_Turbine_M->rtwLogInfo, "");
    rtliSetLogXFinal(Wind_Turbine_M->rtwLogInfo, "xFinal");
    rtliSetLogVarNameModifier(Wind_Turbine_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Wind_Turbine_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(Wind_Turbine_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Wind_Turbine_M->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[] = {
        &Wind_Turbine_Y.Out1
      };

      rtliSetLogYSignalPtrs(Wind_Turbine_M->rtwLogInfo, ((LogSignalPtrsType)
        rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] = {
        1
      };

      static int_T rt_LoggedOutputNumDimensions[] = {
        1
      };

      static int_T rt_LoggedOutputDimensions[] = {
        1
      };

      static boolean_T rt_LoggedOutputIsVarDims[] = {
        0
      };

      static void* rt_LoggedCurrentSignalDimensions[] = {
        (NULL)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
        4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
        SS_DOUBLE
      };

      static int_T rt_LoggedOutputComplexSignals[] = {
        0
      };

      static RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs[] = {
        (NULL)
      };

      static const char_T *rt_LoggedOutputLabels[] = {
        "" };

      static const char_T *rt_LoggedOutputBlockNames[] = {
        "Wind_Turbine/Out1" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
        {
          1,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (NULL),
          rt_LoggingPreprocessingFcnPtrs,

          { rt_LoggedOutputLabels },
          (NULL),
          (NULL),
          (NULL),

          { rt_LoggedOutputBlockNames },

          { (NULL) },
          (NULL),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo(Wind_Turbine_M->rtwLogInfo,
                            rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
    }

    rtliSetLogY(Wind_Turbine_M->rtwLogInfo, "yout");
  }

  Wind_Turbine_M->solverInfoPtr = (&Wind_Turbine_M->solverInfo);
  Wind_Turbine_M->Timing.stepSize = (0.0015);
  rtsiSetFixedStepSize(&Wind_Turbine_M->solverInfo, 0.0015);
  rtsiSetSolverMode(&Wind_Turbine_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Wind_Turbine_M->blockIO = ((void *) &Wind_Turbine_B);
  (void) memset(((void *) &Wind_Turbine_B), 0,
                sizeof(B_Wind_Turbine_T));

  /* parameters */
  Wind_Turbine_M->defaultParam = ((real_T *)&Wind_Turbine_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &Wind_Turbine_X;
    Wind_Turbine_M->contStates = (x);
    (void) memset((void *)&Wind_Turbine_X, 0,
                  sizeof(X_Wind_Turbine_T));
  }

  /* states (dwork) */
  Wind_Turbine_M->dwork = ((void *) &Wind_Turbine_DW);
  (void) memset((void *)&Wind_Turbine_DW, 0,
                sizeof(DW_Wind_Turbine_T));

  /* external outputs */
  Wind_Turbine_M->outputs = (&Wind_Turbine_Y);
  Wind_Turbine_Y.Out1 = 0.0;

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  Wind_Turbine_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Wind_Turbine_M->NonInlinedSFcns.sfcnInfo;
    Wind_Turbine_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Wind_Turbine_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &Wind_Turbine_M->Sizes.numSampTimes);
    Wind_Turbine_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (Wind_Turbine_M)[0]);
    Wind_Turbine_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (Wind_Turbine_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,Wind_Turbine_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Wind_Turbine_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Wind_Turbine_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(Wind_Turbine_M));
    rtssSetStepSizePtr(sfcnInfo, &Wind_Turbine_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(Wind_Turbine_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Wind_Turbine_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &Wind_Turbine_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &Wind_Turbine_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &Wind_Turbine_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Wind_Turbine_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Wind_Turbine_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Wind_Turbine_M->solverInfoPtr);
  }

  Wind_Turbine_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&Wind_Turbine_M->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    Wind_Turbine_M->childSfunctions =
      (&Wind_Turbine_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    Wind_Turbine_M->childSfunctions[0] =
      (&Wind_Turbine_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: Wind_Turbine/<S370>/State-Space (sfun_psbdqc) */
    {
      SimStruct *rts = Wind_Turbine_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = Wind_Turbine_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = Wind_Turbine_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = Wind_Turbine_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Wind_Turbine_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Wind_Turbine_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Wind_Turbine_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Wind_Turbine_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Wind_Turbine_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Wind_Turbine_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Wind_Turbine_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &Wind_Turbine_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Wind_Turbine_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Wind_Turbine_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Wind_Turbine_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Wind_Turbine_M->NonInlinedSFcns.Sfcn0.UPtrs0;

          {
            int_T i1;
            const real_T *u0 = &Wind_Turbine_B.ComplextoRealImag_o1[0];
            for (i1=0; i1 < 11; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }

            u0 = &Wind_Turbine_B.ComplextoRealImag_o2[0];
            for (i1=0; i1 < 11; i1++) {
              sfcnUPtrs[i1+ 11] = &u0[i1];
            }

            sfcnUPtrs[22] = &Wind_Turbine_B.Switch3_d;
            sfcnUPtrs[23] = &Wind_Turbine_B.Switch3_j;
            sfcnUPtrs[24] = &Wind_Turbine_B.Switch3_dw;
            sfcnUPtrs[25] = &Wind_Turbine_B.Switch3_er;
            sfcnUPtrs[26] = &Wind_Turbine_B.Switch3_a;
            sfcnUPtrs[27] = &Wind_Turbine_B.Switch3_h;
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 28);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Wind_Turbine_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Wind_Turbine_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Wind_Turbine_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 34);
          ssSetOutputPortSignal(rts, 0, ((real_T *) Wind_Turbine_B.StateSpace));
        }
      }

      /* path info */
      ssSetModelName(rts, "State-Space");
      ssSetPath(rts, "Wind_Turbine/powergui/EquivalentModel1/State-Space");
      ssSetRTModel(rts,Wind_Turbine_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Wind_Turbine_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Wind_Turbine_P.StateSpace_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Wind_Turbine_P.StateSpace_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Wind_Turbine_P.StateSpace_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Wind_Turbine_P.StateSpace_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Wind_Turbine_DW.StateSpace_RWORK[0]);
      ssSetIWork(rts, (int_T *) &Wind_Turbine_DW.StateSpace_IWORK[0]);
      ssSetPWork(rts, (void **) &Wind_Turbine_DW.StateSpace_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Wind_Turbine_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Wind_Turbine_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Wind_Turbine_DW.StateSpace_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 4);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Wind_Turbine_DW.StateSpace_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 15);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &Wind_Turbine_DW.StateSpace_PWORK[0]);
      }

      /* registration */
      sfun_psbdqc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  Wind_Turbine_M->Sizes.numContStates = (67);/* Number of continuous states */
  Wind_Turbine_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  Wind_Turbine_M->Sizes.numY = (1);    /* Number of model outputs */
  Wind_Turbine_M->Sizes.numU = (0);    /* Number of model inputs */
  Wind_Turbine_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Wind_Turbine_M->Sizes.numSampTimes = (2);/* Number of sample times */
  Wind_Turbine_M->Sizes.numBlocks = (1386);/* Number of blocks */
  Wind_Turbine_M->Sizes.numBlockIO = (441);/* Number of block outputs */
  Wind_Turbine_M->Sizes.numBlockPrms = (951);/* Sum of parameter "widths" */
  return Wind_Turbine_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
