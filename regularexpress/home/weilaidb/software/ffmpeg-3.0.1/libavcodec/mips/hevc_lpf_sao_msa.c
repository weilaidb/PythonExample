static void hevc_loopfilter_luma_hor_msa(uint8_t *src, int32_t stride,
int32_t beta, int32_t *tc,
uint8_t *p_is_pcm, uint8_t *q_is_pcm)
static void hevc_loopfilter_luma_ver_msa(uint8_t *src, int32_t stride,
int32_t beta, int32_t *tc,
uint8_t *p_is_pcm, uint8_t *q_is_pcm)
static void hevc_loopfilter_chroma_hor_msa(uint8_t *src, int32_t stride,
int32_t *tc, uint8_t *p_is_pcm,
uint8_t *q_is_pcm)
static void hevc_loopfilter_chroma_ver_msa(uint8_t *src, int32_t stride,
int32_t *tc, uint8_t *p_is_pcm,
uint8_t *q_is_pcm)
static void hevc_sao_band_filter_4width_msa(uint8_t *dst, int32_t dst_stride,
uint8_t *src, int32_t src_stride,
int32_t sao_left_class,
int16_t *sao_offset_val,
int32_t height)
static void hevc_sao_band_filter_8width_msa(uint8_t *dst, int32_t dst_stride,
uint8_t *src, int32_t src_stride,
int32_t sao_left_class,
int16_t *sao_offset_val,
int32_t height)
static void hevc_sao_band_filter_16multiple_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int32_t sao_left_class,
int16_t *sao_offset_val,
int32_t width, int32_t height)
static void hevc_sao_edge_filter_0degree_4width_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *sao_offset_val,
int32_t height)
static void hevc_sao_edge_filter_0degree_8width_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *sao_offset_val,
int32_t height)
static void hevc_sao_edge_filter_0degree_16multiple_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *sao_offset_val,
int32_t width,
int32_t height)
static void hevc_sao_edge_filter_90degree_4width_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *sao_offset_val,
int32_t height)
static void hevc_sao_edge_filter_90degree_8width_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *sao_offset_val,
int32_t height)
static void hevc_sao_edge_filter_90degree_16multiple_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *
sao_offset_val,
int32_t width,
int32_t height)
static void hevc_sao_edge_filter_45degree_4width_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *sao_offset_val,
int32_t height)
static void hevc_sao_edge_filter_45degree_8width_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *sao_offset_val,
int32_t height)
static void hevc_sao_edge_filter_45degree_16multiple_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *
sao_offset_val,
int32_t width,
int32_t height)
static void hevc_sao_edge_filter_135degree_4width_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *sao_offset_val,
int32_t height)
static void hevc_sao_edge_filter_135degree_8width_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *sao_offset_val,
int32_t height)
static void hevc_sao_edge_filter_135degree_16multiple_msa(uint8_t *dst,
int32_t dst_stride,
uint8_t *src,
int32_t src_stride,
int16_t *
sao_offset_val,
int32_t width,
int32_t height)
void ff_hevc_loop_filter_luma_h_8_msa(uint8_t *src,
ptrdiff_t src_stride,
int32_t beta, int32_t *tc,
uint8_t *no_p, uint8_t *no_q)
void ff_hevc_loop_filter_luma_v_8_msa(uint8_t *src,
ptrdiff_t src_stride,
int32_t beta, int32_t *tc,
uint8_t *no_p, uint8_t *no_q)
void ff_hevc_loop_filter_chroma_h_8_msa(uint8_t *src,
ptrdiff_t src_stride,
int32_t *tc, uint8_t *no_p,
uint8_t *no_q)
void ff_hevc_loop_filter_chroma_v_8_msa(uint8_t *src,
ptrdiff_t src_stride,
int32_t *tc, uint8_t *no_p,
uint8_t *no_q)
void ff_hevc_sao_band_filter_0_8_msa(uint8_t *dst, uint8_t *src,
ptrdiff_t stride_dst, ptrdiff_t stride_src,
int16_t *sao_offset_val, int sao_left_class,
int width, int height)
void ff_hevc_sao_edge_filter_8_msa(uint8_t *dst, uint8_t *src,
ptrdiff_t stride_dst,
int16_t *sao_offset_val,
int eo, int width, int height)
