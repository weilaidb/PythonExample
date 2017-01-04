#define AVCODEC_ADX_H
typedef struct ADXChannelState  ADXChannelState;
typedef struct ADXContext  ADXContext;
#define COEFF_BITS  12
#define BLOCK_SIZE      18
#define BLOCK_SAMPLES   32
void ff_adx_calculate_coeffs(int cutoff, int sample_rate, int bits, int *coeff);
int ff_adx_decode_header(AVCodecContext *avctx, const uint8_t *buf,
int bufsize, int *header_size, int *coeff);
