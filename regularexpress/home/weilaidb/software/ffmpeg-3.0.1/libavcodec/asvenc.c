static inline void asv2_put_bits(PutBitContext *pb, int n, int v)
static inline void asv1_put_level(PutBitContext *pb, int level)
static inline void asv2_put_level(ASV1Context *a, PutBitContext *pb, int level)
static inline void asv1_encode_block(ASV1Context *a, int16_t block[64])
static inline void asv2_encode_block(ASV1Context *a, int16_t block[64])
#define MAX_MB_SIZE (30 * 16 * 16 * 3 / 2 / 8)
static inline int encode_mb(ASV1Context *a, int16_t block[6][64])
static inline void dct_get(ASV1Context *a, const AVFrame *frame,
int mb_x, int mb_y)
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static av_cold int encode_init(AVCodecContext *avctx)
#if CONFIG_ASV1_ENCODER
AVCodec ff_asv1_encoder = ;
#if CONFIG_ASV2_ENCODER
AVCodec ff_asv2_encoder = ;
