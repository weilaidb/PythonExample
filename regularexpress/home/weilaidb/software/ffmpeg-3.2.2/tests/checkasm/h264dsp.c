static const uint32_t pixel_mask[3] = ;
#define SIZEOF_PIXEL ((bit_depth + 7) / 8)
#define SIZEOF_COEF  (2 * ((bit_depth + 7) / 8))
#define PIXEL_STRIDE 16
#define randomize_buffers()                                                  \
do  while (0)
#define dct4x4_impl(size, dctcoef)                                           \
static void dct4x4_##size(dctcoef *coef)                                     \
#define DCT8_1D(src, srcstride, dst, dststride) do  while (0)
#define dct8x8_impl(size, dctcoef)                                           \
static void dct8x8_##size(dctcoef *coef)                                     \
dct4x4_impl(16, int16_t)
dct4x4_impl(32, int32_t)
dct8x8_impl(16, int16_t)
dct8x8_impl(32, int32_t)
static void dct4x4(int16_t *coef, int bit_depth)
static void dct8x8(int16_t *coef, int bit_depth)
static void check_idct(void)
void checkasm_check_h264dsp(void)
