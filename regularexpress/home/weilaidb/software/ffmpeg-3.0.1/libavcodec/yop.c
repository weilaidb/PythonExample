typedef struct YopDecContext  YopDecContext;
static const uint8_t paint_lut[15][4] =
;
static const int8_t motion_vector[16][2] =
;
static av_cold int yop_decode_close(AVCodecContext *avctx)
static av_cold int yop_decode_init(AVCodecContext *avctx)
static int yop_paint_block(YopDecContext *s, int linesize, int tag)
static int yop_copy_previous_block(YopDecContext *s, int linesize, int copy_tag)
static uint8_t yop_get_next_nibble(YopDecContext *s)
static int yop_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_yop_decoder = ;
