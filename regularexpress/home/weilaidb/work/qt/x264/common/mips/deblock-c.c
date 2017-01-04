#if !HIGH_BIT_DEPTH
#define AVC_LPF_P0P1P2_OR_Q0Q1Q2( p3_or_q3_org_in, p0_or_q0_org_in,           \
q3_or_p3_org_in, p1_or_q1_org_in,           \
p2_or_q2_org_in, q1_or_p1_org_in,           \
p0_or_q0_out, p1_or_q1_out, p2_or_q2_out )  \
#define AVC_LPF_P0_OR_Q0( p0_or_q0_org_in, q1_or_p1_org_in,  \
p1_or_q1_org_in, p0_or_q0_out )    \
#define AVC_LPF_P1_OR_Q1( p0_or_q0_org_in, q0_or_p0_org_in,          \
p1_or_q1_org_in, p2_or_q2_org_in,          \
negate_tc_in, tc_in, p1_or_q1_out )        \
#define AVC_LPF_P0Q0( q0_or_p0_org_in, p0_or_q0_org_in,           \
p1_or_q1_org_in, q1_or_p1_org_in,           \
negate_threshold_in, threshold_in,          \
p0_or_q0_out, q0_or_p0_out )                \
static void avc_loopfilter_luma_intra_edge_hor_msa( uint8_t *p_data,
uint8_t u_alpha_in,
uint8_t u_beta_in,
uint32_t u_img_width )
static void avc_loopfilter_luma_intra_edge_ver_msa( uint8_t *p_data,
uint8_t u_alpha_in,
uint8_t u_beta_in,
uint32_t u_img_width )
static void avc_lpf_cbcr_interleaved_intra_edge_hor_msa( uint8_t *p_chroma,
uint8_t u_alpha_in,
uint8_t u_beta_in,
uint32_t u_img_width )
static void avc_lpf_cbcr_interleaved_intra_edge_ver_msa( uint8_t *p_chroma,
uint8_t u_alpha_in,
uint8_t u_beta_in,
uint32_t u_img_width )
static void avc_loopfilter_luma_inter_edge_ver_msa( uint8_t *p_data,
uint8_t u_bs0,
uint8_t u_bs1,
uint8_t u_bs2,
uint8_t u_bs3,
uint8_t u_tc0,
uint8_t u_tc1,
uint8_t u_tc2,
uint8_t u_tc3,
uint8_t u_alpha_in,
uint8_t u_beta_in,
uint32_t u_img_width )
static void avc_loopfilter_luma_inter_edge_hor_msa( uint8_t *p_data,
uint8_t u_bs0,
uint8_t u_bs1,
uint8_t u_bs2,
uint8_t u_bs3,
uint8_t u_tc0,
uint8_t u_tc1,
uint8_t u_tc2,
uint8_t u_tc3,
uint8_t u_alpha_in,
uint8_t u_beta_in,
uint32_t u_image_width )
static void avc_lpf_cbcr_interleaved_inter_edge_hor_msa( uint8_t *p_chroma,
uint8_t u_bs0,
uint8_t u_bs1,
uint8_t u_bs2,
uint8_t u_bs3,
uint8_t u_tc0,
uint8_t u_tc1,
uint8_t u_tc2,
uint8_t u_tc3,
uint8_t u_alpha_in,
uint8_t u_beta_in,
uint32_t u_img_width )
static void avc_lpf_cbcr_interleaved_inter_edge_ver_msa( uint8_t *p_chroma,
uint8_t u_bs0,
uint8_t u_bs1,
uint8_t u_bs2,
uint8_t u_bs3,
uint8_t u_tc0,
uint8_t u_tc1,
uint8_t u_tc2,
uint8_t u_tc3,
uint8_t u_alpha_in,
uint8_t u_beta_in,
uint32_t u_img_width )
static void avc_deblock_strength_msa( uint8_t *nnz,
int8_t pi_ref[2][X264_SCAN8_LUMA_SIZE],
int16_t pi_mv[2][X264_SCAN8_LUMA_SIZE][2],
uint8_t pu_bs[2][8][4],
int32_t i_mvy_limit )
void x264_deblock_v_luma_intra_msa( uint8_t *p_pix, intptr_t i_stride,
int32_t i_alpha, int32_t i_beta )
void x264_deblock_h_luma_intra_msa( uint8_t *p_pix, intptr_t i_stride,
int32_t i_alpha, int32_t i_beta )
void x264_deblock_v_chroma_intra_msa( uint8_t *p_pix, intptr_t i_stride,
int32_t i_alpha, int32_t i_beta )
void x264_deblock_h_chroma_intra_msa( uint8_t *p_pix, intptr_t i_stride,
int32_t i_alpha, int32_t i_beta )
void x264_deblock_h_luma_msa( uint8_t *p_pix, intptr_t i_stride,
int32_t i_alpha, int32_t i_beta, int8_t *p_tc0 )
void x264_deblock_v_luma_msa( uint8_t *p_pix, intptr_t i_stride,
int32_t i_alpha, int32_t i_beta, int8_t *p_tc0 )
void x264_deblock_v_chroma_msa( uint8_t *p_pix, intptr_t i_stride,
int32_t i_alpha, int32_t i_beta, int8_t *p_tc0 )
void x264_deblock_h_chroma_msa( uint8_t *p_pix, intptr_t i_stride,
int32_t i_alpha, int32_t i_beta, int8_t *p_tc0 )
void x264_deblock_strength_msa( uint8_t u_nnz[X264_SCAN8_SIZE],
int8_t pi_ref[2][X264_SCAN8_LUMA_SIZE],
int16_t pi_mv[2][X264_SCAN8_LUMA_SIZE][2],
uint8_t pu_bs[2][8][4], int32_t i_mvy_limit,
int32_t i_bframe )
