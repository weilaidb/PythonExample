extern "C"
static av_cold int utvideo_decode_init(AVCodecContext *avctx)
static int utvideo_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int utvideo_decode_close(AVCodecContext *avctx)
AVCodec ff_libutvideo_decoder = ;
