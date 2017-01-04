void ff_pred16x16_vert_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred16x16_hor_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred16x16_plane_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred16x16_dc_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred16x16_128_dc_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred16x16_left_dc_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred16x16_top_dc_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred8x8_vert_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred8x8_hor_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred8x8_plane_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred8x8_dc_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred8x8_128_dc_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred8x8_left_dc_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred8x8_top_dc_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred8x8_l0t_dc_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred8x8_0lt_dc_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred8x8_l00_dc_neon(uint8_t *src, ptrdiff_t stride);
void ff_pred8x8_0l0_dc_neon(uint8_t *src, ptrdiff_t stride);
static av_cold void h264_pred_init_neon(H264PredContext *h, int codec_id,
const int bit_depth,
const int chroma_format_idc)
av_cold void ff_h264_pred_init_arm(H264PredContext *h, int codec_id,
int bit_depth, const int chroma_format_idc)
