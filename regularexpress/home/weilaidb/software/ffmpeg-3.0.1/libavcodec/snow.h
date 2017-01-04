#define AVCODEC_SNOW_H
#define FF_MPV_OFFSET(x) (offsetof(MpegEncContext, x) + offsetof(SnowContext, m))
#define MID_STATE 128
#define MAX_PLANES 4
#define QSHIFT 5
#define QROOT (1<<QSHIFT)
#define LOSSLESS_QLOG -128
#define FRAC_BITS 4
#define MAX_REF_FRAMES 8
#define LOG2_OBMC_MAX 8
#define OBMC_MAX (1<<(LOG2_OBMC_MAX))
typedef struct BlockNodeBlockNode;
static const BlockNode null_block= ;
#define LOG2_MB_SIZE 4
#define MB_SIZE (1<<LOG2_MB_SIZE)
#define ENCODER_EXTRA_BITS 4
#define HTAPS_MAX 8
typedef struct x_and_coeff x_and_coeff;
typedef struct SubBandSubBand;
typedef struct PlanePlane;
typedef struct SnowContextSnowContext;
extern const uint8_t * const ff_obmc_tab[4];
extern uint8_t ff_qexp[QROOT];
extern int ff_scale_mv_ref[MAX_REF_FRAMES][MAX_REF_FRAMES];
static av_always_inline void snow_interleave_line_header(int * i, int width, IDWTELEM * low, IDWTELEM * high)
static av_always_inline void snow_interleave_line_footer(int * i, IDWTELEM * low, IDWTELEM * high)
static av_always_inline void snow_horizontal_compose_lift_lead_out(int i, IDWTELEM * dst, IDWTELEM * src, IDWTELEM * ref, int width, int w, int lift_high, int mul, int add, int shift)
static av_always_inline void snow_horizontal_compose_liftS_lead_out(int i, IDWTELEM * dst, IDWTELEM * src, IDWTELEM * ref, int width, int w)
int ff_snow_common_init(AVCodecContext *avctx);
int ff_snow_common_init_after_header(AVCodecContext *avctx);
void ff_snow_common_end(SnowContext *s);
void ff_snow_release_buffer(AVCodecContext *avctx);
void ff_snow_reset_contexts(SnowContext *s);
int ff_snow_alloc_blocks(SnowContext *s);
int ff_snow_frame_start(SnowContext *s);
void ff_snow_pred_block(SnowContext *s, uint8_t *dst, uint8_t *tmp, ptrdiff_t stride,
int sx, int sy, int b_w, int b_h, const BlockNode *block,
int plane_index, int w, int h);
int ff_snow_get_buffer(SnowContext *s, AVFrame *frame);
static inline void snow_set_blocks(SnowContext *s, int level, int x, int y, int l, int cb, int cr, int mx, int my, int ref, int type)
static inline void pred_mv(SnowContext *s, int *mx, int *my, int ref,
const BlockNode *left, const BlockNode *top, const BlockNode *tr)
static av_always_inline int same_block(BlockNode *a, BlockNode *b)
static av_always_inline void add_yblock(SnowContext *s, int sliced, slice_buffer *sb, IDWTELEM *dst, uint8_t *dst8, const uint8_t *obmc, int src_x, int src_y, int b_w, int b_h, int w, int h, int dst_stride, int src_stride, int obmc_stride, int b_x, int b_y, int add, int offset_dst, int plane_index)
static av_always_inline void predict_slice(SnowContext *s, IDWTELEM *buf, int plane_index, int add, int mb_y)
static av_always_inline void predict_plane(SnowContext *s, IDWTELEM *buf, int plane_index, int add)
static inline void set_blocks(SnowContext *s, int level, int x, int y, int l, int cb, int cr, int mx, int my, int ref, int type)
static inline void init_ref(MotionEstContext *c, uint8_t *src[3], uint8_t *ref[3], uint8_t *ref2[3], int x, int y, int ref_index)
extern const int8_t ff_quant3bA[256];
#define QEXPSHIFT (7-FRAC_BITS+8)
static inline void put_symbol(RangeCoder *c, uint8_t *state, int v, int is_signed)
static inline int get_symbol(RangeCoder *c, uint8_t *state, int is_signed)
static inline void put_symbol2(RangeCoder *c, uint8_t *state, int v, int log2)
static inline int get_symbol2(RangeCoder *c, uint8_t *state, int log2)
static inline void unpack_coeffs(SnowContext *s, SubBand *b, SubBand * parent, int orientation)
