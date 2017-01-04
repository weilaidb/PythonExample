#define EXTRADATA1_SIZE (6 + 256 * 3)
typedef struct Rl2Context  Rl2Context;
static void rl2_rle_decode(Rl2Context *s, const uint8_t *in, int size,
uint8_t *out, int stride, int video_base)
static av_cold int rl2_decode_init(AVCodecContext *avctx)
static int rl2_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int rl2_decode_end(AVCodecContext *avctx)
AVCodec ff_rl2_decoder = ;
