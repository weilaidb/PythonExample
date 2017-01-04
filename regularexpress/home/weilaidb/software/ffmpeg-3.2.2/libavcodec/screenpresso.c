typedef struct ScreenpressoContext  ScreenpressoContext;
static av_cold int screenpresso_close(AVCodecContext *avctx)
static av_cold int screenpresso_init(AVCodecContext *avctx)
static void sum_delta_flipped(uint8_t       *dst, int dst_linesize,
const uint8_t *src, int src_linesize,
int bytewidth, int height)
static int screenpresso_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
AVCodec ff_screenpresso_decoder = ;
