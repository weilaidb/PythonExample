#define BITSTREAM_READER_LE
typedef struct TgqContext  TgqContext;
static av_cold int tgq_decode_init(AVCodecContext *avctx)
static void tgq_decode_block(TgqContext *s, int16_t block[64], GetBitContext *gb)
static void tgq_idct_put_mb(TgqContext *s, int16_t (*block)[64], AVFrame *frame,
int mb_x, int mb_y)
static inline void tgq_dconly(TgqContext *s, unsigned char *dst,
int dst_stride, int dc)
static void tgq_idct_put_mb_dconly(TgqContext *s, AVFrame *frame,
int mb_x, int mb_y, const int8_t *dc)
static int tgq_decode_mb(TgqContext *s, AVFrame *frame, int mb_y, int mb_x)
static void tgq_calculate_qtable(TgqContext *s, int quant)
static int tgq_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_eatgq_decoder = ;
