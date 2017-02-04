#define AVCODEC_ADX_H
typedef struct ADXChannelState  ADXChannelState;
typedef struct ADXContext  ADXContext;
#define COEFF_BITS  12
#define BLOCK_SIZE      18
#define BLOCK_SAMPLES   32
ff_adx_calculate_coeffs;
ff_adx_decode_header;
