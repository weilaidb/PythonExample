#define AVCODEC_VORBISDSP_H
typedef struct VorbisDSPContext  VorbisDSPContext;
void ff_vorbisdsp_init(VorbisDSPContext *dsp);
void ff_vorbisdsp_init_aarch64(VorbisDSPContext *dsp);
void ff_vorbisdsp_init_x86(VorbisDSPContext *dsp);
void ff_vorbisdsp_init_arm(VorbisDSPContext *dsp);
void ff_vorbisdsp_init_ppc(VorbisDSPContext *dsp);
