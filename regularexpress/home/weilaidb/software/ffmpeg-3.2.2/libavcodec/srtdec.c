static void srt_to_ass(AVCodecContext *avctx, AVBPrint *dst,
const char *in, int x1, int y1, int x2, int y2)
static int srt_decode_frame(AVCodecContext *avctx,
void *data, int *got_sub_ptr, AVPacket *avpkt)
#if CONFIG_SRT_DECODER
AVCodec ff_srt_decoder = ;
#if CONFIG_SUBRIP_DECODER
AVCodec ff_subrip_decoder = ;
