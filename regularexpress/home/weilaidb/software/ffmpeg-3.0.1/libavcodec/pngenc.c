#define IOBUF_SIZE 4096
typedef struct APNGFctlChunk  APNGFctlChunk;
typedef struct PNGEncContext  PNGEncContext;
static void png_get_interlaced_row(uint8_t *dst, int row_size,
int bits_per_pixel, int pass,
const uint8_t *src, int width)
static void sub_png_paeth_prediction(uint8_t *dst, uint8_t *src, uint8_t *top,
int w, int bpp)
static void sub_left_prediction(PNGEncContext *c, uint8_t *dst, const uint8_t *src, int bpp, int size)
static void png_filter_row(PNGEncContext *c, uint8_t *dst, int filter_type,
uint8_t *src, uint8_t *top, int size, int bpp)
static uint8_t *png_choose_filter(PNGEncContext *s, uint8_t *dst,
uint8_t *src, uint8_t *top, int size, int bpp)
static void png_write_chunk(uint8_t **f, uint32_t tag,
const uint8_t *buf, int length)
static void png_write_image_data(AVCodecContext *avctx,
const uint8_t *buf, int length)
static int png_write_row(AVCodecContext *avctx, const uint8_t *data, int size)
#define AV_WB32_PNG(buf, n) AV_WB32(buf, lrint((n) * 100000))
static int png_get_chrm(enum AVColorPrimaries prim,  uint8_t *buf)
static int png_get_gama(enum AVColorTransferCharacteristic trc, uint8_t *buf)
static int encode_headers(AVCodecContext *avctx, const AVFrame *pict)
static int encode_frame(AVCodecContext *avctx, const AVFrame *pict)
static int encode_png(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static int apng_do_inverse_blend(AVFrame *output, const AVFrame *input,
APNGFctlChunk *fctl_chunk, uint8_t bpp)
static int apng_encode_frame(AVCodecContext *avctx, const AVFrame *pict,
APNGFctlChunk *best_fctl_chunk, APNGFctlChunk *best_last_fctl_chunk)
static int encode_apng(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static av_cold int png_enc_init(AVCodecContext *avctx)
static av_cold int png_enc_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(PNGEncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass pngenc_class = ;
static const AVClass apngenc_class = ;
AVCodec ff_png_encoder = ;
AVCodec ff_apng_encoder = ;
