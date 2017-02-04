#define AVCODEC_VP8DSP_H
typedef void (*vp8_mc_func)(uint8_t *dst, ptrdiff_t dstStride,
uint8_t *src, ptrdiff_t srcStride,
int h, int x, int y);
typedef struct VP8DSPContext  VP8DSPContext;
ff_put_vp8_pixels16_c;
ff_put_vp8_pixels8_c;
ff_put_vp8_pixels4_c;
ff_vp7dsp_init;
ff_vp78dsp_init;
ff_vp78dsp_init_arm;
ff_vp78dsp_init_ppc;
ff_vp78dsp_init_x86;
ff_vp8dsp_init;
ff_vp8dsp_init_arm;
ff_vp8dsp_init_x86;
ff_vp8dsp_init_mips;
#define IS_VP7 1
#define IS_VP8 0
