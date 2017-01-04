#define AVFILTER_UNSHARP_H
#if CONFIG_OPENCL
#define MIN_MATRIX_SIZE 3
#define MAX_MATRIX_SIZE 63
#if CONFIG_OPENCL
typedef struct  UnsharpOpenclContext;
typedef struct UnsharpFilterParam  UnsharpFilterParam;
typedef struct UnsharpContext  UnsharpContext;
