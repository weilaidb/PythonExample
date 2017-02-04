#define AVCODEC_AC3DSP_H
extern const uint16_t ff_ac3_bap_bits[16];
typedef struct AC3DSPContext  AC3DSPContext;
void ff_ac3dsp_init    (AC3DSPContext *c, int bit_exact);
ff_ac3dsp_init_arm;
ff_ac3dsp_init_x86;
ff_ac3dsp_init_mips;
