typedef struct  FRWUContext;
static av_cold int decode_init(AVCodecContext *avctx)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static const AVOption frwu_options[] = ;
static const AVClass frwu_class = ;
AVCodec ff_frwu_decoder = ;
