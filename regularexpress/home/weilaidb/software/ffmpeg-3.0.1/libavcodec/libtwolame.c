typedef struct TWOLAMEContext  TWOLAMEContext;
static av_cold int twolame_encode_close(AVCodecContext *avctx)
static av_cold int twolame_encode_init(AVCodecContext *avctx)
static int twolame_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
#define OFFSET(x) offsetof(TWOLAMEContext, x)
#define AE AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass twolame_class = ;
static const AVCodecDefault twolame_defaults[] = ;
static const int twolame_samplerates[] = ;
AVCodec ff_libtwolame_encoder = ;
