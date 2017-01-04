#define AVCODEC_PPC_HPELDSP_ALTIVEC_H
void ff_avg_pixels16_altivec(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels16_altivec(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
