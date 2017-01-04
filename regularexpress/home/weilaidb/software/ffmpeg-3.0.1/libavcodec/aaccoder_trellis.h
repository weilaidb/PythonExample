#define AVCODEC_AACCODER_TRELLIS_H
typedef struct TrellisBandCodingPath  TrellisBandCodingPath;
static void codebook_trellis_rate(AACEncContext *s, SingleChannelElement *sce,
int win, int group_len, const float lambda)
