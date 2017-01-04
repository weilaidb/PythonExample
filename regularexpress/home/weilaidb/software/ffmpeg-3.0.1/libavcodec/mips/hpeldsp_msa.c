#define PCKEV_AVG_ST_UB(in0, in1, dst, pdst)                  \
#define PCKEV_ST_SB4(in0, in1, in2, in3, in4, in5, in6, in7, pdst, stride)  \
#define PCKEV_AVG_ST8x4_UB(in1, dst0, in2, dst1, in3, dst2, in4, dst3,  \
pdst, stride)                                \
static void common_hz_bil_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_hz_bil_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_hz_bil_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_hz_bil_no_rnd_8x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_hz_bil_no_rnd_4x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_hz_bil_no_rnd_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_hz_bil_no_rnd_8x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_hz_bil_and_aver_dst_4w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_hz_bil_and_aver_dst_8w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_hz_bil_and_aver_dst_16w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_vt_bil_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_vt_bil_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_vt_bil_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_vt_bil_no_rnd_8x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_vt_bil_no_rnd_4x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_vt_bil_no_rnd_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_vt_bil_no_rnd_8x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_vt_bil_and_aver_dst_4w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_vt_bil_and_aver_dst_8w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_vt_bil_and_aver_dst_16w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_hv_bil_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_hv_bil_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_hv_bil_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_hv_bil_no_rnd_8x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_hv_bil_no_rnd_4x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_hv_bil_no_rnd_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_hv_bil_no_rnd_8x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void common_hv_bil_and_aver_dst_4w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_hv_bil_and_aver_dst_8w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void common_hv_bil_and_aver_dst_16w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
uint8_t height)
static void copy_width8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void copy_16multx8mult_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, int32_t width)
static void copy_width16_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avg_width4_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avg_width8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avg_width16_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
void ff_put_pixels16_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_pixels16_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_pixels16_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_pixels16_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_pixels8_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_pixels8_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_pixels8_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_pixels8_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_pixels4_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_pixels4_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_pixels4_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_no_rnd_pixels16_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_no_rnd_pixels16_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_no_rnd_pixels16_xy2_msa(uint8_t *block,
const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_no_rnd_pixels8_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_no_rnd_pixels8_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_put_no_rnd_pixels8_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels16_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels16_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels16_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels16_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels8_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels8_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels8_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels8_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels4_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels4_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels4_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
void ff_avg_pixels4_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
