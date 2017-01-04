#define AVFILTER_PSNR_H
typedef struct PSNRDSPContext  PSNRDSPContext;
void ff_psnr_init_x86(PSNRDSPContext *dsp, int bpp);
