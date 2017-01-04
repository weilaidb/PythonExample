typedef struct TargaContext  TargaContext;
static int targa_encode_rle(uint8_t *outbuf, int out_size, const AVFrame *pic,
int bpp, int w, int h)
static int targa_encode_normal(uint8_t *outbuf, const AVFrame *pic, int bpp, int w, int h)
static int targa_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *p, int *got_packet)
static av_cold int targa_encode_init(AVCodecContext *avctx)
#define OFFSET(x) offsetof(TargaContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass targa_class = ;
AVCodec ff_targa_encoder = ;
