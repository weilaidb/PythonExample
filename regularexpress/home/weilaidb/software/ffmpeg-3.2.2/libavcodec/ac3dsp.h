#define AVCODEC_AC3DSP_H
extern const uint16_t ff_ac3_bap_bits[16];
typedef struct AC3DSPContext  AC3DSPContext;
void ff_ac3dsp_init    (AC3DSPContext *c, int bit_exact);
void ff_ac3dsp_init_arm(AC3DSPContext *c, int bit_exact);
void ff_ac3dsp_init_x86(AC3DSPContext *c, int bit_exact);
void ff_ac3dsp_init_mips(AC3DSPContext *c, int bit_exact);
