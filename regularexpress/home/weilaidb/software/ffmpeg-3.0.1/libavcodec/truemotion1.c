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
static void select_delta_tables(TrueMotion1Context *s, int delta_table_index)
#if HAVE_BIGENDIAN
static int make_ydt15_entry(int p2, int p1, int16_t *ydt)
static int make_ydt15_entry(int p1, int p2, int16_t *ydt)
static int make_cdt15_entry(int p1, int p2, int16_t *cdt)
#if HAVE_BIGENDIAN
static int make_ydt16_entry(int p2, int p1, int16_t *ydt)
static int make_ydt16_entry(int p1, int p2, int16_t *ydt)
static int make_cdt16_entry(int p1, int p2, int16_t *cdt)
static int make_ydt24_entry(int p1, int p2, int16_t *ydt)
static int make_cdt24_entry(int p1, int p2, int16_t *cdt)
static void gen_vector_table15(TrueMotion1Context *s, const uint8_t *sel_vector_table)
static void gen_vector_table16(TrueMotion1Context *s, const uint8_t *sel_vector_table)
static void gen_vector_table24(TrueMotion1Context *s, const uint8_t *sel_vector_table)
static int truemotion1_decode_header(TrueMotion1Context *s)
static av_cold int truemotion1_decode_init(AVCodecContext *avctx)
#define GET_NEXT_INDEX() \
#define INC_INDEX                                                   \
do  while (0)
#define APPLY_C_PREDICTOR() \
predictor_pair = s->c_predictor_table[index]; \
horiz_pred += (predictor_pair >> 1); \
if (predictor_pair & 1)  else \
INC_INDEX;
#define APPLY_C_PREDICTOR_24() \
predictor_pair = s->c_predictor_table[index]; \
horiz_pred += (predictor_pair >> 1); \
if (predictor_pair & 1)  else \
INC_INDEX;
#define APPLY_Y_PREDICTOR() \
predictor_pair = s->y_predictor_table[index]; \
horiz_pred += (predictor_pair >> 1); \
if (predictor_pair & 1)  else \
INC_INDEX;
#define APPLY_Y_PREDICTOR_24() \
predictor_pair = s->y_predictor_table[index]; \
horiz_pred += (predictor_pair >> 1); \
if (predictor_pair & 1)  else \
INC_INDEX;
#define OUTPUT_PIXEL_PAIR() \
*current_pixel_pair = *vert_pred + horiz_pred; \
*vert_pred++ = *current_pixel_pair++;
static void truemotion1_decode_16bit(TrueMotion1Context *s)
static void truemotion1_decode_24bit(TrueMotion1Context *s)
static int truemotion1_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int truemotion1_decode_end(AVCodecContext *avctx)
AVCodec ff_truemotion1_decoder = ;
