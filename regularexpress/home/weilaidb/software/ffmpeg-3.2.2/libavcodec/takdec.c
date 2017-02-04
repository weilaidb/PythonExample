#define BITSTREAM_READER_LE
#define MAX_SUBFRAMES     8
#define MAX_PREDICTORS  256
typedef struct MCDParam  MCDParam;
typedef struct TAKDecContext  TAKDecContext;
static const int8_t mc_dmodes[] = ;
static const uint16_t predictor_sizes[] = ;
static const struct CParam  xcodes[50] = ;
set_bps_params
set_sample_rate_params
tak_decode_init
decode_lpc
decode_segment
decode_residues
get_bits_esc4
decode_subframe
decode_channel
decorrelate
tak_decode_frame
#if HAVE_THREADS
init_thread_copy
update_thread_context
tak_decode_close
AVCodec ff_tak_decoder = ;
