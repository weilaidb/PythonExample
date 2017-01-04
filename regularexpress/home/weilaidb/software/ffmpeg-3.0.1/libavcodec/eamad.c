#define EA_PREAMBLE_SIZE    8
#define MADk_TAG MKTAG('M', 'A', 'D', 'k')
#define MADm_TAG MKTAG('M', 'A', 'D', 'm')
#define MADe_TAG MKTAG('M', 'A', 'D', 'e')
typedef struct MadContext  MadContext;
static av_cold int decode_init(AVCodecContext *avctx)
static inline void comp(unsigned char *dst, int dst_stride,
unsigned char *src, int src_stride, int add)
static inline void comp_block(MadContext *t, AVFrame *frame,
int mb_x, int mb_y,
int j, int mv_x, int mv_y, int add)
static inline void idct_put(MadContext *t, AVFrame *frame, int16_t *block,
int mb_x, int mb_y, int j)
static inline int decode_block_intra(MadContext *s, int16_t * block)
static int decode_motion(GetBitContext *gb)
static int decode_mb(MadContext *s, AVFrame *frame, int inter)
static void calc_quant_matrix(MadContext *s, int qscale)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_eamad_decoder = ;
