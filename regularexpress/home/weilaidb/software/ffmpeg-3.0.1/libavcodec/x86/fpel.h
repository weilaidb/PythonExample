#define AVCODEC_X86_FPEL_H
void ff_avg_pixels4_mmx(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels4_mmxext(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels8_mmx(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels8_mmxext(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels16_mmx(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels16_mmxext(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels16_sse2(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels4_mmx(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels8_mmx(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels16_mmx(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels16_sse2(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
