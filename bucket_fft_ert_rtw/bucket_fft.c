/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: bucket_fft.c
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

#include "bucket_fft.h"
#include "rtwtypes.h"
#include <string.h>
#include <stddef.h>
#include "rt_nonfinite.h"

/* Named constants for Chart: '<Root>/Chart' */
#define bucket_fft_IN_IDLE             ((uint8_T)1U)
#define bucket_fft_IN_micMode          ((uint8_T)2U)
#define bucket_fft_IN_mp3Mode          ((uint8_T)3U)

/* Block signals (default storage) */
B_bucket_fft_T bucket_fft_B;

/* Block states (default storage) */
DW_bucket_fft_T bucket_fft_DW;

/* Real-time model */
static RT_MODEL_bucket_fft_T bucket_fft_M_;
RT_MODEL_bucket_fft_T *const bucket_fft_M = &bucket_fft_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void bucket_fft_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(bucket_fft_M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(bucket_fft_M, 2));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (bucket_fft_M->Timing.TaskCounters.TID[1])++;
  if ((bucket_fft_M->Timing.TaskCounters.TID[1]) > 127) {
                                /* Sample time: [0.023219954648526078s, 0.0s] */
    bucket_fft_M->Timing.TaskCounters.TID[1] = 0;
  }

  (bucket_fft_M->Timing.TaskCounters.TID[2])++;
  if ((bucket_fft_M->Timing.TaskCounters.TID[2]) > 2474) {
                                 /* Sample time: [0.44897959183673469s, 0.0s] */
    bucket_fft_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Model step function for TID0 */
void bucket_fft_step0(void)   /* Sample time: [0.00018140589569160998s, 0.0s] */
{
  {                           /* Sample time: [0.00018140589569160998s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void bucket_fft_step1(void)     /* Sample time: [0.023219954648526078s, 0.0s] */
{
  int32_T i;
  int32_T nSamps;
  int32_T offsetFromMemBase;
  int32_T uIdx;
  char_T *sErr;

  /* S-Function (sdspwmmfi2): '<Root>/From Multimedia File' */
  sErr = GetErrorBuffer(&bucket_fft_DW.FromMultimediaFile_HostLib[0U]);
  LibOutputs_FromMMFile(&bucket_fft_DW.FromMultimediaFile_HostLib[0U],
                        GetNullPointer(), &bucket_fft_B.FromMultimediaFile[0U],
                        GetNullPointer(), GetNullPointer(), GetNullPointer());
  if (*sErr != 0) {
    rtmSetErrorStatus(bucket_fft_M, sErr);
    rtmSetStopRequested(bucket_fft_M, 1);
  }

  /* End of S-Function (sdspwmmfi2): '<Root>/From Multimedia File' */

  /* MATLAB Function: '<Root>/MATLAB Function3' incorporates:
   *  S-Function (sdspwmmfi2): '<Root>/From Multimedia File'
   */
  memcpy(&bucket_fft_B.y[0], &bucket_fft_B.FromMultimediaFile[0], sizeof(real_T)
         << 10U);

  /* Chart: '<Root>/Chart' */
  if (bucket_fft_DW.is_active_c4_bucket_fft == 0) {
    bucket_fft_DW.is_active_c4_bucket_fft = 1U;
    bucket_fft_B.speaker = 0.0;
    bucket_fft_B.mode = 0.0;
    bucket_fft_DW.is_c4_bucket_fft = bucket_fft_IN_IDLE;
  } else {
    switch (bucket_fft_DW.is_c4_bucket_fft) {
     case bucket_fft_IN_IDLE:
      bucket_fft_B.mode = 0.0;
      bucket_fft_B.speaker = 1.0;
      bucket_fft_DW.is_c4_bucket_fft = bucket_fft_IN_mp3Mode;
      break;

     case bucket_fft_IN_micMode:
      bucket_fft_B.mode = 0.0;
      bucket_fft_B.speaker = 1.0;
      bucket_fft_DW.is_c4_bucket_fft = bucket_fft_IN_mp3Mode;
      break;

     default:
      /* case IN_mp3Mode: */
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
  for (i = 0; i < 1024; i++) {
    /* Switch: '<Root>/Switch1' */
    if (bucket_fft_B.speaker > 0.0) {
      /* Switch: '<Root>/Switch1' */
      bucket_fft_B.Switch1[i] = bucket_fft_B.y[i];
    } else {
      /* Switch: '<Root>/Switch1' */
      bucket_fft_B.Switch1[i] = 0.0;
    }

    /* End of Switch: '<Root>/Switch1' */
  }

  /* S-Function (saudioToAudioDevice): '<Root>/Audio Device Writer' incorporates:
   *  Switch: '<Root>/Switch1'
   */
  sErr = GetErrorBuffer(&bucket_fft_DW.AudioDeviceWriter_AudioDeviceLi[0U]);
  LibUpdate_Audio(&bucket_fft_DW.AudioDeviceWriter_AudioDeviceLi[0U],
                  &bucket_fft_B.Switch1[0U], 0, 1024, 0U);
  if (*sErr != 0) {
    rtmSetErrorStatus(bucket_fft_M, sErr);
    rtmSetStopRequested(bucket_fft_M, 1);
  }

  /* End of S-Function (saudioToAudioDevice): '<Root>/Audio Device Writer' */

  /* S-Function (saudioFromAudioDevice): '<Root>/Audio Device Reader' */
  sErr = GetErrorBuffer(&bucket_fft_DW.AudioDeviceReader_AudioDeviceLi[0U]);
  LibOutputs_Audio(&bucket_fft_DW.AudioDeviceReader_AudioDeviceLi[0U],
                   &bucket_fft_B.AudioDeviceReader[0U], 5, 1024, 0);
  if (*sErr != 0) {
    rtmSetErrorStatus(bucket_fft_M, sErr);
    rtmSetStopRequested(bucket_fft_M, 1);
  }

  /* End of S-Function (saudioFromAudioDevice): '<Root>/Audio Device Reader' */

  /* Switch: '<Root>/Switch' */
  if (bucket_fft_B.mode > 0.0) {
    /* Switch: '<Root>/Switch' incorporates:
     *  S-Function (saudioFromAudioDevice): '<Root>/Audio Device Reader'
     */
    memcpy(&bucket_fft_B.y[0], &bucket_fft_B.AudioDeviceReader[0], sizeof(real_T)
           << 10U);
  }

  /* End of Switch: '<Root>/Switch' */

  /* Buffer: '<Root>/Buffer' incorporates:
   *  Switch: '<Root>/Switch'
   */
  uIdx = 0;
  nSamps = 40000;
  offsetFromMemBase = bucket_fft_DW.Buffer_inBufPtrIdx;
  if (bucket_fft_DW.Buffer_inBufPtrIdx > 38976) {
    for (i = 0; i < 40000 - bucket_fft_DW.Buffer_inBufPtrIdx; i++) {
      bucket_fft_DW.Buffer_CircBuf[bucket_fft_DW.Buffer_inBufPtrIdx + i] =
        bucket_fft_B.y[i];
    }

    uIdx = 40000 - bucket_fft_DW.Buffer_inBufPtrIdx;
    offsetFromMemBase = 0;
    nSamps = bucket_fft_DW.Buffer_inBufPtrIdx;
  }

  for (i = 0; i < nSamps - 38976; i++) {
    bucket_fft_DW.Buffer_CircBuf[offsetFromMemBase + i] = bucket_fft_B.y[uIdx +
      i];
  }

  bucket_fft_DW.Buffer_inBufPtrIdx += 1024;
  if (bucket_fft_DW.Buffer_inBufPtrIdx >= 40000) {
    bucket_fft_DW.Buffer_inBufPtrIdx -= 40000;
  }

  /* End of Buffer: '<Root>/Buffer' */
}

/* Model step function for TID2 */
void bucket_fft_step2(void)      /* Sample time: [0.44897959183673469s, 0.0s] */
{
  int32_T currentOffset;
  int32_T i;
  int32_T nSamps;
  int32_T uyIdx;

  /* Buffer: '<Root>/Buffer' */
  uyIdx = 0;
  currentOffset = bucket_fft_DW.Buffer_outBufPtrIdx - 200;
  if (bucket_fft_DW.Buffer_outBufPtrIdx - 200 < 0) {
    currentOffset = bucket_fft_DW.Buffer_outBufPtrIdx + 39800;
  }

  nSamps = 20000;
  if (currentOffset > 20000) {
    for (i = 0; i < 40000 - currentOffset; i++) {
      bucket_fft_B.Buffer[i] = bucket_fft_DW.Buffer_CircBuf[currentOffset + i];
    }

    uyIdx = 40000 - currentOffset;
    nSamps = currentOffset - 20000;
    currentOffset = 0;
  }

  for (i = 0; i < nSamps; i++) {
    bucket_fft_B.Buffer[uyIdx + i] = bucket_fft_DW.Buffer_CircBuf[currentOffset
      + i];
  }

  currentOffset += nSamps;
  if (currentOffset == 40000) {
    currentOffset = 0;
  }

  bucket_fft_DW.Buffer_outBufPtrIdx = currentOffset;

  /* End of Buffer: '<Root>/Buffer' */

  /* S-Function (sdspfft2): '<Root>/FFT' incorporates:
   *  Buffer: '<Root>/Buffer'
   */
  LibOutputs_FFT(&bucket_fft_DW.FFT_HostLib[0U], &bucket_fft_B.Buffer[0U],
                 &bucket_fft_B.FFT[0U], 20000, 1);
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void bucket_fft_step(int_T tid)
{
  switch (tid) {
   case 0 :
    bucket_fft_step0();
    break;

   case 1 :
    bucket_fft_step1();
    break;

   case 2 :
    bucket_fft_step2();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Model initialize function */
void bucket_fft_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    char_T *sErr;

    /* Start for S-Function (sdspwmmfi2): '<Root>/From Multimedia File' */
    sErr = GetErrorBuffer(&bucket_fft_DW.FromMultimediaFile_HostLib[0U]);
    CreateHostLibrary("libmwfrommmfile.dylib",
                      &bucket_fft_DW.FromMultimediaFile_HostLib[0U]);
    createAudioInfo(&bucket_fft_DW.FromMultimediaFile_AudioInfo[0U], 1U, 0U,
                    44100.0, 16, 2, 1024, 0, GetNullPointer());
    createVideoInfo(&bucket_fft_DW.FromMultimediaFile_VideoInfo[0U], 0U, 0.0,
                    0.0, "", 0, 0, 0, 0, 1U, 0, 0, GetNullPointer());
    if (*sErr == 0) {
      LibCreate_FromMMFile(&bucket_fft_DW.FromMultimediaFile_HostLib[0U], NULL,
                           "/Users/samstep/Documents/MATLAB/503/Final Project/20 - 20,000 Hz Audio Sweep ｜ Range of Human Hearing - Sonic Electronix.mp3",
                           1,
                           "/Applications/MATLAB_R2024b.app/toolbox/shared/multimedia/bin/maca64/audio/libmwaudiofileatreaderplugin.dylib",
                           "/Applications/MATLAB_R2024b.app/toolbox/shared/multimedia/bin/maca64/audioslconverter",
                           &bucket_fft_DW.FromMultimediaFile_AudioInfo[0U],
                           &bucket_fft_DW.FromMultimediaFile_VideoInfo[0U], 0U,
                           1U, 1U, 0U, 0U, 1U, 1.0, 9.2233720368547758E+18, 0U);
    }

    if (*sErr == 0) {
      LibStart(&bucket_fft_DW.FromMultimediaFile_HostLib[0U]);
    }

    if (*sErr != 0) {
      DestroyHostLibrary(&bucket_fft_DW.FromMultimediaFile_HostLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(bucket_fft_M, sErr);
        rtmSetStopRequested(bucket_fft_M, 1);
      }
    }

    /* End of Start for S-Function (sdspwmmfi2): '<Root>/From Multimedia File' */

    /* Start for S-Function (saudioToAudioDevice): '<Root>/Audio Device Writer' */
    sErr = GetErrorBuffer(&bucket_fft_DW.AudioDeviceWriter_AudioDeviceLi[0U]);
    CreateHostLibrary("libmwhostlibaudio.dylib",
                      &bucket_fft_DW.AudioDeviceWriter_AudioDeviceLi[0U]);
    if (*sErr == 0) {
      LibCreate_Audio(&bucket_fft_DW.AudioDeviceWriter_AudioDeviceLi[0U], 0,
                      "MacBook Pro Speakers", 5, 1, 1, 44100.0, 3, 1024, 10240,
                      1024, 0, NULL);
    }

    if (*sErr != 0) {
      DestroyHostLibrary(&bucket_fft_DW.AudioDeviceWriter_AudioDeviceLi[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(bucket_fft_M, sErr);
        rtmSetStopRequested(bucket_fft_M, 1);
      }
    }

    /* End of Start for S-Function (saudioToAudioDevice): '<Root>/Audio Device Writer' */

    /* Start for S-Function (saudioFromAudioDevice): '<Root>/Audio Device Reader' */
    sErr = GetErrorBuffer(&bucket_fft_DW.AudioDeviceReader_AudioDeviceLi[0U]);
    CreateHostLibrary("libmwhostlibaudio.dylib",
                      &bucket_fft_DW.AudioDeviceReader_AudioDeviceLi[0U]);
    if (*sErr == 0) {
      LibCreate_Audio(&bucket_fft_DW.AudioDeviceReader_AudioDeviceLi[0U], 0,
                      "Default", 5, 0, 1, 44100.0, 3, 1024, 10240, 1024, 5, NULL);
    }

    if (*sErr != 0) {
      DestroyHostLibrary(&bucket_fft_DW.AudioDeviceReader_AudioDeviceLi[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(bucket_fft_M, sErr);
        rtmSetStopRequested(bucket_fft_M, 1);
      }
    }

    /* End of Start for S-Function (saudioFromAudioDevice): '<Root>/Audio Device Reader' */

    /* Start for S-Function (sdspfft2): '<Root>/FFT' incorporates:
     *  Buffer: '<Root>/Buffer'
     */
    sErr = GetErrorBuffer(&bucket_fft_DW.FFT_HostLib[0U]);
    CreateHostLibrary("libmwdspfft.dylib", &bucket_fft_DW.FFT_HostLib[0U]);
    if (*sErr == 0) {
      LibCreate_FFT(&bucket_fft_DW.FFT_HostLib[0U], 20000, 1,
                    &bucket_fft_B.Buffer_c[0U], &bucket_fft_B.FFT_m[0U], 0, 0, 0,
                    2U, 1U, 0, 0, 0, 0, 1);
    }

    if (*sErr == 0) {
      LibStart(&bucket_fft_DW.FFT_HostLib[0U]);
    }

    if (*sErr != 0) {
      DestroyHostLibrary(&bucket_fft_DW.FFT_HostLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(bucket_fft_M, sErr);
        rtmSetStopRequested(bucket_fft_M, 1);
      }
    }

    /* End of Start for S-Function (sdspfft2): '<Root>/FFT' */

    /* InitializeConditions for S-Function (sdspwmmfi2): '<Root>/From Multimedia File' */
    LibReset(&bucket_fft_DW.FromMultimediaFile_HostLib[0U]);

    /* InitializeConditions for Buffer: '<Root>/Buffer' */
    bucket_fft_DW.Buffer_inBufPtrIdx = 20000;
    bucket_fft_DW.Buffer_outBufPtrIdx = 200;
  }
}

/* Model terminate function */
void bucket_fft_terminate(void)
{
  char_T *sErr;

  /* Terminate for S-Function (sdspwmmfi2): '<Root>/From Multimedia File' */
  sErr = GetErrorBuffer(&bucket_fft_DW.FromMultimediaFile_HostLib[0U]);
  LibTerminate(&bucket_fft_DW.FromMultimediaFile_HostLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(bucket_fft_M, sErr);
    rtmSetStopRequested(bucket_fft_M, 1);
  }

  LibDestroy(&bucket_fft_DW.FromMultimediaFile_HostLib[0U], 0);
  DestroyHostLibrary(&bucket_fft_DW.FromMultimediaFile_HostLib[0U]);

  /* End of Terminate for S-Function (sdspwmmfi2): '<Root>/From Multimedia File' */

  /* Terminate for S-Function (saudioToAudioDevice): '<Root>/Audio Device Writer' */
  sErr = GetErrorBuffer(&bucket_fft_DW.AudioDeviceWriter_AudioDeviceLi[0U]);
  LibTerminate(&bucket_fft_DW.AudioDeviceWriter_AudioDeviceLi[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(bucket_fft_M, sErr);
    rtmSetStopRequested(bucket_fft_M, 1);
  }

  LibDestroy_Audio(&bucket_fft_DW.AudioDeviceWriter_AudioDeviceLi[0U], 1, 1);
  DestroyHostLibrary(&bucket_fft_DW.AudioDeviceWriter_AudioDeviceLi[0U]);

  /* End of Terminate for S-Function (saudioToAudioDevice): '<Root>/Audio Device Writer' */

  /* Terminate for S-Function (saudioFromAudioDevice): '<Root>/Audio Device Reader' */
  sErr = GetErrorBuffer(&bucket_fft_DW.AudioDeviceReader_AudioDeviceLi[0U]);
  LibTerminate(&bucket_fft_DW.AudioDeviceReader_AudioDeviceLi[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(bucket_fft_M, sErr);
    rtmSetStopRequested(bucket_fft_M, 1);
  }

  LibDestroy_Audio(&bucket_fft_DW.AudioDeviceReader_AudioDeviceLi[0U], 0, 1);
  DestroyHostLibrary(&bucket_fft_DW.AudioDeviceReader_AudioDeviceLi[0U]);

  /* End of Terminate for S-Function (saudioFromAudioDevice): '<Root>/Audio Device Reader' */

  /* Terminate for S-Function (sdspfft2): '<Root>/FFT' */
  sErr = GetErrorBuffer(&bucket_fft_DW.FFT_HostLib[0U]);
  LibTerminate(&bucket_fft_DW.FFT_HostLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(bucket_fft_M, sErr);
    rtmSetStopRequested(bucket_fft_M, 1);
  }

  LibDestroy(&bucket_fft_DW.FFT_HostLib[0U], 0);
  DestroyHostLibrary(&bucket_fft_DW.FFT_HostLib[0U]);

  /* End of Terminate for S-Function (sdspfft2): '<Root>/FFT' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
