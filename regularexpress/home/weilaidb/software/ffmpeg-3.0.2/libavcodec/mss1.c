typedef struct MSS1Context  MSS1Context;
static void arith_normalise(ArithCoder *c)
ARITH_GET_BIT(arith)
static int arith_get_bits(ArithCoder *c, int bits)
static int arith_get_number(ArithCoder *c, int mod_val)
static int arith_get_prob(ArithCoder *c, int16_t *probs)
ARITH_GET_MODEL_SYM(arith)
static void arith_init(ArithCoder *c, GetBitContext *gb)
static int decode_pal(MSS12Context *ctx, ArithCoder *acoder)
static int mss1_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int mss1_decode_init(AVCodecContext *avctx)
static av_cold int mss1_decode_end(AVCodecContext *avctx)
AVCodec ff_mss1_decoder = ;
