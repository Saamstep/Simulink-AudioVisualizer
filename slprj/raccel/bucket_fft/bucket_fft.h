#ifndef bucket_fft_h_
#define bucket_fft_h_
#ifndef bucket_fft_COMMON_INCLUDES_
#define bucket_fft_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_Audio.h"
#include "HostLib_FFT.h"
#endif
#include "bucket_fft_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME bucket_fft
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (11) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { creal_T gpc5jt3hp0_mbvzarwird [ 20000 ] ; creal_T
gpc5jt3hp0_cl54gopm0x [ 20000 ] ; real_T n5uqvvdbb0_kkiq3xxxve [ 20000 ] ;
real_T n5uqvvdbb0_cxarnvbvui [ 20000 ] ; real_T fm2bclfi1a [ 2048 ] ; real_T
bpytsqbdv1 [ 1024 ] ; real_T ckdk3dpzbc [ 1024 ] ; real_T a2r1rksip5 [ 1024 ]
; real_T iu1mablgic ; real_T jfsc5bkbri [ 1024 ] ; real_T cnwnvnufnf [ 31 ] ;
real_T bwikhqgzi1 ; real_T mzsfr4barx ; } B ; typedef struct { real_T
eevlbptizq [ 40000 ] ; real_T nr2inbcx3w [ 137 ] ; real_T oqn3pi044w [ 5 ] ;
real_T e2vq1vlryh [ 11 ] ; real_T onrqffi2a1 [ 137 ] ; int32_T ksb220rab2 ;
int32_T aiwfpkwj3j ; int32_T dhaotaxhrp ; int32_T cpqu5t1geo ; int32_T
kvtskrthpe ; int32_T oykxmdtwre ; int32_T izi2tami0i ; int32_T ls4dwl451y ;
uint32_T m2b2bdbdfb ; uint8_T gzgwm4aj3x [ 1096 ] ; uint8_T l05wjbovmj [ 1096
] ; uint8_T d431oespjx ; boolean_T giubrblnl2 ; boolean_T j1ojzjtxum ;
boolean_T p4hudmdwnu ; boolean_T gfdptv1xsh ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
Switch1_Threshold ; real_T AudioDeviceWriter_P1 ; real_T AudioDeviceReader_P1
; real_T Switch_Threshold ; real_T Buffer_ic ; real_T Constant4_Value ;
real_T Constant1_Value ; real_T Constant2_Value ; real_T Constant3_Value ; }
; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW
rtDW ; extern P rtP ; extern mxArray * mr_bucket_fft_GetDWork ( ) ; extern
void mr_bucket_fft_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_bucket_fft_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * bucket_fft_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T
tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
