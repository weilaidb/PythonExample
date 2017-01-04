void ff_get_pixels_mmx(int16_t *block, const uint8_t *pixels, ptrdiff_t line_size);
void ff_get_pixels_sse2(int16_t *block, const uint8_t *pixels, ptrdiff_t line_size);
void ff_diff_pixels_mmx(int16_t *block, const uint8_t *s1, const uint8_t *s2,
int stride);
void ff_diff_pixels_sse2(int16_t *block, const uint8_t *s1, const uint8_t *s2,
int stride);
av_cold void ff_pixblockdsp_init_x86(PixblockDSPContext *c,
AVCodecContext *avctx,
unsigned high_bit_depth)
