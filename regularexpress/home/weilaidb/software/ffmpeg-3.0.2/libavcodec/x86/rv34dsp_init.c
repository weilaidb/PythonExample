void ff_rv34_idct_dc_mmxext(int16_t *block);
void ff_rv34_idct_dc_noround_mmxext(int16_t *block);
void ff_rv34_idct_dc_add_mmx(uint8_t *dst, ptrdiff_t stride, int dc);
void ff_rv34_idct_dc_add_sse4(uint8_t *dst, ptrdiff_t stride, int dc);
void ff_rv34_idct_add_mmxext(uint8_t *dst, ptrdiff_t stride, int16_t *block);
av_cold void ff_rv34dsp_init_x86(RV34DSPContext* c)
