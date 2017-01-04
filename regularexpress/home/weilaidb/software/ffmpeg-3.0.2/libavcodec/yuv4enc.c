static av_cold int yuv4_encode_init(AVCodecContext *avctx)
static int yuv4_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic, int *got_packet)
static av_cold int yuv4_encode_close(AVCodecContext *avctx)
AVCodec ff_yuv4_encoder = ;
