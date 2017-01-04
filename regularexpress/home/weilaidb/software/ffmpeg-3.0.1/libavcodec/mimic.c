#define MIMIC_HEADER_SIZE   20
typedef struct MimicContext  MimicContext;
static const uint32_t huffcodes[] = ;
static const uint8_t huffbits[] = ;
static const uint8_t col_zag[64] = ;
static av_cold int mimic_decode_end(AVCodecContext *avctx)
static av_cold int mimic_decode_init(AVCodecContext *avctx)
#if HAVE_THREADS
static int mimic_decode_update_thread_context(AVCodecContext *avctx, const AVCodecContext *avctx_from)
static const int8_t vlcdec_lookup[9][64] = ;
static int vlc_decode_block(MimicContext *ctx, int num_coeffs, int qscale)
static int decode(MimicContext *ctx, int quality, int num_coeffs,
int is_iframe)
static void flip_swap_frame(AVFrame *f)
static int mimic_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
#if HAVE_THREADS
static av_cold int mimic_init_thread_copy(AVCodecContext *avctx)
AVCodec ff_mimic_decoder = ;
