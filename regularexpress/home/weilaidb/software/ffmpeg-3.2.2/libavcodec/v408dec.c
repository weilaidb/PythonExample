static av_cold int v408_decode_init(AVCodecContext *avctx)
static int v408_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
#if CONFIG_AYUV_DECODER
AVCodec ff_ayuv_decoder = ;
#if CONFIG_V408_DECODER
AVCodec ff_v408_decoder = ;
