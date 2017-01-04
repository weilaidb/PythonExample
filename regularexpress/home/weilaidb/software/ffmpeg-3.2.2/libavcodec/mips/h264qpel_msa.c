#define AVC_CALC_DPADD_H_6PIX_2COEFF_SH(in0, in1, in2, in3, in4, in5)    \
(  )
#define AVC_HORZ_FILTER_SH(in, mask0, mask1, mask2)     \
(  )
static const uint8_t luma_mask_arr[16 * 8] = ;
#define AVC_CALC_DPADD_B_6PIX_2COEFF_SH(vec0, vec1, vec2, vec3, vec4, vec5,  \
out1, out2)                          \
#define AVC_CALC_DPADD_B_6PIX_2COEFF_R_SH(vec0, vec1, vec2, vec3, vec4, vec5)  \
(  )
#define AVC_CALC_DPADD_H_6PIX_2COEFF_R_SH(vec0, vec1, vec2, vec3, vec4, vec5)  \
(  )
#define AVC_XOR_VSHF_B_AND_APPLY_6TAP_HORIZ_FILT_SH(src0, src1,              \
mask0, mask1, mask2)     \
(  )
static void avc_luma_hz_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avc_luma_hz_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avc_luma_hz_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avc_luma_hz_qrt_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t hor_offset)
static void avc_luma_hz_qrt_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t hor_offset)
static void avc_luma_hz_qrt_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t hor_offset)
static void avc_luma_vt_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avc_luma_vt_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avc_luma_vt_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avc_luma_vt_qrt_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t ver_offset)
static void avc_luma_vt_qrt_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t ver_offset)
static void avc_luma_vt_qrt_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t ver_offset)
static void avc_luma_mid_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avc_luma_mid_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avc_luma_mid_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avc_luma_midh_qrt_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t horiz_offset)
static void avc_luma_midh_qrt_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t horiz_offset)
static void avc_luma_midh_qrt_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t horiz_offset)
static void avc_luma_midv_qrt_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t ver_offset)
static void avc_luma_midv_qrt_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t ver_offset)
static void avc_luma_midv_qrt_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, uint8_t vert_offset)
static void avc_luma_hv_qrt_4w_msa(const uint8_t *src_x, const uint8_t *src_y,
int32_t src_stride, uint8_t *dst,
int32_t dst_stride, int32_t height)
static void avc_luma_hv_qrt_8w_msa(const uint8_t *src_x, const uint8_t *src_y,
int32_t src_stride, uint8_t *dst,
int32_t dst_stride, int32_t height)
static void avc_luma_hv_qrt_16w_msa(const uint8_t *src_x, const uint8_t *src_y,
int32_t src_stride, uint8_t *dst,
int32_t dst_stride, int32_t height)
static void avc_luma_hz_and_aver_dst_4x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void avc_luma_hz_and_aver_dst_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void avc_luma_hz_and_aver_dst_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void avc_luma_hz_qrt_and_aver_dst_4x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
uint8_t hor_offset)
static void avc_luma_hz_qrt_and_aver_dst_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
uint8_t hor_offset)
static void avc_luma_hz_qrt_and_aver_dst_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
uint8_t hor_offset)
static void avc_luma_vt_and_aver_dst_4x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void avc_luma_vt_and_aver_dst_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void avc_luma_vt_and_aver_dst_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void avc_luma_vt_qrt_and_aver_dst_4x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
uint8_t ver_offset)
static void avc_luma_vt_qrt_and_aver_dst_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
uint8_t ver_offset)
static void avc_luma_vt_qrt_and_aver_dst_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
uint8_t ver_offset)
static void avc_luma_mid_and_aver_dst_4x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void avc_luma_mid_and_aver_dst_8w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avc_luma_mid_and_aver_dst_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void avc_luma_midh_qrt_and_aver_dst_4w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
uint8_t horiz_offset)
static void avc_luma_midh_qrt_and_aver_dst_8w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
uint8_t horiz_offset)
static void avc_luma_midh_qrt_and_aver_dst_16w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
uint8_t horiz_offset)
static void avc_luma_midv_qrt_and_aver_dst_4w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
uint8_t ver_offset)
static void avc_luma_midv_qrt_and_aver_dst_8w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
uint8_t vert_offset)
static void avc_luma_midv_qrt_and_aver_dst_16w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
uint8_t vert_offset)
static void avc_luma_hv_qrt_and_aver_dst_4x4_msa(const uint8_t *src_x,
const uint8_t *src_y,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void avc_luma_hv_qrt_and_aver_dst_8x8_msa(const uint8_t *src_x,
const uint8_t *src_y,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void avc_luma_hv_qrt_and_aver_dst_16x16_msa(const uint8_t *src_x,
const uint8_t *src_y,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
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
void ff_put_h264_qpel16_mc00_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc00_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc00_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc00_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc00_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc10_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc30_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc10_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc30_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc10_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc30_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc20_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc20_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc20_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc01_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc03_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc01_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc03_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc01_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc03_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc11_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc31_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc13_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc33_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc11_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc31_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc13_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc33_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc11_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc31_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc13_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc33_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc21_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc23_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc21_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc23_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc21_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc23_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc02_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc02_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc02_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc12_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc32_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc12_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc32_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc12_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc32_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel16_mc22_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel8_mc22_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_put_h264_qpel4_mc22_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc10_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc30_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc10_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc30_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc10_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc30_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc20_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc20_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc20_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc01_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc03_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc01_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc03_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc01_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc03_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc11_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc31_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc13_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc33_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc11_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc31_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc13_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc33_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc11_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc31_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc13_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc33_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc21_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc23_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc21_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc23_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc21_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc23_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc02_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc02_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc02_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc12_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc32_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc12_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc32_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc12_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc32_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel16_mc22_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel8_mc22_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
void ff_avg_h264_qpel4_mc22_msa(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
