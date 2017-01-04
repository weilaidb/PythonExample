#define SGI_SINGLE_CHAN 2
#define SGI_MULTI_CHAN 3
typedef struct SgiContext  SgiContext;
static av_cold int encode_init(AVCodecContext *avctx)
static int sgi_rle_encode(PutByteContext *pbc, const uint8_t *src,
int w, int bpp)
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
#define OFFSET(x) offsetof(SgiContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass sgi_class = ;
AVCodec ff_sgi_encoder = ;
