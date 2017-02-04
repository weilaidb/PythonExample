CABAC 0
#define UNCHECKED_BITSTREAM_READER 1
static const uint8_t golomb_to_inter_cbp_gray[16]=;
static const uint8_t golomb_to_intra4x4_cbp_gray[16]=;
static const uint8_t chroma_dc_coeff_token_len[4*5]=;
static const uint8_t chroma_dc_coeff_token_bits[4*5]=;
static const uint8_t chroma422_dc_coeff_token_len[4*9]=;
static const uint8_t chroma422_dc_coeff_token_bits[4*9]=;
static const uint8_t coeff_token_len[4][4*17]=;
static const uint8_t coeff_token_bits[4][4*17]=;
static const uint8_t total_zeros_len[16][16]= ;
static const uint8_t total_zeros_bits[16][16]= ;
static const uint8_t chroma_dc_total_zeros_len[3][4]= ;
static const uint8_t chroma_dc_total_zeros_bits[3][4]= ;
static const uint8_t chroma422_dc_total_zeros_len[7][8]= ;
static const uint8_t chroma422_dc_total_zeros_bits[7][8]= ;
static const uint8_t run_len[7][16]=;
static const uint8_t run_bits[7][16]=;
static VLC coeff_token_vlc[4];
static VLC_TYPE coeff_token_vlc_tables[520+332+280+256][2];
static const int coeff_token_vlc_tables_size[4]=;
static VLC chroma_dc_coeff_token_vlc;
static VLC_TYPE chroma_dc_coeff_token_vlc_table[256][2];
static const int chroma_dc_coeff_token_vlc_table_size = 256;
static VLC chroma422_dc_coeff_token_vlc;
static VLC_TYPE chroma422_dc_coeff_token_vlc_table[8192][2];
static const int chroma422_dc_coeff_token_vlc_table_size = 8192;
static VLC total_zeros_vlc[15];
static VLC_TYPE total_zeros_vlc_tables[15][512][2];
static const int total_zeros_vlc_tables_size = 512;
static VLC chroma_dc_total_zeros_vlc[3];
static VLC_TYPE chroma_dc_total_zeros_vlc_tables[3][8][2];
static const int chroma_dc_total_zeros_vlc_tables_size = 8;
static VLC chroma422_dc_total_zeros_vlc[7];
static VLC_TYPE chroma422_dc_total_zeros_vlc_tables[7][32][2];
static const int chroma422_dc_total_zeros_vlc_tables_size = 32;
static VLC run_vlc[6];
static VLC_TYPE run_vlc_tables[6][8][2];
static const int run_vlc_tables_size = 8;
static VLC run7_vlc;
static VLC_TYPE run7_vlc_table[96][2];
static const int run7_vlc_table_size = 96;
#define LEVEL_TAB_BITS 8
static int8_t cavlc_level_tab[7][1<<LEVEL_TAB_BITS][2];
#define CHROMA_DC_COEFF_TOKEN_VLC_BITS 8
#define CHROMA422_DC_COEFF_TOKEN_VLC_BITS 13
#define COEFF_TOKEN_VLC_BITS           8
#define TOTAL_ZEROS_VLC_BITS           9
#define CHROMA_DC_TOTAL_ZEROS_VLC_BITS 3
#define CHROMA422_DC_TOTAL_ZEROS_VLC_BITS 5
#define RUN_VLC_BITS                   3
#define RUN7_VLC_BITS                  6
pred_non_zero_count
init_cavlc_level_tab
ff_h264_decode_init_vlc
get_level_prefix
decode_residual
static av_always_inline
decode_luma_residual
ff_h264_decode_mb_cavlc
