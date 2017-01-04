static av_cold int ass_decode_init(AVCodecContext *avctx)
static int ass_decode_frame(AVCodecContext *avctx, void *data, int *got_sub_ptr,
AVPacket *avpkt)
#if CONFIG_SSA_DECODER
AVCodec ff_ssa_decoder = ;
#if CONFIG_ASS_DECODER
AVCodec ff_ass_decoder = ;
