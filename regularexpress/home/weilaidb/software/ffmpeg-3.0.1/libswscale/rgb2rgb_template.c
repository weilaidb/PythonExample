static inline void rgb24tobgr32_c(const uint8_t *src, uint8_t *dst,
int src_size)
static inline void rgb32tobgr24_c(const uint8_t *src, uint8_t *dst,
int src_size)
static inline void rgb15to16_c(const uint8_t *src, uint8_t *dst, int src_size)
static inline void rgb16to15_c(const uint8_t *src, uint8_t *dst, int src_size)
static inline void rgb32to16_c(const uint8_t *src, uint8_t *dst, int src_size)
static inline void rgb32tobgr16_c(const uint8_t *src, uint8_t *dst,
int src_size)
static inline void rgb32to15_c(const uint8_t *src, uint8_t *dst, int src_size)
static inline void rgb32tobgr15_c(const uint8_t *src, uint8_t *dst,
int src_size)
static inline void rgb24tobgr16_c(const uint8_t *src, uint8_t *dst,
int src_size)
static inline void rgb24to16_c(const uint8_t *src, uint8_t *dst, int src_size)
static inline void rgb24tobgr15_c(const uint8_t *src, uint8_t *dst,
int src_size)
static inline void rgb24to15_c(const uint8_t *src, uint8_t *dst, int src_size)
static inline void rgb15tobgr24_c(const uint8_t *src, uint8_t *dst,
int src_size)
static inline void rgb16tobgr24_c(const uint8_t *src, uint8_t *dst,
int src_size)
static inline void rgb15to32_c(const uint8_t *src, uint8_t *dst, int src_size)
static inline void rgb16to32_c(const uint8_t *src, uint8_t *dst, int src_size)
static inline void shuffle_bytes_2103_c(const uint8_t *src, uint8_t *dst,
int src_size)
static inline void shuffle_bytes_0321_c(const uint8_t *src, uint8_t *dst,
int src_size)
static inline void rgb24tobgr24_c(const uint8_t *src, uint8_t *dst, int src_size)
static inline void yuvPlanartoyuy2_c(const uint8_t *ysrc, const uint8_t *usrc,
const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride,
int dstStride, int vertLumPerChroma)
static inline void yv12toyuy2_c(const uint8_t *ysrc, const uint8_t *usrc,
const uint8_t *vsrc, uint8_t *dst,
int width, int height, int lumStride,
int chromStride, int dstStride)
static inline void yuvPlanartouyvy_c(const uint8_t *ysrc, const uint8_t *usrc,
const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride,
int dstStride, int vertLumPerChroma)
static inline void yv12touyvy_c(const uint8_t *ysrc, const uint8_t *usrc,
const uint8_t *vsrc, uint8_t *dst,
int width, int height, int lumStride,
int chromStride, int dstStride)
static inline void yuv422ptouyvy_c(const uint8_t *ysrc, const uint8_t *usrc,
const uint8_t *vsrc, uint8_t *dst,
int width, int height, int lumStride,
int chromStride, int dstStride)
static inline void yuv422ptoyuy2_c(const uint8_t *ysrc, const uint8_t *usrc,
const uint8_t *vsrc, uint8_t *dst,
int width, int height, int lumStride,
int chromStride, int dstStride)
static inline void yuy2toyv12_c(const uint8_t *src, uint8_t *ydst,
uint8_t *udst, uint8_t *vdst,
int width, int height, int lumStride,
int chromStride, int srcStride)
static inline void planar2x_c(const uint8_t *src, uint8_t *dst, int srcWidth,
int srcHeight, int srcStride, int dstStride)
static inline void uyvytoyv12_c(const uint8_t *src, uint8_t *ydst,
uint8_t *udst, uint8_t *vdst,
int width, int height, int lumStride,
int chromStride, int srcStride)
void ff_rgb24toyv12_c(const uint8_t *src, uint8_t *ydst, uint8_t *udst,
uint8_t *vdst, int width, int height, int lumStride,
int chromStride, int srcStride, int32_t *rgb2yuv)
static void interleaveBytes_c(const uint8_t *src1, const uint8_t *src2,
uint8_t *dest, int width, int height,
int src1Stride, int src2Stride, int dstStride)
static void deinterleaveBytes_c(const uint8_t *src, uint8_t *dst1, uint8_t *dst2,
int width, int height, int srcStride,
int dst1Stride, int dst2Stride)
static inline void vu9_to_vu12_c(const uint8_t *src1, const uint8_t *src2,
uint8_t *dst1, uint8_t *dst2,
int width, int height,
int srcStride1, int srcStride2,
int dstStride1, int dstStride2)
static inline void yvu9_to_yuy2_c(const uint8_t *src1, const uint8_t *src2,
const uint8_t *src3, uint8_t *dst,
int width, int height,
int srcStride1, int srcStride2,
int srcStride3, int dstStride)
static void extract_even_c(const uint8_t *src, uint8_t *dst, int count)
static void extract_even2_c(const uint8_t *src, uint8_t *dst0, uint8_t *dst1,
int count)
static void extract_even2avg_c(const uint8_t *src0, const uint8_t *src1,
uint8_t *dst0, uint8_t *dst1, int count)
static void extract_odd2_c(const uint8_t *src, uint8_t *dst0, uint8_t *dst1,
int count)
static void extract_odd2avg_c(const uint8_t *src0, const uint8_t *src1,
uint8_t *dst0, uint8_t *dst1, int count)
static void yuyvtoyuv420_c(uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
const uint8_t *src, int width, int height,
int lumStride, int chromStride, int srcStride)
static void yuyvtoyuv422_c(uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
const uint8_t *src, int width, int height,
int lumStride, int chromStride, int srcStride)
static void uyvytoyuv420_c(uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
const uint8_t *src, int width, int height,
int lumStride, int chromStride, int srcStride)
static void uyvytoyuv422_c(uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
const uint8_t *src, int width, int height,
int lumStride, int chromStride, int srcStride)
static av_cold void rgb2rgb_init_c(void)
