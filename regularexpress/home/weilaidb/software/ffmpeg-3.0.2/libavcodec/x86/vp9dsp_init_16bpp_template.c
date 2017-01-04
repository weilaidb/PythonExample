#if HAVE_YASM
extern const int16_t ff_filters_16bpp[3][15][4][16];
decl_mc_funcs(4, sse2, int16_t, 16, BPC);
decl_mc_funcs(8, sse2, int16_t, 16, BPC);
decl_mc_funcs(16, avx2, int16_t, 16, BPC);
mc_rep_funcs(16,  8, 16, sse2, int16_t, 16, BPC)
mc_rep_funcs(32, 16, 32, sse2, int16_t, 16, BPC)
mc_rep_funcs(64, 32, 64, sse2, int16_t, 16, BPC)
#if HAVE_AVX2_EXTERNAL
mc_rep_funcs(32, 16, 32, avx2, int16_t, 16, BPC)
mc_rep_funcs(64, 32, 64, avx2, int16_t, 16, BPC)
filters_8tap_2d_fn2(put, 16, BPC, 2, sse2, sse2, 16bpp)
filters_8tap_2d_fn2(avg, 16, BPC, 2, sse2, sse2, 16bpp)
#if HAVE_AVX2_EXTERNAL
filters_8tap_2d_fn(put, 64, 32, BPC, 2, avx2, 16bpp)
filters_8tap_2d_fn(avg, 64, 32, BPC, 2, avx2, 16bpp)
filters_8tap_2d_fn(put, 32, 32, BPC, 2, avx2, 16bpp)
filters_8tap_2d_fn(avg, 32, 32, BPC, 2, avx2, 16bpp)
filters_8tap_2d_fn(put, 16, 32, BPC, 2, avx2, 16bpp)
filters_8tap_2d_fn(avg, 16, 32, BPC, 2, avx2, 16bpp)
filters_8tap_1d_fn3(put, BPC, sse2, sse2, 16bpp)
filters_8tap_1d_fn3(avg, BPC, sse2, sse2, 16bpp)
#if HAVE_AVX2_EXTERNAL
filters_8tap_1d_fn2(put, 64, BPC, avx2, 16bpp)
filters_8tap_1d_fn2(avg, 64, BPC, avx2, 16bpp)
filters_8tap_1d_fn2(put, 32, BPC, avx2, 16bpp)
filters_8tap_1d_fn2(avg, 32, BPC, avx2, 16bpp)
filters_8tap_1d_fn2(put, 16, BPC, avx2, 16bpp)
filters_8tap_1d_fn2(avg, 16, BPC, avx2, 16bpp)
#define decl_lpf_func(dir, wd, bpp, opt) \
void ff_vp9_loop_filter_##dir##_##wd##_##bpp##_##opt(uint8_t *dst, ptrdiff_t stride, \
int E, int I, int H)
#define decl_lpf_funcs(dir, wd, bpp) \
decl_lpf_func(dir, wd, bpp, sse2); \
decl_lpf_func(dir, wd, bpp, ssse3); \
decl_lpf_func(dir, wd, bpp, avx)
#define decl_lpf_funcs_wd(dir) \
decl_lpf_funcs(dir,  4, BPC); \
decl_lpf_funcs(dir,  8, BPC); \
decl_lpf_funcs(dir, 16, BPC)
decl_lpf_funcs_wd(h);
decl_lpf_funcs_wd(v);
#define lpf_16_wrapper(dir, off, bpp, opt) \
static void loop_filter_##dir##_16_##bpp##_##opt(uint8_t *dst, ptrdiff_t stride, \
int E, int I, int H) \
#define lpf_16_wrappers(bpp, opt) \
lpf_16_wrapper(h, 8 * stride, bpp, opt) \
lpf_16_wrapper(v, 16,         bpp, opt)
lpf_16_wrappers(BPC, sse2)
lpf_16_wrappers(BPC, ssse3)
lpf_16_wrappers(BPC, avx)
#define lpf_mix2_wrapper(dir, off, wd1, wd2, bpp, opt) \
static void loop_filter_##dir##_##wd1##wd2##_##bpp##_##opt(uint8_t *dst, ptrdiff_t stride, \
int E, int I, int H) \
#define lpf_mix2_wrappers(wd1, wd2, bpp, opt) \
lpf_mix2_wrapper(h, 8 * stride, wd1, wd2, bpp, opt) \
lpf_mix2_wrapper(v, 16,         wd1, wd2, bpp, opt)
#define lpf_mix2_wrappers_set(bpp, opt) \
lpf_mix2_wrappers(4, 4, bpp, opt) \
lpf_mix2_wrappers(4, 8, bpp, opt) \
lpf_mix2_wrappers(8, 4, bpp, opt) \
lpf_mix2_wrappers(8, 8, bpp, opt) \
lpf_mix2_wrappers_set(BPC, sse2)
lpf_mix2_wrappers_set(BPC, ssse3)
lpf_mix2_wrappers_set(BPC, avx)
decl_ipred_fns(tm, BPC, mmxext, sse2);
decl_itxfm_func(iwht, iwht, 4, BPC, mmxext);
#if BPC == 10
decl_itxfm_func(idct,  idct,  4, BPC, mmxext);
decl_itxfm_funcs(4, BPC, ssse3);
decl_itxfm_func(idct,  idct,  4, BPC, sse2);
decl_itxfm_func(idct,  iadst, 4, BPC, sse2);
decl_itxfm_func(iadst, idct,  4, BPC, sse2);
decl_itxfm_func(iadst, iadst, 4, BPC, sse2);
decl_itxfm_funcs(8, BPC, sse2);
decl_itxfm_funcs(16, BPC, sse2);
decl_itxfm_func(idct,  idct, 32, BPC, sse2);
av_cold void INIT_FUNC(VP9DSPContext *dsp, int bitexact)
