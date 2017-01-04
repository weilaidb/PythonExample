#define AVCODEC_PNGDSP_H
typedef struct PNGDSPContext  PNGDSPContext;
void ff_pngdsp_init(PNGDSPContext *dsp);
void ff_pngdsp_init_x86(PNGDSPContext *dsp);
