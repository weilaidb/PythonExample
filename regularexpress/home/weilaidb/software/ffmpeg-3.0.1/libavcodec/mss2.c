typedef struct MSS2Context  MSS2Context;
static void arith2_normalise(ArithCoder *c)
ARITH_GET_BIT(arith2)
static int arith2_get_scaled_value(int value, int n, int range)
static void arith2_rescale_interval(ArithCoder *c, int range,
int low, int high, int n)
static int arith2_get_number(ArithCoder *c, int n)
static int arith2_get_prob(ArithCoder *c, int16_t *probs)
ARITH_GET_MODEL_SYM(arith2)
static int arith2_get_consumed_bytes(ArithCoder *c)
static void arith2_init(ArithCoder *c, GetByteContext *gB)
static int decode_pal_v2(MSS12Context *ctx, const uint8_t *buf, int buf_size)
static int decode_555(GetByteContext *gB, uint16_t *dst, int stride,
int keyframe, int w, int h)
static int decode_rle(GetBitContext *gb, uint8_t *pal_dst, int pal_stride,
uint8_t *rgb_dst, int rgb_stride, uint32_t *pal,
int keyframe, int kf_slipt, int slice, int w, int h)
static int decode_wmv9(AVCodecContext *avctx, const uint8_t *buf, int buf_size,
int x, int y, int w, int h, int wmv9_mask)
typedef struct Rectangle  Rectangle;
#define MAX_WMV9_RECTANGLES 20
#define ARITH2_PADDING 2
static int mss2_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int wmv9_init(AVCodecContext *avctx)
static av_cold int mss2_decode_end(AVCodecContext *avctx)
static av_cold int mss2_decode_init(AVCodecContext *avctx)
AVCodec ff_mss2_decoder = ;
