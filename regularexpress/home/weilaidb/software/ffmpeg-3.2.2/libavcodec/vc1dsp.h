#define AVCODEC_VC1DSP_H
typedef void (*vc1op_pixels_func)(uint8_t *block, const uint8_t *pixels, ptrdiff_t line_size, int h);
typedef struct VC1DSPContext  VC1DSPContext;
void ff_vc1dsp_init(VC1DSPContext* c);
void ff_vc1dsp_init_aarch64(VC1DSPContext* dsp);
void ff_vc1dsp_init_arm(VC1DSPContext* dsp);
void ff_vc1dsp_init_ppc(VC1DSPContext *c);
void ff_vc1dsp_init_x86(VC1DSPContext* dsp);
