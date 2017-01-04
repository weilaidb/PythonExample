#if CONFIG_ZLIB
typedef struct CamStudioContext  CamStudioContext;
static void copy_frame_default(AVFrame *f, const uint8_t *src,
int linelen, int height)
static void add_frame_default(AVFrame *f, const uint8_t *src,
int linelen, int height)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_cscd_decoder = ;
