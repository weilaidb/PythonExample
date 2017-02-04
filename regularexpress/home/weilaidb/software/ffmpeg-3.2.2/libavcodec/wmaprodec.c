#define WMAPRO_MAX_CHANNELS    8
#define MAX_SUBFRAMES  32
#define MAX_BANDS      29
#define MAX_FRAMESIZE  32768
#define WMAPRO_BLOCK_MIN_BITS  6
#define WMAPRO_BLOCK_MAX_BITS 13
#define WMAPRO_BLOCK_MIN_SIZE (1 << WMAPRO_BLOCK_MIN_BITS)
#define WMAPRO_BLOCK_MAX_SIZE (1 << WMAPRO_BLOCK_MAX_BITS)
#define WMAPRO_BLOCK_SIZES    (WMAPRO_BLOCK_MAX_BITS - WMAPRO_BLOCK_MIN_BITS + 1)
#define VLCBITS            9
#define SCALEVLCBITS       8
#define VEC4MAXDEPTH    ((HUFF_VEC4_MAXBITS+VLCBITS-1)/VLCBITS)
#define VEC2MAXDEPTH    ((HUFF_VEC2_MAXBITS+VLCBITS-1)/VLCBITS)
#define VEC1MAXDEPTH    ((HUFF_VEC1_MAXBITS+VLCBITS-1)/VLCBITS)
#define SCALEMAXDEPTH   ((HUFF_SCALE_MAXBITS+SCALEVLCBITS-1)/SCALEVLCBITS)
#define SCALERLMAXDEPTH ((HUFF_SCALE_RL_MAXBITS+VLCBITS-1)/VLCBITS)
static VLC              sf_vlc;
static VLC              sf_rl_vlc;
static VLC              vec4_vlc;
static VLC              vec2_vlc;
static VLC              vec1_vlc;
static VLC              coef_vlc[2];
static float            sin64[33];
typedef struct WMAProChannelCtx  WMAProChannelCtx;
typedef struct WMAProChannelGrp  WMAProChannelGrp;
typedef struct WMAProDecodeCtx  WMAProDecodeCtx;
dump_context
decode_end
get_rate
decode_init
decode_subframe_length
decode_tilehdr
decode_decorrelation_matrix
decode_channel_transform
decode_coeffs
decode_scale_factors
inverse_channel_transform
wmapro_window
decode_subframe
decode_frame
remaining_bits
save_bits
decode_packet
flush
AVCodec ff_wmapro_decoder = ;
AVCodec ff_xma1_decoder = ;
AVCodec ff_xma2_decoder = ;
