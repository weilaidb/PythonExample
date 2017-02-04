#define TM2_ESCAPE 0x80000000
#define TM2_DELTAS 64
enum TM2_STREAMS ;
enum TM2_BLOCKS ;
typedef struct TM2Context  TM2Context;
typedef struct TM2Codes  TM2Codes;
typedef struct TM2Huff  TM2Huff;
tm2_read_tree
tm2_build_huff_table
tm2_free_codes
tm2_get_token
#define TM2_OLD_HEADER_MAGIC 0x00000100
#define TM2_NEW_HEADER_MAGIC 0x00000101
tm2_read_header
tm2_read_deltas
tm2_read_stream
GET_TOK
TM2_INIT_POINTERS \
int *last, *clast; \
int *Y, *U, *V;\
int Ystride, Ustride, Vstride;\
\
Ystride = ctx->y_stride;\
Vstride = ctx->uv_stride;\
Ustride = ctx->uv_stride;\
Y = (ctx->cur?ctx->Y2:ctx->Y1) + by * 4 * Ystride + bx * 4;\
V = (ctx->cur?ctx->V2:ctx->V1) + by * 2 * Vstride + bx * 2;\
U = (ctx->cur?ctx->U2:ctx->U1) + by * 2 * Ustride + bx * 2;\
last = ctx->last + bx * 4;\
clast = ctx->clast + bx * 4;
TM2_INIT_POINTERS_2 \
int *Yo, *Uo, *Vo;\
int oYstride, oUstride, oVstride;\
\
TM2_INIT_POINTERS();\
oYstride = Ystride;\
oVstride = Vstride;\
oUstride = Ustride;\
Yo = (ctx->cur?ctx->Y1:ctx->Y2) + by * 4 * oYstride + bx * 4;\
Vo = (ctx->cur?ctx->V1:ctx->V2) + by * 2 * oVstride + bx * 2;\
Uo = (ctx->cur?ctx->U1:ctx->U2) + by * 2 * oUstride + bx * 2;
TM2_RECALC_BLOCK
tm2_apply_deltas
tm2_high_chroma
tm2_low_chroma
tm2_hi_res_block
tm2_med_res_block
tm2_low_res_block
tm2_null_res_block
tm2_still_block
tm2_update_block
tm2_motion_block
tm2_decode_blocks
static const int tm2_stream_order[TM2_NUM_STREAMS] = ;
#define TM2_HEADER_SIZE 40
decode_frame
decode_init
decode_end
AVCodec ff_truemotion2_decoder = ;
