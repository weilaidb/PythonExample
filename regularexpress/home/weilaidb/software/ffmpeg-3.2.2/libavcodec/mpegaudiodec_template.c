#define BACKSTEP_SIZE 512
#define EXTRABYTES 24
#define LAST_BUF_SIZE 2 * BACKSTEP_SIZE + EXTRABYTES
typedef struct GranuleDef  GranuleDef;
typedef struct MPADecodeContext  MPADecodeContext;
#define HEADER_SIZE 4
static VLC huff_vlc[16];
static VLC_TYPE huff_vlc_tables[
0 + 128 + 128 + 128 + 130 + 128 + 154 + 166 +
142 + 204 + 190 + 170 + 542 + 460 + 662 + 414
][2];
static const int huff_vlc_tables_sizes[16] = ;
static VLC huff_quad_vlc[2];
static VLC_TYPE  huff_quad_vlc_tables[128+16][2];
static const int huff_quad_vlc_tables_sizes[2] = ;
static uint16_t band_index_long[9][23];
static INTFLOAT is_table[2][16];
static INTFLOAT is_table_lsf[2][2][16];
static INTFLOAT csa_table[8][4];
static int16_t division_tab3[1<<6 ];
static int16_t division_tab5[1<<8 ];
static int16_t division_tab9[1<<11];
static int16_t * const division_tabs[4] = ;
static uint16_t scale_factor_modshift[64];
static int32_t scale_factor_mult[15][3];
SCALE_GEN \
static const int32_t scale_factor_mult2[3][3] = ;
region_offset2size
init_short_region
init_long_region
compute_band_indexes
l1_unscale
l2_unscale_group
l3_unscale
decode_init_static
#if USE_FLOATS
decode_close
decode_init
FIXHR
FIXHR
FIXHR
FIXHR
imdct12
mp_decode_layer1
mp_decode_layer2
SPLIT             \
if (n == 3)  else if (n == 4)  else if (n == 5)  else if (n == 6)  else
lsf_sf_expand
exponents_from_scale_factors
switch_buffer
#if USE_FLOATS
READ_FLIP_SIGN                     \
v = AV_RN32A(src) ^ (get_bits1(&s->gb) << 31);  \
AV_WN32A(dst, v);
READ_FLIP_SIGN     \
v      = -get_bits1(&s->gb);    \
*(dst) = (*(src) ^ v) - v;
huffman_decode
reorder_block
FIXR
compute_stereo
#if USE_FLOATS
#if HAVE_MIPSFPU
#   include
#if HAVE_MIPSDSP
#   include
#if USE_FLOATS
AA do  while (0)
AA do  while (0)
compute_antialias
compute_imdct
mp_decode_layer3
mp_decode_frame
decode_frame
mp_flush
flush
#if CONFIG_MP3ADU_DECODER || CONFIG_MP3ADUFLOAT_DECODER
decode_frame_adu
#if CONFIG_MP3ON4_DECODER || CONFIG_MP3ON4FLOAT_DECODER
typedef struct MP3On4DecodeContext  MP3On4DecodeContext;
static const uint8_t mp3Frames[8] = ;
static const uint8_t chan_offset[8][5] = ;
static const int16_t chan_layout[8] = ;
decode_close_mp3on4
decode_init_mp3on4
flush_mp3on4
decode_frame_mp3on4
