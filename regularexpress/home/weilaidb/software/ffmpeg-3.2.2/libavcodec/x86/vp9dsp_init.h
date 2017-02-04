#define AVCODEC_X86_VP9DSP_INIT_H
cat a##bpp##b
decl_fpel_func \
void ff_vp9_##avg##sz##bpp##_##opt(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my)
decl_mc_func \
void ff_vp9_##avg##_8tap_1d_##dir##_##sz##_##bpp##_##opt(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, const type (*filter)[f_sz])
decl_mc_funcs \
decl_mc_func(put, sz, h, opt, type, fsz, bpp); \
decl_mc_func(avg, sz, h, opt, type, fsz, bpp); \
decl_mc_func(put, sz, v, opt, type, fsz, bpp); \
decl_mc_func(avg, sz, v, opt, type, fsz, bpp)
decl_ipred_fn \
void ff_vp9_ipred_##type##_##sz##x##sz##_##bpp##_##opt(uint8_t *dst, \
ptrdiff_t stride, \
const uint8_t *l, \
const uint8_t *a)
decl_ipred_fns \
decl_ipred_fn(type,  4, bpp, opt4); \
decl_ipred_fn(type,  8, bpp, opt8_16_32); \
decl_ipred_fn(type, 16, bpp, opt8_16_32); \
decl_ipred_fn(type, 32, bpp, opt8_16_32)
decl_itxfm_func \
cat(uint8_t *dst, \
ptrdiff_t stride, \
int16_t *block, \
int eob)
decl_itxfm_funcs \
decl_itxfm_func(idct,  idct,  size, bpp, opt); \
decl_itxfm_func(iadst, idct,  size, bpp, opt); \
decl_itxfm_func(idct,  iadst, size, bpp, opt); \
decl_itxfm_func(iadst, iadst, size, bpp, opt)
mc_rep_func \
static av_always_inline void \
ff_vp9_##avg##_8tap_1d_##dir##_##sz##_##bpp##_##opt(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, const type (*filter)[f_sz]) \
mc_rep_funcs \
mc_rep_func(put, sz, hsz, hszb, h, opt, type, fsz, bpp) \
mc_rep_func(avg, sz, hsz, hszb, h, opt, type, fsz, bpp) \
mc_rep_func(put, sz, hsz, hszb, v, opt, type, fsz, bpp) \
mc_rep_func(avg, sz, hsz, hszb, v, opt, type, fsz, bpp)
filter_8tap_1d_fn \
static void op##_8tap_##fname##_##sz##dir##_##bpp##_##opt(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
filters_8tap_1d_fn \
filter_8tap_1d_fn(op, sz, FILTER_8TAP_REGULAR, f_opt, regular, dir, dvar, bpp, opt) \
filter_8tap_1d_fn(op, sz, FILTER_8TAP_SHARP,   f_opt, sharp,   dir, dvar, bpp, opt) \
filter_8tap_1d_fn(op, sz, FILTER_8TAP_SMOOTH,  f_opt, smooth,  dir, dvar, bpp, opt)
filters_8tap_1d_fn2 \
filters_8tap_1d_fn(op, sz, h, mx, bpp, opt, f_opt) \
filters_8tap_1d_fn(op, sz, v, my, bpp, opt, f_opt)
filters_8tap_1d_fn3 \
filters_8tap_1d_fn2(op, 64, bpp, opt8, f_opt) \
filters_8tap_1d_fn2(op, 32, bpp, opt8, f_opt) \
filters_8tap_1d_fn2(op, 16, bpp, opt8, f_opt) \
filters_8tap_1d_fn2(op, 8, bpp, opt8, f_opt) \
filters_8tap_1d_fn2(op, 4, bpp, opt4, f_opt)
filter_8tap_2d_fn \
static void op##_8tap_##fname##_##sz##hv_##bpp##_##opt(uint8_t *dst, ptrdiff_t dst_stride, \
const uint8_t *src, ptrdiff_t src_stride, \
int h, int mx, int my) \
filters_8tap_2d_fn \
filter_8tap_2d_fn(op, sz, FILTER_8TAP_REGULAR, f_opt, regular, align, bpp, bytes, opt) \
filter_8tap_2d_fn(op, sz, FILTER_8TAP_SHARP,   f_opt, sharp, align, bpp, bytes, opt) \
filter_8tap_2d_fn(op, sz, FILTER_8TAP_SMOOTH,  f_opt, smooth, align, bpp, bytes, opt)
filters_8tap_2d_fn2 \
filters_8tap_2d_fn(op, 64, align, bpp, bytes, opt8, f_opt) \
filters_8tap_2d_fn(op, 32, align, bpp, bytes, opt8, f_opt) \
filters_8tap_2d_fn(op, 16, align, bpp, bytes, opt8, f_opt) \
filters_8tap_2d_fn(op, 8, align, bpp, bytes, opt8, f_opt) \
filters_8tap_2d_fn(op, 4, align, bpp, bytes, opt4, f_opt)
init_fpel_func \
dsp->mc[idx1][FILTER_8TAP_SMOOTH ][idx2][0][0] = \
dsp->mc[idx1][FILTER_8TAP_REGULAR][idx2][0][0] = \
dsp->mc[idx1][FILTER_8TAP_SHARP  ][idx2][0][0] = \
dsp->mc[idx1][FILTER_BILINEAR    ][idx2][0][0] = ff_vp9_##type##sz##bpp##_##opt
init_subpel1 \
dsp->mc[idx1][FILTER_8TAP_SMOOTH ][idx2][idxh][idxv] = \
type##_8tap_smooth_##sz##dir##_##bpp##_##opt; \
dsp->mc[idx1][FILTER_8TAP_REGULAR][idx2][idxh][idxv] = \
type##_8tap_regular_##sz##dir##_##bpp##_##opt; \
dsp->mc[idx1][FILTER_8TAP_SHARP  ][idx2][idxh][idxv] = \
type##_8tap_sharp_##sz##dir##_##bpp##_##opt
init_subpel2 \
init_subpel1(idx1, idx2, 1, 1, sz, hv, type, bpp, opt); \
init_subpel1(idx1, idx2, 0, 1, sz, v,  type, bpp, opt); \
init_subpel1(idx1, idx2, 1, 0, sz, h,  type, bpp, opt)
init_subpel3_32_64 \
init_subpel2(0, idx, 64, type, bpp, opt); \
init_subpel2(1, idx, 32, type, bpp, opt)
init_subpel3_8to64 \
init_subpel3_32_64(idx, type, bpp, opt); \
init_subpel2(2, idx, 16, type, bpp, opt); \
init_subpel2(3, idx,  8, type, bpp, opt)
init_subpel3 \
init_subpel3_8to64(idx, type, bpp, opt); \
init_subpel2(4, idx,  4, type, bpp, opt)
init_ipred_func \
dsp->intra_pred[TX_##sz##X##sz][enum##_PRED] = \
cat(ff_vp9_ipred_##type##_##sz##x##sz##_, bpp, _##opt)
init_8_16_32_ipred_funcs \
init_ipred_func(type, enum,  8, bpp, opt); \
init_ipred_func(type, enum, 16, bpp, opt); \
init_ipred_func(type, enum, 32, bpp, opt)
init_ipred_funcs \
init_ipred_func(type, enum,  4, bpp, opt); \
init_8_16_32_ipred_funcs(type, enum, bpp, opt)
ff_vp9dsp_init_10bpp_x86;
ff_vp9dsp_init_12bpp_x86;
ff_vp9dsp_init_16bpp_x86;
