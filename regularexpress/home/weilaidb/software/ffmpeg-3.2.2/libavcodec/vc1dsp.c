vc1_v_overlap_c
vc1_h_overlap_c
vc1_v_s_overlap_c
vc1_h_s_overlap_c
vc1_filter_line
vc1_loop_filter
vc1_v_loop_filter4_c
vc1_h_loop_filter4_c
vc1_v_loop_filter8_c
vc1_h_loop_filter8_c
vc1_v_loop_filter16_c
vc1_h_loop_filter16_c
vc1_inv_trans_8x8_dc_c
vc1_inv_trans_8x8_c
vc1_inv_trans_8x4_dc_c
vc1_inv_trans_8x4_c
vc1_inv_trans_4x8_dc_c
vc1_inv_trans_4x8_c
vc1_inv_trans_4x4_dc_c
vc1_inv_trans_4x4_c
VC1_MSPEL_FILTER_16B                                       \
static av_always_inline int vc1_mspel_ ## DIR ## _filter_16bits(const TYPE *src, \
int stride,   \
int mode)     \
VC1_MSPEL_FILTER_16B(ver, uint8_t)
VC1_MSPEL_FILTER_16B(hor, int16_t)
vc1_mspel_filter
VC1_MSPEL_MC                                         \
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
op_put (a) = av_clip_uint8(b)
op_avg (a) = ((a) + av_clip_uint8(b) + 1) >> 1
op4_avg (a) = rnd_avg32(a, b)
op4_put (a) = (b)
VC1_MSPEL_MC(op_put, op4_put, put_)
VC1_MSPEL_MC(op_avg, op4_avg, avg_)
PUT_VC1_MSPEL                                                   \
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
chroma_mc \
((A * src[a] + B * src[a + 1] + \
C * src[stride + a] + D * src[stride + a + 1] + 32 - 4) >> 6)
put_no_rnd_vc1_chroma_mc8_c
put_no_rnd_vc1_chroma_mc4_c
avg2 (((a) + (b) + 1) >> 1)
avg_no_rnd_vc1_chroma_mc8_c
avg_no_rnd_vc1_chroma_mc4_c
#if CONFIG_WMV3IMAGE_DECODER || CONFIG_VC1IMAGE_DECODER
sprite_h_c
sprite_v_template
sprite_v_single_c
sprite_v_double_noscale_c
sprite_v_double_onescale_c
sprite_v_double_twoscale_c
FN_ASSIGN \
dsp->put_vc1_mspel_pixels_tab[1][X+4*Y] = put_vc1_mspel_mc##X##Y##_c; \
dsp->put_vc1_mspel_pixels_tab[0][X+4*Y] = put_vc1_mspel_mc##X##Y##_16_c; \
dsp->avg_vc1_mspel_pixels_tab[1][X+4*Y] = avg_vc1_mspel_mc##X##Y##_c; \
dsp->avg_vc1_mspel_pixels_tab[0][X+4*Y] = avg_vc1_mspel_mc##X##Y##_16_c
ff_vc1dsp_init
