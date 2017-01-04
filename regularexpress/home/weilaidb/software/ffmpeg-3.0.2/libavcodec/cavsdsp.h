#define AVCODEC_CAVSDSP_H
typedef struct CAVSDSPContext  CAVSDSPContext;
void ff_cavsdsp_init(CAVSDSPContext* c, AVCodecContext *avctx);
void ff_cavsdsp_init_x86(CAVSDSPContext* c, AVCodecContext *avctx);
