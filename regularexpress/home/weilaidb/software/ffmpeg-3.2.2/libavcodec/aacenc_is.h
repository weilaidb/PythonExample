#define AVCODEC_AACENC_IS_H
#define INT_STEREO_LOW_LIMIT 6100
struct AACISError ;
struct AACISError ff_aac_is_encoding_err(AACEncContext *s, ChannelElement *cpe,
int start, int w, int g, float ener0,
float ener1, float ener01,
int use_pcoeffs, int phase);
void ff_aac_search_for_is(AACEncContext *s, AVCodecContext *avctx, ChannelElement *cpe);
