#if !HIGH_BIT_DEPTH
static const uint8_t pu_luma_mask_arr[16 * 8] =
;
static const uint8_t pu_chroma_mask_arr[16 * 5] =
;
void x264_mc_copy_w16_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
int32_t i_height );
void x264_mc_copy_w8_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
int32_t i_height );
void x264_mc_copy_w4_msa( uint8_t *p_dst, intptr_t i_dst_stride, uint8_t *p_src,
intptr_t i_src_stride, int32_t i_height );
void x264_memzero_aligned_msa( void *p_dst, size_t n );
void x264_pixel_avg_16x16_msa( uint8_t *p_pix1, intptr_t i_pix1_stride,
uint8_t *p_pix2, intptr_t i_pix2_stride,
uint8_t *p_pix3, intptr_t i_pix3_stride,
int32_t i_weight );
void x264_pixel_avg_16x8_msa( uint8_t *p_pix1, intptr_t i_pix1_stride,
uint8_t *p_pix2, intptr_t i_pix2_stride,
uint8_t *p_pix3, intptr_t i_pix3_stride,
int32_t i_weight );
void x264_pixel_avg_8x16_msa( uint8_t *p_pix1, intptr_t i_pix1_stride,
uint8_t *p_pix2, intptr_t i_pix2_stride,
uint8_t *p_pix3, intptr_t i_pix3_stride,
int32_t i_weight );
void x264_pixel_avg_8x8_msa( uint8_t *p_pix1, intptr_t i_pix1_stride,
uint8_t *p_pix2, intptr_t i_pix2_stride,
uint8_t *p_pix3, intptr_t i_pix3_stride,
int32_t i_weight );
void x264_pixel_avg_8x4_msa( uint8_t *p_pix1, intptr_t i_pix1_stride,
uint8_t *p_pix2, intptr_t i_pix2_stride,
uint8_t *p_pix3, intptr_t i_pix3_stride,
int32_t i_weight );
void x264_pixel_avg_4x16_msa( uint8_t *p_pix1, intptr_t pix1_stride,
uint8_t *p_pix2, intptr_t pix2_stride,
uint8_t *p_pix3, intptr_t pix3_stride,
int32_t i_weight );
void x264_pixel_avg_4x8_msa( uint8_t *p_pix1, intptr_t i_pix1_stride,
uint8_t *p_pix2, intptr_t i_pix2_stride,
uint8_t *p_pix3, intptr_t i_pix3_stride,
int32_t i_weight );
void x264_pixel_avg_4x4_msa( uint8_t *p_pix1, intptr_t i_pix1_stride,
uint8_t *p_pix2, intptr_t i_pix2_stride,
uint8_t *p_pix3, intptr_t i_pix3_stride,
int32_t i_weight );
void x264_pixel_avg_4x2_msa( uint8_t *p_pix1, intptr_t i_pix1_stride,
uint8_t *p_pix2, intptr_t i_pix2_stride,
uint8_t *p_pix3, intptr_t i_pix3_stride,
int32_t i_weight );
void x264_mc_weight_w20_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
const x264_weight_t *pWeight, int32_t i_height );
void x264_mc_weight_w4_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
const x264_weight_t *pWeight, int32_t i_height );
void x264_mc_weight_w8_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
const x264_weight_t *pWeight, int32_t i_height );
void x264_mc_weight_w16_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
const x264_weight_t *pWeight, int32_t i_height );
weight_fn_t x264_mc_weight_wtab_msa[6] =
;
void x264_mc_luma_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src[4], intptr_t i_src_stride,
int32_t m_vx, int32_t m_vy,
int32_t i_width, int32_t i_height,
const x264_weight_t *pWeight );
uint8_t *x264_get_ref_msa( uint8_t *p_dst,   intptr_t *p_dst_stride,
uint8_t *p_src[4], intptr_t i_src_stride,
int32_t m_vx, int32_t m_vy,
int32_t i_width, int32_t i_height,
const x264_weight_t *pWeight );
void x264_mc_chroma_msa( uint8_t *p_dst_u, uint8_t *p_dst_v,
intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
int32_t m_vx, int32_t m_vy,
int32_t i_width, int32_t i_height );
void x264_hpel_filter_msa( uint8_t *p_dsth, uint8_t *p_dst_v,
uint8_t *p_dstc, uint8_t *p_src,
intptr_t i_stride, int32_t i_width,
int32_t i_height, int16_t *p_buf );
void x264_plane_copy_interleave_msa( uint8_t *p_dst,  intptr_t i_dst_stride,
uint8_t *p_src0, intptr_t i_src_stride0,
uint8_t *p_src1, intptr_t i_src_stride1,
int32_t i_width, int32_t i_height );
void x264_plane_copy_deinterleave_msa( uint8_t *p_dst0, intptr_t i_dst_stride0,
uint8_t *p_dst1, intptr_t i_dst_stride1,
uint8_t *p_src,  intptr_t i_src_stride,
int32_t i_width, int32_t i_height );
void x264_plane_copy_deinterleave_rgb_msa( uint8_t *p_dst0,
intptr_t i_dst_stride0,
uint8_t *p_dst1,
intptr_t i_dst_stride1,
uint8_t *p_dst2,
intptr_t i_dst_stride2,
uint8_t *p_src,
intptr_t i_src_stride,
int32_t i_src_width, int32_t i_width,
int32_t i_height );
void x264_store_interleave_chroma_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src0, uint8_t *p_src1,
int32_t i_height );
void x264_load_deinterleave_chroma_fenc_msa( uint8_t *p_dst, uint8_t *p_src,
intptr_t i_src_stride,
int32_t i_height );
void x264_load_deinterleave_chroma_fdec_msa( uint8_t *p_dst, uint8_t *p_src,
intptr_t i_src_stride,
int32_t i_height );
void x264_frame_init_lowres_core_msa( uint8_t *p_src, uint8_t *p_dst0,
uint8_t *p_dst1, uint8_t *p_dst2,
uint8_t *p_dst3, intptr_t i_src_stride,
intptr_t i_dst_stride, int32_t i_width,
int32_t i_height );
static void avc_luma_hz_16w_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height )
static void avc_luma_vt_16w_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height )
static void avc_luma_mid_8w_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height )
static void avc_luma_mid_16w_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height )
static void avc_interleaved_chroma_hv_2x2_msa( uint8_t *p_src,
int32_t i_src_stride,
uint8_t *p_dst_u,
uint8_t *p_dst_v,
int32_t i_dst_stride,
uint32_t u_coef_hor0,
uint32_t u_coef_hor1,
uint32_t u_coef_ver0,
uint32_t u_coef_ver1 )
static void avc_interleaved_chroma_hv_2x4_msa( uint8_t *p_src,
int32_t i_src_stride,
uint8_t *p_dst_u,
uint8_t *p_dst_v,
int32_t i_dst_stride,
uint32_t u_coef_hor0,
uint32_t u_coef_hor1,
uint32_t u_coef_ver0,
uint32_t u_coef_ver1 )
static void avc_interleaved_chroma_hv_2w_msa( uint8_t *p_src,
int32_t i_src_stride,
uint8_t *p_dst_u,
uint8_t *p_dst_v,
int32_t i_dst_stride,
uint32_t u_coef_hor0,
uint32_t u_coef_hor1,
uint32_t u_coef_ver0,
uint32_t u_coef_ver1,
int32_t i_height )
static void avc_interleaved_chroma_hv_4x2_msa( uint8_t *p_src,
int32_t i_src_stride,
uint8_t *p_dst_u,
uint8_t *p_dst_v,
int32_t i_dst_stride,
uint32_t u_coef_hor0,
uint32_t u_coef_hor1,
uint32_t u_coef_ver0,
uint32_t u_coef_ver1 )
static void avc_interleaved_chroma_hv_4x4mul_msa( uint8_t *p_src,
int32_t i_src_stride,
uint8_t *p_dst_u,
uint8_t *p_dst_v,
int32_t i_dst_stride,
uint32_t u_coef_hor0,
uint32_t u_coef_hor1,
uint32_t u_coef_ver0,
uint32_t u_coef_ver1,
int32_t i_height )
static void avc_interleaved_chroma_hv_4w_msa( uint8_t *p_src,
int32_t i_src_stride,
uint8_t *p_dst_u,
uint8_t *p_dst_v,
int32_t i_dst_stride,
uint32_t u_coef_hor0,
uint32_t u_coef_hor1,
uint32_t u_coef_ver0,
uint32_t u_coef_ver1,
int32_t i_height )
static void avc_interleaved_chroma_hv_8w_msa( uint8_t *p_src,
int32_t i_src_stride,
uint8_t *p_dst_u,
uint8_t *p_dst_v,
int32_t i_dst_stride,
uint32_t u_coef_hor0,
uint32_t u_coef_hor1,
uint32_t u_coef_ver0,
uint32_t u_coef_ver1,
int32_t i_height )
static void avc_wgt_opscale_4x2_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_log2_denom, int32_t i_weight,
int32_t i_offset_in )
static void avc_wgt_opscale_4x4multiple_msa( uint8_t *p_src,
int32_t i_src_stride,
uint8_t *p_dst,
int32_t i_dst_stride,
int32_t i_height,
int32_t i_log2_denom,
int32_t i_weight,
int32_t i_offset_in )
static void avc_wgt_opscale_4width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height, int32_t i_log2_denom,
int32_t i_weight, int32_t i_offset_in )
static void avc_wgt_opscale_8width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height, int32_t i_log2_denom,
int32_t i_weight, int32_t i_offset_in )
static void avc_wgt_opscale_16width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height, int32_t i_log2_denom,
int32_t i_weight, int32_t i_offset_in )
static void avc_biwgt_opscale_4x2_nw_msa( uint8_t *p_src1_in,
int32_t i_src1_stride,
uint8_t *p_src2_in,
int32_t i_src2_stride,
uint8_t *p_dst,
int32_t i_dst_stride,
int32_t i_log2_denom,
int32_t i_src1_weight,
int32_t i_src2_weight,
int32_t i_offset_in )
static void avc_biwgt_opscale_4x4multiple_nw_msa( uint8_t *p_src1_in,
int32_t i_src1_stride,
uint8_t *p_src2_in,
int32_t i_src2_stride,
uint8_t *p_dst,
int32_t i_dst_stride,
int32_t i_height,
int32_t i_log2_denom,
int32_t i_src1_weight,
int32_t i_src2_weight,
int32_t i_offset_in )
static void avc_biwgt_opscale_4width_nw_msa( uint8_t *p_src1_in,
int32_t i_src1_stride,
uint8_t *p_src2_in,
int32_t i_src2_stride,
uint8_t *p_dst,
int32_t i_dst_stride,
int32_t i_height,
int32_t i_log2_denom,
int32_t i_src1_weight,
int32_t i_src2_weight,
int32_t i_offset_in )
static void avc_biwgt_opscale_8width_nw_msa( uint8_t *p_src1_in,
int32_t i_src1_stride,
uint8_t *p_src2_in,
int32_t i_src2_stride,
uint8_t *p_dst,
int32_t i_dst_stride,
int32_t i_height,
int32_t i_log2_denom,
int32_t i_src1_weight,
int32_t i_src2_weight,
int32_t i_offset_in )
static void avc_biwgt_opscale_16width_nw_msa( uint8_t *p_src1_in,
int32_t i_src1_stride,
uint8_t *p_src2_in,
int32_t i_src2_stride,
uint8_t *p_dst,
int32_t i_dst_stride,
int32_t i_height,
int32_t i_log2_denom,
int32_t i_src1_weight,
int32_t i_src2_weight,
int32_t i_offset_in )
static void avc_biwgt_opscale_4x2_msa( uint8_t *p_src1_in,
int32_t i_src1_stride,
uint8_t *p_src2_in,
int32_t i_src2_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_log2_denom,
int32_t i_src1_weight,
int32_t i_src2_weight,
int32_t i_offset_in )
static void avc_biwgt_opscale_4x4multiple_msa( uint8_t *p_src1_in,
int32_t i_src1_stride,
uint8_t *p_src2_in,
int32_t i_src2_stride,
uint8_t *p_dst,
int32_t i_dst_stride,
int32_t i_height,
int32_t i_log2_denom,
int32_t i_src1_weight,
int32_t i_src2_weight,
int32_t i_offset_in )
static void avc_biwgt_opscale_4width_msa( uint8_t *p_src1_in,
int32_t i_src1_stride,
uint8_t *p_src2_in,
int32_t i_src2_stride,
uint8_t *p_dst,
int32_t i_dst_stride,
int32_t i_height,
int32_t i_log2_denom,
int32_t i_src1_weight,
int32_t i_src2_weight,
int32_t i_offset_in )
static void avc_biwgt_opscale_8width_msa( uint8_t *p_src1_in,
int32_t i_src1_stride,
uint8_t *p_src2_in,
int32_t i_src2_stride,
uint8_t *p_dst,
int32_t i_dst_stride,
int32_t i_height,
int32_t i_log2_denom,
int32_t i_src1_weight,
int32_t i_src2_weight,
int32_t i_offset_in )
static void avc_biwgt_opscale_16width_msa( uint8_t *p_src1_in,
int32_t i_src1_stride,
uint8_t *p_src2_in,
int32_t i_src2_stride,
uint8_t *p_dst,
int32_t i_dst_stride,
int32_t i_height,
int32_t i_log2_denom,
int32_t i_src1_weight,
int32_t i_src2_weight,
int32_t i_offset_in )
static void copy_width4_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height )
static void copy_width8_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height )
static void copy_16multx8mult_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height, int32_t i_width )
static void copy_width16_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height )
static void avg_src_width4_msa( uint8_t *p_src1, int32_t i_src1_stride,
uint8_t *p_src2, int32_t i_src2_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height )
static void avg_src_width8_msa( uint8_t *p_src1, int32_t i_src1_stride,
uint8_t *p_src2, int32_t i_src2_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height )
static void avg_src_width16_msa( uint8_t *p_src1, int32_t i_src1_stride,
uint8_t *p_src2, int32_t i_src2_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height )
static void memset_zero_16width_msa( uint8_t *p_src, int32_t i_stride,
int32_t i_height )
static void plane_copy_interleave_msa( uint8_t *p_src0, int32_t i_src0_stride,
uint8_t *p_src1, int32_t i_src1_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_width, int32_t i_height )
static void plane_copy_deinterleave_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst0, int32_t dst0_stride,
uint8_t *p_dst1, int32_t dst1_stride,
int32_t i_width, int32_t i_height )
static void plane_copy_deinterleave_rgb_msa( uint8_t *p_src,
int32_t i_src_stride,
uint8_t *p_dst0,
int32_t i_dst0_stride,
uint8_t *p_dst1,
int32_t i_dst1_stride,
uint8_t *p_dst2,
int32_t i_dst2_stride,
int32_t i_width,
int32_t i_height )
static void plane_copy_deinterleave_rgba_msa( uint8_t *p_src,
int32_t i_src_stride,
uint8_t *p_dst0,
int32_t i_dst0_stride,
uint8_t *p_dst1,
int32_t i_dst1_stride,
uint8_t *p_dst2,
int32_t i_dst2_stride,
int32_t i_width,
int32_t i_height )
static void store_interleave_chroma_msa( uint8_t *p_src0, int32_t i_src0_stride,
uint8_t *p_src1, int32_t i_src1_stride,
uint8_t *p_dst, int32_t i_dst_stride,
int32_t i_height )
static void frame_init_lowres_core_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_dst0, int32_t dst0_stride,
uint8_t *p_dst1, int32_t dst1_stride,
uint8_t *p_dst2, int32_t dst2_stride,
uint8_t *p_dst3, int32_t dst3_stride,
int32_t i_width, int32_t i_height )
void x264_mc_copy_w16_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
int32_t i_height )
void x264_mc_copy_w8_msa( uint8_t *p_dst, intptr_t i_dst_stride, uint8_t *p_src,
intptr_t i_src_stride, int32_t i_height )
void x264_mc_copy_w4_msa( uint8_t *p_dst, intptr_t i_dst_stride, uint8_t *p_src,
intptr_t i_src_stride, int32_t i_height )
void x264_pixel_avg_16x16_msa( uint8_t *p_pix1, intptr_t pix1_stride,
uint8_t *p_pix2, intptr_t pix2_stride,
uint8_t *p_pix3, intptr_t pix3_stride,
int32_t i_weight )
void x264_pixel_avg_16x8_msa( uint8_t *p_pix1, intptr_t pix1_stride,
uint8_t *p_pix2, intptr_t pix2_stride,
uint8_t *p_pix3, intptr_t pix3_stride,
int32_t i_weight )
void x264_pixel_avg_8x16_msa( uint8_t *p_pix1, intptr_t pix1_stride,
uint8_t *p_pix2, intptr_t pix2_stride,
uint8_t *p_pix3, intptr_t pix3_stride,
int32_t i_weight )
void x264_pixel_avg_8x8_msa( uint8_t *p_pix1, intptr_t pix1_stride,
uint8_t *p_pix2, intptr_t pix2_stride,
uint8_t *p_pix3, intptr_t pix3_stride,
int32_t i_weight )
void x264_pixel_avg_8x4_msa( uint8_t *p_pix1, intptr_t pix1_stride,
uint8_t *p_pix2, intptr_t pix2_stride,
uint8_t *p_pix3, intptr_t pix3_stride,
int32_t i_weight )
void x264_pixel_avg_4x16_msa( uint8_t *p_pix1, intptr_t pix1_stride,
uint8_t *p_pix2, intptr_t pix2_stride,
uint8_t *p_pix3, intptr_t pix3_stride,
int32_t i_weight )
void x264_pixel_avg_4x8_msa( uint8_t *p_pix1, intptr_t pix1_stride,
uint8_t *p_pix2, intptr_t pix2_stride,
uint8_t *p_pix3, intptr_t pix3_stride,
int32_t i_weight )
void x264_pixel_avg_4x4_msa( uint8_t *p_pix1, intptr_t pix1_stride,
uint8_t *p_pix2, intptr_t pix2_stride,
uint8_t *p_pix3, intptr_t pix3_stride,
int32_t i_weight )
void x264_pixel_avg_4x2_msa( uint8_t *p_pix1, intptr_t pix1_stride,
uint8_t *p_pix2, intptr_t pix2_stride,
uint8_t *p_pix3, intptr_t pix3_stride,
int32_t i_weight )
void x264_memzero_aligned_msa( void *p_dst, size_t n )
void x264_mc_weight_w4_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
const x264_weight_t *pWeight, int32_t i_height )
void x264_mc_weight_w8_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
const x264_weight_t *pWeight, int32_t i_height )
void x264_mc_weight_w16_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
const x264_weight_t *pWeight, int32_t i_height )
void x264_mc_weight_w20_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
const x264_weight_t *pWeight, int32_t i_height )
void x264_mc_luma_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src[4], intptr_t i_src_stride,
int32_t m_vx, int32_t m_vy,
int32_t i_width, int32_t i_height,
const x264_weight_t *pWeight )
void x264_mc_chroma_msa( uint8_t *p_dst_u, uint8_t *p_dst_v,
intptr_t i_dst_stride,
uint8_t *p_src, intptr_t i_src_stride,
int32_t m_vx, int32_t m_vy,
int32_t i_width, int32_t i_height )
void x264_hpel_filter_msa( uint8_t *p_dsth, uint8_t *p_dst_v,
uint8_t *p_dstc, uint8_t *p_src,
intptr_t i_stride, int32_t i_width,
int32_t i_height, int16_t *p_buf )
void x264_plane_copy_interleave_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src0, intptr_t i_src_stride0,
uint8_t *p_src1, intptr_t i_src_stride1,
int32_t i_width, int32_t i_height )
void x264_plane_copy_deinterleave_msa( uint8_t *p_dst0, intptr_t i_dst_stride0,
uint8_t *p_dst1, intptr_t i_dst_stride1,
uint8_t *p_src, intptr_t i_src_stride,
int32_t i_width, int32_t i_height )
void x264_plane_copy_deinterleave_rgb_msa( uint8_t *p_dst0,
intptr_t i_dst_stride0,
uint8_t *p_dst1,
intptr_t i_dst_stride1,
uint8_t *p_dst2,
intptr_t i_dst_stride2,
uint8_t *p_src,
intptr_t i_src_stride,
int32_t i_src_width,
int32_t i_width,
int32_t i_height )
void x264_store_interleave_chroma_msa( uint8_t *p_dst, intptr_t i_dst_stride,
uint8_t *p_src0, uint8_t *p_src1,
int32_t i_height )
void x264_load_deinterleave_chroma_fenc_msa( uint8_t *p_dst, uint8_t *p_src,
intptr_t i_src_stride,
int32_t i_height )
void x264_load_deinterleave_chroma_fdec_msa( uint8_t *p_dst, uint8_t *p_src,
intptr_t i_src_stride,
int32_t i_height )
void x264_frame_init_lowres_core_msa( uint8_t *p_src, uint8_t *p_dst0,
uint8_t *p_dst1, uint8_t *p_dst2,
uint8_t *p_dst3, intptr_t i_src_stride,
intptr_t i_dst_stride, int32_t i_width,
int32_t i_height )
uint8_t *x264_get_ref_msa( uint8_t *p_dst, intptr_t *p_dst_stride,
uint8_t *p_src[4], intptr_t i_src_stride,
int32_t m_vx, int32_t m_vy,
int32_t i_width, int32_t i_height,
const x264_weight_t *pWeight )
void x264_mc_init_mips( int32_t cpu, x264_mc_functions_t *pf  )
