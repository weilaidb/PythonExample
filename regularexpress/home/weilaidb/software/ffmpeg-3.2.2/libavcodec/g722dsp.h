#define AVCODEC_G722DSP_H
typedef struct G722DSPContext  G722DSPContext;
void ff_g722dsp_init(G722DSPContext *c);
void ff_g722dsp_init_arm(G722DSPContext *c);
void ff_g722dsp_init_x86(G722DSPContext *c);
