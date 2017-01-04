#define AVCODEC_PRORESDSP_H
#define PRORES_BITS_PER_SAMPLE 10
typedef struct ProresDSPContext  ProresDSPContext;
void ff_proresdsp_init(ProresDSPContext *dsp, AVCodecContext *avctx);
void ff_proresdsp_init_x86(ProresDSPContext *dsp, AVCodecContext *avctx);
