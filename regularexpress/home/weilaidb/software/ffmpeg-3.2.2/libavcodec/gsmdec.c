static av_cold int gsm_init(AVCodecContext *avctx)
static int gsm_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static void gsm_flush(AVCodecContext *avctx)
#if CONFIG_GSM_DECODER
AVCodec ff_gsm_decoder = ;
#if CONFIG_GSM_MS_DECODER
AVCodec ff_gsm_ms_decoder = ;
