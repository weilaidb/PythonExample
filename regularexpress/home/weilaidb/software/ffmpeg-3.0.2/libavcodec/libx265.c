#if defined(_MSC_VER)
#define X265_API_IMPORTS 1
typedef struct libx265Context  libx265Context;
static int is_keyframe(NalUnitType naltype)
static av_cold int libx265_encode_close(AVCodecContext *avctx)
static av_cold int libx265_encode_init(AVCodecContext *avctx)
static int libx265_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic, int *got_packet)
static const enum AVPixelFormat x265_csp_eight[] = ;
static const enum AVPixelFormat x265_csp_ten[] = ;
static const enum AVPixelFormat x265_csp_twelve[] = ;
static av_cold void libx265_encode_init_csp(AVCodec *codec)
#define OFFSET(x) offsetof(libx265Context, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass class = ;
static const AVCodecDefault x265_defaults[] = ;
AVCodec ff_libx265_encoder = ;
