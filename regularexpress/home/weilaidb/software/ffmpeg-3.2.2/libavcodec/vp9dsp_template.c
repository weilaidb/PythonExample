#if BIT_DEPTH != 12
vert_4x4_c
vert_8x8_c
vert_16x16_c
vert_32x32_c
hor_4x4_c
hor_8x8_c
hor_16x16_c
hor_32x32_c
tm_4x4_c
tm_8x8_c
tm_16x16_c
tm_32x32_c
#if BIT_DEPTH != 12
dc_4x4_c
dc_8x8_c
dc_16x16_c
dc_32x32_c
dc_left_4x4_c
dc_left_8x8_c
dc_left_16x16_c
dc_left_32x32_c
dc_top_4x4_c
dc_top_8x8_c
dc_top_16x16_c
dc_top_32x32_c
dc_128_4x4_c
dc_128_8x8_c
dc_128_16x16_c
dc_128_32x32_c
dc_127_4x4_c
dc_127_8x8_c
dc_127_16x16_c
dc_127_32x32_c
dc_129_4x4_c
dc_129_8x8_c
dc_129_16x16_c
dc_129_32x32_c
#if BIT_DEPTH != 12
#if BIT_DEPTH == 8
#define memset_bpc memset
memset_bpc
DST dst[(x) + (y) * stride]
diag_downleft_4x4_c
def_diag_downleft \
static void diag_downleft_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *left, const uint8_t *_top) \
def_diag_downleft(8)
def_diag_downleft(16)
def_diag_downleft(32)
diag_downright_4x4_c
def_diag_downright \
static void diag_downright_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *_left, const uint8_t *_top) \
def_diag_downright(8)
def_diag_downright(16)
def_diag_downright(32)
vert_right_4x4_c
def_vert_right \
static void vert_right_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *_left, const uint8_t *_top) \
def_vert_right(8)
def_vert_right(16)
def_vert_right(32)
hor_down_4x4_c
def_hor_down \
static void hor_down_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *_left, const uint8_t *_top) \
def_hor_down(8)
def_hor_down(16)
def_hor_down(32)
vert_left_4x4_c
def_vert_left \
static void vert_left_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *left, const uint8_t *_top) \
def_vert_left(8)
def_vert_left(16)
def_vert_left(32)
hor_up_4x4_c
def_hor_up \
static void hor_up_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *_left, const uint8_t *top) \
def_hor_up(8)
def_hor_up(16)
def_hor_up(32)
#undef DST
#if BIT_DEPTH != 8
ff_vp9dsp_intrapred_init_10;
#if BIT_DEPTH != 10
static
FUNC(VP9DSPContext *dsp)
itxfm_wrapper \
static void type_a##_##type_b##_##sz##x##sz##_add_c(uint8_t *_dst, \
ptrdiff_t stride, \
int16_t *_block, int eob) \
itxfm_wrap \
itxfm_wrapper(idct,  idct,  sz, bits, 1) \
itxfm_wrapper(iadst, idct,  sz, bits, 0) \
itxfm_wrapper(idct,  iadst, sz, bits, 0) \
itxfm_wrapper(iadst, iadst, sz, bits, 0)
IN ((dctint) in[(x) * stride])
idct4_1d
iadst4_1d
itxfm_wrap(4, 4)
idct8_1d
iadst8_1d
itxfm_wrap(8, 5)
idct16_1d
iadst16_1d
itxfm_wrap(16, 6)
idct32_1d
itxfm_wrapper(idct, idct, 32, 6, 1)
iwht4_1d
itxfm_wrapper(iwht, iwht, 4, 0, 0)
#undef IN
#undef itxfm_wrapper
#undef itxfm_wrap
vp9dsp_itxfm_init
loop_filter
lf_8_fn \
static void loop_filter_##dir##_##wd##_8_c(uint8_t *_dst, \
ptrdiff_t stride, \
int E, int I, int H) \
lf_8_fns \
lf_8_fn(h, wd, stride, 1) \
lf_8_fn(v, wd, 1, stride)
lf_8_fns(4)
lf_8_fns(8)
lf_8_fns(16)
#undef lf_8_fn
#undef lf_8_fns
lf_16_fn \
static void loop_filter_##dir##_16_16_c(uint8_t *dst, \
ptrdiff_t stride, \
int E, int I, int H) \
lf_16_fn(h, stride)
lf_16_fn(v, sizeof(pixel))
#undef lf_16_fn
lf_mix_fn \
static void loop_filter_##dir##_##wd1##wd2##_16_c(uint8_t *dst, \
ptrdiff_t stride, \
int E, int I, int H) \
lf_mix_fns \
lf_mix_fn(h, wd1, wd2, stride) \
lf_mix_fn(v, wd1, wd2, sizeof(pixel))
lf_mix_fns(4, 4)
lf_mix_fns(4, 8)
lf_mix_fns(8, 4)
lf_mix_fns(8, 8)
#undef lf_mix_fn
#undef lf_mix_fns
vp9dsp_loopfilter_init
#if BIT_DEPTH != 12
copy_c
avg_c
fpel_fn \
static void type##sz##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
copy_avg_fn \
fpel_fn(copy, sz) \
fpel_fn(avg,  sz)
copy_avg_fn(64)
copy_avg_fn(32)
copy_avg_fn(16)
copy_avg_fn(8)
copy_avg_fn(4)
#undef fpel_fn
#undef copy_avg_fn
static const int16_t vp9_subpel_filters[3][16][8] = ;
FILTER_8TAP \
av_clip_pixel((F[0] * src[x + -3 * stride] + \
F[1] * src[x + -2 * stride] + \
F[2] * src[x + -1 * stride] + \
F[3] * src[x + +0 * stride] + \
F[4] * src[x + +1 * stride] + \
F[5] * src[x + +2 * stride] + \
F[6] * src[x + +3 * stride] + \
F[7] * src[x + +4 * stride] + 64) >> 7)
do_8tap_1d_c
filter_8tap_1d_fn \
static av_noinline void opn##_8tap_1d_##dir##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, const int16_t *filter) \
filter_8tap_1d_fn(put, 0, v, src_stride / sizeof(pixel))
filter_8tap_1d_fn(put, 0, h, 1)
filter_8tap_1d_fn(avg, 1, v, src_stride / sizeof(pixel))
filter_8tap_1d_fn(avg, 1, h, 1)
#undef filter_8tap_1d_fn
do_8tap_2d_c
filter_8tap_2d_fn \
static av_noinline void opn##_8tap_2d_hv_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, const int16_t *filterx, \
const int16_t *filtery) \
filter_8tap_2d_fn(put, 0)
filter_8tap_2d_fn(avg, 1)
#undef filter_8tap_2d_fn
filter_fn_1d \
static void avg##_8tap_##type##_##sz##dir##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
filter_fn_2d \
static void avg##_8tap_##type##_##sz##hv_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
#if BIT_DEPTH != 12
FILTER_BILIN \
(src[x] + ((mxy * (src[x + stride] - src[x]) + 8) >> 4))
do_bilin_1d_c
bilin_1d_fn \
static av_noinline void opn##_bilin_1d_##dir##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, int mxy) \
bilin_1d_fn(put, 0, v, src_stride / sizeof(pixel))
bilin_1d_fn(put, 0, h, 1)
bilin_1d_fn(avg, 1, v, src_stride / sizeof(pixel))
bilin_1d_fn(avg, 1, h, 1)
#undef bilin_1d_fn
do_bilin_2d_c
bilin_2d_fn \
static av_noinline void opn##_bilin_2d_hv_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, int mx, int my) \
bilin_2d_fn(put, 0)
bilin_2d_fn(avg, 1)
#undef bilin_2d_fn
bilinf_fn_1d \
static void avg##_bilin_##sz##dir##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
bilinf_fn_2d \
static void avg##_bilin_##sz##hv_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
bilinf_fn_1d
bilinf_fn_2d
filter_fn \
filter_fn_1d(sz, h, mx, regular, FILTER_8TAP_REGULAR, avg) \
filter_fn_1d(sz, v, my, regular, FILTER_8TAP_REGULAR, avg) \
filter_fn_2d(sz,        regular, FILTER_8TAP_REGULAR, avg) \
filter_fn_1d(sz, h, mx, smooth,  FILTER_8TAP_SMOOTH,  avg) \
filter_fn_1d(sz, v, my, smooth,  FILTER_8TAP_SMOOTH,  avg) \
filter_fn_2d(sz,        smooth,  FILTER_8TAP_SMOOTH,  avg) \
filter_fn_1d(sz, h, mx, sharp,   FILTER_8TAP_SHARP,   avg) \
filter_fn_1d(sz, v, my, sharp,   FILTER_8TAP_SHARP,   avg) \
filter_fn_2d(sz,        sharp,   FILTER_8TAP_SHARP,   avg) \
bilinf_fn_1d(sz, h, mx,                               avg) \
bilinf_fn_1d(sz, v, my,                               avg) \
bilinf_fn_2d(sz,                                      avg)
filter_fn_set \
filter_fn(64, avg) \
filter_fn(32, avg) \
filter_fn(16, avg) \
filter_fn(8,  avg) \
filter_fn(4,  avg)
filter_fn_set(put)
filter_fn_set(avg)
#undef filter_fn
#undef filter_fn_set
#undef filter_fn_1d
#undef filter_fn_2d
#undef bilinf_fn_1d
#undef bilinf_fn_2d
#if BIT_DEPTH != 8
ff_vp9dsp_mc_init_10;
#if BIT_DEPTH != 10
static
FUNC(VP9DSPContext *dsp)
do_scaled_8tap_c[8])
scaled_filter_8tap_fn \
static av_noinline void opn##_scaled_8tap_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, int mx, int my, int dx, int dy, \
const int16_t (*filters)[8]) \
scaled_filter_8tap_fn(put, 0)
scaled_filter_8tap_fn(avg, 1)
#undef scaled_filter_8tap_fn
#undef FILTER_8TAP
scaled_filter_fn \
static void avg##_scaled_##type##_##sz##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my, int dx, int dy) \
#if BIT_DEPTH != 12
do_scaled_bilin_c
scaled_bilin_fn \
static av_noinline void opn##_scaled_bilin_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, int mx, int my, int dx, int dy) \
scaled_bilin_fn(put, 0)
scaled_bilin_fn(avg, 1)
#undef scaled_bilin_fn
#undef FILTER_BILIN
scaled_bilinf_fn \
static void avg##_scaled_bilin_##sz##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my, int dx, int dy) \
scaled_bilinf_fn
scaled_filter_fns \
scaled_filter_fn(sz,        regular, FILTER_8TAP_REGULAR, avg) \
scaled_filter_fn(sz,        smooth,  FILTER_8TAP_SMOOTH,  avg) \
scaled_filter_fn(sz,        sharp,   FILTER_8TAP_SHARP,   avg) \
scaled_bilinf_fn(sz,                                      avg)
scaled_filter_fn_set \
scaled_filter_fns(64, avg) \
scaled_filter_fns(32, avg) \
scaled_filter_fns(16, avg) \
scaled_filter_fns(8,  avg) \
scaled_filter_fns(4,  avg)
scaled_filter_fn_set(put)
scaled_filter_fn_set(avg)
#undef scaled_filter_fns
#undef scaled_filter_fn_set
#undef scaled_filter_fn
#undef scaled_bilinf_fn
#if BIT_DEPTH != 8
ff_vp9dsp_scaled_mc_init_10;
#if BIT_DEPTH != 10
static
FUNC(VP9DSPContext *dsp)
FUNC(VP9DSPContext *dsp)
