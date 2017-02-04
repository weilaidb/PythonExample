LFC_FUNC \
void ff_hevc_ ## DIR ## _loop_filter_chroma_ ## DEPTH ## _ ## OPT(uint8_t *pix, ptrdiff_t stride, int *tc, uint8_t *no_p, uint8_t *no_q);
LFL_FUNC \
void ff_hevc_ ## DIR ## _loop_filter_luma_ ## DEPTH ## _ ## OPT(uint8_t *pix, ptrdiff_t stride, int beta, int *tc, uint8_t *no_p, uint8_t *no_q);
LFC_FUNCS \
LFC_FUNC(h, depth, opt)  \
LFC_FUNC(v, depth, opt)
LFL_FUNCS \
LFL_FUNC(h, depth, opt)  \
LFL_FUNC(v, depth, opt)
LFC_FUNCS(uint8_t,   8, sse2)
LFC_FUNCS(uint8_t,  10, sse2)
LFC_FUNCS(uint8_t,  12, sse2)
LFC_FUNCS(uint8_t,   8, avx)
LFC_FUNCS(uint8_t,  10, avx)
LFC_FUNCS(uint8_t,  12, avx)
LFL_FUNCS(uint8_t,   8, sse2)
LFL_FUNCS(uint8_t,  10, sse2)
LFL_FUNCS(uint8_t,  12, sse2)
LFL_FUNCS(uint8_t,   8, ssse3)
LFL_FUNCS(uint8_t,  10, ssse3)
LFL_FUNCS(uint8_t,  12, ssse3)
LFL_FUNCS(uint8_t,   8, avx)
LFL_FUNCS(uint8_t,  10, avx)
LFL_FUNCS(uint8_t,  12, avx)
IDCT_FUNCS \
void ff_hevc_idct##W##_dc_8_##opt(int16_t *coeffs); \
void ff_hevc_idct##W##_dc_10_##opt(int16_t *coeffs); \
void ff_hevc_idct##W##_dc_12_##opt(int16_t *coeffs)
IDCT_FUNCS(4x4,   mmxext);
IDCT_FUNCS(8x8,   mmxext);
IDCT_FUNCS(8x8,   sse2);
IDCT_FUNCS(16x16, sse2);
IDCT_FUNCS(32x32, sse2);
IDCT_FUNCS(16x16, avx2);
IDCT_FUNCS(32x32, avx2);
mc_rep_func \
void ff_hevc_put_hevc_##name##W##_##bitd##_##opt(int16_t *_dst,                                                 \
uint8_t *_src, ptrdiff_t _srcstride, int height,                \
intptr_t mx, intptr_t my, int width)                            \
mc_rep_uni_func \
void ff_hevc_put_hevc_uni_##name##W##_##bitd##_##opt(uint8_t *_dst, ptrdiff_t dststride,                        \
uint8_t *_src, ptrdiff_t _srcstride, int height,            \
intptr_t mx, intptr_t my, int width)                        \
mc_rep_bi_func \
void ff_hevc_put_hevc_bi_##name##W##_##bitd##_##opt(uint8_t *_dst, ptrdiff_t dststride, uint8_t *_src,          \
ptrdiff_t _srcstride, int16_t* _src2,                        \
int height, intptr_t mx, intptr_t my, int width)             \
mc_rep_funcs        \
mc_rep_func(name, bitd, step, W, opt)            \
mc_rep_uni_func(name, bitd, step, W, opt)        \
mc_rep_bi_func(name, bitd, step, W, opt)
mc_rep_func2 \
void ff_hevc_put_hevc_##name##W##_##bitd##_##opt(int16_t *dst,                                                  \
uint8_t *src, ptrdiff_t _srcstride, int height,                \
intptr_t mx, intptr_t my, int width)                           \
mc_rep_uni_func2 \
void ff_hevc_put_hevc_uni_##name##W##_##bitd##_##opt(uint8_t *dst, ptrdiff_t dststride,                         \
uint8_t *src, ptrdiff_t _srcstride, int height,            \
intptr_t mx, intptr_t my, int width)                       \
mc_rep_bi_func2 \
void ff_hevc_put_hevc_bi_##name##W##_##bitd##_##opt(uint8_t *dst, ptrdiff_t dststride, uint8_t *src,            \
ptrdiff_t _srcstride, int16_t* src2,                        \
int height, intptr_t mx, intptr_t my, int width)            \
mc_rep_funcs2 \
mc_rep_func2(name, bitd, step1, step2, W, opt)      \
mc_rep_uni_func2(name, bitd, step1, step2, W, opt)  \
mc_rep_bi_func2(name, bitd, step1, step2, W, opt)
#if ARCH_X86_64 && HAVE_SSE4_EXTERNAL
mc_rep_mix_10                                       \
void ff_hevc_put_hevc_##name##width1##_10_##opt1(int16_t *dst, uint8_t *src, ptrdiff_t _srcstride,            \
int height, intptr_t mx, intptr_t my, int width)             \
\
mc_bi_rep_mix_10                                    \
void ff_hevc_put_hevc_bi_##name##width1##_10_##opt1(uint8_t *dst, ptrdiff_t dststride, uint8_t *src,          \
ptrdiff_t _srcstride, int16_t *src2,                      \
int height, intptr_t mx, intptr_t my, int width)          \
mc_uni_rep_mix_10                                   \
void ff_hevc_put_hevc_uni_##name##width1##_10_##opt1(uint8_t *dst, ptrdiff_t dststride,                       \
uint8_t *src, ptrdiff_t _srcstride, int height,          \
intptr_t mx, intptr_t my, int width)                     \
mc_rep_mixs_10   \
mc_rep_mix_10(name, width1, width2, width3, opt1, opt2, width4)            \
mc_bi_rep_mix_10(name, width1, width2, width3, opt1, opt2, width4)         \
mc_uni_rep_mix_10(name, width1, width2, width3, opt1, opt2, width4)
mc_rep_mix_8                                                \
void ff_hevc_put_hevc_##name##width1##_8_##opt1(int16_t *dst, uint8_t *src, ptrdiff_t _srcstride,             \
int height, intptr_t mx, intptr_t my, int width)              \
\
mc_bi_rep_mix_8                                             \
void ff_hevc_put_hevc_bi_##name##width1##_8_##opt1(uint8_t *dst, ptrdiff_t dststride, uint8_t *src,           \
ptrdiff_t _srcstride, int16_t* src2,                       \
int height, intptr_t mx, intptr_t my, int width)           \
mc_uni_rep_mix_8                                            \
void ff_hevc_put_hevc_uni_##name##width1##_8_##opt1(uint8_t *dst, ptrdiff_t dststride,                        \
uint8_t *src, ptrdiff_t _srcstride, int height,           \
intptr_t mx, intptr_t my, int width)                      \
mc_rep_mixs_8   \
mc_rep_mix_8(name, width1, width2, width3, opt1, opt2)            \
mc_bi_rep_mix_8(name, width1, width2, width3, opt1, opt2)         \
mc_uni_rep_mix_8(name, width1, width2, width3, opt1, opt2)
mc_rep_mixs_8
mc_rep_mixs_8(epel_hv,    48, 32, 16, avx2, sse4)
mc_rep_mixs_8(epel_h ,    48, 32, 16, avx2, sse4)
mc_rep_mixs_8(epel_v ,    48, 32, 16, avx2, sse4)
mc_rep_mix_10(pel_pixels, 24, 16, 8, avx2, sse4, 32)
mc_bi_rep_mix_10(pel_pixels,24, 16, 8, avx2, sse4, 32)
mc_rep_mixs_10(epel_hv,   24, 16, 8, avx2, sse4, 32)
mc_rep_mixs_10(epel_h ,   24, 16, 8, avx2, sse4, 32)
mc_rep_mixs_10(epel_v ,   24, 16, 8, avx2, sse4, 32)
mc_rep_mixs_10(qpel_h ,   24, 16, 8, avx2, sse4, 32)
mc_rep_mixs_10(qpel_v ,   24, 16, 8, avx2, sse4, 32)
mc_rep_mixs_10(qpel_hv,   24, 16, 8, avx2, sse4, 32)
mc_rep_uni_func(pel_pixels, 8, 64, 128, avx2)
mc_rep_uni_func(pel_pixels, 8, 32, 96, avx2)
mc_rep_funcs(pel_pixels, 8, 32, 64, avx2)
mc_rep_func(pel_pixels, 10, 16, 32, avx2)
mc_rep_func(pel_pixels, 10, 16, 48, avx2)
mc_rep_func(pel_pixels, 10, 32, 64, avx2)
mc_rep_bi_func(pel_pixels, 10, 16, 32, avx2)
mc_rep_bi_func(pel_pixels, 10, 16, 48, avx2)
mc_rep_bi_func(pel_pixels, 10, 32, 64, avx2)
mc_rep_funcs(epel_h, 8, 32, 64, avx2)
mc_rep_funcs(epel_v, 8, 32, 64, avx2)
mc_rep_funcs(epel_h, 10, 16, 32, avx2)
mc_rep_funcs(epel_h, 10, 16, 48, avx2)
mc_rep_funcs(epel_h, 10, 32, 64, avx2)
mc_rep_funcs(epel_v, 10, 16, 32, avx2)
mc_rep_funcs(epel_v, 10, 16, 48, avx2)
mc_rep_funcs(epel_v, 10, 32, 64, avx2)
mc_rep_funcs(epel_hv,  8, 32, 64, avx2)
mc_rep_funcs(epel_hv, 10, 16, 32, avx2)
mc_rep_funcs(epel_hv, 10, 16, 48, avx2)
mc_rep_funcs(epel_hv, 10, 32, 64, avx2)
mc_rep_funcs(qpel_h, 8, 32, 64, avx2)
mc_rep_mixs_8(qpel_h ,  48, 32, 16, avx2, sse4)
mc_rep_funcs(qpel_v, 8, 32, 64, avx2)
mc_rep_mixs_8(qpel_v,  48, 32, 16, avx2, sse4)
mc_rep_funcs(qpel_h, 10, 16, 32, avx2)
mc_rep_funcs(qpel_h, 10, 16, 48, avx2)
mc_rep_funcs(qpel_h, 10, 32, 64, avx2)
mc_rep_funcs(qpel_v, 10, 16, 32, avx2)
mc_rep_funcs(qpel_v, 10, 16, 48, avx2)
mc_rep_funcs(qpel_v, 10, 32, 64, avx2)
mc_rep_funcs(qpel_hv, 10, 16, 32, avx2)
mc_rep_funcs(qpel_hv, 10, 16, 48, avx2)
mc_rep_funcs(qpel_hv, 10, 32, 64, avx2)
mc_rep_funcs
mc_rep_funcs(pel_pixels, 8, 16, 48, sse4)
mc_rep_funcs(pel_pixels, 8, 16, 32, sse4)
mc_rep_funcs(pel_pixels, 8,  8, 24, sse4)
mc_rep_funcs(pel_pixels,10,  8, 64, sse4)
mc_rep_funcs(pel_pixels,10,  8, 48, sse4)
mc_rep_funcs(pel_pixels,10,  8, 32, sse4)
mc_rep_funcs(pel_pixels,10,  8, 24, sse4)
mc_rep_funcs(pel_pixels,10,  8, 16, sse4)
mc_rep_funcs(pel_pixels,10,  4, 12, sse4)
mc_rep_funcs(pel_pixels,12,  8, 64, sse4)
mc_rep_funcs(pel_pixels,12,  8, 48, sse4)
mc_rep_funcs(pel_pixels,12,  8, 32, sse4)
mc_rep_funcs(pel_pixels,12,  8, 24, sse4)
mc_rep_funcs(pel_pixels,12,  8, 16, sse4)
mc_rep_funcs(pel_pixels,12,  4, 12, sse4)
mc_rep_funcs(epel_h, 8, 16, 64, sse4)
mc_rep_funcs(epel_h, 8, 16, 48, sse4)
mc_rep_funcs(epel_h, 8, 16, 32, sse4)
mc_rep_funcs(epel_h, 8,  8, 24, sse4)
mc_rep_funcs(epel_h,10,  8, 64, sse4)
mc_rep_funcs(epel_h,10,  8, 48, sse4)
mc_rep_funcs(epel_h,10,  8, 32, sse4)
mc_rep_funcs(epel_h,10,  8, 24, sse4)
mc_rep_funcs(epel_h,10,  8, 16, sse4)
mc_rep_funcs(epel_h,10,  4, 12, sse4)
mc_rep_funcs(epel_h,12,  8, 64, sse4)
mc_rep_funcs(epel_h,12,  8, 48, sse4)
mc_rep_funcs(epel_h,12,  8, 32, sse4)
mc_rep_funcs(epel_h,12,  8, 24, sse4)
mc_rep_funcs(epel_h,12,  8, 16, sse4)
mc_rep_funcs(epel_h,12,  4, 12, sse4)
mc_rep_funcs(epel_v, 8, 16, 64, sse4)
mc_rep_funcs(epel_v, 8, 16, 48, sse4)
mc_rep_funcs(epel_v, 8, 16, 32, sse4)
mc_rep_funcs(epel_v, 8,  8, 24, sse4)
mc_rep_funcs(epel_v,10,  8, 64, sse4)
mc_rep_funcs(epel_v,10,  8, 48, sse4)
mc_rep_funcs(epel_v,10,  8, 32, sse4)
mc_rep_funcs(epel_v,10,  8, 24, sse4)
mc_rep_funcs(epel_v,10,  8, 16, sse4)
mc_rep_funcs(epel_v,10,  4, 12, sse4)
mc_rep_funcs(epel_v,12,  8, 64, sse4)
mc_rep_funcs(epel_v,12,  8, 48, sse4)
mc_rep_funcs(epel_v,12,  8, 32, sse4)
mc_rep_funcs(epel_v,12,  8, 24, sse4)
mc_rep_funcs(epel_v,12,  8, 16, sse4)
mc_rep_funcs(epel_v,12,  4, 12, sse4)
mc_rep_funcs(epel_hv, 8, 16, 64, sse4)
mc_rep_funcs(epel_hv, 8, 16, 48, sse4)
mc_rep_funcs(epel_hv, 8, 16, 32, sse4)
mc_rep_funcs(epel_hv, 8,  8, 24, sse4)
mc_rep_funcs2(epel_hv,8,  8,  4, 12, sse4)
mc_rep_funcs(epel_hv,10,  8, 64, sse4)
mc_rep_funcs(epel_hv,10,  8, 48, sse4)
mc_rep_funcs(epel_hv,10,  8, 32, sse4)
mc_rep_funcs(epel_hv,10,  8, 24, sse4)
mc_rep_funcs(epel_hv,10,  8, 16, sse4)
mc_rep_funcs(epel_hv,10,  4, 12, sse4)
mc_rep_funcs(epel_hv,12,  8, 64, sse4)
mc_rep_funcs(epel_hv,12,  8, 48, sse4)
mc_rep_funcs(epel_hv,12,  8, 32, sse4)
mc_rep_funcs(epel_hv,12,  8, 24, sse4)
mc_rep_funcs(epel_hv,12,  8, 16, sse4)
mc_rep_funcs(epel_hv,12,  4, 12, sse4)
mc_rep_funcs(qpel_h, 8, 16, 64, sse4)
mc_rep_funcs(qpel_h, 8, 16, 48, sse4)
mc_rep_funcs(qpel_h, 8, 16, 32, sse4)
mc_rep_funcs(qpel_h, 8,  8, 24, sse4)
mc_rep_funcs(qpel_h,10,  8, 64, sse4)
mc_rep_funcs(qpel_h,10,  8, 48, sse4)
mc_rep_funcs(qpel_h,10,  8, 32, sse4)
mc_rep_funcs(qpel_h,10,  8, 24, sse4)
mc_rep_funcs(qpel_h,10,  8, 16, sse4)
mc_rep_funcs(qpel_h,10,  4, 12, sse4)
mc_rep_funcs(qpel_h,12,  8, 64, sse4)
mc_rep_funcs(qpel_h,12,  8, 48, sse4)
mc_rep_funcs(qpel_h,12,  8, 32, sse4)
mc_rep_funcs(qpel_h,12,  8, 24, sse4)
mc_rep_funcs(qpel_h,12,  8, 16, sse4)
mc_rep_funcs(qpel_h,12,  4, 12, sse4)
mc_rep_funcs(qpel_v, 8, 16, 64, sse4)
mc_rep_funcs(qpel_v, 8, 16, 48, sse4)
mc_rep_funcs(qpel_v, 8, 16, 32, sse4)
mc_rep_funcs(qpel_v, 8,  8, 24, sse4)
mc_rep_funcs(qpel_v,10,  8, 64, sse4)
mc_rep_funcs(qpel_v,10,  8, 48, sse4)
mc_rep_funcs(qpel_v,10,  8, 32, sse4)
mc_rep_funcs(qpel_v,10,  8, 24, sse4)
mc_rep_funcs(qpel_v,10,  8, 16, sse4)
mc_rep_funcs(qpel_v,10,  4, 12, sse4)
mc_rep_funcs(qpel_v,12,  8, 64, sse4)
mc_rep_funcs(qpel_v,12,  8, 48, sse4)
mc_rep_funcs(qpel_v,12,  8, 32, sse4)
mc_rep_funcs(qpel_v,12,  8, 24, sse4)
mc_rep_funcs(qpel_v,12,  8, 16, sse4)
mc_rep_funcs(qpel_v,12,  4, 12, sse4)
mc_rep_funcs(qpel_hv, 8,  8, 64, sse4)
mc_rep_funcs(qpel_hv, 8,  8, 48, sse4)
mc_rep_funcs(qpel_hv, 8,  8, 32, sse4)
mc_rep_funcs(qpel_hv, 8,  8, 24, sse4)
mc_rep_funcs(qpel_hv, 8,  8, 16, sse4)
mc_rep_funcs2(qpel_hv,8,  8,  4, 12, sse4)
mc_rep_funcs(qpel_hv,10,  8, 64, sse4)
mc_rep_funcs(qpel_hv,10,  8, 48, sse4)
mc_rep_funcs(qpel_hv,10,  8, 32, sse4)
mc_rep_funcs(qpel_hv,10,  8, 24, sse4)
mc_rep_funcs(qpel_hv,10,  8, 16, sse4)
mc_rep_funcs(qpel_hv,10,  4, 12, sse4)
mc_rep_funcs(qpel_hv,12,  8, 64, sse4)
mc_rep_funcs(qpel_hv,12,  8, 48, sse4)
mc_rep_funcs(qpel_hv,12,  8, 32, sse4)
mc_rep_funcs(qpel_hv,12,  8, 24, sse4)
mc_rep_funcs(qpel_hv,12,  8, 16, sse4)
mc_rep_funcs(qpel_hv,12,  4, 12, sse4)
mc_rep_uni_w \
void ff_hevc_put_hevc_uni_w##W##_##bitd##_##opt(uint8_t *_dst, ptrdiff_t dststride, int16_t *_src, \
int height, int denom,  int _wx, int _ox)                                \
mc_rep_uni_w(8, 6, 12, sse4)
mc_rep_uni_w(8, 8, 16, sse4)
mc_rep_uni_w(8, 8, 24, sse4)
mc_rep_uni_w(8, 8, 32, sse4)
mc_rep_uni_w(8, 8, 48, sse4)
mc_rep_uni_w(8, 8, 64, sse4)
mc_rep_uni_w(10, 6, 12, sse4)
mc_rep_uni_w(10, 8, 16, sse4)
mc_rep_uni_w(10, 8, 24, sse4)
mc_rep_uni_w(10, 8, 32, sse4)
mc_rep_uni_w(10, 8, 48, sse4)
mc_rep_uni_w(10, 8, 64, sse4)
mc_rep_uni_w(12, 6, 12, sse4)
mc_rep_uni_w(12, 8, 16, sse4)
mc_rep_uni_w(12, 8, 24, sse4)
mc_rep_uni_w(12, 8, 32, sse4)
mc_rep_uni_w(12, 8, 48, sse4)
mc_rep_uni_w(12, 8, 64, sse4)
mc_rep_bi_w \
void ff_hevc_put_hevc_bi_w##W##_##bitd##_##opt(uint8_t *_dst, ptrdiff_t dststride, int16_t *_src, \
int16_t *_src2, int height,                                               \
int denom,  int _wx0,  int _wx1, int _ox0, int _ox1)                      \
mc_rep_bi_w(8, 6, 12, sse4)
mc_rep_bi_w(8, 8, 16, sse4)
mc_rep_bi_w(8, 8, 24, sse4)
mc_rep_bi_w(8, 8, 32, sse4)
mc_rep_bi_w(8, 8, 48, sse4)
mc_rep_bi_w(8, 8, 64, sse4)
mc_rep_bi_w(10, 6, 12, sse4)
mc_rep_bi_w(10, 8, 16, sse4)
mc_rep_bi_w(10, 8, 24, sse4)
mc_rep_bi_w(10, 8, 32, sse4)
mc_rep_bi_w(10, 8, 48, sse4)
mc_rep_bi_w(10, 8, 64, sse4)
mc_rep_bi_w(12, 6, 12, sse4)
mc_rep_bi_w(12, 8, 16, sse4)
mc_rep_bi_w(12, 8, 24, sse4)
mc_rep_bi_w(12, 8, 32, sse4)
mc_rep_bi_w(12, 8, 48, sse4)
mc_rep_bi_w(12, 8, 64, sse4)
mc_uni_w_func \
void ff_hevc_put_hevc_uni_w_##name##W##_##bitd##_##opt(uint8_t *_dst, ptrdiff_t _dststride,         \
uint8_t *_src, ptrdiff_t _srcstride,          \
int height, int denom,                        \
int _wx, int _ox,                             \
intptr_t mx, intptr_t my, int width)          \
mc_uni_w_funcs      \
mc_uni_w_func(name, bitd, 4, opt)    \
mc_uni_w_func(name, bitd, 8, opt)    \
mc_uni_w_func(name, bitd, 12, opt)   \
mc_uni_w_func(name, bitd, 16, opt)   \
mc_uni_w_func(name, bitd, 24, opt)   \
mc_uni_w_func(name, bitd, 32, opt)   \
mc_uni_w_func(name, bitd, 48, opt)   \
mc_uni_w_func(name, bitd, 64, opt)
mc_uni_w_funcs(pel_pixels, 8, sse4)
mc_uni_w_func(pel_pixels, 8, 6, sse4)
mc_uni_w_funcs(epel_h, 8, sse4)
mc_uni_w_func(epel_h, 8, 6, sse4)
mc_uni_w_funcs(epel_v, 8, sse4)
mc_uni_w_func(epel_v, 8, 6, sse4)
mc_uni_w_funcs(epel_hv, 8, sse4)
mc_uni_w_func(epel_hv, 8, 6, sse4)
mc_uni_w_funcs(qpel_h, 8, sse4)
mc_uni_w_funcs(qpel_v, 8, sse4)
mc_uni_w_funcs(qpel_hv, 8, sse4)
mc_uni_w_funcs(pel_pixels, 10, sse4)
mc_uni_w_func(pel_pixels, 10, 6, sse4)
mc_uni_w_funcs(epel_h, 10, sse4)
mc_uni_w_func(epel_h, 10, 6, sse4)
mc_uni_w_funcs(epel_v, 10, sse4)
mc_uni_w_func(epel_v, 10, 6, sse4)
mc_uni_w_funcs(epel_hv, 10, sse4)
mc_uni_w_func(epel_hv, 10, 6, sse4)
mc_uni_w_funcs(qpel_h, 10, sse4)
mc_uni_w_funcs(qpel_v, 10, sse4)
mc_uni_w_funcs(qpel_hv, 10, sse4)
mc_uni_w_funcs(pel_pixels, 12, sse4)
mc_uni_w_func(pel_pixels, 12, 6, sse4)
mc_uni_w_funcs(epel_h, 12, sse4)
mc_uni_w_func(epel_h, 12, 6, sse4)
mc_uni_w_funcs(epel_v, 12, sse4)
mc_uni_w_func(epel_v, 12, 6, sse4)
mc_uni_w_funcs(epel_hv, 12, sse4)
mc_uni_w_func(epel_hv, 12, 6, sse4)
mc_uni_w_funcs(qpel_h, 12, sse4)
mc_uni_w_funcs(qpel_v, 12, sse4)
mc_uni_w_funcs(qpel_hv, 12, sse4)
mc_bi_w_func \
void ff_hevc_put_hevc_bi_w_##name##W##_##bitd##_##opt(uint8_t *_dst, ptrdiff_t _dststride,           \
uint8_t *_src, ptrdiff_t _srcstride,            \
int16_t *_src2,                                 \
int height, int denom,                          \
int _wx0, int _wx1, int _ox0, int _ox1,         \
intptr_t mx, intptr_t my, int width)            \
mc_bi_w_funcs      \
mc_bi_w_func(name, bitd, 4, opt)    \
mc_bi_w_func(name, bitd, 8, opt)    \
mc_bi_w_func(name, bitd, 12, opt)   \
mc_bi_w_func(name, bitd, 16, opt)   \
mc_bi_w_func(name, bitd, 24, opt)   \
mc_bi_w_func(name, bitd, 32, opt)   \
mc_bi_w_func(name, bitd, 48, opt)   \
mc_bi_w_func(name, bitd, 64, opt)
mc_bi_w_funcs(pel_pixels, 8, sse4)
mc_bi_w_func(pel_pixels, 8, 6, sse4)
mc_bi_w_funcs(epel_h, 8, sse4)
mc_bi_w_func(epel_h, 8, 6, sse4)
mc_bi_w_funcs(epel_v, 8, sse4)
mc_bi_w_func(epel_v, 8, 6, sse4)
mc_bi_w_funcs(epel_hv, 8, sse4)
mc_bi_w_func(epel_hv, 8, 6, sse4)
mc_bi_w_funcs(qpel_h, 8, sse4)
mc_bi_w_funcs(qpel_v, 8, sse4)
mc_bi_w_funcs(qpel_hv, 8, sse4)
mc_bi_w_funcs(pel_pixels, 10, sse4)
mc_bi_w_func(pel_pixels, 10, 6, sse4)
mc_bi_w_funcs(epel_h, 10, sse4)
mc_bi_w_func(epel_h, 10, 6, sse4)
mc_bi_w_funcs(epel_v, 10, sse4)
mc_bi_w_func(epel_v, 10, 6, sse4)
mc_bi_w_funcs(epel_hv, 10, sse4)
mc_bi_w_func(epel_hv, 10, 6, sse4)
mc_bi_w_funcs(qpel_h, 10, sse4)
mc_bi_w_funcs(qpel_v, 10, sse4)
mc_bi_w_funcs(qpel_hv, 10, sse4)
mc_bi_w_funcs(pel_pixels, 12, sse4)
mc_bi_w_func(pel_pixels, 12, 6, sse4)
mc_bi_w_funcs(epel_h, 12, sse4)
mc_bi_w_func(epel_h, 12, 6, sse4)
mc_bi_w_funcs(epel_v, 12, sse4)
mc_bi_w_func(epel_v, 12, 6, sse4)
mc_bi_w_funcs(epel_hv, 12, sse4)
mc_bi_w_func(epel_hv, 12, 6, sse4)
mc_bi_w_funcs(qpel_h, 12, sse4)
mc_bi_w_funcs(qpel_v, 12, sse4)
mc_bi_w_funcs(qpel_hv, 12, sse4)
SAO_BAND_FILTER_FUNCS                                                                                   \
void ff_hevc_sao_band_filter_8_##bitd##_##opt(uint8_t *_dst, uint8_t *_src, ptrdiff_t _stride_dst, ptrdiff_t _stride_src,  \
int16_t *sao_offset_val, int sao_left_class, int width, int height);           \
void ff_hevc_sao_band_filter_16_##bitd##_##opt(uint8_t *_dst, uint8_t *_src, ptrdiff_t _stride_dst, ptrdiff_t _stride_src, \
int16_t *sao_offset_val, int sao_left_class, int width, int height);           \
void ff_hevc_sao_band_filter_32_##bitd##_##opt(uint8_t *_dst, uint8_t *_src, ptrdiff_t _stride_dst, ptrdiff_t _stride_src, \
int16_t *sao_offset_val, int sao_left_class, int width, int height);           \
void ff_hevc_sao_band_filter_48_##bitd##_##opt(uint8_t *_dst, uint8_t *_src, ptrdiff_t _stride_dst, ptrdiff_t _stride_src, \
int16_t *sao_offset_val, int sao_left_class, int width, int height);           \
void ff_hevc_sao_band_filter_64_##bitd##_##opt(uint8_t *_dst, uint8_t *_src, ptrdiff_t _stride_dst, ptrdiff_t _stride_src, \
int16_t *sao_offset_val, int sao_left_class, int width, int height);
SAO_BAND_FILTER_FUNCS(8,  sse2)
SAO_BAND_FILTER_FUNCS(10, sse2)
SAO_BAND_FILTER_FUNCS(12, sse2)
SAO_BAND_FILTER_FUNCS(8,   avx)
SAO_BAND_FILTER_FUNCS(10,  avx)
SAO_BAND_FILTER_FUNCS(12,  avx)
SAO_BAND_FILTER_FUNCS(8,  avx2)
SAO_BAND_FILTER_FUNCS(10, avx2)
SAO_BAND_FILTER_FUNCS(12, avx2)
SAO_BAND_INIT do  while (0)
SAO_EDGE_FILTER_FUNCS                                                                                    \
void ff_hevc_sao_edge_filter_8_##bitd##_##opt(uint8_t *_dst, uint8_t *_src, ptrdiff_t stride_dst, int16_t *sao_offset_val,  \
int eo, int width, int height);                                               \
void ff_hevc_sao_edge_filter_16_##bitd##_##opt(uint8_t *_dst, uint8_t *_src, ptrdiff_t stride_dst, int16_t *sao_offset_val, \
int eo, int width, int height);                                              \
void ff_hevc_sao_edge_filter_32_##bitd##_##opt(uint8_t *_dst, uint8_t *_src, ptrdiff_t stride_dst, int16_t *sao_offset_val, \
int eo, int width, int height);                                              \
void ff_hevc_sao_edge_filter_48_##bitd##_##opt(uint8_t *_dst, uint8_t *_src, ptrdiff_t stride_dst, int16_t *sao_offset_val, \
int eo, int width, int height);                                              \
void ff_hevc_sao_edge_filter_64_##bitd##_##opt(uint8_t *_dst, uint8_t *_src, ptrdiff_t stride_dst, int16_t *sao_offset_val, \
int eo, int width, int height);                                              \
SAO_EDGE_FILTER_FUNCS(8, ssse3)
SAO_EDGE_FILTER_FUNCS(8, avx2)
SAO_EDGE_FILTER_FUNCS(10, sse2)
SAO_EDGE_FILTER_FUNCS(10, avx2)
SAO_EDGE_FILTER_FUNCS(12, sse2)
SAO_EDGE_FILTER_FUNCS(12, avx2)
SAO_EDGE_INIT do  while (0)
EPEL_LINKS           \
PEL_LINK(pointer, 1, my , mx , fname##4 ,  bitd, opt ); \
PEL_LINK(pointer, 2, my , mx , fname##6 ,  bitd, opt ); \
PEL_LINK(pointer, 3, my , mx , fname##8 ,  bitd, opt ); \
PEL_LINK(pointer, 4, my , mx , fname##12,  bitd, opt ); \
PEL_LINK(pointer, 5, my , mx , fname##16,  bitd, opt ); \
PEL_LINK(pointer, 6, my , mx , fname##24,  bitd, opt ); \
PEL_LINK(pointer, 7, my , mx , fname##32,  bitd, opt ); \
PEL_LINK(pointer, 8, my , mx , fname##48,  bitd, opt ); \
PEL_LINK(pointer, 9, my , mx , fname##64,  bitd, opt )
QPEL_LINKS           \
PEL_LINK(pointer, 1, my , mx , fname##4 ,  bitd, opt ); \
PEL_LINK(pointer, 3, my , mx , fname##8 ,  bitd, opt ); \
PEL_LINK(pointer, 4, my , mx , fname##12,  bitd, opt ); \
PEL_LINK(pointer, 5, my , mx , fname##16,  bitd, opt ); \
PEL_LINK(pointer, 6, my , mx , fname##24,  bitd, opt ); \
PEL_LINK(pointer, 7, my , mx , fname##32,  bitd, opt ); \
PEL_LINK(pointer, 8, my , mx , fname##48,  bitd, opt ); \
PEL_LINK(pointer, 9, my , mx , fname##64,  bitd, opt )
ff_hevc_dsp_init_x86
