#define MAX_CHANNELS 2
#define MID_SIDE 0
#define LEFT_SIDE 1
#define RIGHT_SIDE 2
typedef struct SonicContext  SonicContext;
#define LATTICE_SHIFT   10
#define SAMPLE_SHIFT    4
#define LATTICE_FACTOR  (1 << LATTICE_SHIFT)
#define SAMPLE_FACTOR   (1 << SAMPLE_SHIFT)
#define BASE_QUANT      0.6
#define RATE_VARIATION  3.0
shift
shift_down
put_symbol
get_symbol
#if 1
intlist_write
intlist_read
#elif 1
intlist_write
intlist_read
#define ADAPT_LEVEL 8
bits_to_store
write_uint_max
read_uint_max
intlist_write
intlist_read
predictor_init_state
predictor_calc_error
#if CONFIG_SONIC_ENCODER || CONFIG_SONIC_LS_ENCODER
modified_levinson_durbin
code_samplerate
sonic_encode_init
sonic_encode_close
sonic_encode_frame
#if CONFIG_SONIC_DECODER
static const int samplerate_table[] =
;
sonic_decode_init
sonic_decode_close
sonic_decode_frame
AVCodec ff_sonic_decoder = ;
#if CONFIG_SONIC_ENCODER
AVCodec ff_sonic_encoder = ;
#if CONFIG_SONIC_LS_ENCODER
AVCodec ff_sonic_ls_encoder = ;
