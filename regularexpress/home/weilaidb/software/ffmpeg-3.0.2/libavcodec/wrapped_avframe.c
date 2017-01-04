static void wrapped_avframe_release_buffer(void *unused, uint8_t *data)
static int wrapped_avframe_encode(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
AVCodec ff_wrapped_avframe_encoder = ;
