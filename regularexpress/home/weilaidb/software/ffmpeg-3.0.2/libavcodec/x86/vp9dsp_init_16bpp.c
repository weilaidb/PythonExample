#if HAVE_YASM
decl_fpel_func(put,   8,    , mmx);
decl_fpel_func(avg,   8, _16, mmxext);
decl_fpel_func(put,  16,    , sse);
decl_fpel_func(put,  32,    , sse);
decl_fpel_func(put,  64,    , sse);
decl_fpel_func(put, 128,    , sse);
decl_fpel_func(avg,  16, _16, sse2);
decl_fpel_func(avg,  32, _16, sse2);
decl_fpel_func(avg,  64, _16, sse2);
decl_fpel_func(avg, 128, _16, sse2);
decl_fpel_func(put,  32,    , avx);
decl_fpel_func(put,  64,    , avx);
decl_fpel_func(put, 128,    , avx);
decl_fpel_func(avg,  32, _16, avx2);
decl_fpel_func(avg,  64, _16, avx2);
decl_fpel_func(avg, 128, _16, avx2);
decl_ipred_fns(v,       16, mmx,    sse);
decl_ipred_fns(h,       16, mmxext, sse2);
decl_ipred_fns(dc,      16, mmxext, sse2);
decl_ipred_fns(dc_top,  16, mmxext, sse2);
decl_ipred_fns(dc_left, 16, mmxext, sse2);
#define decl_ipred_dir_funcs(type) \
decl_ipred_fns(type, 16, sse2,  sse2); \
decl_ipred_fns(type, 16, ssse3, ssse3); \
decl_ipred_fns(type, 16, avx,   avx)
decl_ipred_dir_funcs(dl);
decl_ipred_dir_funcs(dr);
decl_ipred_dir_funcs(vl);
decl_ipred_dir_funcs(vr);
decl_ipred_dir_funcs(hu);
decl_ipred_dir_funcs(hd);
av_cold void ff_vp9dsp_init_16bpp_x86(VP9DSPContext *dsp)
