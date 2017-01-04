typedef struct SUNRASTContext  SUNRASTContext;
static void sunrast_image_write_header(AVCodecContext *avctx)
static void sunrast_image_write_image(AVCodecContext *avctx,
const uint8_t *pixels,
const uint32_t *palette_data,
int linesize)
static av_cold int sunrast_encode_init(AVCodecContext *avctx)
static int sunrast_encode_frame(AVCodecContext *avctx,  AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
#define OFFSET(x) offsetof(SUNRASTContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass sunrast_class = ;
#if FF_API_CODER_TYPE
static const AVCodecDefault sunrast_defaults[] = ;
AVCodec ff_sunrast_encoder = ;
