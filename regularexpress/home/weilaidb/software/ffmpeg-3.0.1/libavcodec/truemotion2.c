#define TM2_ESCAPE 0x80000000
#define TM2_DELTAS 64
enum TM2_STREAMS ;
enum TM2_BLOCKS ;
typedef struct TM2Context  TM2Context;
typedef struct TM2Codes  TM2Codes;
typedef struct TM2Huff  TM2Huff;
static int tm2_read_tree(TM2Context *ctx, uint32_t prefix, int length, TM2Huff *huff)
static int tm2_build_huff_table(TM2Context *ctx, TM2Codes *code)
static void tm2_free_codes(TM2Codes *code)
static inline int tm2_get_token(GetBitContext *gb, TM2Codes *code)
#define TM2_OLD_HEADER_MAGIC 0x00000100
#define TM2_NEW_HEADER_MAGIC 0x00000101
static inline int tm2_read_header(TM2Context *ctx, const uint8_t *buf)
static int tm2_read_deltas(TM2Context *ctx, int stream_id)
static int tm2_read_stream(TM2Context *ctx, const uint8_t *buf, int stream_id, int buf_size)
static inline int GET_TOK(TM2Context *ctx,int type)
#define TM2_INIT_POINTERS() \
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
#define TM2_INIT_POINTERS_2() \
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
#define TM2_RECALC_BLOCK(CHR, stride, last, CD)
static inline void tm2_apply_deltas(TM2Context *ctx, int* Y, int stride, int *deltas, int *last)
static inline void tm2_high_chroma(int *data, int stride, int *last, int *CD, int *deltas)
static inline void tm2_low_chroma(int *data, int stride, int *clast, int *CD, int *deltas, int bx)
static inline void tm2_hi_res_block(TM2Context *ctx, AVFrame *pic, int bx, int by)
static inline void tm2_med_res_block(TM2Context *ctx, AVFrame *pic, int bx, int by)
static inline void tm2_low_res_block(TM2Context *ctx, AVFrame *pic, int bx, int by)
static inline void tm2_null_res_block(TM2Context *ctx, AVFrame *pic, int bx, int by)
static inline void tm2_still_block(TM2Context *ctx, AVFrame *pic, int bx, int by)
static inline void tm2_update_block(TM2Context *ctx, AVFrame *pic, int bx, int by)
static inline void tm2_motion_block(TM2Context *ctx, AVFrame *pic, int bx, int by)
static int tm2_decode_blocks(TM2Context *ctx, AVFrame *p)
static const int tm2_stream_order[TM2_NUM_STREAMS] = ;
#define TM2_HEADER_SIZE 40
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_truemotion2_decoder = ;
