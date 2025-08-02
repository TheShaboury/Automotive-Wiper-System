/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Automotive_Wiper_System.h
 *
 * Code generated for Simulink model 'Automotive_Wiper_System'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Sun Aug  3 00:25:48 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef Automotive_Wiper_System_h_
#define Automotive_Wiper_System_h_
#ifndef Automotive_Wiper_System_COMMON_INCLUDES_
#define Automotive_Wiper_System_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                            /* Automotive_Wiper_System_COMMON_INCLUDES_ */

/* Model entry point functions */
extern void Automotive_Wiper_System_initialize(void);
extern void Automotive_Wiper_System_step0(void);/* Sample time: [0.01s, 0.0s] */
extern void Automotive_Wiper_System_step1(void);/* Sample time: [1.0s, 0.0s] */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Data Type Conversion' : Unused code path elimination
 * Block '<Root>/Data Type Conversion1' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S1>/FromWs' : Unused code path elimination
 * Block '<Root>/Step' : Unused code path elimination
 * Block '<Root>/Step1' : Unused code path elimination
 * Block '<S3>/AND' : Unused code path elimination
 * Block '<S3>/One' : Unused code path elimination
 * Block '<S3>/Select_WiperMode' : Unused code path elimination
 * Block '<S3>/Select_WiprSpdReq' : Unused code path elimination
 * Block '<S4>/Add' : Unused code path elimination
 * Block '<S4>/Saturation' : Unused code path elimination
 * Block '<S4>/Subtract' : Unused code path elimination
 * Block '<S3>/Switch' : Unused code path elimination
 * Block '<S3>/Unit Delay' : Unused code path elimination
 * Block '<S3>/Zero' : Unused code path elimination
 * Block '<S3>/Zero1' : Unused code path elimination
 * Block '<S3>/Zero10' : Unused code path elimination
 * Block '<S3>/Zero11' : Unused code path elimination
 * Block '<S3>/Zero2' : Unused code path elimination
 * Block '<S3>/Zero3' : Unused code path elimination
 * Block '<S3>/Zero4' : Unused code path elimination
 * Block '<S3>/Zero5' : Unused code path elimination
 * Block '<S3>/Zero6' : Unused code path elimination
 * Block '<S3>/Zero7' : Unused code path elimination
 * Block '<S3>/Zero8' : Unused code path elimination
 * Block '<S3>/Zero9' : Unused code path elimination
 */

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
 * '<Root>' : 'Automotive_Wiper_System'
 * '<S1>'   : 'Automotive_Wiper_System/Signal Builder'
 * '<S2>'   : 'Automotive_Wiper_System/WiperMotor'
 * '<S3>'   : 'Automotive_Wiper_System/WiperMotor/Function-Call Subsystem'
 * '<S4>'   : 'Automotive_Wiper_System/WiperMotor/Function-Call Subsystem/Smoothing'
 */
#endif                                 /* Automotive_Wiper_System_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
