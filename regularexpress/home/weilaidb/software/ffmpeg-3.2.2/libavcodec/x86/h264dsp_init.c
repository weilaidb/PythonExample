IDCT_ADD_FUNC                                  \
void ff_h264_idct ## NUM ## _add_ ## DEPTH ## _ ## OPT(uint8_t *dst,    \
int16_t *block,  \
int stride);
IDCT_ADD_FUNC(, 8, mmx)
IDCT_ADD_FUNC(, 10, sse2)
IDCT_ADD_FUNC(_dc, 8, mmxext)
IDCT_ADD_FUNC(_dc, 10, mmxext)
IDCT_ADD_FUNC(8_dc, 8, mmxext)
IDCT_ADD_FUNC(8_dc, 10, sse2)
IDCT_ADD_FUNC(8, 8, mmx)
IDCT_ADD_FUNC(8, 8, sse2)
IDCT_ADD_FUNC(8, 10, sse2)
IDCT_ADD_FUNC(, 10, avx)
IDCT_ADD_FUNC(8_dc, 10, avx)
IDCT_ADD_FUNC(8, 10, avx)
IDCT_ADD_REP_FUNC                         \
void ff_h264_idct ## NUM ## _add ## REP ## _ ## DEPTH ## _ ## OPT       \
(uint8_t *dst, const int *block_offset,                             \
int16_t *block, int stride, const uint8_t nnzc[6 * 8]);
IDCT_ADD_REP_FUNC(8, 4, 8, mmx)
IDCT_ADD_REP_FUNC(8, 4, 8, mmxext)
IDCT_ADD_REP_FUNC(8, 4, 8, sse2)
IDCT_ADD_REP_FUNC(8, 4, 10, sse2)
IDCT_ADD_REP_FUNC(8, 4, 10, avx)
IDCT_ADD_REP_FUNC(, 16, 8, mmx)
IDCT_ADD_REP_FUNC(, 16, 8, mmxext)
IDCT_ADD_REP_FUNC(, 16, 8, sse2)
IDCT_ADD_REP_FUNC(, 16, 10, sse2)
IDCT_ADD_REP_FUNC(, 16intra, 8, mmx)
IDCT_ADD_REP_FUNC(, 16intra, 8, mmxext)
IDCT_ADD_REP_FUNC(, 16intra, 8, sse2)
IDCT_ADD_REP_FUNC(, 16intra, 10, sse2)
IDCT_ADD_REP_FUNC(, 16, 10, avx)
IDCT_ADD_REP_FUNC(, 16intra, 10, avx)
IDCT_ADD_REP_FUNC2                      \
void ff_h264_idct ## NUM ## _add ## REP ## _ ## DEPTH ## _ ## OPT     \
(uint8_t **dst, const int *block_offset,                          \
int16_t *block, int stride, const uint8_t nnzc[6 * 8]);
IDCT_ADD_REP_FUNC2(, 8, 8, mmx)
IDCT_ADD_REP_FUNC2(, 8, 8, mmxext)
IDCT_ADD_REP_FUNC2(, 8, 8, sse2)
IDCT_ADD_REP_FUNC2(, 8, 10, sse2)
IDCT_ADD_REP_FUNC2(, 8, 10, avx)
ff_h264_luma_dc_dequant_idct_mmx;
ff_h264_luma_dc_dequant_idct_sse2;
ff_h264_loop_filter_strength_mmxext;
LF_FUNC                                        \
void ff_deblock_ ## DIR ## _ ## TYPE ## _ ## DEPTH ## _ ## OPT(uint8_t *pix,  \
int stride,    \
int alpha,     \
int beta,      \
int8_t *tc0);
LF_IFUNC \
void ff_deblock_ ## DIR ## _ ## TYPE ## _ ## DEPTH ## _ ## OPT(uint8_t *pix,  \
int stride,    \
int alpha,     \
int beta);
LF_FUNCS                   \
LF_FUNC(h,  chroma,       depth, mmxext)        \
LF_IFUNC(h, chroma_intra, depth, mmxext)        \
LF_FUNC(v,  chroma,       depth, mmxext)        \
LF_IFUNC(v, chroma_intra, depth, mmxext)        \
LF_FUNC(h,  luma,         depth, mmxext)        \
LF_IFUNC(h, luma_intra,   depth, mmxext)        \
LF_FUNC(h,  luma,         depth, sse2)          \
LF_IFUNC(h, luma_intra,   depth, sse2)          \
LF_FUNC(v,  luma,         depth, sse2)          \
LF_IFUNC(v, luma_intra,   depth, sse2)          \
LF_FUNC(h,  chroma,       depth, sse2)          \
LF_IFUNC(h, chroma_intra, depth, sse2)          \
LF_FUNC(v,  chroma,       depth, sse2)          \
LF_IFUNC(v, chroma_intra, depth, sse2)          \
LF_FUNC(h,  luma,         depth, avx)           \
LF_IFUNC(h, luma_intra,   depth, avx)           \
LF_FUNC(v,  luma,         depth, avx)           \
LF_IFUNC(v, luma_intra,   depth, avx)           \
LF_FUNC(h,  chroma,       depth, avx)           \
LF_IFUNC(h, chroma_intra, depth, avx)           \
LF_FUNC(v,  chroma,       depth, avx)           \
LF_IFUNC(v, chroma_intra, depth, avx)
LF_FUNCS(uint8_t,   8)
LF_FUNCS(uint16_t, 10)
ff_deblock_h_chroma422_8_mmxext;
LF_FUNC
deblock_v_luma_8_mmxext
LF_IFUNC(v8, luma_intra, 8, mmxext)
deblock_v_luma_intra_8_mmxext
LF_FUNC
LF_IFUNC(v, luma_intra, 10, mmxext)
H264_WEIGHT                                             \
void ff_h264_weight_ ## W ## _ ## OPT(uint8_t *dst, ptrdiff_t stride,   \
int height, int log2_denom,       \
int weight, int offset);
H264_BIWEIGHT                                           \
void ff_h264_biweight_ ## W ## _ ## OPT(uint8_t *dst, uint8_t *src,     \
ptrdiff_t stride, int height,   \
int log2_denom, int weightd,    \
int weights, int offset);
H264_BIWEIGHT_MMX                    \
H264_WEIGHT(W, mmxext)                      \
H264_BIWEIGHT(W, mmxext)
H264_BIWEIGHT_MMX_SSE                \
H264_BIWEIGHT_MMX(W)                        \
H264_WEIGHT(W, sse2)                        \
H264_BIWEIGHT(W, sse2)                      \
H264_BIWEIGHT(W, ssse3)
H264_BIWEIGHT_MMX_SSE(16)
H264_BIWEIGHT_MMX_SSE(8)
H264_BIWEIGHT_MMX(4)
H264_WEIGHT_10                                   \
void ff_h264_weight_ ## W ## _ ## DEPTH ## _ ## OPT(uint8_t *dst,       \
ptrdiff_t stride,   \
int height,         \
int log2_denom,     \
int weight,         \
int offset);
H264_BIWEIGHT_10                                 \
void ff_h264_biweight_ ## W ## _ ## DEPTH ## _ ## OPT(uint8_t *dst,     \
uint8_t *src,     \
ptrdiff_t stride, \
int height,       \
int log2_denom,   \
int weightd,      \
int weights,      \
int offset);
H264_BIWEIGHT_10_SSE          \
H264_WEIGHT_10(W, DEPTH, sse2)              \
H264_WEIGHT_10(W, DEPTH, sse4)              \
H264_BIWEIGHT_10(W, DEPTH, sse2)            \
H264_BIWEIGHT_10(W, DEPTH, sse4)
H264_BIWEIGHT_10_SSE(16, 10)
H264_BIWEIGHT_10_SSE(8,  10)
H264_BIWEIGHT_10_SSE(4,  10)
ff_h264dsp_init_x86
