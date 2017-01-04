typedef struct AascContext  AascContext;
static av_cold int aasc_decode_init(AVCodecContext *avctx)
static int aasc_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int aasc_decode_end(AVCodecContext *avctx)
AVCodec ff_aasc_decoder = ;
