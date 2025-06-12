#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "bucket_fft_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 18
#endif
#ifndef SS_INT64
#define SS_INT64 19
#endif
#else
#include "builtin_typeid_types.h"
#include "bucket_fft.h"
#include "bucket_fft_capi.h"
#include "bucket_fft_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING ( "bucket_fft/Chart" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 1 , TARGET_STRING ( "bucket_fft/Chart" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "bucket_fft/Chart/is_active_c4_bucket_fft" ) , TARGET_STRING ( "is_active_c4_bucket_fft" ) , 0 , 1 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING ( "bucket_fft/Chart/is_c4_bucket_fft" ) , TARGET_STRING ( "is_c4_bucket_fft" ) , 0 , 2 , 0 , 0 , 0 } , { 4 , 4 , TARGET_STRING ( "bucket_fft/MATLAB Function2" ) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 1 } , { 5 , 5 , TARGET_STRING ( "bucket_fft/MATLAB Function3" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 6 , 0 , TARGET_STRING ( "bucket_fft/Constant4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 7 , 0 , TARGET_STRING ( "bucket_fft/Audio Device Reader" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 8 , 0 , TARGET_STRING ( "bucket_fft/From Multimedia File" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 9 , 0 , TARGET_STRING ( "bucket_fft/Switch" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 10 , 0 , TARGET_STRING ( "bucket_fft/Switch1" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 11 , TARGET_STRING ( "bucket_fft/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 12 , TARGET_STRING ( "bucket_fft/Constant2" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 13 , TARGET_STRING ( "bucket_fft/Constant3" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 14 , TARGET_STRING ( "bucket_fft/Constant4" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 15 , TARGET_STRING ( "bucket_fft/Audio Device Reader" ) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 16 , TARGET_STRING ( "bucket_fft/Audio Device Writer" ) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 17 , TARGET_STRING ( "bucket_fft/Switch" ) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 18 , TARGET_STRING ( "bucket_fft/Switch1" ) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 19 , TARGET_STRING ( "bucket_fft/Buffer" ) , TARGET_STRING ( "ic" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . bwikhqgzi1 , & rtB . mzsfr4barx ,
& rtDW . d431oespjx , & rtDW . m2b2bdbdfb , & rtB . cnwnvnufnf [ 0 ] , & rtB
. jfsc5bkbri [ 0 ] , & rtB . iu1mablgic , & rtB . ckdk3dpzbc [ 0 ] , & rtB .
fm2bclfi1a [ 0 ] , & rtB . a2r1rksip5 [ 0 ] , & rtB . bpytsqbdv1 [ 0 ] , &
rtP . Constant1_Value , & rtP . Constant2_Value , & rtP . Constant3_Value , &
rtP . Constant4_Value , & rtP . AudioDeviceReader_P1 , & rtP .
AudioDeviceWriter_P1 , & rtP . Switch_Threshold , & rtP . Switch1_Threshold ,
& rtP . Buffer_ic , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) }
;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T )
SS_UINT8 , 0 , 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 ,
0 } } ; static const uint_T rtDimensionArray [ ] = { 1 , 1 , 1 , 31 , 1024 ,
1 , 1024 , 2 } ; static const real_T rtcapiStoredFloats [ ] = {
0.023219954648526078 , 0.0 , 0.44897959183673469 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 2 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 3 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 11 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 9 , rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 3841060151U , 3132833807U , 1446850906U , 3013277858U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo * bucket_fft_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void bucket_fft_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void bucket_fft_host_InitializeDataMapInfo ( bucket_fft_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
