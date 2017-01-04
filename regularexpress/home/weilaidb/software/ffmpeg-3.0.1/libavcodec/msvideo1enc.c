typedef struct Msvideo1EncContext  Msvideo1EncContext;
enum MSV1Mode;
#define SKIP_PREFIX 0x8400
#define SKIPS_MAX 0x03FF
#define MKRGB555(in, off) (((in)[off] << 10) | ((in)[(off) + 1] << 5) | ((in)[(off) + 2]))
static const int remap[16] = ;
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static av_cold int encode_init(AVCodecContext *avctx)
static av_cold int encode_end(AVCodecContext *avctx)
AVCodec ff_msvideo1_encoder = ;
