#define JOINT_STEREO    0x12
#define STEREO          0x2
#define SAMPLES_PER_FRAME 1024
#define MDCT_SIZE          512
typedef struct GainBlock  GainBlock;
typedef struct TonalComponent  TonalComponent;
typedef struct ChannelUnit  ChannelUnit;
typedef struct ATRAC3Context  ATRAC3Context;
DECLARE_ALIGNED[MDCT_SIZE];
static VLC_TYPE atrac3_vlc_table[4096][2];
static VLC   spectral_coeff_tab[7];
imlt
decode_bytes
init_imdct_window
{
int i, j;
read_quant_spectral_coeffs
decode_spectrum
decode_tonal_components
decode_gain_control
add_tonal_components
INTERPOLATE \
((old) + (nsample) * 0.125 * ((new) - (old)))
reverse_matrixing
get_channel_weights
channel_weighting
decode_channel_sound_unit
decode_frame
atrac3_decode_frame
atrac3_init_static_data
atrac3_decode_init
AVCodec ff_atrac3_decoder = ;
