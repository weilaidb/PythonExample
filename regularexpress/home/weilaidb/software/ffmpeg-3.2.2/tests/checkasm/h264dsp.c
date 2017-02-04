static const uint32_t pixel_mask[3] = ;
#define SIZEOF_PIXEL ((bit_depth + 7) / 8)
#define SIZEOF_COEF  (2 * ((bit_depth + 7) / 8))
#define PIXEL_STRIDE 16
randomize_buffers                                                  \
do  while (0)
dct4x4_impl                                           \
static void dct4x4_##size(dctcoef *coef)                                     \
DCT8_1D do  while (0)
dct8x8_impl                                           \
static void dct8x8_##size(dctcoef *coef)                                     \
dct4x4_impl(16, int16_t)
dct4x4_impl(32, int32_t)
dct8x8_impl(16, int16_t)
dct8x8_impl(32, int32_t)
dct4x4
dct8x8
check_idct
checkasm_check_h264dsp
