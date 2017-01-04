#if HAVE_ALTIVEC_H
#if HAVE_ALTIVEC
#if HAVE_VSX
static void get_pixels_altivec(int16_t *restrict block, const uint8_t *pixels,
ptrdiff_t line_size)
static void get_pixels_altivec(int16_t *restrict block, const uint8_t *pixels,
ptrdiff_t line_size)
#if HAVE_VSX
static void diff_pixels_altivec(int16_t *restrict block, const uint8_t *s1,
const uint8_t *s2, int stride)
static void diff_pixels_altivec(int16_t *restrict block, const uint8_t *s1,
const uint8_t *s2, int stride)
#if HAVE_VSX
static void get_pixels_vsx(int16_t *restrict block, const uint8_t *pixels,
ptrdiff_t line_size)
static void diff_pixels_vsx(int16_t *restrict block, const uint8_t *s1,
const uint8_t *s2, int stride)
av_cold void ff_pixblockdsp_init_ppc(PixblockDSPContext *c,
AVCodecContext *avctx,
unsigned high_bit_depth)
