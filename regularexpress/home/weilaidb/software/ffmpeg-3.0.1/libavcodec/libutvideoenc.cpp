extern "C"
static av_cold int utvideo_encode_init(AVCodecContext *avctx)
static int utvideo_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic, int *got_packet)
static av_cold int utvideo_encode_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(UtVideoContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass utvideo_class = ;
AVCodec ff_libutvideo_encoder = ;
