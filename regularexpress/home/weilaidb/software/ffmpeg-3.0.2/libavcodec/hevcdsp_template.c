static void FUNC(put_pcm)(uint8_t *_dst, ptrdiff_t stride, int width, int height,
GetBitContext *gb, int pcm_bit_depth)
static av_always_inline void FUNC(transquant_bypass)(uint8_t *_dst, int16_t *coeffs,
ptrdiff_t stride, int size)
static void FUNC(transform_add4x4)(uint8_t *_dst, int16_t *coeffs,
ptrdiff_t stride)
static void FUNC(transform_add8x8)(uint8_t *_dst, int16_t *coeffs,
ptrdiff_t stride)
static void FUNC(transform_add16x16)(uint8_t *_dst, int16_t *coeffs,
ptrdiff_t stride)
static void FUNC(transform_add32x32)(uint8_t *_dst, int16_t *coeffs,
ptrdiff_t stride)
static void FUNC(transform_rdpcm)(int16_t *_coeffs, int16_t log2_size, int mode)
static void FUNC(transform_skip)(int16_t *_coeffs, int16_t log2_size)
#define SET(dst, x)   (dst) = (x)
#define SCALE(dst, x) (dst) = av_clip_int16(((x) + add) >> shift)
#define ADD_AND_SCALE(dst, x)                                           \
(dst) = av_clip_pixel((dst) + av_clip_int16(((x) + add) >> shift))
#define TR_4x4_LUMA(dst, src, step, assign)                             \
do  while (0)
static void FUNC(transform_4x4_luma)(int16_t *coeffs)
#undef TR_4x4_LUMA
#define TR_4(dst, src, dstep, sstep, assign, end)                              \
do  while (0)
#define TR_8(dst, src, dstep, sstep, assign, end)                              \
do  while (0)
#define TR_16(dst, src, dstep, sstep, assign, end)                             \
do  while (0)
#define TR_32(dst, src, dstep, sstep, assign, end)                             \
do  while (0)
#define IDCT_VAR4(H)                                                          \
int      limit2   = FFMIN(col_limit + 4, H)
#define IDCT_VAR8(H)                                                          \
int      limit   = FFMIN(col_limit, H);                               \
int      limit2   = FFMIN(col_limit + 4, H)
#define IDCT_VAR16(H)   IDCT_VAR8(H)
#define IDCT_VAR32(H)   IDCT_VAR8(H)
#define IDCT(H)                                                              \
static void FUNC(idct_##H ##x ##H )(                                         \
int16_t *coeffs, int col_limit)
#define IDCT_DC(H)                                                           \
static void FUNC(idct_##H ##x ##H ##_dc)(                                    \
int16_t *coeffs)
IDCT( 4)
IDCT( 8)
IDCT(16)
IDCT(32)
IDCT_DC( 4)
IDCT_DC( 8)
IDCT_DC(16)
IDCT_DC(32)
#undef TR_4
#undef TR_8
#undef TR_16
#undef TR_32
#undef SET
#undef SCALE
#undef ADD_AND_SCALE
static void FUNC(sao_band_filter)(uint8_t *_dst, uint8_t *_src,
ptrdiff_t stride_dst, ptrdiff_t stride_src,
int16_t *sao_offset_val, int sao_left_class,
int width, int height)
#define CMP(a, b) (((a) > (b)) - ((a) < (b)))
static void FUNC(sao_edge_filter)(uint8_t *_dst, uint8_t *_src, ptrdiff_t stride_dst, int16_t *sao_offset_val,
int eo, int width, int height)
static void FUNC(sao_edge_restore_0)(uint8_t *_dst, uint8_t *_src,
ptrdiff_t stride_dst, ptrdiff_t stride_src, SAOParams *sao,
int *borders, int _width, int _height,
int c_idx, uint8_t *vert_edge,
uint8_t *horiz_edge, uint8_t *diag_edge)
static void FUNC(sao_edge_restore_1)(uint8_t *_dst, uint8_t *_src,
ptrdiff_t stride_dst, ptrdiff_t stride_src, SAOParams *sao,
int *borders, int _width, int _height,
int c_idx, uint8_t *vert_edge,
uint8_t *horiz_edge, uint8_t *diag_edge)
#undef CMP
static void FUNC(put_hevc_pel_pixels)(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_pel_uni_pixels)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_pel_bi_pixels)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_pel_uni_w_pixels)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_pel_bi_w_pixels)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
#define QPEL_FILTER(src, stride)                                               \
(filter[0] * src[x - 3 * stride] +                                         \
filter[1] * src[x - 2 * stride] +                                         \
filter[2] * src[x -     stride] +                                         \
filter[3] * src[x             ] +                                         \
filter[4] * src[x +     stride] +                                         \
filter[5] * src[x + 2 * stride] +                                         \
filter[6] * src[x + 3 * stride] +                                         \
filter[7] * src[x + 4 * stride])
static void FUNC(put_hevc_qpel_h)(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_v)(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_hv)(int16_t *dst,
uint8_t *_src,
ptrdiff_t _srcstride,
int height, intptr_t mx,
intptr_t my, int width)
static void FUNC(put_hevc_qpel_uni_h)(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_bi_h)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_uni_v)(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_bi_v)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_uni_hv)(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_bi_hv)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_uni_w_h)(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox,
intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_bi_w_h)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_uni_w_v)(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox,
intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_bi_w_v)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_uni_w_hv)(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox,
intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_qpel_bi_w_hv)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
#define EPEL_FILTER(src, stride)                                               \
(filter[0] * src[x - stride] +                                             \
filter[1] * src[x]          +                                             \
filter[2] * src[x + stride] +                                             \
filter[3] * src[x + 2 * stride])
static void FUNC(put_hevc_epel_h)(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_v)(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_hv)(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_uni_h)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_bi_h)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_uni_v)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_bi_v)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_uni_hv)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_bi_hv)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_uni_w_h)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_bi_w_h)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_uni_w_v)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_bi_w_v)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_uni_w_hv)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox, intptr_t mx, intptr_t my, int width)
static void FUNC(put_hevc_epel_bi_w_hv)(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
#define P3 pix[-4 * xstride]
#define P2 pix[-3 * xstride]
#define P1 pix[-2 * xstride]
#define P0 pix[-1 * xstride]
#define Q0 pix[0 * xstride]
#define Q1 pix[1 * xstride]
#define Q2 pix[2 * xstride]
#define Q3 pix[3 * xstride]
#define TP3 pix[-4 * xstride + 3 * ystride]
#define TP2 pix[-3 * xstride + 3 * ystride]
#define TP1 pix[-2 * xstride + 3 * ystride]
#define TP0 pix[-1 * xstride + 3 * ystride]
#define TQ0 pix[0  * xstride + 3 * ystride]
#define TQ1 pix[1  * xstride + 3 * ystride]
#define TQ2 pix[2  * xstride + 3 * ystride]
#define TQ3 pix[3  * xstride + 3 * ystride]
static void FUNC(hevc_loop_filter_luma)(uint8_t *_pix,
ptrdiff_t _xstride, ptrdiff_t _ystride,
int beta, int *_tc,
uint8_t *_no_p, uint8_t *_no_q)
static void FUNC(hevc_loop_filter_chroma)(uint8_t *_pix, ptrdiff_t _xstride,
ptrdiff_t _ystride, int *_tc,
uint8_t *_no_p, uint8_t *_no_q)
static void FUNC(hevc_h_loop_filter_chroma)(uint8_t *pix, ptrdiff_t stride,
int32_t *tc, uint8_t *no_p,
uint8_t *no_q)
static void FUNC(hevc_v_loop_filter_chroma)(uint8_t *pix, ptrdiff_t stride,
int32_t *tc, uint8_t *no_p,
uint8_t *no_q)
static void FUNC(hevc_h_loop_filter_luma)(uint8_t *pix, ptrdiff_t stride,
int beta, int32_t *tc, uint8_t *no_p,
uint8_t *no_q)
static void FUNC(hevc_v_loop_filter_luma)(uint8_t *pix, ptrdiff_t stride,
int beta, int32_t *tc, uint8_t *no_p,
uint8_t *no_q)
#undef P3
#undef P2
#undef P1
#undef P0
#undef Q0
#undef Q1
#undef Q2
#undef Q3
#undef TP3
#undef TP2
#undef TP1
#undef TP0
#undef TQ0
#undef TQ1
#undef TQ2
#undef TQ3
