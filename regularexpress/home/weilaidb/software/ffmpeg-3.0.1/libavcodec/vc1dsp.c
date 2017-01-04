static void vc1_v_overlap_c(uint8_t *src, int stride)
static void vc1_h_overlap_c(uint8_t *src, int stride)
static void vc1_v_s_overlap_c(int16_t *top, int16_t *bottom)
static void vc1_h_s_overlap_c(int16_t *left, int16_t *right)
static av_always_inline int vc1_filter_line(uint8_t *src, int stride, int pq)
static inline void vc1_loop_filter(uint8_t *src, int step, int stride,
int len, int pq)
static void vc1_v_loop_filter4_c(uint8_t *src, int stride, int pq)
static void vc1_h_loop_filter4_c(uint8_t *src, int stride, int pq)
static void vc1_v_loop_filter8_c(uint8_t *src, int stride, int pq)
static void vc1_h_loop_filter8_c(uint8_t *src, int stride, int pq)
static void vc1_v_loop_filter16_c(uint8_t *src, int stride, int pq)
static void vc1_h_loop_filter16_c(uint8_t *src, int stride, int pq)
static void vc1_inv_trans_8x8_dc_c(uint8_t *dest, int linesize, int16_t *block)
static void vc1_inv_trans_8x8_c(int16_t block[64])
static void vc1_inv_trans_8x4_dc_c(uint8_t *dest, int linesize, int16_t *block)
static void vc1_inv_trans_8x4_c(uint8_t *dest, int linesize, int16_t *block)
static void vc1_inv_trans_4x8_dc_c(uint8_t *dest, int linesize, int16_t *block)
static void vc1_inv_trans_4x8_c(uint8_t *dest, int linesize, int16_t *block)
static void vc1_inv_trans_4x4_dc_c(uint8_t *dest, int linesize, int16_t *block)
static void vc1_inv_trans_4x4_c(uint8_t *dest, int linesize, int16_t *block)
#define VC1_MSPEL_FILTER_16B(DIR, TYPE)                                       \
static av_always_inline int vc1_mspel_ ## DIR ## _filter_16bits(const TYPE *src, \
int stride,   \
int mode)     \
VC1_MSPEL_FILTER_16B(ver, uint8_t)
VC1_MSPEL_FILTER_16B(hor, int16_t)
static av_always_inline int vc1_mspel_filter(const uint8_t *src, int stride,
int mode, int r)
#define VC1_MSPEL_MC(OP, OP4, OPNAME)                                         \
static av_always_inline void OPNAME ## vc1_mspel_mc(uint8_t *dst,             \
const uint8_t *src,       \
ptrdiff_t stride,         \
int hmode,                \
int vmode,                \
int rnd)                  \
\
static av_always_inline void OPNAME ## vc1_mspel_mc_16(uint8_t *dst,          \
const uint8_t *src,    \
ptrdiff_t stride,      \
int hmode,             \
int vmode,             \
int rnd)               \
\
static void OPNAME ## pixels8x8_c(uint8_t *block, const uint8_t *pixels, ptrdiff_t line_size, int rnd)\
static void OPNAME ## pixels16x16_c(uint8_t *block, const uint8_t *pixels, ptrdiff_t line_size, int rnd)
#define op_put(a, b) (a) = av_clip_uint8(b)
#define op_avg(a, b) (a) = ((a) + av_clip_uint8(b) + 1) >> 1
#define op4_avg(a, b) (a) = rnd_avg32(a, b)
#define op4_put(a, b) (a) = (b)
VC1_MSPEL_MC(op_put, op4_put, put_)
VC1_MSPEL_MC(op_avg, op4_avg, avg_)
#define PUT_VC1_MSPEL(a, b)                                                   \
static void put_vc1_mspel_mc ## a ## b ## _c(uint8_t *dst,                    \
const uint8_t *src,              \
ptrdiff_t stride, int rnd)       \
\
static void avg_vc1_mspel_mc ## a ## b ## _c(uint8_t *dst,                    \
const uint8_t *src,              \
ptrdiff_t stride, int rnd)       \
\
static void put_vc1_mspel_mc ## a ## b ## _16_c(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride, int rnd)    \
\
static void avg_vc1_mspel_mc ## a ## b ## _16_c(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride, int rnd)    \
PUT_VC1_MSPEL(1, 0)
PUT_VC1_MSPEL(2, 0)
PUT_VC1_MSPEL(3, 0)
PUT_VC1_MSPEL(0, 1)
PUT_VC1_MSPEL(1, 1)
PUT_VC1_MSPEL(2, 1)
PUT_VC1_MSPEL(3, 1)
PUT_VC1_MSPEL(0, 2)
PUT_VC1_MSPEL(1, 2)
PUT_VC1_MSPEL(2, 2)
PUT_VC1_MSPEL(3, 2)
PUT_VC1_MSPEL(0, 3)
PUT_VC1_MSPEL(1, 3)
PUT_VC1_MSPEL(2, 3)
PUT_VC1_MSPEL(3, 3)
#define chroma_mc(a) \
((A * src[a] + B * src[a + 1] + \
C * src[stride + a] + D * src[stride + a + 1] + 32 - 4) >> 6)
static void put_no_rnd_vc1_chroma_mc8_c(uint8_t *dst,
uint8_t *src,
int stride, int h, int x, int y)
static void put_no_rnd_vc1_chroma_mc4_c(uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y)
#define avg2(a, b) (((a) + (b) + 1) >> 1)
static void avg_no_rnd_vc1_chroma_mc8_c(uint8_t *dst,
uint8_t *src,
int stride, int h, int x, int y)
static void avg_no_rnd_vc1_chroma_mc4_c(uint8_t *dst,
uint8_t *src,
int stride, int h, int x, int y)
#if CONFIG_WMV3IMAGE_DECODER || CONFIG_VC1IMAGE_DECODER
static void sprite_h_c(uint8_t *dst, const uint8_t *src, int offset,
int advance, int count)
static av_always_inline void sprite_v_template(uint8_t *dst,
const uint8_t *src1a,
const uint8_t *src1b,
int offset1,
int two_sprites,
const uint8_t *src2a,
const uint8_t *src2b,
int offset2,
int alpha, int scaled,
int width)
static void sprite_v_single_c(uint8_t *dst, const uint8_t *src1a,
const uint8_t *src1b,
int offset, int width)
static void sprite_v_double_noscale_c(uint8_t *dst, const uint8_t *src1a,
const uint8_t *src2a,
int alpha, int width)
static void sprite_v_double_onescale_c(uint8_t *dst,
const uint8_t *src1a,
const uint8_t *src1b,
int offset1,
const uint8_t *src2a,
int alpha, int width)
static void sprite_v_double_twoscale_c(uint8_t *dst,
const uint8_t *src1a,
const uint8_t *src1b,
int offset1,
const uint8_t *src2a,
const uint8_t *src2b,
int offset2,
int alpha,
int width)
#define FN_ASSIGN(X, Y) \
dsp->put_vc1_mspel_pixels_tab[1][X+4*Y] = put_vc1_mspel_mc##X##Y##_c; \
dsp->put_vc1_mspel_pixels_tab[0][X+4*Y] = put_vc1_mspel_mc##X##Y##_16_c; \
dsp->avg_vc1_mspel_pixels_tab[1][X+4*Y] = avg_vc1_mspel_mc##X##Y##_c; \
dsp->avg_vc1_mspel_pixels_tab[0][X+4*Y] = avg_vc1_mspel_mc##X##Y##_16_c
av_cold void ff_vc1dsp_init(VC1DSPContext *dsp)
