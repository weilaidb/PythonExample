typedef struct FICThreadContext  FICThreadContext;
typedef struct FICContext  FICContext;
static const uint8_t fic_qmat_hq[64] = ;
static const uint8_t fic_qmat_lq[64] = ;
static const uint8_t fic_header[7] = ;
#define FIC_HEADER_SIZE 27
static av_always_inline void fic_idct(int16_t *blk, int step, int shift, int rnd)
static void fic_idct_put(uint8_t *dst, int stride, int16_t *block)
static int fic_decode_block(FICContext *ctx, GetBitContext *gb,
uint8_t *dst, int stride, int16_t *block)
static int fic_decode_slice(AVCodecContext *avctx, void *tdata)
static av_always_inline void fic_alpha_blend(uint8_t *dst, uint8_t *src,
int size, uint8_t *alpha)
static void fic_draw_cursor(AVCodecContext *avctx, int cur_x, int cur_y)
static int fic_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int fic_decode_close(AVCodecContext *avctx)
static av_cold int fic_decode_init(AVCodecContext *avctx)
static const AVOption options[] = ;
static const AVClass fic_decoder_class = ;
AVCodec ff_fic_decoder = ;
