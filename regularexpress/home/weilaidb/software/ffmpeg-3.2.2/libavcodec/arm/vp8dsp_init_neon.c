void ff_vp8_luma_dc_wht_neon(int16_t block[4][4][16], int16_t dc[16]);
void ff_vp8_idct_add_neon(uint8_t *dst, int16_t block[16], ptrdiff_t stride);
void ff_vp8_idct_dc_add_neon(uint8_t *dst, int16_t block[16], ptrdiff_t stride);
void ff_vp8_idct_dc_add4y_neon(uint8_t *dst, int16_t block[4][16], ptrdiff_t stride);
void ff_vp8_idct_dc_add4uv_neon(uint8_t *dst, int16_t block[4][16], ptrdiff_t stride);
VP8_LF(neon);
VP8_EPEL(16, neon);
VP8_EPEL(8,  neon);
VP8_EPEL(4,  neon);
VP8_BILIN(16, neon);
VP8_BILIN(8,  neon);
VP8_BILIN(4,  neon);
av_cold void ff_vp78dsp_init_neon(VP8DSPContext *dsp)
av_cold void ff_vp8dsp_init_neon(VP8DSPContext *dsp)
