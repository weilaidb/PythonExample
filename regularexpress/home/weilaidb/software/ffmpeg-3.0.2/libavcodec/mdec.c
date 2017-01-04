typedef struct MDECContext  MDECContext;
static inline int mdec_decode_block_intra(MDECContext *a, int16_t *block, int n)
static inline int decode_mb(MDECContext *a, int16_t block[6][64])
static inline void idct_put(MDECContext *a, AVFrame *frame, int mb_x, int mb_y)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
#if HAVE_THREADS
static av_cold int decode_init_thread_copy(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_mdec_decoder = ;
