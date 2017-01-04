typedef struct ZeroCodecContext  ZeroCodecContext;
static int zerocodec_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int zerocodec_decode_close(AVCodecContext *avctx)
static av_cold int zerocodec_decode_init(AVCodecContext *avctx)
AVCodec ff_zerocodec_decoder = ;
