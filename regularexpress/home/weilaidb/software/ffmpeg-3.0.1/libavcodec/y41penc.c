static av_cold int y41p_encode_init(AVCodecContext *avctx)
static int y41p_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic, int *got_packet)
static av_cold int y41p_encode_close(AVCodecContext *avctx)
AVCodec ff_y41p_encoder = ;
