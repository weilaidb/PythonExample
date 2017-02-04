#define AVCODEC_RV34DSP_H
typedef void (*rv40_weight_func)(uint8_t *dst,
uint8_t *src1,
uint8_t *src2,
int w1, int w2, ptrdiff_t stride);
typedef void (*rv34_inv_transform_func)(int16_t *block);
typedef void (*rv34_idct_add_func)(uint8_t *dst, ptrdiff_t stride, int16_t *block);
typedef void (*rv34_idct_dc_add_func)(uint8_t *dst, ptrdiff_t stride,
int   dc);
typedef void (*rv40_weak_loop_filter_func)(uint8_t *src, ptrdiff_t stride,
int filter_p1, int filter_q1,
int alpha, int beta,
int lims, int lim_q1, int lim_p1);
typedef void (*rv40_strong_loop_filter_func)(uint8_t *src, ptrdiff_t stride,
int alpha, int lims,
int dmode, int chroma);
typedef int (*rv40_loop_filter_strength_func)(uint8_t *src, ptrdiff_t stride,
int beta, int beta2, int edge,
int *p1, int *q1);
typedef struct RV34DSPContext  RV34DSPContext;
ff_rv30dsp_init;
ff_rv34dsp_init;
ff_rv40dsp_init;
ff_rv34dsp_init_arm;
ff_rv34dsp_init_x86;
ff_rv40dsp_init_aarch64;
ff_rv40dsp_init_x86;
ff_rv40dsp_init_arm;
