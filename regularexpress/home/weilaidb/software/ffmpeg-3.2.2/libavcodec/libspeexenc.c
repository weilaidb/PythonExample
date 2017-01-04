typedef struct LibSpeexEncContext  LibSpeexEncContext;
static av_cold void print_enc_params(AVCodecContext *avctx,
LibSpeexEncContext *s)
static av_cold int encode_init(AVCodecContext *avctx)
static int encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static av_cold int encode_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(LibSpeexEncContext, x)
#define AE AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass speex_class = ;
static const AVCodecDefault defaults[] = ;
AVCodec ff_libspeex_encoder = ;
