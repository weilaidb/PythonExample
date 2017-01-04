enum LagarithFrameType ;
typedef struct LagarithContext  LagarithContext;
static uint64_t softfloat_reciprocal(uint32_t denom)
static uint32_t softfloat_mul(uint32_t x, uint64_t mantissa)
static uint8_t lag_calc_zero_run(int8_t x)
static int lag_decode_prob(GetBitContext *gb, uint32_t *value)
static int lag_read_prob_header(lag_rac *rac, GetBitContext *gb)
static void add_lag_median_prediction(uint8_t *dst, uint8_t *src1,
uint8_t *diff, int w, int *left,
int *left_top)
static void lag_pred_line(LagarithContext *l, uint8_t *buf,
int width, int stride, int line)
static void lag_pred_line_yuy2(LagarithContext *l, uint8_t *buf,
int width, int stride, int line,
int is_luma)
static int lag_decode_line(LagarithContext *l, lag_rac *rac,
uint8_t *dst, int width, int stride,
int esc_count)
static int lag_decode_zero_run_line(LagarithContext *l, uint8_t *dst,
const uint8_t *src, const uint8_t *src_end,
int width, int esc_count)
static int lag_decode_arith_plane(LagarithContext *l, uint8_t *dst,
int width, int height, int stride,
const uint8_t *src, int src_size)
static int lag_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame, AVPacket *avpkt)
static av_cold int lag_decode_init(AVCodecContext *avctx)
static av_cold int lag_decode_end(AVCodecContext *avctx)
AVCodec ff_lagarith_decoder = ;
