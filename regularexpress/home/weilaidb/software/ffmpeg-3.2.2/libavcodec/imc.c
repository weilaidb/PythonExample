#define IMC_BLOCK_SIZE 64
#define IMC_FRAME_ID 0x21
#define BANDS 32
#define COEFFS 256
typedef struct IMCChannel  IMCChannel;
typedef struct IMCContext  IMCContext;
static VLC huffman_vlc[4][4];
#define VLC_TABLES_SIZE 9512
static const int vlc_offsets[17] = ;
static VLC_TYPE vlc_tables[VLC_TABLES_SIZE][2];
freq2bark
iac_generate_tabs
imc_decode_init
imc_calculate_coeffs
imc_read_level_coeffs
imc_read_level_coeffs_raw
imc_decode_level_coefficients
imc_decode_level_coefficients2
imc_decode_level_coefficients_raw
bit_allocation
imc_get_skip_coeff
imc_adjust_bit_allocation
imc_imdct256
inverse_quant_coeff
imc_get_coeffs
imc_refine_bit_allocation
imc_decode_block
imc_decode_frame
imc_decode_close
flush
#if CONFIG_IMC_DECODER
AVCodec ff_imc_decoder = ;
#if CONFIG_IAC_DECODER
AVCodec ff_iac_decoder = ;
