void ff_add_png_paeth_prediction_mmxext(uint8_t *dst, uint8_t *src,
uint8_t *top, int w, int bpp);
void ff_add_png_paeth_prediction_ssse3(uint8_t *dst, uint8_t *src,
uint8_t *top, int w, int bpp);
void ff_add_bytes_l2_mmx (uint8_t *dst, uint8_t *src1,
uint8_t *src2, int w);
void ff_add_bytes_l2_sse2(uint8_t *dst, uint8_t *src1,
uint8_t *src2, int w);
av_cold void ff_pngdsp_init_x86(PNGDSPContext *dsp)
