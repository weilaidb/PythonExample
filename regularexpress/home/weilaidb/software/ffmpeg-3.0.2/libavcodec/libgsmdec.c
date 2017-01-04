#if HAVE_GSM_H
typedef struct LibGSMDecodeContext  LibGSMDecodeContext;
static av_cold int libgsm_decode_init(AVCodecContext *avctx)
static av_cold int libgsm_decode_close(AVCodecContext *avctx)
static int libgsm_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static void libgsm_flush(AVCodecContext *avctx)
#if CONFIG_LIBGSM_DECODER
AVCodec ff_libgsm_decoder = ;
#if CONFIG_LIBGSM_MS_DECODER
AVCodec ff_libgsm_ms_decoder = ;
