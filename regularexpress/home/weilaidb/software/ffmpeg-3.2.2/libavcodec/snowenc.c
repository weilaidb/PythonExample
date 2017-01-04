#define FF_ME_ITER 50
static av_cold int encode_init(AVCodecContext *avctx)
static int pix_sum(uint8_t * pix, int line_size, int w, int h)
static int pix_norm1(uint8_t * pix, int line_size, int w)
static inline int get_penalty_factor(int lambda, int lambda2, int type)
#define P_LEFT P[1]
#define P_TOP P[2]
#define P_TOPRIGHT P[3]
#define P_MEDIAN P[4]
#define P_MV1 P[9]
#define FLAG_QPEL   1
static int encode_q_branch(SnowContext *s, int level, int x, int y)
static void encode_q_branch2(SnowContext *s, int level, int x, int y)
static int get_dc(SnowContext *s, int mb_x, int mb_y, int plane_index)
static inline int get_block_bits(SnowContext *s, int x, int y, int w)
static int get_block_rd(SnowContext *s, int mb_x, int mb_y, int plane_index, uint8_t (*obmc_edged)[MB_SIZE * 2])
static int get_4block_rd(SnowContext *s, int mb_x, int mb_y, int plane_index)
static int encode_subband_c0run(SnowContext *s, SubBand *b, const IDWTELEM *src, const IDWTELEM *parent, int stride, int orientation)
static int encode_subband(SnowContext *s, SubBand *b, const IDWTELEM *src, const IDWTELEM *parent, int stride, int orientation)
static av_always_inline int check_block(SnowContext *s, int mb_x, int mb_y, int p[3], int intra, uint8_t (*obmc_edged)[MB_SIZE * 2], int *best_rd)
static av_always_inline int check_block_inter(SnowContext *s, int mb_x, int mb_y, int p0, int p1, uint8_t (*obmc_edged)[MB_SIZE * 2], int *best_rd)
static av_always_inline int check_4block_inter(SnowContext *s, int mb_x, int mb_y, int p0, int p1, int ref, int *best_rd)
static void iterative_me(SnowContext *s)
static void encode_blocks(SnowContext *s, int search)
static void quantize(SnowContext *s, SubBand *b, IDWTELEM *dst, DWTELEM *src, int stride, int bias)
static void dequantize(SnowContext *s, SubBand *b, IDWTELEM *src, int stride)
static void decorrelate(SnowContext *s, SubBand *b, IDWTELEM *src, int stride, int inverse, int use_median)
static void correlate(SnowContext *s, SubBand *b, IDWTELEM *src, int stride, int inverse, int use_median)
static void encode_qlogs(SnowContext *s)
static void encode_header(SnowContext *s)
static void update_last_header_values(SnowContext *s)
static int qscale2qlog(int qscale)
static int ratecontrol_1pass(SnowContext *s, AVFrame *pict)
static void calculate_visual_weight(SnowContext *s, Plane *p)
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static av_cold int encode_end(AVCodecContext *avctx)
#define OFFSET(x) offsetof(SnowContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass snowenc_class = ;
AVCodec ff_snow_encoder = ;
