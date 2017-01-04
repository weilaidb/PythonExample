static void avc_wgt_4x2_msa(uint8_t *data, int32_t stride,
int32_t log2_denom, int32_t src_weight,
int32_t offset_in)
static void avc_wgt_4x4multiple_msa(uint8_t *data, int32_t stride,
int32_t height, int32_t log2_denom,
int32_t src_weight, int32_t offset_in)
static void avc_wgt_4width_msa(uint8_t *data, int32_t stride,
int32_t height, int32_t log2_denom,
int32_t src_weight, int32_t offset_in)
static void avc_wgt_8width_msa(uint8_t *data, int32_t stride,
int32_t height, int32_t log2_denom,
int32_t src_weight, int32_t offset_in)
static void avc_wgt_16width_msa(uint8_t *data, int32_t stride,
int32_t height, int32_t log2_denom,
int32_t src_weight, int32_t offset_in)
static void avc_biwgt_4x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t log2_denom, int32_t src_weight,
int32_t dst_weight, int32_t offset_in)
static void avc_biwgt_4x4multiple_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, int32_t log2_denom,
int32_t src_weight, int32_t dst_weight,
int32_t offset_in)
static void avc_biwgt_4width_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, int32_t log2_denom,
int32_t src_weight, int32_t dst_weight,
int32_t offset_in)
static void avc_biwgt_8width_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, int32_t log2_denom,
int32_t src_weight, int32_t dst_weight,
int32_t offset_in)
static void avc_biwgt_16width_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, int32_t log2_denom,
int32_t src_weight, int32_t dst_weight,
int32_t offset_in)
#define AVC_LPF_P0P1P2_OR_Q0Q1Q2(p3_or_q3_org_in, p0_or_q0_org_in,          \
q3_or_p3_org_in, p1_or_q1_org_in,          \
p2_or_q2_org_in, q1_or_p1_org_in,          \
p0_or_q0_out, p1_or_q1_out, p2_or_q2_out)  \
#define AVC_LPF_P0_OR_Q0(p0_or_q0_org_in, q1_or_p1_org_in,   \
p1_or_q1_org_in, p0_or_q0_out)      \
#define AVC_LPF_P1_OR_Q1(p0_or_q0_org_in, q0_or_p0_org_in,    \
p1_or_q1_org_in, p2_or_q2_org_in,    \
negate_tc_in, tc_in, p1_or_q1_out)   \
#define AVC_LPF_P0Q0(q0_or_p0_org_in, p0_or_q0_org_in,          \
p1_or_q1_org_in, q1_or_p1_org_in,          \
negate_threshold_in, threshold_in,         \
p0_or_q0_out, q0_or_p0_out)                \
#define AVC_LPF_H_CHROMA_422(src, stride, tc_val, alpha, beta, res)      \
#define TRANSPOSE2x4_B_UB(in0, in1, out0, out1, out2, out3)  \
#define AVC_LPF_H_2BYTE_CHROMA_422(src, stride, tc_val, alpha, beta, res)  \
static void avc_loopfilter_luma_intra_edge_hor_msa(uint8_t *data,
uint8_t alpha_in,
uint8_t beta_in,
uint32_t img_width)
static void avc_loopfilter_luma_intra_edge_ver_msa(uint8_t *data,
uint8_t alpha_in,
uint8_t beta_in,
uint32_t img_width)
static void avc_h_loop_filter_luma_mbaff_intra_msa(uint8_t *src, int32_t stride,
int32_t alpha_in,
int32_t beta_in)
static void avc_loopfilter_cb_or_cr_intra_edge_hor_msa(uint8_t *data_cb_or_cr,
uint8_t alpha_in,
uint8_t beta_in,
uint32_t img_width)
static void avc_loopfilter_cb_or_cr_intra_edge_ver_msa(uint8_t *data_cb_or_cr,
uint8_t alpha_in,
uint8_t beta_in,
uint32_t img_width)
static void avc_loopfilter_luma_inter_edge_ver_msa(uint8_t *data,
uint8_t bs0, uint8_t bs1,
uint8_t bs2, uint8_t bs3,
uint8_t tc0, uint8_t tc1,
uint8_t tc2, uint8_t tc3,
uint8_t alpha_in,
uint8_t beta_in,
uint32_t img_width)
static void avc_loopfilter_luma_inter_edge_hor_msa(uint8_t *data,
uint8_t bs0, uint8_t bs1,
uint8_t bs2, uint8_t bs3,
uint8_t tc0, uint8_t tc1,
uint8_t tc2, uint8_t tc3,
uint8_t alpha_in,
uint8_t beta_in,
uint32_t image_width)
static void avc_h_loop_filter_luma_mbaff_msa(uint8_t *in, int32_t stride,
int32_t alpha_in, int32_t beta_in,
int8_t *tc0)
static void avc_loopfilter_cb_or_cr_inter_edge_hor_msa(uint8_t *data,
uint8_t bs0, uint8_t bs1,
uint8_t bs2, uint8_t bs3,
uint8_t tc0, uint8_t tc1,
uint8_t tc2, uint8_t tc3,
uint8_t alpha_in,
uint8_t beta_in,
uint32_t img_width)
static void avc_loopfilter_cb_or_cr_inter_edge_ver_msa(uint8_t *data,
uint8_t bs0, uint8_t bs1,
uint8_t bs2, uint8_t bs3,
uint8_t tc0, uint8_t tc1,
uint8_t tc2, uint8_t tc3,
uint8_t alpha_in,
uint8_t beta_in,
uint32_t img_width)
static void avc_h_loop_filter_chroma422_msa(uint8_t *src, int32_t stride,
int32_t alpha_in, int32_t beta_in,
int8_t *tc0)
static void avc_h_loop_filter_chroma422_mbaff_msa(uint8_t *src, int32_t stride,
int32_t alpha_in,
int32_t beta_in,
int8_t *tc0)
void ff_h264_h_lpf_luma_inter_msa(uint8_t *data, int img_width,
int alpha, int beta, int8_t *tc)
void ff_h264_v_lpf_luma_inter_msa(uint8_t *data, int img_width,
int alpha, int beta, int8_t *tc)
void ff_h264_h_lpf_chroma_inter_msa(uint8_t *data, int img_width,
int alpha, int beta, int8_t *tc)
void ff_h264_v_lpf_chroma_inter_msa(uint8_t *data, int img_width,
int alpha, int beta, int8_t *tc)
void ff_h264_h_lpf_luma_intra_msa(uint8_t *data, int img_width,
int alpha, int beta)
void ff_h264_v_lpf_luma_intra_msa(uint8_t *data, int img_width,
int alpha, int beta)
void ff_h264_h_lpf_chroma_intra_msa(uint8_t *data, int img_width,
int alpha, int beta)
void ff_h264_v_lpf_chroma_intra_msa(uint8_t *data, int img_width,
int alpha, int beta)
void ff_h264_h_loop_filter_chroma422_msa(uint8_t *src,
int32_t ystride,
int32_t alpha, int32_t beta,
int8_t *tc0)
void ff_h264_h_loop_filter_chroma422_mbaff_msa(uint8_t *src,
int32_t ystride,
int32_t alpha,
int32_t beta,
int8_t *tc0)
void ff_h264_h_loop_filter_luma_mbaff_msa(uint8_t *src,
int32_t ystride,
int32_t alpha,
int32_t beta,
int8_t *tc0)
void ff_h264_h_loop_filter_luma_mbaff_intra_msa(uint8_t *src,
int32_t ystride,
int32_t alpha,
int32_t beta)
void ff_weight_h264_pixels16_8_msa(uint8_t *src, int stride,
int height, int log2_denom,
int weight_src, int offset)
void ff_weight_h264_pixels8_8_msa(uint8_t *src, int stride,
int height, int log2_denom,
int weight_src, int offset)
void ff_weight_h264_pixels4_8_msa(uint8_t *src, int stride,
int height, int log2_denom,
int weight_src, int offset)
void ff_biweight_h264_pixels16_8_msa(uint8_t *dst, uint8_t *src,
int stride, int height,
int log2_denom, int weight_dst,
int weight_src, int offset)
void ff_biweight_h264_pixels8_8_msa(uint8_t *dst, uint8_t *src,
int stride, int height,
int log2_denom, int weight_dst,
int weight_src, int offset)
void ff_biweight_h264_pixels4_8_msa(uint8_t *dst, uint8_t *src,
int stride, int height,
int log2_denom, int weight_dst,
int weight_src, int offset)
