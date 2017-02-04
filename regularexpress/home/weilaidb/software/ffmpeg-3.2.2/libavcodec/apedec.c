#define MAX_CHANNELS        2
#define MAX_BYTESPERSAMPLE  3
#define APE_FRAMECODE_MONO_SILENCE    1
#define APE_FRAMECODE_STEREO_SILENCE  3
#define APE_FRAMECODE_PSEUDO_STEREO   4
#define HISTORY_SIZE 512
#define PREDICTOR_ORDER 8
#define PREDICTOR_SIZE 50
#define YDELAYA (18 + PREDICTOR_ORDER*4)
#define YDELAYB (18 + PREDICTOR_ORDER*3)
#define XDELAYA (18 + PREDICTOR_ORDER*2)
#define XDELAYB (18 + PREDICTOR_ORDER)
#define YADAPTCOEFFSA 18
#define XADAPTCOEFFSA 14
#define YADAPTCOEFFSB 10
#define XADAPTCOEFFSB 5
enum APECompressionLevel ;
#define APE_FILTER_LEVELS 3
static const uint16_t ape_filter_orders[5][APE_FILTER_LEVELS] = ;
static const uint8_t ape_filter_fracbits[5][APE_FILTER_LEVELS] = ;
typedef struct APEFilter  APEFilter;
typedef struct APERice  APERice;
typedef struct APERangecoder  APERangecoder;
typedef struct APEPredictor  APEPredictor;
typedef struct APEContext  APEContext;
ape_apply_filters;
entropy_decode_mono_0000;
entropy_decode_stereo_0000;
entropy_decode_mono_3860;
entropy_decode_stereo_3860;
entropy_decode_mono_3900;
entropy_decode_stereo_3900;
entropy_decode_stereo_3930;
entropy_decode_mono_3990;
entropy_decode_stereo_3990;
predictor_decode_mono_3800;
predictor_decode_stereo_3800;
predictor_decode_mono_3930;
predictor_decode_stereo_3930;
predictor_decode_mono_3950;
predictor_decode_stereo_3950;
ape_decode_close
ape_decode_init
#define CODE_BITS    32
#define TOP_VALUE    ((unsigned int)1 << (CODE_BITS-1))
#define SHIFT_BITS   (CODE_BITS - 9)
#define EXTRA_BITS   ((CODE_BITS-2) % 8 + 1)
#define BOTTOM_VALUE (TOP_VALUE >> 8)
range_start_decoding
range_dec_normalize
range_decode_culfreq
range_decode_culshift
range_decode_update
range_decode_bits
#define MODEL_ELEMENTS 64
static const uint16_t counts_3970[22] = ;
static const uint16_t counts_diff_3970[21] = ;
static const uint16_t counts_3980[22] = ;
static const uint16_t counts_diff_3980[21] = ;
range_get_symbol
update_rice
get_rice_ook
ape_decode_value_3860
ape_decode_value_3900
ape_decode_value_3990
decode_array_0000
entropy_decode_mono_0000
entropy_decode_stereo_0000
entropy_decode_mono_3860
entropy_decode_stereo_3860
entropy_decode_mono_3900
entropy_decode_stereo_3900
entropy_decode_stereo_3930
entropy_decode_mono_3990
entropy_decode_stereo_3990
init_entropy_decoder
static const int32_t initial_coeffs_fast_3320[1] = ;
static const int32_t initial_coeffs_a_3800[3] = ;
static const int32_t initial_coeffs_b_3800[2] = ;
static const int32_t initial_coeffs_3930[4] = ;
init_predictor_decoder
APESIGN
filter_fast_3320
filter_3800
long_filter_high_3800
long_filter_ehigh_3830
predictor_decode_stereo_3800
predictor_decode_mono_3800
predictor_update_3930
predictor_decode_stereo_3930
predictor_decode_mono_3930
predictor_update_filter
predictor_decode_stereo_3950
predictor_decode_mono_3950
do_init_filter
init_filter
do_apply_filter
apply_filter
ape_apply_filters
init_frame_decoder
ape_unpack_mono
ape_unpack_stereo
ape_decode_frame
ape_flush
OFFSET offsetof(APEContext, x)
#define PAR (AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM)
static const AVOption options[] = ;
static const AVClass ape_decoder_class = ;
AVCodec ff_ape_decoder = ;
