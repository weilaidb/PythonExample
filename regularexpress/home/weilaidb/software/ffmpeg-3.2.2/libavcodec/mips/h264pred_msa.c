static void intra_predict_vert_8x8_msa(uint8_t *src, uint8_t *dst,
int32_t dst_stride)
static void intra_predict_vert_16x16_msa(uint8_t *src, uint8_t *dst,
int32_t dst_stride)
static void intra_predict_horiz_8x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void intra_predict_horiz_16x16_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void intra_predict_dc_8x8_msa(uint8_t *src_top, uint8_t *src_left,
int32_t src_stride_left,
uint8_t *dst, int32_t dst_stride,
uint8_t is_above, uint8_t is_left)
static void intra_predict_dc_16x16_msa(uint8_t *src_top, uint8_t *src_left,
int32_t src_stride_left,
uint8_t *dst, int32_t dst_stride,
uint8_t is_above, uint8_t is_left)
#define INTRA_PREDICT_VALDC_8X8_MSA(val)                         \
static void intra_predict_##val##dc_8x8_msa(uint8_t *dst,        \
int32_t dst_stride)  \
INTRA_PREDICT_VALDC_8X8_MSA(127);
INTRA_PREDICT_VALDC_8X8_MSA(129);
#define INTRA_PREDICT_VALDC_16X16_MSA(val)                         \
static void intra_predict_##val##dc_16x16_msa(uint8_t *dst,        \
int32_t dst_stride)  \
INTRA_PREDICT_VALDC_16X16_MSA(127);
INTRA_PREDICT_VALDC_16X16_MSA(129);
static void intra_predict_plane_8x8_msa(uint8_t *src, int32_t stride)
static void intra_predict_plane_16x16_msa(uint8_t *src, int32_t stride)
static void intra_predict_dc_4blk_8x8_msa(uint8_t *src, int32_t stride)
static void intra_predict_hor_dc_8x8_msa(uint8_t *src, int32_t stride)
static void intra_predict_vert_dc_8x8_msa(uint8_t *src, int32_t stride)
static void intra_predict_mad_cow_dc_l0t_8x8_msa(uint8_t *src, int32_t stride)
static void intra_predict_mad_cow_dc_0lt_8x8_msa(uint8_t *src, int32_t stride)
static void intra_predict_mad_cow_dc_l00_8x8_msa(uint8_t *src, int32_t stride)
static void intra_predict_mad_cow_dc_0l0_8x8_msa(uint8_t *src, int32_t stride)
void ff_h264_intra_predict_plane_8x8_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_predict_dc_4blk_8x8_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_predict_hor_dc_8x8_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_predict_vert_dc_8x8_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_predict_mad_cow_dc_l0t_8x8_msa(uint8_t *src,
ptrdiff_t stride)
void ff_h264_intra_predict_mad_cow_dc_0lt_8x8_msa(uint8_t *src,
ptrdiff_t stride)
void ff_h264_intra_predict_mad_cow_dc_l00_8x8_msa(uint8_t *src,
ptrdiff_t stride)
void ff_h264_intra_predict_mad_cow_dc_0l0_8x8_msa(uint8_t *src,
ptrdiff_t stride)
void ff_h264_intra_predict_plane_16x16_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_pred_vert_8x8_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_pred_horiz_8x8_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_pred_dc_16x16_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_pred_vert_16x16_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_pred_horiz_16x16_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_pred_dc_left_16x16_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_pred_dc_top_16x16_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_pred_dc_128_8x8_msa(uint8_t *src, ptrdiff_t stride)
void ff_h264_intra_pred_dc_128_16x16_msa(uint8_t *src, ptrdiff_t stride)
void ff_vp8_pred8x8_127_dc_8_msa(uint8_t *src, ptrdiff_t stride)
void ff_vp8_pred8x8_129_dc_8_msa(uint8_t *src, ptrdiff_t stride)
void ff_vp8_pred16x16_127_dc_8_msa(uint8_t *src, ptrdiff_t stride)
void ff_vp8_pred16x16_129_dc_8_msa(uint8_t *src, ptrdiff_t stride)
