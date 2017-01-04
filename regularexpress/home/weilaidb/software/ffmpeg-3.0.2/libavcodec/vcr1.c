typedef struct VCR1Context  VCR1Context;
static av_cold int vcr1_decode_init(AVCodecContext *avctx)
static int vcr1_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
AVCodec ff_vcr1_decoder = ;
