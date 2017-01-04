#define END_OF_STREAM 0x001
#define XAVS_PART_I8X8 0x002
#define XAVS_PART_P8X8 0x010
#define XAVS_PART_B8X8 0x100
typedef struct XavsContext  XavsContext;
static void XAVS_log(void *p, int level, const char *fmt, va_list args)
static int encode_nals(AVCodecContext *ctx, AVPacket *pkt,
xavs_nal_t *nals, int nnal)
static int XAVS_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static av_cold int XAVS_close(AVCodecContext *avctx)
static av_cold int XAVS_init(AVCodecContext *avctx)
#define OFFSET(x) offsetof(XavsContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass xavs_class = ;
static const AVCodecDefault xavs_defaults[] = ;
AVCodec ff_libxavs_encoder = ;
