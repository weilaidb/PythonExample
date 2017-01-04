static int sp5x_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
#if CONFIG_SP5X_DECODER
AVCodec ff_sp5x_decoder = ;
#if CONFIG_AMV_DECODER
AVCodec ff_amv_decoder = ;
