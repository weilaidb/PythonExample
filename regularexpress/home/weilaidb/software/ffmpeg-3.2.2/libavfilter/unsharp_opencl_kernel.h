#define AVFILTER_UNSHARP_OPENCL_KERNEL_H
const char *ff_kernel_unsharp_opencl = AV_OPENCL_KERNEL(
clip_uint8
unsharp_luma
unsharp_chroma
unsharp_default
);
