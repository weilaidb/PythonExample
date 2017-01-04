#define AVCODEC_VP3DSP_H
typedef struct VP3DSPContext  VP3DSPContext;
void ff_vp3dsp_init(VP3DSPContext *c, int flags);
void ff_vp3dsp_init_arm(VP3DSPContext *c, int flags);
void ff_vp3dsp_init_ppc(VP3DSPContext *c, int flags);
void ff_vp3dsp_init_x86(VP3DSPContext *c, int flags);
