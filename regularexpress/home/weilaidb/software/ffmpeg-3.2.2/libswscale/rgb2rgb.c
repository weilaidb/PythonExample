void (*rgb32tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb32tobgr16)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb32tobgr15)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb24tobgr32)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb24tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb24tobgr16)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb24tobgr15)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb16tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb15tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb32to16)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb32to15)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb24to16)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb24to15)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb16to32)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb16to15)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb15to16)(const uint8_t *src, uint8_t *dst, int src_size);
void (*rgb15to32)(const uint8_t *src, uint8_t *dst, int src_size);
void (*shuffle_bytes_0321)(const uint8_t *src, uint8_t *dst, int src_size);
void (*shuffle_bytes_2103)(const uint8_t *src, uint8_t *dst, int src_size);
void (*yv12toyuy2)(const uint8_t *ysrc, const uint8_t *usrc,
const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
void (*yv12touyvy)(const uint8_t *ysrc, const uint8_t *usrc,
const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
void (*yuv422ptoyuy2)(const uint8_t *ysrc, const uint8_t *usrc,
const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
void (*yuv422ptouyvy)(const uint8_t *ysrc, const uint8_t *usrc,
const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
void (*yuy2toyv12)(const uint8_t *src, uint8_t *ydst,
uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride);
void (*ff_rgb24toyv12)(const uint8_t *src, uint8_t *ydst,
uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride,
int32_t *rgb2yuv);
void (*planar2x)(const uint8_t *src, uint8_t *dst, int width, int height,
int srcStride, int dstStride);
void (*interleaveBytes)(const uint8_t *src1, const uint8_t *src2, uint8_t *dst,
int width, int height, int src1Stride,
int src2Stride, int dstStride);
void (*deinterleaveBytes)(const uint8_t *src, uint8_t *dst1, uint8_t *dst2,
int width, int height, int srcStride,
int dst1Stride, int dst2Stride);
void (*vu9_to_vu12)(const uint8_t *src1, const uint8_t *src2,
uint8_t *dst1, uint8_t *dst2,
int width, int height,
int srcStride1, int srcStride2,
int dstStride1, int dstStride2);
void (*yvu9_to_yuy2)(const uint8_t *src1, const uint8_t *src2,
const uint8_t *src3, uint8_t *dst,
int width, int height,
int srcStride1, int srcStride2,
int srcStride3, int dstStride);
void (*uyvytoyuv420)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
const uint8_t *src, int width, int height,
int lumStride, int chromStride, int srcStride);
void (*uyvytoyuv422)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
const uint8_t *src, int width, int height,
int lumStride, int chromStride, int srcStride);
void (*yuyvtoyuv420)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
const uint8_t *src, int width, int height,
int lumStride, int chromStride, int srcStride);
void (*yuyvtoyuv422)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
const uint8_t *src, int width, int height,
int lumStride, int chromStride, int srcStride);
#define BY ((int)( 0.098 * (1 << RGB2YUV_SHIFT) + 0.5))
#define BV ((int)(-0.071 * (1 << RGB2YUV_SHIFT) + 0.5))
#define BU ((int)( 0.439 * (1 << RGB2YUV_SHIFT) + 0.5))
#define GY ((int)( 0.504 * (1 << RGB2YUV_SHIFT) + 0.5))
#define GV ((int)(-0.368 * (1 << RGB2YUV_SHIFT) + 0.5))
#define GU ((int)(-0.291 * (1 << RGB2YUV_SHIFT) + 0.5))
#define RY ((int)( 0.257 * (1 << RGB2YUV_SHIFT) + 0.5))
#define RV ((int)( 0.439 * (1 << RGB2YUV_SHIFT) + 0.5))
#define RU ((int)(-0.148 * (1 << RGB2YUV_SHIFT) + 0.5))
ff_sws_rgb2rgb_init
rgb32to24
rgb24to32
rgb16tobgr32
rgb12to15
rgb16to24
rgb16tobgr16
rgb16tobgr15
rgb15tobgr32
rgb15to24
rgb15tobgr16
rgb15tobgr15
rgb12tobgr12
DEFINE_SHUFFLE_BYTES                                \
void shuffle_bytes_ ## a ## b ## c ## d(const uint8_t *src,             \
uint8_t *dst, int src_size)     \
DEFINE_SHUFFLE_BYTES(1, 2, 3, 0)
DEFINE_SHUFFLE_BYTES(3, 0, 1, 2)
DEFINE_SHUFFLE_BYTES(3, 2, 1, 0)
DEFINE_RGB48TOBGR48                           \
void rgb48tobgr48_ ## need_bswap(const uint8_t *src,                    \
uint8_t *dst, int src_size)            \
DEFINE_RGB48TOBGR48(nobswap, 0)
DEFINE_RGB48TOBGR48(bswap, 1)
DEFINE_RGB64TOBGR48                           \
void rgb64tobgr48_ ## need_bswap(const uint8_t *src,                    \
uint8_t *dst, int src_size)            \
DEFINE_RGB64TOBGR48(nobswap, 0)
DEFINE_RGB64TOBGR48(bswap, 1)
DEFINE_RGB64TO48                              \
void rgb64to48_ ## need_bswap(const uint8_t *src,                       \
uint8_t *dst, int src_size)               \
DEFINE_RGB64TO48(nobswap, 0)
DEFINE_RGB64TO48(bswap, 1)
