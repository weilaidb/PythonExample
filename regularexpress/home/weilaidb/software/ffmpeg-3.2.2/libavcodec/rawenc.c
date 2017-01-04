static av_cold int raw_encode_init(AVCodecContext *avctx)
static int raw_encode(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
AVCodec ff_rawvideo_encoder = ;
