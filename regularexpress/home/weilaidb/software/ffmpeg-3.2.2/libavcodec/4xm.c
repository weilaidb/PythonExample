#define BLOCK_TYPE_VLC_BITS 5
#define ACDC_VLC_BITS 9
#define CFRAME_BUFFER_COUNT 100
static const uint8_t block_type_tab[2][4][8][2] = ;
static const uint8_t size2index[4][4] = ;
static const int8_t mv[256][2] = ;
static const uint8_t dequant_table[64] = ;
static VLC block_type_vlc[2][4];
typedef struct CFrameBuffer  CFrameBuffer;
typedef struct FourXContext  FourXContext;
#define FIX_1_082392200  70936
#define FIX_1_414213562  92682
#define FIX_1_847759065 121095
#define FIX_2_613125930 171254
MULTIPLY (((var) * (const)) >> 16)
idct
init_vlcs
init_mv
#if HAVE_BIGENDIAN
LE_CENTRIC_MUL             \
LE_CENTRIC_MUL              \
mcdc
decode_p_block
decode_p_frame
decode_i_block
idct_put
decode_i_mb
*read_huffman_tables
mix
decode_i2_frame
decode_i_frame
decode_frame
decode_end
decode_init
AVCodec ff_fourxm_decoder = ;
