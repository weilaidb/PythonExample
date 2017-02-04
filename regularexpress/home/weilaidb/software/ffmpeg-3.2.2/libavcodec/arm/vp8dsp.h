#define AVCODEC_ARM_VP8DSP_H
ff_vp78dsp_init_armv6;
ff_vp78dsp_init_neon;
ff_vp8dsp_init_armv6;
ff_vp8dsp_init_neon;
VP8_LF_Y                                             \
void ff_vp8_##hv##_loop_filter16##inner##_##opt(uint8_t *dst,            \
ptrdiff_t stride,        \
int flim_E, int flim_I,  \
int hev_thresh)
VP8_LF_UV                                            \
void ff_vp8_##hv##_loop_filter8uv##inner##_##opt(uint8_t *dstU,          \
uint8_t *dstV,          \
ptrdiff_t stride,       \
int flim_E, int flim_I, \
int hev_thresh)
VP8_LF_SIMPLE                                          \
void ff_vp8_##hv##_loop_filter16_simple_##opt(uint8_t *dst,         \
ptrdiff_t stride,     \
int flim)
VP8_LF_HV                   \
VP8_LF_Y(h,  inner, opt);                   \
VP8_LF_Y(v,  inner, opt);                   \
VP8_LF_UV(h, inner, opt);                   \
VP8_LF_UV(v, inner, opt)
VP8_LF                             \
VP8_LF_HV(,       opt);                     \
VP8_LF_HV(_inner, opt);                     \
VP8_LF_SIMPLE(h, opt);                      \
VP8_LF_SIMPLE(v, opt)
VP8_MC                                                  \
void ff_put_vp8_##n##_##opt(uint8_t *dst, ptrdiff_t dststride,      \
uint8_t *src, ptrdiff_t srcstride,      \
int h, int x, int y)
VP8_EPEL                        \
VP8_MC(pixels ## w, opt);                   \
VP8_MC(epel ## w ## _h4, opt);              \
VP8_MC(epel ## w ## _h6, opt);              \
VP8_MC(epel ## w ## _v4, opt);              \
VP8_MC(epel ## w ## _h4v4, opt);            \
VP8_MC(epel ## w ## _h6v4, opt);            \
VP8_MC(epel ## w ## _v6, opt);              \
VP8_MC(epel ## w ## _h4v6, opt);            \
VP8_MC(epel ## w ## _h6v6, opt)
VP8_BILIN                       \
VP8_MC(bilin ## w ## _h, opt);              \
VP8_MC(bilin ## w ## _v, opt);              \
VP8_MC(bilin ## w ## _hv, opt)
