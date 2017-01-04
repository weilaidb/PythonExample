#define PADDING 0
#define PADDING_COLOR 0
static void put_xsub_rle(PutBitContext *pb, int len, int color)
static int xsub_encode_rle(PutBitContext *pb, const uint8_t *bitmap,
int linesize, int w, int h)
static int make_tc(uint64_t ms, int *tc)
static int xsub_encode(AVCodecContext *avctx, unsigned char *buf,
int bufsize, const AVSubtitle *h)
static av_cold int xsub_encoder_init(AVCodecContext *avctx)
AVCodec ff_xsub_encoder = ;
