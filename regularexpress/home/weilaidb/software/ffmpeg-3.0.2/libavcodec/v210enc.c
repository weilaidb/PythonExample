#define CLIP(v) av_clip(v, 4, 1019)
#define CLIP8(v) av_clip(v, 1, 254)
#define WRITE_PIXELS(a, b, c)           \
do  while (0)
#define WRITE_PIXELS8(a, b, c)          \
do  while (0)
static void v210_planar_pack_8_c(const uint8_t *y, const uint8_t *u,
const uint8_t *v, uint8_t *dst,
ptrdiff_t width)
static void v210_planar_pack_10_c(const uint16_t *y, const uint16_t *u,
const uint16_t *v, uint8_t *dst,
ptrdiff_t width)
av_cold void ff_v210enc_init(V210EncContext *s)
static av_cold int encode_init(AVCodecContext *avctx)
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic, int *got_packet)
AVCodec ff_v210_encoder = ;
