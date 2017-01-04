typedef struct MsrleContext  MsrleContext;
static av_cold int msrle_decode_init(AVCodecContext *avctx)
static int msrle_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int msrle_decode_end(AVCodecContext *avctx)
AVCodec ff_msrle_decoder = ;
