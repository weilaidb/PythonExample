typedef struct TrueMotion1Context  TrueMotion1Context;
#define FLAG_SPRITE         32
#define FLAG_KEYFRAME       16
#define FLAG_INTERFRAME      8
#define FLAG_INTERPOLATED    4
struct frame_header ;
#define ALGO_NOP        0
#define ALGO_RGB16V     1
#define ALGO_RGB16H     2
#define ALGO_RGB24H     3
#define BLOCK_2x2  0
#define BLOCK_2x4  1
#define BLOCK_4x2  2
#define BLOCK_4x4  3
typedef struct comp_types  comp_types;
static const comp_types compression_types[17] = ;
select_delta_tables
#if HAVE_BIGENDIAN
make_ydt15_entry
make_ydt15_entry
make_cdt15_entry
#if HAVE_BIGENDIAN
make_ydt16_entry
make_ydt16_entry
make_cdt16_entry
make_ydt24_entry
make_cdt24_entry
gen_vector_table15
gen_vector_table16
gen_vector_table24
truemotion1_decode_header
truemotion1_decode_init
GET_NEXT_INDEX \
#define INC_INDEX                                                   \
do  while (0)
APPLY_C_PREDICTOR \
predictor_pair = s->c_predictor_table[index]; \
horiz_pred += (predictor_pair >> 1); \
if (predictor_pair & 1)  else \
INC_INDEX;
APPLY_C_PREDICTOR_24 \
predictor_pair = s->c_predictor_table[index]; \
horiz_pred += (predictor_pair >> 1); \
if (predictor_pair & 1)  else \
INC_INDEX;
APPLY_Y_PREDICTOR \
predictor_pair = s->y_predictor_table[index]; \
horiz_pred += (predictor_pair >> 1); \
if (predictor_pair & 1)  else \
INC_INDEX;
APPLY_Y_PREDICTOR_24 \
predictor_pair = s->y_predictor_table[index]; \
horiz_pred += (predictor_pair >> 1); \
if (predictor_pair & 1)  else \
INC_INDEX;
OUTPUT_PIXEL_PAIR \
*current_pixel_pair = *vert_pred + horiz_pred; \
*vert_pred++ = *current_pixel_pair++;
truemotion1_decode_16bit
truemotion1_decode_24bit
truemotion1_decode_frame
truemotion1_decode_end
AVCodec ff_truemotion1_decoder = ;
