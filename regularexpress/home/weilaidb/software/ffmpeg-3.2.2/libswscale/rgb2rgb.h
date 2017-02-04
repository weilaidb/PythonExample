#define SWSCALE_RGB2RGB_H
extern void (*rgb24tobgr32)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb24tobgr16)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb24tobgr15)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb32tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb32to16)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb32to15)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb15to16)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb15tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb15to32)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb16to15)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb16tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb16to32)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb24tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb24to16)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb24to15)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb32tobgr16)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb32tobgr15)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*shuffle_bytes_0321)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*shuffle_bytes_2103)(const uint8_t *src, uint8_t *dst, int src_size);
rgb64tobgr48_nobswap;
rgb64tobgr48_bswap;
rgb48tobgr48_nobswap;
rgb48tobgr48_bswap;
rgb64to48_nobswap;
rgb64to48_bswap;
rgb24to32;
rgb32to24;
rgb16tobgr32;
rgb16to24;
rgb16tobgr16;
rgb16tobgr15;
rgb15tobgr32;
rgb15to24;
rgb15tobgr16;
rgb15tobgr15;
rgb12tobgr12;
rgb12to15;
shuffle_bytes_1230;
shuffle_bytes_3012;
shuffle_bytes_3210;
ff_rgb24toyv12_c;
extern void (*yv12toyuy2)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
extern void (*yuv422ptoyuy2)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
extern void (*yuy2toyv12)(const uint8_t *src, uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride);
extern void (*yv12touyvy)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
extern void (*yuv422ptouyvy)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
extern void (*ff_rgb24toyv12)(const uint8_t *src, uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride,
int32_t *rgb2yuv);
extern void (*planar2x)(const uint8_t *src, uint8_t *dst, int width, int height,
int srcStride, int dstStride);
extern void (*interleaveBytes)(const uint8_t *src1, const uint8_t *src2, uint8_t *dst,
int width, int height, int src1Stride,
int src2Stride, int dstStride);
extern void (*deinterleaveBytes)(const uint8_t *src, uint8_t *dst1, uint8_t *dst2,
int width, int height, int srcStride,
int dst1Stride, int dst2Stride);
extern void (*vu9_to_vu12)(const uint8_t *src1, const uint8_t *src2,
uint8_t *dst1, uint8_t *dst2,
int width, int height,
int srcStride1, int srcStride2,
int dstStride1, int dstStride2);
extern void (*yvu9_to_yuy2)(const uint8_t *src1, const uint8_t *src2, const uint8_t *src3,
uint8_t *dst,
int width, int height,
int srcStride1, int srcStride2,
int srcStride3, int dstStride);
extern void (*uyvytoyuv420)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride);
extern void (*uyvytoyuv422)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride);
extern void (*yuyvtoyuv420)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride);
extern void (*yuyvtoyuv422)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride);
ff_sws_rgb2rgb_init;
rgb2rgb_init_x86;
