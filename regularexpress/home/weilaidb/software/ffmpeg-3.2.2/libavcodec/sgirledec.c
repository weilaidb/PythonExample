static av_cold int sgirle_decode_init(AVCodecContext *avctx)
#define RBG323_TO_BGR8(x) ((((x) << 3) & 0xC0) |                                \
(((x) << 3) & 0x38) |                                \
(((x) >> 5) & 7))
static av_always_inline
void rbg323_to_bgr8(uint8_t *dst, const uint8_t *src, int size)
static int decode_sgirle8(AVCodecContext *avctx, uint8_t *dst,
const uint8_t *src, int src_size,
int width, int height, ptrdiff_t linesize)
static int sgirle_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
AVCodec ff_sgirle_decoder = ;
