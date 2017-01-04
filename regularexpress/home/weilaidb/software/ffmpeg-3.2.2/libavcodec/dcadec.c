#define MIN_PACKET_SIZE     16
#define MAX_PACKET_SIZE     0x104000
int ff_dca_set_channel_layout(AVCodecContext *avctx, int *ch_remap, int dca_mask)
void ff_dca_downmix_to_stereo_fixed(DCADSPContext *dcadsp, int32_t **samples,
int *coeff_l, int nsamples, int ch_mask)
void ff_dca_downmix_to_stereo_float(AVFloatDSPContext *fdsp, float **samples,
int *coeff_l, int nsamples, int ch_mask)
static int dcadec_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold void dcadec_flush(AVCodecContext *avctx)
static av_cold int dcadec_close(AVCodecContext *avctx)
static av_cold int dcadec_init(AVCodecContext *avctx)
#define OFFSET(x) offsetof(DCAContext, x)
#define PARAM AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption dcadec_options[] = ;
static const AVClass dcadec_class = ;
AVCodec ff_dca_decoder = ;
