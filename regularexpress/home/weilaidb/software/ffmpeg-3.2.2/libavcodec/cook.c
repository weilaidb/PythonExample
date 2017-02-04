#define MONO            0x1000001
#define STEREO          0x1000002
#define JOINT_STEREO    0x1000003
#define MC_COOK         0x2000000
#define SUBBAND_SIZE    20
#define MAX_SUBPACKETS   5
typedef struct cook_gains  cook_gains;
typedef struct COOKSubpacket  COOKSubpacket;
typedef struct cook  COOKContext;
static float     pow2tab[127];
static float rootpow2tab[127];
init_pow2table
init_gain_table
init_cook_vlc_tables
init_cook_mlt
init_cplscales_table
DECODE_BYTES_PAD1 (3 - ((bytes) + 3) % 4)
DECODE_BYTES_PAD2 ((bytes) % 4 + DECODE_BYTES_PAD1(2 * (bytes)))
decode_bytes
cook_decode_close
decode_gain_info
decode_envelope
categorize
expand_category
scalar_dequant_float
unpack_SQVH
decode_vectors
mono_decode
interpolate_float
imlt_window_float
imlt_gain
decouple_info
decouple_float
joint_decode
decode_bytes_and_gain
saturate_output_float
mlt_compensate_output
decode_subpacket
cook_decode_frame
dump_cook_context
cook_decode_init
AVCodec ff_cook_decoder = ;
