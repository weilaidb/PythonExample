#define AVCODEC_ALPHA_HPELDSP_ALPHA_H
void put_pixels_axp_asm(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
