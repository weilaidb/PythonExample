#if HAVE_INLINE_ASM
static void line_noise_mmx(uint8_t *dst, const uint8_t *src,
const int8_t *noise, int len, int shift)
#if HAVE_6REGS
static void line_noise_avg_mmx(uint8_t *dst, const uint8_t *src,
int len, const int8_t * const *shift)
static void line_noise_mmxext(uint8_t *dst, const uint8_t *src,
const int8_t *noise, int len, int shift)
av_cold void ff_noise_init_x86(NoiseContext *n)
