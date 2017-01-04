void ff_rv34_inv_transform_noround_neon(int16_t *block);
void ff_rv34_inv_transform_noround_dc_neon(int16_t *block);
void ff_rv34_idct_add_neon(uint8_t *dst, ptrdiff_t stride, int16_t *block);
void ff_rv34_idct_dc_add_neon(uint8_t *dst, ptrdiff_t stride, int dc);
av_cold void ff_rv34dsp_init_arm(RV34DSPContext *c)
