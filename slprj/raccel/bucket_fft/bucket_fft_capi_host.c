#include "bucket_fft_capi_host.h"
static bucket_fft_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        bucket_fft_host_InitializeDataMapInfo(&(root), "bucket_fft");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
