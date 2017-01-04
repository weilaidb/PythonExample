#define AVCODEC_X86_IDCTDSP_H
void ff_add_pixels_clamped_mmx(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
void ff_add_pixels_clamped_sse2(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
void ff_put_pixels_clamped_mmx(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
void ff_put_pixels_clamped_sse2(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
void ff_put_signed_pixels_clamped_mmx(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
void ff_put_signed_pixels_clamped_sse2(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
