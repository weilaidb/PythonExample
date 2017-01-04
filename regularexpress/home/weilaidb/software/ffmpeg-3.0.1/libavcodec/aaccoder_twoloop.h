#define AVCODEC_AACCODER_TWOLOOP_H
#define NOISE_LOW_LIMIT 4000
#define sclip(x) av_clip(x,60,218)
static inline int ff_pns_bits(SingleChannelElement *sce, int w, int g)
static void search_for_quantizers_twoloop(AVCodecContext *avctx,
AACEncContext *s,
SingleChannelElement *sce,
const float lambda)
