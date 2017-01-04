static inline void copy_block4_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride, int h)
static inline void copy_block8_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride, int h)
static inline void copy_block16_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride, int h)
#define op_put(a, b) a = b
#define op_avg(a, b) a = rnd_avg_pixel4(a, b)
static inline void put_pixels4_mmi(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
static inline void put_pixels8_mmi(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
static inline void put_pixels16_mmi(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
static inline void avg_pixels4_mmi(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
static inline void avg_pixels8_mmi(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
static inline void avg_pixels16_mmi(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
static inline void put_pixels4_l2_mmi(uint8_t *dst, const uint8_t *src1,
const uint8_t *src2, int dst_stride, int src_stride1, int src_stride2,
int h)
static inline void put_pixels8_l2_mmi(uint8_t *dst, const uint8_t *src1,
const uint8_t *src2, int dst_stride, int src_stride1, int src_stride2,
int h)
static inline void put_pixels16_l2_mmi(uint8_t *dst, const uint8_t *src1,
const uint8_t *src2, int dst_stride, int src_stride1, int src_stride2,
int h)
static inline void avg_pixels4_l2_mmi(uint8_t *dst, const uint8_t *src1,
const uint8_t *src2, int dst_stride, int src_stride1, int src_stride2,
int h)
static inline void avg_pixels8_l2_mmi(uint8_t *dst, const uint8_t *src1,
const uint8_t *src2, int dst_stride, int src_stride1, int src_stride2,
int h)
static inline void avg_pixels16_l2_mmi(uint8_t *dst, const uint8_t *src1,
const uint8_t *src2, int dst_stride, int src_stride1, int src_stride2,
int h)
#undef op_put
#undef op_avg
#define op2_avg(a, b)  a = (((a)+CLIP(((b) + 512)>>10)+1)>>1)
#define op2_put(a, b)  a = CLIP(((b) + 512)>>10)
static void put_h264_qpel4_h_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void put_h264_qpel8_h_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void put_h264_qpel16_h_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void avg_h264_qpel4_h_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void avg_h264_qpel8_h_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void avg_h264_qpel16_h_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void put_h264_qpel4_v_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void put_h264_qpel8_v_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void put_h264_qpel16_v_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void avg_h264_qpel4_v_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void avg_h264_qpel8_v_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void avg_h264_qpel16_v_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void put_h264_qpel4_hv_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void put_h264_qpel8_hv_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void put_h264_qpel16_hv_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void avg_h264_qpel4_hv_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void avg_h264_qpel8_hv_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
static void avg_h264_qpel16_hv_lowpass_mmi(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride)
void ff_put_h264_qpel4_mc00_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc10_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc20_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc30_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc01_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc02_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc03_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc11_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc31_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc13_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc33_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc22_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc21_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc23_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc12_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc32_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc00_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc10_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc20_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc30_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc01_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc02_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc03_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc11_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc31_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc13_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc33_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc22_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc21_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc23_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc12_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc32_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc00_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc10_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc20_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc30_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc01_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc02_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc03_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc11_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc31_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc13_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc33_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc22_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc21_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc23_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc12_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc32_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc00_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc10_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc20_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc30_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc01_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc02_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc03_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc11_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc31_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc13_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc33_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc22_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc21_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc23_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc12_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc32_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc00_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc10_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc20_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc30_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc01_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc02_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc03_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc11_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc31_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc13_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc33_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc22_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc21_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc23_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc12_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc32_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc00_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc10_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc20_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc30_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc01_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc02_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc03_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc11_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc31_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc13_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc33_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc22_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc21_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc23_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc12_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc32_mmi(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
#undef op2_avg
#undef op2_put
