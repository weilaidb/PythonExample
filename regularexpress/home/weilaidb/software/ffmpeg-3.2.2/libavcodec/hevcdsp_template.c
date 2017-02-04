FUNC(uint8_t *_dst, ptrdiff_t stride, int width, int height,
GetBitContext *gb, int pcm_bit_depth)
FUNC(uint8_t *_dst, int16_t *coeffs,
ptrdiff_t stride, int size)
FUNC(uint8_t *_dst, int16_t *coeffs,
ptrdiff_t stride)
FUNC(uint8_t *_dst, int16_t *coeffs,
ptrdiff_t stride)
FUNC(uint8_t *_dst, int16_t *coeffs,
ptrdiff_t stride)
FUNC(uint8_t *_dst, int16_t *coeffs,
ptrdiff_t stride)
FUNC(int16_t *_coeffs, int16_t log2_size, int mode)
FUNC(int16_t *_coeffs, int16_t log2_size)
SET   (dst) = (x)
SCALE (dst) = av_clip_int16(((x) + add) >> shift)
ADD_AND_SCALE                                           \
(dst) = av_clip_pixel((dst) + av_clip_int16(((x) + add) >> shift))
TR_4x4_LUMA                             \
do  while (0)
FUNC(int16_t *coeffs)
#undef TR_4x4_LUMA
TR_4                              \
do  while (0)
TR_8                              \
do  while (0)
TR_16                             \
do  while (0)
TR_32                             \
do  while (0)
IDCT_VAR4                                                          \
int      limit2   = FFMIN(col_limit + 4, H)
IDCT_VAR8                                                          \
int      limit   = FFMIN(col_limit, H);                               \
int      limit2   = FFMIN(col_limit + 4, H)
IDCT_VAR16   IDCT_VAR8(H)
IDCT_VAR32   IDCT_VAR8(H)
IDCT                                                              \
FUNC(                                         \
int16_t *coeffs, int col_limit)
IDCT_DC                                                           \
FUNC(                                    \
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
FUNC(uint8_t *_dst, uint8_t *_src,
ptrdiff_t stride_dst, ptrdiff_t stride_src,
int16_t *sao_offset_val, int sao_left_class,
int width, int height)
CMP (((a) > (b)) - ((a) < (b)))
FUNC(uint8_t *_dst, uint8_t *_src, ptrdiff_t stride_dst, int16_t *sao_offset_val,
int eo, int width, int height)
FUNC(uint8_t *_dst, uint8_t *_src,
ptrdiff_t stride_dst, ptrdiff_t stride_src, SAOParams *sao,
int *borders, int _width, int _height,
int c_idx, uint8_t *vert_edge,
uint8_t *horiz_edge, uint8_t *diag_edge)
FUNC(uint8_t *_dst, uint8_t *_src,
ptrdiff_t stride_dst, ptrdiff_t stride_src, SAOParams *sao,
int *borders, int _width, int _height,
int c_idx, uint8_t *vert_edge,
uint8_t *horiz_edge, uint8_t *diag_edge)
#undef CMP
FUNC(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
QPEL_FILTER                                               \
(filter[0] * src[x - 3 * stride] +                                         \
filter[1] * src[x - 2 * stride] +                                         \
filter[2] * src[x -     stride] +                                         \
filter[3] * src[x             ] +                                         \
filter[4] * src[x +     stride] +                                         \
filter[5] * src[x + 2 * stride] +                                         \
filter[6] * src[x + 3 * stride] +                                         \
filter[7] * src[x + 4 * stride])
FUNC(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(int16_t *dst,
uint8_t *_src,
ptrdiff_t _srcstride,
int height, intptr_t mx,
intptr_t my, int width)
FUNC(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox,
intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox,
intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst,  ptrdiff_t _dststride,
uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox,
intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
EPEL_FILTER                                               \
(filter[0] * src[x - stride] +                                             \
filter[1] * src[x]          +                                             \
filter[2] * src[x + stride] +                                             \
filter[3] * src[x + 2 * stride])
FUNC(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(int16_t *dst,
uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int16_t *src2,
int height, int denom, int wx0, int wx1,
int ox0, int ox1, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
int height, int denom, int wx, int ox, intptr_t mx, intptr_t my, int width)
FUNC(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride,
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
FUNC(uint8_t *_pix,
ptrdiff_t _xstride, ptrdiff_t _ystride,
int beta, int *_tc,
uint8_t *_no_p, uint8_t *_no_q)
FUNC(uint8_t *_pix, ptrdiff_t _xstride,
ptrdiff_t _ystride, int *_tc,
uint8_t *_no_p, uint8_t *_no_q)
FUNC(uint8_t *pix, ptrdiff_t stride,
int32_t *tc, uint8_t *no_p,
uint8_t *no_q)
FUNC(uint8_t *pix, ptrdiff_t stride,
int32_t *tc, uint8_t *no_p,
uint8_t *no_q)
FUNC(uint8_t *pix, ptrdiff_t stride,
int beta, int32_t *tc, uint8_t *no_p,
uint8_t *no_q)
FUNC(uint8_t *pix, ptrdiff_t stride,
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
