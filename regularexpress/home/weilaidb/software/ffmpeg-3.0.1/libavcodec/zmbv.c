#define ZMBV_KEYFRAME 1
#define ZMBV_DELTAPAL 2
enum ZmbvFormat ;
typedef struct ZmbvContext  ZmbvContext;
static int zmbv_decode_xor_8(ZmbvContext *c)
static int zmbv_decode_xor_16(ZmbvContext *c)
static int zmbv_decode_xor_24(ZmbvContext *c)
static int zmbv_decode_xor_32(ZmbvContext *c)
static int zmbv_decode_intra(ZmbvContext *c)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame, AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_zmbv_decoder = ;
