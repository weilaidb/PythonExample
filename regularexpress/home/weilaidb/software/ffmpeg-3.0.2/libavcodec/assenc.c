typedef struct  ASSEncodeContext;
static av_cold int ass_encode_init(AVCodecContext *avctx)
static int ass_encode_frame(AVCodecContext *avctx,
unsigned char *buf, int bufsize,
const AVSubtitle *sub)
#if CONFIG_SSA_ENCODER
AVCodec ff_ssa_encoder = ;
#if CONFIG_ASS_ENCODER
AVCodec ff_ass_encoder = ;
