#define AVCODEC_VP9DSP_H
typedef void (*vp9_mc_func)(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *ref, ptrdiff_t ref_stride,
int h, int mx, int my);
typedef void (*vp9_scaled_mc_func)(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *ref, ptrdiff_t ref_stride,
int h, int mx, int my, int dx, int dy);
typedef struct VP9DSPContext  VP9DSPContext;
ff_vp9dsp_init;
ff_vp9dsp_init_8;
ff_vp9dsp_init_10;
ff_vp9dsp_init_12;
ff_vp9dsp_init_x86;
ff_vp9dsp_init_mips;
