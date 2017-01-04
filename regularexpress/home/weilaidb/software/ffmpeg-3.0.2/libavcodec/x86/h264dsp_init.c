#define IDCT_ADD_FUNC(NUM, DEPTH, OPT)                                  \
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
#define IDCT_ADD_REP_FUNC(NUM, REP, DEPTH, OPT)                         \
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
#define IDCT_ADD_REP_FUNC2(NUM, REP, DEPTH, OPT)                      \
void ff_h264_idct ## NUM ## _add ## REP ## _ ## DEPTH ## _ ## OPT     \
(uint8_t **dst, const int *block_offset,                          \
int16_t *block, int stride, const uint8_t nnzc[6 * 8]);
IDCT_ADD_REP_FUNC2(, 8, 8, mmx)
IDCT_ADD_REP_FUNC2(, 8, 8, mmxext)
IDCT_ADD_REP_FUNC2(, 8, 8, sse2)
IDCT_ADD_REP_FUNC2(, 8, 10, sse2)
IDCT_ADD_REP_FUNC2(, 8, 10, avx)
void ff_h264_luma_dc_dequant_idct_mmx(int16_t *output, int16_t *input, int qmul);
void ff_h264_luma_dc_dequant_idct_sse2(int16_t *output, int16_t *input, int qmul);
void ff_h264_loop_filter_strength_mmxext(int16_t bS[2][4][4], uint8_t nnz[40],
int8_t ref[2][40],
int16_t mv[2][40][2],
int bidir, int edges, int step,
int mask_mv0, int mask_mv1, int field);
#define LF_FUNC(DIR, TYPE, DEPTH, OPT)                                        \
void ff_deblock_ ## DIR ## _ ## TYPE ## _ ## DEPTH ## _ ## OPT(uint8_t *pix,  \
int stride,    \
int alpha,     \
int beta,      \
int8_t *tc0);
#define LF_IFUNC(DIR, TYPE, DEPTH, OPT) \
void ff_deblock_ ## DIR ## _ ## TYPE ## _ ## DEPTH ## _ ## OPT(uint8_t *pix,  \
int stride,    \
int alpha,     \
int beta);
#define LF_FUNCS(type, depth)                   \
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
void ff_deblock_h_chroma422_8_mmxext(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0);
#if ARCH_X86_32 && HAVE_MMXEXT_EXTERNAL
LF_FUNC(v8, luma, 8, mmxext)
static void deblock_v_luma_8_mmxext(uint8_t *pix, int stride, int alpha,
int beta, int8_t *tc0)
LF_IFUNC(v8, luma_intra, 8, mmxext)
static void deblock_v_luma_intra_8_mmxext(uint8_t *pix, int stride,
int alpha, int beta)
LF_FUNC(v,  luma,       10, mmxext)
LF_IFUNC(v, luma_intra, 10, mmxext)
#define H264_WEIGHT(W, OPT)                                             \
void ff_h264_weight_ ## W ## _ ## OPT(uint8_t *dst, int stride,         \
int height, int log2_denom,       \
int weight, int offset);
#define H264_BIWEIGHT(W, OPT)                                           \
void ff_h264_biweight_ ## W ## _ ## OPT(uint8_t *dst, uint8_t *src,     \
int stride, int height,         \
int log2_denom, int weightd,    \
int weights, int offset);
#define H264_BIWEIGHT_MMX(W)                    \
H264_WEIGHT(W, mmxext)                      \
H264_BIWEIGHT(W, mmxext)
#define H264_BIWEIGHT_MMX_SSE(W)                \
H264_BIWEIGHT_MMX(W)                        \
H264_WEIGHT(W, sse2)                        \
H264_BIWEIGHT(W, sse2)                      \
H264_BIWEIGHT(W, ssse3)
H264_BIWEIGHT_MMX_SSE(16)
H264_BIWEIGHT_MMX_SSE(8)
H264_BIWEIGHT_MMX(4)
#define H264_WEIGHT_10(W, DEPTH, OPT)                                   \
void ff_h264_weight_ ## W ## _ ## DEPTH ## _ ## OPT(uint8_t *dst,       \
int stride,         \
int height,         \
int log2_denom,     \
int weight,         \
int offset);
#define H264_BIWEIGHT_10(W, DEPTH, OPT)                                 \
void ff_h264_biweight_ ## W ## _ ## DEPTH ## _ ## OPT(uint8_t *dst,     \
uint8_t *src,     \
int stride,       \
int height,       \
int log2_denom,   \
int weightd,      \
int weights,      \
int offset);
#define H264_BIWEIGHT_10_SSE(W, DEPTH)          \
H264_WEIGHT_10(W, DEPTH, sse2)              \
H264_WEIGHT_10(W, DEPTH, sse4)              \
H264_BIWEIGHT_10(W, DEPTH, sse2)            \
H264_BIWEIGHT_10(W, DEPTH, sse4)
H264_BIWEIGHT_10_SSE(16, 10)
H264_BIWEIGHT_10_SSE(8,  10)
H264_BIWEIGHT_10_SSE(4,  10)
av_cold void ff_h264dsp_init_x86(H264DSPContext *c, const int bit_depth,
const int chroma_format_idc)
