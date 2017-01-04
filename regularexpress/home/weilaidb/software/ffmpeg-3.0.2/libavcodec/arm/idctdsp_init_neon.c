void ff_add_pixels_clamped_neon(const int16_t *, uint8_t *, ptrdiff_t);
void ff_put_pixels_clamped_neon(const int16_t *, uint8_t *, ptrdiff_t);
void ff_put_signed_pixels_clamped_neon(const int16_t *, uint8_t *, ptrdiff_t);
av_cold void ff_idctdsp_init_neon(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)
