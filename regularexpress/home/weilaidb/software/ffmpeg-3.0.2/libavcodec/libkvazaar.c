typedef struct LibkvazaarContext  LibkvazaarContext;
static av_cold int libkvazaar_init(AVCodecContext *avctx)
static av_cold int libkvazaar_close(AVCodecContext *avctx)
static int libkvazaar_encode(AVCodecContext *avctx,
AVPacket *avpkt,
const AVFrame *frame,
int *got_packet_ptr)
static const enum AVPixelFormat pix_fmts[] = ;
#define OFFSET(x) offsetof(LibkvazaarContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass class = ;
static const AVCodecDefault defaults[] = ;
AVCodec ff_libkvazaar_encoder = ;
