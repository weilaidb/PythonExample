static av_cold int decode_init(AVCodecContext *avctx)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
#if CONFIG_R210_DECODER
AVCodec ff_r210_decoder = ;
#if CONFIG_R10K_DECODER
AVCodec ff_r10k_decoder = ;
#if CONFIG_AVRP_DECODER
AVCodec ff_avrp_decoder = ;
