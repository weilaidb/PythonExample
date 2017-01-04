void ff_h264_v_loop_filter_luma_neon(uint8_t *pix, int stride, int alpha,
int beta, int8_t *tc0);
void ff_h264_h_loop_filter_luma_neon(uint8_t *pix, int stride, int alpha,
int beta, int8_t *tc0);
void ff_h264_v_loop_filter_chroma_neon(uint8_t *pix, int stride, int alpha,
int beta, int8_t *tc0);
void ff_h264_h_loop_filter_chroma_neon(uint8_t *pix, int stride, int alpha,
int beta, int8_t *tc0);
void ff_weight_h264_pixels_16_neon(uint8_t *dst, int stride, int height,
int log2_den, int weight, int offset);
void ff_weight_h264_pixels_8_neon(uint8_t *dst, int stride, int height,
int log2_den, int weight, int offset);
void ff_weight_h264_pixels_4_neon(uint8_t *dst, int stride, int height,
int log2_den, int weight, int offset);
void ff_biweight_h264_pixels_16_neon(uint8_t *dst, uint8_t *src, int stride,
int height, int log2_den, int weightd,
int weights, int offset);
void ff_biweight_h264_pixels_8_neon(uint8_t *dst, uint8_t *src, int stride,
int height, int log2_den, int weightd,
int weights, int offset);
void ff_biweight_h264_pixels_4_neon(uint8_t *dst, uint8_t *src, int stride,
int height, int log2_den, int weightd,
int weights, int offset);
void ff_h264_idct_add_neon(uint8_t *dst, int16_t *block, int stride);
void ff_h264_idct_dc_add_neon(uint8_t *dst, int16_t *block, int stride);
void ff_h264_idct_add16_neon(uint8_t *dst, const int *block_offset,
int16_t *block, int stride,
const uint8_t nnzc[6*8]);
void ff_h264_idct_add16intra_neon(uint8_t *dst, const int *block_offset,
int16_t *block, int stride,
const uint8_t nnzc[6*8]);
void ff_h264_idct_add8_neon(uint8_t **dest, const int *block_offset,
int16_t *block, int stride,
const uint8_t nnzc[6*8]);
void ff_h264_idct8_add_neon(uint8_t *dst, int16_t *block, int stride);
void ff_h264_idct8_dc_add_neon(uint8_t *dst, int16_t *block, int stride);
void ff_h264_idct8_add4_neon(uint8_t *dst, const int *block_offset,
int16_t *block, int stride,
const uint8_t nnzc[6*8]);
static av_cold void h264dsp_init_neon(H264DSPContext *c, const int bit_depth,
const int chroma_format_idc)
av_cold void ff_h264dsp_init_arm(H264DSPContext *c, const int bit_depth,
const int chroma_format_idc)
