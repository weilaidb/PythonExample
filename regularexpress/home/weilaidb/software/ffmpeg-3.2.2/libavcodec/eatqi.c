typedef struct TqiContext  TqiContext;
static av_cold int tqi_decode_init(AVCodecContext *avctx)
static int tqi_decode_mb(TqiContext *t, int16_t (*block)[64])
static inline void tqi_idct_put(AVCodecContext *avctx, AVFrame *frame,
int16_t (*block)[64])
static void tqi_calculate_qtable(TqiContext *t, int quant)
static int tqi_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int tqi_decode_end(AVCodecContext *avctx)
AVCodec ff_eatqi_decoder = ;
