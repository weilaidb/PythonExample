typedef struct  OpenCLDeviceBenchmark;
const char *ocl_bench_source = AV_OPENCL_KERNEL(
inline unsigned char clip_uint8(int a)
kernel void unsharp_bench(
global unsigned char *src,
global unsigned char *dst,
global int *mask,
int width,
int height)
);
#define OCLCHECK(method, ... )                                                 \
do  while (0)
#define CREATEBUF(out, flags, size)                                            \
do  while (0)
static void fill_rand_int(int *data, int n)
#define OPENCL_NB_ITER 5
static int64_t run_opencl_bench(AVOpenCLExternalEnv *ext_opencl_env)
static int compare_ocl_device_desc(const void *a, const void *b)
int opt_opencl_bench(void *optctx, const char *opt, const char *arg)
int opt_opencl(void *optctx, const char *opt, const char *arg)
