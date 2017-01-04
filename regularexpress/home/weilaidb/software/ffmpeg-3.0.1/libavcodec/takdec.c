#define MAX_SUBFRAMES     8
#define MAX_PREDICTORS  256
typedef struct MCDParam  MCDParam;
typedef struct TAKDecContext  TAKDecContext;
static const int8_t mc_dmodes[] = ;
static const uint16_t predictor_sizes[] = ;
static const struct CParam  xcodes[50] = ;
static int set_bps_params(AVCodecContext *avctx)
static void set_sample_rate_params(AVCodecContext *avctx)
static av_cold int tak_decode_init(AVCodecContext *avctx)
static void decode_lpc(int32_t *coeffs, int mode, int length)
static int decode_segment(TAKDecContext *s, int8_t mode, int32_t *decoded, int len)
static int decode_residues(TAKDecContext *s, int32_t *decoded, int length)
static int get_bits_esc4(GetBitContext *gb)
static int decode_subframe(TAKDecContext *s, int32_t *decoded,
int subframe_size, int prev_subframe_size)
static int decode_channel(TAKDecContext *s, int chan)
static int decorrelate(TAKDecContext *s, int c1, int c2, int length)
static int tak_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *pkt)
#if HAVE_THREADS
static int init_thread_copy(AVCodecContext *avctx)
static int update_thread_context(AVCodecContext *dst,
const AVCodecContext *src)
static av_cold int tak_decode_close(AVCodecContext *avctx)
AVCodec ff_tak_decoder = ;
