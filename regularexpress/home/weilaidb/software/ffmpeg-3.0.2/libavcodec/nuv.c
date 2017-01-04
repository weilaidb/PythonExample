typedef struct NuvContext  NuvContext;
static const uint8_t fallback_lquant[] = ;
static const uint8_t fallback_cquant[] = ;
static void copy_frame(AVFrame *f, const uint8_t *src, int width, int height)
static int get_quant(AVCodecContext *avctx, NuvContext *c, const uint8_t *buf,
int size)
static void get_quant_quality(NuvContext *c, int quality)
static int codec_reinit(AVCodecContext *avctx, int width, int height,
int quality)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_nuv_decoder = ;
