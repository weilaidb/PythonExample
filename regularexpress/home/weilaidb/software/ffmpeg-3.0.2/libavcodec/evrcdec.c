#define MIN_LSP_SEP (0.05 / (2.0 * M_PI))
#define MIN_DELAY      20
#define MAX_DELAY     120
#define NB_SUBFRAMES    3
#define SUBFRAME_SIZE  54
#define FILTER_ORDER   10
#define ACB_SIZE      128
typedef enum  evrc_packet_rate;
typedef struct EVRCAFrame  EVRCAFrame;
typedef struct EVRCContext  EVRCContext;
static void unpack_frame(EVRCContext *e)
static evrc_packet_rate buf_size2bitrate(const int buf_size)
static evrc_packet_rate determine_bitrate(AVCodecContext *avctx,
int *buf_size,
const uint8_t **buf)
static void warn_insufficient_frame_quality(AVCodecContext *avctx,
const char *message)
static av_cold int evrc_decode_init(AVCodecContext *avctx)
static int decode_lspf(EVRCContext *e)
static void interpolate_lsp(float *ilsp, const float *lsp,
const float *prev, int index)
static void interpolate_delay(float *dst, float current, float prev, int index)
static void decode_predictor_coeffs(const float *ilspf, float *ilpc)
static void bl_intrp(EVRCContext *e, float *ex, float delay)
static void acb_excitation(EVRCContext *e, float *excitation, float gain,
const float delay[3], int length)
static void decode_8_pulses_35bits(const uint16_t *fixed_index, float *cod)
static void decode_3_pulses_10bits(uint16_t fixed_index, float *cod)
static void fcb_excitation(EVRCContext *e, const uint16_t *codebook,
float *excitation, float pitch_gain,
int pitch_lag, int subframe_size)
static void synthesis_filter(const float *in, const float *filter_coeffs,
float *memory, int buffer_length, float *samples)
static void bandwidth_expansion(float *coeff, const float *inbuf, float gamma)
static void residual_filter(float *output, const float *input,
const float *coef, float *memory, int length)
static const struct PfCoeff  postfilter_coeffs[5] = ;
static void postfilter(EVRCContext *e, float *in, const float *coeff,
float *out, int idx, const struct PfCoeff *pfc,
int length)
static void frame_erasure(EVRCContext *e, float *samples)
static int evrc_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
#define OFFSET(x) offsetof(EVRCContext, x)
#define AD AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass evrcdec_class = ;
AVCodec ff_evrc_decoder = ;
