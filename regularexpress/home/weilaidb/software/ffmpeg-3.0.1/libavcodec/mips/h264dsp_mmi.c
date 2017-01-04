void ff_h264_add_pixels4_8_mmi(uint8_t *dst, int16_t *src, int stride)
void ff_h264_idct_add_8_mmi(uint8_t *dst, int16_t *block, int stride)
void ff_h264_idct8_add_8_mmi(uint8_t *dst, int16_t *block, int stride)
void ff_h264_idct_dc_add_8_mmi(uint8_t *dst, int16_t *block, int stride)
void ff_h264_idct8_dc_add_8_mmi(uint8_t *dst, int16_t *block, int stride)
void ff_h264_idct_add16_8_mmi(uint8_t *dst, const int *block_offset,
int16_t *block, int stride, const uint8_t nnzc[15*8])
void ff_h264_idct_add16intra_8_mmi(uint8_t *dst, const int *block_offset,
int16_t *block, int stride, const uint8_t nnzc[15*8])
void ff_h264_idct8_add4_8_mmi(uint8_t *dst, const int *block_offset,
int16_t *block, int stride, const uint8_t nnzc[15*8])
void ff_h264_idct_add8_8_mmi(uint8_t **dest, const int *block_offset,
int16_t *block, int stride, const uint8_t nnzc[15*8])
void ff_h264_idct_add8_422_8_mmi(uint8_t **dest, const int *block_offset,
int16_t *block, int stride, const uint8_t nnzc[15*8])
void ff_h264_luma_dc_dequant_idct_8_mmi(int16_t *output, int16_t *input,
int qmul)
void ff_h264_chroma422_dc_dequant_idct_8_mmi(int16_t *block, int qmul)
void ff_h264_chroma_dc_dequant_idct_8_mmi(int16_t *block, int qmul)
void ff_h264_weight_pixels16_8_mmi(uint8_t *block, int stride,
int height, int log2_denom, int weight, int offset)
void ff_h264_biweight_pixels16_8_mmi(uint8_t *dst, uint8_t *src,
int stride, int height, int log2_denom, int weightd, int weights,
int offset)
void ff_h264_weight_pixels8_8_mmi(uint8_t *block, int stride, int height,
int log2_denom, int weight, int offset)
void ff_h264_biweight_pixels8_8_mmi(uint8_t *dst, uint8_t *src,
int stride, int height, int log2_denom, int weightd, int weights,
int offset)
void ff_h264_weight_pixels4_8_mmi(uint8_t *block, int stride, int height,
int log2_denom, int weight, int offset)
void ff_h264_biweight_pixels4_8_mmi(uint8_t *dst, uint8_t *src,
int stride, int height, int log2_denom, int weightd, int weights,
int offset)
static void inline chroma_inter_body_mmi(uint8_t *pix, int stride,
int alpha, int beta, int8_t *tc0)
static void inline chroma_intra_body_mmi(uint8_t *pix, int stride,
int alpha, int beta)
void ff_deblock_v8_luma_8_mmi(uint8_t *pix, int stride, int alpha, int beta,
int8_t *tc0)
void ff_deblock_v8_luma_intra_8_mmi(uint8_t *pix, int stride, int alpha,
int beta)
void ff_deblock_v_chroma_8_mmi(uint8_t *pix, int stride, int alpha, int beta,
int8_t *tc0)
void ff_deblock_v_chroma_intra_8_mmi(uint8_t *pix, int stride, int alpha,
int beta)
void ff_deblock_h_chroma_8_mmi(uint8_t *pix, int stride, int alpha, int beta,
int8_t *tc0)
void ff_deblock_h_chroma_intra_8_mmi(uint8_t *pix, int stride, int alpha,
int beta)
void ff_deblock_v_luma_8_mmi(uint8_t *pix, int stride, int alpha, int beta,
int8_t *tc0)
void ff_deblock_v_luma_intra_8_mmi(uint8_t *pix, int stride, int alpha,
int beta)
void ff_deblock_h_luma_8_mmi(uint8_t *pix, int stride, int alpha, int beta,
int8_t *tc0)
void ff_deblock_h_luma_intra_8_mmi(uint8_t *pix, int stride, int alpha,
int beta)
