#define AVFILTER_SSIM_H
typedef struct SSIMDSPContext  SSIMDSPContext;
void ff_ssim_init_x86(SSIMDSPContext *dsp);
