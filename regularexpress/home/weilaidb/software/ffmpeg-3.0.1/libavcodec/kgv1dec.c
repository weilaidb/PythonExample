typedef struct KgvContext  KgvContext;
static void decode_flush(AVCodecContext *avctx)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_kgv1_decoder = ;
