typedef struct DfaContext  DfaContext;
static av_cold int dfa_decode_init(AVCodecContext *avctx)
static int decode_copy(GetByteContext *gb, uint8_t *frame, int width, int height)
static int decode_tsw1(GetByteContext *gb, uint8_t *frame, int width, int height)
static int decode_dsw1(GetByteContext *gb, uint8_t *frame, int width, int height)
static int decode_dds1(GetByteContext *gb, uint8_t *frame, int width, int height)
static int decode_bdlt(GetByteContext *gb, uint8_t *frame, int width, int height)
static int decode_wdlt(GetByteContext *gb, uint8_t *frame, int width, int height)
static int decode_tdlt(GetByteContext *gb, uint8_t *frame, int width, int height)
static int decode_blck(GetByteContext *gb, uint8_t *frame, int width, int height)
typedef int (*chunk_decoder)(GetByteContext *gb, uint8_t *frame, int width, int height);
static const chunk_decoder decoder[8] = ;
static const char* chunk_name[8] = ;
static int dfa_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int dfa_decode_end(AVCodecContext *avctx)
AVCodec ff_dfa_decoder = ;
