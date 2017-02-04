#define MAX_BLOCKS           8
#define MAX_LSPS             16
#define MAX_LSPS_ALIGN16     16
#define MAX_FRAMES           3
#define MAX_FRAMESIZE        160
#define MAX_SIGNAL_HISTORY   416
#define MAX_SFRAMESIZE       (MAX_FRAMESIZE * MAX_FRAMES)
#define SFRAME_CACHE_MAXSIZE 256
#define VLC_NBITS            6
static VLC frame_type_vlc;
enum ;
enum ;
static const struct frame_type_desc  frame_descs[17] = ;
typedef struct WMAVoiceContext  WMAVoiceContext;
decode_vbmtree
wmavoice_init_static_data
wmavoice_decode_init
adaptive_gain_control
kalman_smoothen
tilt_factor
calc_input_response
wiener_denoise
postfilter
dequant_lsps
dequant_lsp10i
dequant_lsp10r
dequant_lsp16i
dequant_lsp16r
aw_parse_coords
aw_pulse_set2
aw_pulse_set1
pRNG
synth_block_hardcoded
synth_block_fcb_acb
synth_block
synth_frame
stabilize_lsps
check_bits_for_superframe
synth_superframe
parse_packet_header
copy_bits
wmavoice_decode_packet
wmavoice_decode_end
wmavoice_flush
AVCodec ff_wmavoice_decoder = ;
