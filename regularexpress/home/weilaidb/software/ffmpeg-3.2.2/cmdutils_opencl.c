typedef struct  OpenCLDeviceBenchmark;
const char *ocl_bench_source = AV_OPENCL_KERNEL(
clip_uint8
unsharp_bench
);
OCLCHECK                                                 \
do  while (0)
CREATEBUF                                            \
do  while (0)
fill_rand_int
#define OPENCL_NB_ITER 5
run_opencl_bench
compare_ocl_device_desc
opt_opencl_bench
opt_opencl
