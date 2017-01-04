#define AVCODEC_ALPHA_IDCTDSP_ALPHA_H
extern void (*put_pixels_clamped_axp_p)(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
extern void (*add_pixels_clamped_axp_p)(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
void ff_simple_idct_axp(int16_t *block);
void ff_simple_idct_put_axp(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct_add_axp(uint8_t *dest, int line_size, int16_t *block);
