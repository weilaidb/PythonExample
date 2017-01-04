#if !OPENH264_VER_AT_LEAST(1, 6)
#define SM_SIZELIMITED_SLICE SM_DYN_SLICE
typedef struct SVCContext  SVCContext;
#define OFFSET(x) offsetof(SVCContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass class = ;
static av_cold int svc_encode_close(AVCodecContext *avctx)
static av_cold int svc_encode_init(AVCodecContext *avctx)
static int svc_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet)
AVCodec ff_libopenh264_encoder = ;
