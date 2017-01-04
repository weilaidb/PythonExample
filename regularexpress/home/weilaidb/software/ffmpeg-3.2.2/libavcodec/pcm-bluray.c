static int pcm_bluray_parse_header(AVCodecContext *avctx,
const uint8_t *header)
static int pcm_bluray_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_pcm_bluray_decoder = ;
