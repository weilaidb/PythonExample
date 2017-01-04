#define AVFILTER_DESHAKE_OPENCL_KERNEL_H
const char *ff_kernel_deshake_opencl = AV_OPENCL_KERNEL(
inline unsigned char pixel(global const unsigned char *src, int x, int y,
int w, int h,int stride, unsigned char def)
unsigned char interpolate_nearest(float x, float y, global const unsigned char *src,
int width, int height, int stride, unsigned char def)
unsigned char interpolate_bilinear(float x, float y, global const unsigned char *src,
int width, int height, int stride, unsigned char def)
unsigned char interpolate_biquadratic(float x, float y, global const unsigned char *src,
int width, int height, int stride, unsigned char def)
inline const float clipf(float a, float amin, float amax)
inline int mirror(int v, int m)
kernel void avfilter_transform_luma(global unsigned char *src,
global unsigned char *dst,
float4 matrix,
int interpolate,
int fill,
int src_stride_lu,
int dst_stride_lu,
int height,
int width)
kernel void avfilter_transform_chroma(global unsigned char *src,
global unsigned char *dst,
float4 matrix,
int interpolate,
int fill,
int src_stride_lu,
int dst_stride_lu,
int src_stride_ch,
int dst_stride_ch,
int height,
int width,
int ch,
int cw)
);
