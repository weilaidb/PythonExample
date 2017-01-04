#define AVCODEC_ARM_VP8_H
#if HAVE_ARMV6_EXTERNAL
#define vp8_decode_block_coeffs_internal ff_decode_block_coeffs_armv6
int ff_decode_block_coeffs_armv6(VP56RangeCoder *rc, int16_t block[16],
uint8_t probs[8][3][NUM_DCT_TOKENS-1],
int i, uint8_t *token_prob, int16_t qmul[2]);
