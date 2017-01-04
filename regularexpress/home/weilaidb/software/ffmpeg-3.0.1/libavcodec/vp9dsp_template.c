#if BIT_DEPTH != 12
static void vert_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *_top)
static void vert_8x8_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *_top)
static void vert_16x16_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *_top)
static void vert_32x32_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *_top)
static void hor_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *top)
static void hor_8x8_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *top)
static void hor_16x16_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *top)
static void hor_32x32_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *top)
static void tm_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *_top)
static void tm_8x8_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *_top)
static void tm_16x16_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *_top)
static void tm_32x32_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *_top)
#if BIT_DEPTH != 12
static void dc_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *_top)
static void dc_8x8_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *_top)
static void dc_16x16_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *_top)
static void dc_32x32_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *_top)
static void dc_left_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *top)
static void dc_left_8x8_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *top)
static void dc_left_16x16_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *top)
static void dc_left_32x32_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *top)
static void dc_top_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *_top)
static void dc_top_8x8_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *_top)
static void dc_top_16x16_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *_top)
static void dc_top_32x32_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *_top)
static void dc_128_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
static void dc_128_8x8_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
static void dc_128_16x16_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
static void dc_128_32x32_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
static void dc_127_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
static void dc_127_8x8_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
static void dc_127_16x16_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
static void dc_127_32x32_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
static void dc_129_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
static void dc_129_8x8_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
static void dc_129_16x16_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
static void dc_129_32x32_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *top)
#if BIT_DEPTH != 12
#if BIT_DEPTH == 8
#define memset_bpc memset
static inline void memset_bpc(uint16_t *dst, int val, int len)
#define DST(x, y) dst[(x) + (y) * stride]
static void diag_downleft_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *_top)
#define def_diag_downleft(size) \
static void diag_downleft_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *left, const uint8_t *_top) \
def_diag_downleft(8)
def_diag_downleft(16)
def_diag_downleft(32)
static void diag_downright_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *_top)
#define def_diag_downright(size) \
static void diag_downright_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *_left, const uint8_t *_top) \
def_diag_downright(8)
def_diag_downright(16)
def_diag_downright(32)
static void vert_right_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *_top)
#define def_vert_right(size) \
static void vert_right_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *_left, const uint8_t *_top) \
def_vert_right(8)
def_vert_right(16)
def_vert_right(32)
static void hor_down_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *_top)
#define def_hor_down(size) \
static void hor_down_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *_left, const uint8_t *_top) \
def_hor_down(8)
def_hor_down(16)
def_hor_down(32)
static void vert_left_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *left, const uint8_t *_top)
#define def_vert_left(size) \
static void vert_left_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *left, const uint8_t *_top) \
def_vert_left(8)
def_vert_left(16)
def_vert_left(32)
static void hor_up_4x4_c(uint8_t *_dst, ptrdiff_t stride,
const uint8_t *_left, const uint8_t *top)
#define def_hor_up(size) \
static void hor_up_##size##x##size##_c(uint8_t *_dst, ptrdiff_t stride, \
const uint8_t *_left, const uint8_t *top) \
def_hor_up(8)
def_hor_up(16)
def_hor_up(32)
#undef DST
#if BIT_DEPTH != 8
void ff_vp9dsp_intrapred_init_10(VP9DSPContext *dsp);
#if BIT_DEPTH != 10
static
av_cold void FUNC(ff_vp9dsp_intrapred_init)(VP9DSPContext *dsp)
#define itxfm_wrapper(type_a, type_b, sz, bits, has_dconly) \
static void type_a##_##type_b##_##sz##x##sz##_add_c(uint8_t *_dst, \
ptrdiff_t stride, \
int16_t *_block, int eob) \
#define itxfm_wrap(sz, bits) \
itxfm_wrapper(idct,  idct,  sz, bits, 1) \
itxfm_wrapper(iadst, idct,  sz, bits, 0) \
itxfm_wrapper(idct,  iadst, sz, bits, 0) \
itxfm_wrapper(iadst, iadst, sz, bits, 0)
#define IN(x) ((dctint) in[(x) * stride])
static av_always_inline void idct4_1d(const dctcoef *in, ptrdiff_t stride,
dctcoef *out, int pass)
static av_always_inline void iadst4_1d(const dctcoef *in, ptrdiff_t stride,
dctcoef *out, int pass)
itxfm_wrap(4, 4)
static av_always_inline void idct8_1d(const dctcoef *in, ptrdiff_t stride,
dctcoef *out, int pass)
static av_always_inline void iadst8_1d(const dctcoef *in, ptrdiff_t stride,
dctcoef *out, int pass)
itxfm_wrap(8, 5)
static av_always_inline void idct16_1d(const dctcoef *in, ptrdiff_t stride,
dctcoef *out, int pass)
static av_always_inline void iadst16_1d(const dctcoef *in, ptrdiff_t stride,
dctcoef *out, int pass)
itxfm_wrap(16, 6)
static av_always_inline void idct32_1d(const dctcoef *in, ptrdiff_t stride,
dctcoef *out, int pass)
itxfm_wrapper(idct, idct, 32, 6, 1)
static av_always_inline void iwht4_1d(const dctcoef *in, ptrdiff_t stride,
dctcoef *out, int pass)
itxfm_wrapper(iwht, iwht, 4, 0, 0)
#undef IN
#undef itxfm_wrapper
#undef itxfm_wrap
static av_cold void vp9dsp_itxfm_init(VP9DSPContext *dsp)
static av_always_inline void loop_filter(pixel *dst, int E, int I, int H,
ptrdiff_t stridea, ptrdiff_t strideb,
int wd)
#define lf_8_fn(dir, wd, stridea, strideb) \
static void loop_filter_##dir##_##wd##_8_c(uint8_t *_dst, \
ptrdiff_t stride, \
int E, int I, int H) \
#define lf_8_fns(wd) \
lf_8_fn(h, wd, stride, 1) \
lf_8_fn(v, wd, 1, stride)
lf_8_fns(4)
lf_8_fns(8)
lf_8_fns(16)
#undef lf_8_fn
#undef lf_8_fns
#define lf_16_fn(dir, stridea) \
static void loop_filter_##dir##_16_16_c(uint8_t *dst, \
ptrdiff_t stride, \
int E, int I, int H) \
lf_16_fn(h, stride)
lf_16_fn(v, sizeof(pixel))
#undef lf_16_fn
#define lf_mix_fn(dir, wd1, wd2, stridea) \
static void loop_filter_##dir##_##wd1##wd2##_16_c(uint8_t *dst, \
ptrdiff_t stride, \
int E, int I, int H) \
#define lf_mix_fns(wd1, wd2) \
lf_mix_fn(h, wd1, wd2, stride) \
lf_mix_fn(v, wd1, wd2, sizeof(pixel))
lf_mix_fns(4, 4)
lf_mix_fns(4, 8)
lf_mix_fns(8, 4)
lf_mix_fns(8, 8)
#undef lf_mix_fn
#undef lf_mix_fns
static av_cold void vp9dsp_loopfilter_init(VP9DSPContext *dsp)
#if BIT_DEPTH != 12
static av_always_inline void copy_c(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int w, int h)
static av_always_inline void avg_c(uint8_t *_dst, ptrdiff_t dst_stride,
const uint8_t *_src, ptrdiff_t src_stride,
int w, int h)
#define fpel_fn(type, sz) \
static void type##sz##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
#define copy_avg_fn(sz) \
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
#define FILTER_8TAP(src, x, F, stride) \
av_clip_pixel((F[0] * src[x + -3 * stride] + \
F[1] * src[x + -2 * stride] + \
F[2] * src[x + -1 * stride] + \
F[3] * src[x + +0 * stride] + \
F[4] * src[x + +1 * stride] + \
F[5] * src[x + +2 * stride] + \
F[6] * src[x + +3 * stride] + \
F[7] * src[x + +4 * stride] + 64) >> 7)
static av_always_inline void do_8tap_1d_c(uint8_t *_dst, ptrdiff_t dst_stride,
const uint8_t *_src, ptrdiff_t src_stride,
int w, int h, ptrdiff_t ds,
const int16_t *filter, int avg)
#define filter_8tap_1d_fn(opn, opa, dir, ds) \
static av_noinline void opn##_8tap_1d_##dir##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, const int16_t *filter) \
filter_8tap_1d_fn(put, 0, v, src_stride / sizeof(pixel))
filter_8tap_1d_fn(put, 0, h, 1)
filter_8tap_1d_fn(avg, 1, v, src_stride / sizeof(pixel))
filter_8tap_1d_fn(avg, 1, h, 1)
#undef filter_8tap_1d_fn
static av_always_inline void do_8tap_2d_c(uint8_t *_dst, ptrdiff_t dst_stride,
const uint8_t *_src, ptrdiff_t src_stride,
int w, int h, const int16_t *filterx,
const int16_t *filtery, int avg)
#define filter_8tap_2d_fn(opn, opa) \
static av_noinline void opn##_8tap_2d_hv_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, const int16_t *filterx, \
const int16_t *filtery) \
filter_8tap_2d_fn(put, 0)
filter_8tap_2d_fn(avg, 1)
#undef filter_8tap_2d_fn
#define filter_fn_1d(sz, dir, dir_m, type, type_idx, avg) \
static void avg##_8tap_##type##_##sz##dir##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
#define filter_fn_2d(sz, type, type_idx, avg) \
static void avg##_8tap_##type##_##sz##hv_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
#if BIT_DEPTH != 12
#define FILTER_BILIN(src, x, mxy, stride) \
(src[x] + ((mxy * (src[x + stride] - src[x]) + 8) >> 4))
static av_always_inline void do_bilin_1d_c(uint8_t *_dst, ptrdiff_t dst_stride,
const uint8_t *_src, ptrdiff_t src_stride,
int w, int h, ptrdiff_t ds, int mxy, int avg)
#define bilin_1d_fn(opn, opa, dir, ds) \
static av_noinline void opn##_bilin_1d_##dir##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, int mxy) \
bilin_1d_fn(put, 0, v, src_stride / sizeof(pixel))
bilin_1d_fn(put, 0, h, 1)
bilin_1d_fn(avg, 1, v, src_stride / sizeof(pixel))
bilin_1d_fn(avg, 1, h, 1)
#undef bilin_1d_fn
static av_always_inline void do_bilin_2d_c(uint8_t *_dst, ptrdiff_t dst_stride,
const uint8_t *_src, ptrdiff_t src_stride,
int w, int h, int mx, int my, int avg)
#define bilin_2d_fn(opn, opa) \
static av_noinline void opn##_bilin_2d_hv_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, int mx, int my) \
bilin_2d_fn(put, 0)
bilin_2d_fn(avg, 1)
#undef bilin_2d_fn
#define bilinf_fn_1d(sz, dir, dir_m, avg) \
static void avg##_bilin_##sz##dir##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
#define bilinf_fn_2d(sz, avg) \
static void avg##_bilin_##sz##hv_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
#define bilinf_fn_1d(a, b, c, d)
#define bilinf_fn_2d(a, b)
#define filter_fn(sz, avg) \
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
#define filter_fn_set(avg) \
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
void ff_vp9dsp_mc_init_10(VP9DSPContext *dsp);
#if BIT_DEPTH != 10
static
av_cold void FUNC(ff_vp9dsp_mc_init)(VP9DSPContext *dsp)
static av_always_inline void do_scaled_8tap_c(uint8_t *_dst, ptrdiff_t dst_stride,
const uint8_t *_src, ptrdiff_t src_stride,
int w, int h, int mx, int my,
int dx, int dy, int avg,
const int16_t (*filters)[8])
#define scaled_filter_8tap_fn(opn, opa) \
static av_noinline void opn##_scaled_8tap_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, int mx, int my, int dx, int dy, \
const int16_t (*filters)[8]) \
scaled_filter_8tap_fn(put, 0)
scaled_filter_8tap_fn(avg, 1)
#undef scaled_filter_8tap_fn
#undef FILTER_8TAP
#define scaled_filter_fn(sz, type, type_idx, avg) \
static void avg##_scaled_##type##_##sz##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my, int dx, int dy) \
#if BIT_DEPTH != 12
static av_always_inline void do_scaled_bilin_c(uint8_t *_dst, ptrdiff_t dst_stride,
const uint8_t *_src, ptrdiff_t src_stride,
int w, int h, int mx, int my,
int dx, int dy, int avg)
#define scaled_bilin_fn(opn, opa) \
static av_noinline void opn##_scaled_bilin_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int w, int h, int mx, int my, int dx, int dy) \
scaled_bilin_fn(put, 0)
scaled_bilin_fn(avg, 1)
#undef scaled_bilin_fn
#undef FILTER_BILIN
#define scaled_bilinf_fn(sz, avg) \
static void avg##_scaled_bilin_##sz##_c(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my, int dx, int dy) \
#define scaled_bilinf_fn(a, b)
#define scaled_filter_fns(sz, avg) \
scaled_filter_fn(sz,        regular, FILTER_8TAP_REGULAR, avg) \
scaled_filter_fn(sz,        smooth,  FILTER_8TAP_SMOOTH,  avg) \
scaled_filter_fn(sz,        sharp,   FILTER_8TAP_SHARP,   avg) \
scaled_bilinf_fn(sz,                                      avg)
#define scaled_filter_fn_set(avg) \
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
void ff_vp9dsp_scaled_mc_init_10(VP9DSPContext *dsp);
#if BIT_DEPTH != 10
static
av_cold void FUNC(ff_vp9dsp_scaled_mc_init)(VP9DSPContext *dsp)
av_cold void FUNC(ff_vp9dsp_init)(VP9DSPContext *dsp)
