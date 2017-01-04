typedef struct RpzaContext  RpzaContext;
#define CHECK_BLOCK()                                                         \
if (total_blocks < 1)                                                                           \
#define ADVANCE_BLOCK()             \
static int rpza_decode_stream(RpzaContext *s)
static av_cold int rpza_decode_init(AVCodecContext *avctx)
static int rpza_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int rpza_decode_end(AVCodecContext *avctx)
AVCodec ff_rpza_decoder = ;
