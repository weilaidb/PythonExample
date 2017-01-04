void ff_get_pixels_armv6(int16_t *block, const uint8_t *pixels, ptrdiff_t stride);
void ff_diff_pixels_armv6(int16_t *block, const uint8_t *s1,
const uint8_t *s2, int stride);
av_cold void ff_pixblockdsp_init_arm(PixblockDSPContext *c,
AVCodecContext *avctx,
unsigned high_bit_depth)
