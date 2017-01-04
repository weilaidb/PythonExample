static av_cold int v408_encode_init(AVCodecContext *avctx)
static int v408_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic, int *got_packet)
static av_cold int v408_encode_close(AVCodecContext *avctx)
#if CONFIG_AYUV_ENCODER
AVCodec ff_ayuv_encoder = ;
#if CONFIG_V408_ENCODER
AVCodec ff_v408_encoder = ;
