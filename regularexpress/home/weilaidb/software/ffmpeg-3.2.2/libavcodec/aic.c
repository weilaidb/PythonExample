#define AIC_HDR_SIZE    24
#define AIC_BAND_COEFFS (64 + 32 + 192 + 96)
enum AICBands ;
static const int aic_num_band_coeffs[NUM_BANDS] = ;
static const int aic_band_off[NUM_BANDS] = ;
static const uint8_t aic_quant_matrix[64] = ;
static const uint8_t aic_y_scan[64] = ;
static const uint8_t aic_y_ext_scan[192] = ;
static const uint8_t aic_c_scan[64] = ;
static const uint8_t aic_c_ext_scan[192] = ;
static const uint8_t * const aic_scan[NUM_BANDS] = ;
typedef struct AICContext  AICContext;
aic_decode_header
GET_CODE                         \
do  while (0)
aic_decode_coeffs
recombine_block
recombine_block_il
unquant_block
aic_decode_slice
aic_decode_frame
aic_decode_init
aic_decode_close
AVCodec ff_aic_decoder = ;
