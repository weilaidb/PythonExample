typedef struct RawVideoContext  RawVideoContext;
static const AVOption options[]=;
static const AVClass rawdec_class = ;
static av_cold int raw_init_decoder(AVCodecContext *avctx)
static void flip(AVCodecContext *avctx, AVFrame *frame)
#define SCALE16(x, bits) (((x) << (16 - (bits))) | ((x) >> (2 * (bits) - 16)))
#define MKSCALE16(name, r16, w16) \
static void name(AVCodecContext *avctx, uint8_t * dst, const uint8_t *buf, int buf_size, int packed) \
MKSCALE16(scale16be, AV_RB16, AV_WB16)
MKSCALE16(scale16le, AV_RL16, AV_WL16)
static int raw_decode(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int raw_close_decoder(AVCodecContext *avctx)
AVCodec ff_rawvideo_decoder = ;
