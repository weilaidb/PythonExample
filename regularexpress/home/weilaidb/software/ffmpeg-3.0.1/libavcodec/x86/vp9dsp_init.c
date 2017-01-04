#if HAVE_YASM
decl_fpel_func(put,  4,   , mmx);
decl_fpel_func(put,  8,   , mmx);
decl_fpel_func(put, 16,   , sse);
decl_fpel_func(put, 32,   , sse);
decl_fpel_func(put, 64,   , sse);
decl_fpel_func(avg,  4, _8, mmxext);
decl_fpel_func(avg,  8, _8, mmxext);
decl_fpel_func(avg, 16, _8, sse2);
decl_fpel_func(avg, 32, _8, sse2);
decl_fpel_func(avg, 64, _8, sse2);
decl_fpel_func(put, 32,   , avx);
decl_fpel_func(put, 64,   , avx);
decl_fpel_func(avg, 32, _8, avx2);
decl_fpel_func(avg, 64, _8, avx2);
decl_mc_funcs(4, mmxext, int16_t, 8, 8);
decl_mc_funcs(8, sse2, int16_t,  8, 8);
decl_mc_funcs(4, ssse3, int8_t, 32, 8);
decl_mc_funcs(8, ssse3, int8_t, 32, 8);
#if ARCH_X86_64
decl_mc_funcs(16, ssse3, int8_t, 32, 8);
decl_mc_funcs(32, avx2, int8_t, 32, 8);
mc_rep_funcs(16,  8,  8,  sse2, int16_t,  8, 8)
#if ARCH_X86_32
mc_rep_funcs(16,  8,  8, ssse3, int8_t,  32, 8)
mc_rep_funcs(32, 16, 16, sse2,  int16_t,  8, 8)
mc_rep_funcs(32, 16, 16, ssse3, int8_t,  32, 8)
mc_rep_funcs(64, 32, 32, sse2,  int16_t,  8, 8)
mc_rep_funcs(64, 32, 32, ssse3, int8_t,  32, 8)
#if ARCH_X86_64 && HAVE_AVX2_EXTERNAL
mc_rep_funcs(64, 32, 32, avx2,  int8_t,  32, 8)
extern const int8_t ff_filters_ssse3[3][15][4][32];
extern const int16_t ff_filters_sse2[3][15][8][8];
filters_8tap_2d_fn2(put, 16, 8, 1, mmxext, sse2, sse2)
filters_8tap_2d_fn2(avg, 16, 8, 1, mmxext, sse2, sse2)
filters_8tap_2d_fn2(put, 16, 8, 1, ssse3, ssse3, ssse3)
filters_8tap_2d_fn2(avg, 16, 8, 1, ssse3, ssse3, ssse3)
#if ARCH_X86_64 && HAVE_AVX2_EXTERNAL
filters_8tap_2d_fn(put, 64, 32, 8, 1, avx2, ssse3)
filters_8tap_2d_fn(put, 32, 32, 8, 1, avx2, ssse3)
filters_8tap_2d_fn(avg, 64, 32, 8, 1, avx2, ssse3)
filters_8tap_2d_fn(avg, 32, 32, 8, 1, avx2, ssse3)
filters_8tap_1d_fn3(put, 8, mmxext, sse2, sse2)
filters_8tap_1d_fn3(avg, 8, mmxext, sse2, sse2)
filters_8tap_1d_fn3(put, 8, ssse3, ssse3, ssse3)
filters_8tap_1d_fn3(avg, 8, ssse3, ssse3, ssse3)
#if ARCH_X86_64 && HAVE_AVX2_EXTERNAL
filters_8tap_1d_fn2(put, 64, 8, avx2, ssse3)
filters_8tap_1d_fn2(put, 32, 8, avx2, ssse3)
filters_8tap_1d_fn2(avg, 64, 8, avx2, ssse3)
filters_8tap_1d_fn2(avg, 32, 8, avx2, ssse3)
#define itxfm_func(typea, typeb, size, opt) \
void ff_vp9_##typea##_##typeb##_##size##x##size##_add_##opt(uint8_t *dst, ptrdiff_t stride, \
int16_t *block, int eob)
#define itxfm_funcs(size, opt) \
itxfm_func(idct,  idct,  size, opt); \
itxfm_func(iadst, idct,  size, opt); \
itxfm_func(idct,  iadst, size, opt); \
itxfm_func(iadst, iadst, size, opt)
itxfm_func(idct,  idct,  4, mmxext);
itxfm_func(idct,  iadst, 4, sse2);
itxfm_func(iadst, idct,  4, sse2);
itxfm_func(iadst, iadst, 4, sse2);
itxfm_funcs(4, ssse3);
itxfm_funcs(8, sse2);
itxfm_funcs(8, ssse3);
itxfm_funcs(8, avx);
itxfm_funcs(16, sse2);
itxfm_funcs(16, ssse3);
itxfm_funcs(16, avx);
itxfm_func(idct, idct, 32, sse2);
itxfm_func(idct, idct, 32, ssse3);
itxfm_func(idct, idct, 32, avx);
itxfm_func(iwht, iwht, 4, mmx);
#undef itxfm_func
#undef itxfm_funcs
#define lpf_funcs(size1, size2, opt) \
void ff_vp9_loop_filter_v_##size1##_##size2##_##opt(uint8_t *dst, ptrdiff_t stride, \
int E, int I, int H); \
void ff_vp9_loop_filter_h_##size1##_##size2##_##opt(uint8_t *dst, ptrdiff_t stride, \
int E, int I, int H)
lpf_funcs(16, 16, sse2);
lpf_funcs(16, 16, ssse3);
lpf_funcs(16, 16, avx);
lpf_funcs(44, 16, sse2);
lpf_funcs(44, 16, ssse3);
lpf_funcs(44, 16, avx);
lpf_funcs(84, 16, sse2);
lpf_funcs(84, 16, ssse3);
lpf_funcs(84, 16, avx);
lpf_funcs(48, 16, sse2);
lpf_funcs(48, 16, ssse3);
lpf_funcs(48, 16, avx);
lpf_funcs(88, 16, sse2);
lpf_funcs(88, 16, ssse3);
lpf_funcs(88, 16, avx);
#undef lpf_funcs
#define ipred_func(size, type, opt) \
void ff_vp9_ipred_##type##_##size##x##size##_##opt(uint8_t *dst, ptrdiff_t stride, \
const uint8_t *l, const uint8_t *a)
ipred_func(8, v, mmx);
#define ipred_dc_funcs(size, opt) \
ipred_func(size, dc, opt); \
ipred_func(size, dc_left, opt); \
ipred_func(size, dc_top, opt)
ipred_dc_funcs(4, mmxext);
ipred_dc_funcs(8, mmxext);
#define ipred_dir_tm_funcs(size, opt) \
ipred_func(size, tm, opt); \
ipred_func(size, dl, opt); \
ipred_func(size, dr, opt); \
ipred_func(size, hd, opt); \
ipred_func(size, hu, opt); \
ipred_func(size, vl, opt); \
ipred_func(size, vr, opt)
ipred_dir_tm_funcs(4, mmxext);
ipred_func(16, v, sse);
ipred_func(32, v, sse);
ipred_dc_funcs(16, sse2);
ipred_dc_funcs(32, sse2);
#define ipred_dir_tm_h_funcs(size, opt) \
ipred_dir_tm_funcs(size, opt); \
ipred_func(size, h, opt)
ipred_dir_tm_h_funcs(8, sse2);
ipred_dir_tm_h_funcs(16, sse2);
ipred_dir_tm_h_funcs(32, sse2);
ipred_func(4, h, sse2);
#define ipred_all_funcs(size, opt) \
ipred_dc_funcs(size, opt); \
ipred_dir_tm_h_funcs(size, opt)
ipred_all_funcs(4, ssse3);
ipred_all_funcs(8, ssse3);
ipred_all_funcs(16, ssse3);
ipred_all_funcs(32, ssse3);
ipred_dir_tm_h_funcs(8, avx);
ipred_dir_tm_h_funcs(16, avx);
ipred_dir_tm_h_funcs(32, avx);
ipred_func(32, v, avx);
ipred_dc_funcs(32, avx2);
ipred_func(32, h, avx2);
ipred_func(32, tm, avx2);
#undef ipred_func
#undef ipred_dir_tm_h_funcs
#undef ipred_dir_tm_funcs
#undef ipred_dc_funcs
av_cold void ff_vp9dsp_init_x86(VP9DSPContext *dsp, int bpp, int bitexact)
