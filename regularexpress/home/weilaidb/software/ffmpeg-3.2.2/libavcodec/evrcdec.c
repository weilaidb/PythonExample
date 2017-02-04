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
unpack_frame
buf_size2bitrate
determine_bitrate
warn_insufficient_frame_quality
evrc_decode_init
decode_lspf
interpolate_lsp
interpolate_delay
decode_predictor_coeffs
bl_intrp
acb_excitation
decode_8_pulses_35bits
decode_3_pulses_10bits
fcb_excitation
synthesis_filter
bandwidth_expansion
residual_filter
static const struct PfCoeff  postfilter_coeffs[5] = ;
postfilter
frame_erasure
evrc_decode_frame
OFFSET offsetof(EVRCContext, x)
#define AD AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass evrcdec_class = ;
AVCodec ff_evrc_decoder = ;
