typedef struct LibSpeexContext  LibSpeexContext;
static av_cold int libspeex_decode_init(AVCodecContext *avctx)
static int libspeex_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int libspeex_decode_close(AVCodecContext *avctx)
static av_cold void libspeex_decode_flush(AVCodecContext *avctx)
AVCodec ff_libspeex_decoder = ;
