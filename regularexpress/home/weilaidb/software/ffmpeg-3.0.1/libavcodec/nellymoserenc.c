#define BITSTREAM_WRITER_LE
#define POW_TABLE_SIZE (1<<11)
#define POW_TABLE_OFFSET 3
#define OPT_SIZE ((1<<15) + 3000)
typedef struct NellyMoserEncodeContext  NellyMoserEncodeContext;
static float pow_table[POW_TABLE_SIZE];
static const uint8_t sf_lut[96] = ;
static const uint8_t sf_delta_lut[78] = ;
static const uint8_t quant_lut[230] = ;
static const float quant_lut_mul[7] = ;
static const float quant_lut_add[7] = ;
static const uint8_t quant_lut_offset[8] = ;
static void apply_mdct(NellyMoserEncodeContext *s)
static av_cold int encode_end(AVCodecContext *avctx)
static av_cold int encode_init(AVCodecContext *avctx)
#define find_best(val, table, LUT, LUT_add, LUT_size) \
best_idx = \
LUT[av_clip ((lrintf(val) >> 8) + LUT_add, 0, LUT_size - 1)]; \
if (fabs(val - table[best_idx]) > fabs(val - table[best_idx + 1])) \
best_idx++;
static void get_exponent_greedy(NellyMoserEncodeContext *s, float *cand, int *idx_table)
static inline float distance(float x, float y, int band)
static void get_exponent_dynamic(NellyMoserEncodeContext *s, float *cand, int *idx_table)
static void encode_block(NellyMoserEncodeContext *s, unsigned char *output, int output_size)
static int encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
AVCodec ff_nellymoser_encoder = ;
