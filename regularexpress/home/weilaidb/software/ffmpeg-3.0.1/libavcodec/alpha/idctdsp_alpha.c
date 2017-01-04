void put_pixels_clamped_mvi_asm(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
void add_pixels_clamped_mvi_asm(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
void (*put_pixels_clamped_axp_p)(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
void (*add_pixels_clamped_axp_p)(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
av_cold void ff_idctdsp_init_alpha(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)
