#define AVCODEC_VP9DSP_H
typedef void (*vp9_mc_func)(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *ref, ptrdiff_t ref_stride,
int h, int mx, int my);
typedef void (*vp9_scaled_mc_func)(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *ref, ptrdiff_t ref_stride,
int h, int mx, int my, int dx, int dy);
typedef struct VP9DSPContext  VP9DSPContext;
void ff_vp9dsp_init(VP9DSPContext *dsp, int bpp, int bitexact);
void ff_vp9dsp_init_8(VP9DSPContext *dsp);
void ff_vp9dsp_init_10(VP9DSPContext *dsp);
void ff_vp9dsp_init_12(VP9DSPContext *dsp);
void ff_vp9dsp_init_x86(VP9DSPContext *dsp, int bpp, int bitexact);
void ff_vp9dsp_init_mips(VP9DSPContext *dsp, int bpp);
