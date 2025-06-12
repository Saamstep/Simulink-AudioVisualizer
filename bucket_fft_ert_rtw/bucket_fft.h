/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: bucket_fft.h
 *
 * Code generated for Simulink model 'bucket_fft'.
 *
 * Model version                  : 3.21
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun 11 23:15:16 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef bucket_fft_h_
#define bucket_fft_h_
#ifndef bucket_fft_COMMON_INCLUDES_
#define bucket_fft_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_Audio.h"
#include "HostLib_FFT.h"
#endif                                 /* bucket_fft_COMMON_INCLUDES_ */

#include "bucket_fft_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals (default storage) */
typedef struct {
  creal_T FFT[20000];                  /* '<Root>/FFT' */
  creal_T FFT_m[20000];                /* '<Root>/FFT' */
  real_T Buffer[20000];                /* '<Root>/Buffer' */
  real_T Buffer_c[20000];              /* '<Root>/Buffer' */
  real_T FromMultimediaFile[2048];     /* '<Root>/From Multimedia File' */
  real_T Switch1[1024];                /* '<Root>/Switch1' */
  real_T AudioDeviceReader[1024];      /* '<Root>/Audio Device Reader' */
  real_T y[1024];                      /* '<Root>/MATLAB Function3' */
  real_T mode;                         /* '<Root>/Chart' */
  real_T speaker;                      /* '<Root>/Chart' */
} B_bucket_fft_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Buffer_CircBuf[40000];        /* '<Root>/Buffer' */
  real_T FromMultimediaFile_HostLib[137];/* '<Root>/From Multimedia File' */
  real_T FromMultimediaFile_AudioInfo[5];/* '<Root>/From Multimedia File' */
  real_T FromMultimediaFile_VideoInfo[11];/* '<Root>/From Multimedia File' */
  real_T FFT_HostLib[137];             /* '<Root>/FFT' */
  int32_T Buffer_inBufPtrIdx;          /* '<Root>/Buffer' */
  int32_T Buffer_outBufPtrIdx;         /* '<Root>/Buffer' */
  uint8_T AudioDeviceWriter_AudioDeviceLi[1096];/* '<Root>/Audio Device Writer' */
  uint8_T AudioDeviceReader_AudioDeviceLi[1096];/* '<Root>/Audio Device Reader' */
  uint8_T is_active_c4_bucket_fft;     /* '<Root>/Chart' */
  uint8_T is_c4_bucket_fft;            /* '<Root>/Chart' */
} DW_bucket_fft_T;

/* Real-time Model Data Structure */
struct tag_RTM_bucket_fft_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint16_T TID[3];
    } TaskCounters;

    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals (default storage) */
extern B_bucket_fft_T bucket_fft_B;

/* Block states (default storage) */
extern DW_bucket_fft_T bucket_fft_DW;

/* External function called from main */
extern void bucket_fft_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void bucket_fft_initialize(void);
extern void bucket_fft_step0(void);
                              /* Sample time: [0.00018140589569160998s, 0.0s] */
extern void bucket_fft_step1(void);
                                /* Sample time: [0.023219954648526078s, 0.0s] */
extern void bucket_fft_step2(void);
                                 /* Sample time: [0.44897959183673469s, 0.0s] */
extern void bucket_fft_step(int_T tid);
extern void bucket_fft_terminate(void);

/* Real-time Model object */
extern RT_MODEL_bucket_fft_T *const bucket_fft_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<Root>' : 'bucket_fft'
 * '<S1>'   : 'bucket_fft/Chart'
 * '<S2>'   : 'bucket_fft/MATLAB Function'
 * '<S3>'   : 'bucket_fft/MATLAB Function1'
 * '<S4>'   : 'bucket_fft/MATLAB Function2'
 * '<S5>'   : 'bucket_fft/MATLAB Function3'
 */
#endif                                 /* bucket_fft_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
