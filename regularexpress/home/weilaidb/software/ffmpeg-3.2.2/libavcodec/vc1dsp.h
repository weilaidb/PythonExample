#define AVCODEC_VC1DSP_H
typedef void (*vc1op_pixels_func)(uint8_t *block, const uint8_t *pixels, ptrdiff_t line_size, int h);
typedef struct VC1DSPContext  VC1DSPContext;
ff_vc1dsp_init;
ff_vc1dsp_init_aarch64;
ff_vc1dsp_init_arm;
ff_vc1dsp_init_ppc;
ff_vc1dsp_init_x86;
