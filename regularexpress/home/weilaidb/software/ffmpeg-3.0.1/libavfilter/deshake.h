#define AVFILTER_DESHAKE_H
#if CONFIG_OPENCL
enum SearchMethod ;
typedef struct  IntMotionVector;
typedef struct  MotionVector;
typedef struct  Transform;
#if CONFIG_OPENCL
typedef struct  DeshakeOpenclContext;
#define MAX_R 64
typedef struct  DeshakeContext;
