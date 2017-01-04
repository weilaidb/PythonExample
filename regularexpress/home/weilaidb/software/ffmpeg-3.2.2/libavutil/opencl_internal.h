#define AVUTIL_OPENCL_INTERNAL_H
#define FF_OPENCL_PARAM_INFO(a) ((void*)(&(a))), (sizeof(a))
typedef struct  FFOpenclParam;
av_warn_unused_result
int avpriv_opencl_set_parameter(FFOpenclParam *opencl_param, ...);
