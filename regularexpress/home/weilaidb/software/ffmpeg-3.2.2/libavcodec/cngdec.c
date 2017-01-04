typedef struct CNGContext  CNGContext;
static av_cold int cng_decode_close(AVCodecContext *avctx)
static av_cold int cng_decode_init(AVCodecContext *avctx)
static void make_lpc_coefs(float *lpc, const float *refl, int order)
static void cng_decode_flush(AVCodecContext *avctx)
static int cng_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_comfortnoise_decoder = ;
