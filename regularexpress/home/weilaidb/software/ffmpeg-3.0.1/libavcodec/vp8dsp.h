#define AVCODEC_VP8DSP_H
typedef void (*vp8_mc_func)(uint8_t *dst, ptrdiff_t dstStride,
uint8_t *src, ptrdiff_t srcStride,
int h, int x, int y);
typedef struct VP8DSPContext  VP8DSPContext;
void ff_put_vp8_pixels16_c(uint8_t *dst, uint8_t *src, ptrdiff_t stride,
int h, int x, int y);
void ff_put_vp8_pixels8_c(uint8_t *dst, uint8_t *src, ptrdiff_t stride,
int h, int x, int y);
void ff_put_vp8_pixels4_c(uint8_t *dst, uint8_t *src, ptrdiff_t stride,
int h, int x, int y);
void ff_vp7dsp_init(VP8DSPContext *c);
void ff_vp78dsp_init(VP8DSPContext *c);
void ff_vp78dsp_init_arm(VP8DSPContext *c);
void ff_vp78dsp_init_ppc(VP8DSPContext *c);
void ff_vp78dsp_init_x86(VP8DSPContext *c);
void ff_vp8dsp_init(VP8DSPContext *c);
void ff_vp8dsp_init_arm(VP8DSPContext *c);
void ff_vp8dsp_init_x86(VP8DSPContext *c);
void ff_vp8dsp_init_mips(VP8DSPContext *c);
#define IS_VP7 1
#define IS_VP8 0
