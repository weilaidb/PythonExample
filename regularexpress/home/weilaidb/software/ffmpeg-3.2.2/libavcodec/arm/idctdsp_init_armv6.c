void ff_add_pixels_clamped_armv6(const int16_t *block, uint8_t *pixels,
ptrdiff_t line_size);
av_cold void ff_idctdsp_init_armv6(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)
