#define PALETTE_COUNT 256
#define CHECK_STREAM_PTR(n) \
if ((stream_ptr + n) > s->size )
typedef struct Msvideo1Context  Msvideo1Context;
static av_cold int msvideo1_decode_init(AVCodecContext *avctx)
static void msvideo1_decode_8bit(Msvideo1Context *s)
static void msvideo1_decode_16bit(Msvideo1Context *s)
static int msvideo1_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int msvideo1_decode_end(AVCodecContext *avctx)
AVCodec ff_msvideo1_decoder = ;
