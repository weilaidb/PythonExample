#define BITSTREAM_READER_LE
#define EA_PREAMBLE_SIZE    8
#define kVGT_TAG MKTAG('k', 'V', 'G', 'T')
typedef struct TgvContext  TgvContext;
static av_cold int tgv_decode_init(AVCodecContext *avctx)
static int unpack(const uint8_t *src, const uint8_t *src_end,
uint8_t *dst, int width, int height)
static int tgv_decode_inter(TgvContext *s, AVFrame *frame,
const uint8_t *buf, const uint8_t *buf_end)
static int tgv_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int tgv_decode_end(AVCodecContext *avctx)
AVCodec ff_eatgv_decoder = ;
