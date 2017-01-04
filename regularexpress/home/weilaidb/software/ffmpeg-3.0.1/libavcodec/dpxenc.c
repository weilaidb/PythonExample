typedef struct DPXContext  DPXContext;
static av_cold int encode_init(AVCodecContext *avctx)
static av_always_inline void write16_internal(int big_endian, void *p, int value)
static av_always_inline void write32_internal(int big_endian, void *p, int value)
#define write16(p, value) write16_internal(s->big_endian, p, value)
#define write32(p, value) write32_internal(s->big_endian, p, value)
static void encode_rgb48_10bit(AVCodecContext *avctx, const AVFrame *pic,
uint8_t *dst)
static void encode_gbrp10(AVCodecContext *avctx, const AVFrame *pic, uint8_t *dst)
static void encode_gbrp12(AVCodecContext *avctx, const AVFrame *pic, uint16_t *dst)
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
AVCodec ff_dpx_encoder = ;
