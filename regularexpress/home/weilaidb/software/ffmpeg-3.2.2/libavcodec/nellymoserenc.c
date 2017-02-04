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
apply_mdct
encode_end
encode_init
find_best \
best_idx = \
LUT[av_clip ((lrintf(val) >> 8) + LUT_add, 0, LUT_size - 1)]; \
if (fabs(val - table[best_idx]) > fabs(val - table[best_idx + 1])) \
best_idx++;
get_exponent_greedy
distance
get_exponent_dynamic
encode_block
encode_frame
AVCodec ff_nellymoser_encoder = ;
