#define ZMBV_KEYFRAME 1
#define ZMBV_DELTAPAL 2
#define ZMBV_BLOCK 16
typedef struct ZmbvEncContext  ZmbvEncContext;
static int score_tab[256];
static inline int block_cmp(uint8_t *src, int stride, uint8_t *src2, int stride2,
int bw, int bh, int *xored)
static int zmbv_me(ZmbvEncContext *c, uint8_t *src, int sstride, uint8_t *prev,
int pstride, int x, int y, int *mx, int *my, int *xored)
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static av_cold int encode_end(AVCodecContext *avctx)
static av_cold int encode_init(AVCodecContext *avctx)
AVCodec ff_zmbv_encoder = ;
