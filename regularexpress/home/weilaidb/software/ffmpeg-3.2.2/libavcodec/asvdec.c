#define VLC_BITS             6
#define ASV2_LEVEL_VLC_BITS 10
static VLC ccp_vlc;
static VLC level_vlc;
static VLC dc_ccp_vlc;
static VLC ac_ccp_vlc;
static VLC asv2_level_vlc;
init_vlcs
asv2_get_bits
asv1_get_level
asv2_get_level
asv1_decode_block
asv2_decode_block
decode_mb
idct_put
decode_frame
decode_init
decode_end
#if CONFIG_ASV1_DECODER
AVCodec ff_asv1_decoder = ;
#if CONFIG_ASV2_DECODER
AVCodec ff_asv2_decoder = ;
