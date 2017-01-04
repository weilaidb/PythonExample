#if HAVE_GSM_H
static av_cold int libgsm_encode_close(AVCodecContext *avctx)
static av_cold int libgsm_encode_init(AVCodecContext *avctx)
static int libgsm_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
#if CONFIG_LIBGSM_ENCODER
AVCodec ff_libgsm_encoder = ;
#if CONFIG_LIBGSM_MS_ENCODER
AVCodec ff_libgsm_ms_encoder = ;
