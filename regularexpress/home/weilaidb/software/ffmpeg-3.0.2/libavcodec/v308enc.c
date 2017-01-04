static av_cold int v308_encode_init(AVCodecContext *avctx)
static int v308_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic, int *got_packet)
static av_cold int v308_encode_close(AVCodecContext *avctx)
AVCodec ff_v308_encoder = ;
