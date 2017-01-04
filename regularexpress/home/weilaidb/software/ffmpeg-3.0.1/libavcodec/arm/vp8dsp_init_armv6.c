void ff_vp8_luma_dc_wht_armv6(int16_t block[4][4][16], int16_t dc[16]);
void ff_vp8_luma_dc_wht_dc_armv6(int16_t block[4][4][16], int16_t dc[16]);
void ff_vp8_idct_add_armv6(uint8_t *dst, int16_t block[16], ptrdiff_t stride);
void ff_vp8_idct_dc_add_armv6(uint8_t *dst, int16_t block[16], ptrdiff_t stride);
void ff_vp8_idct_dc_add4y_armv6(uint8_t *dst, int16_t block[4][16], ptrdiff_t stride);
void ff_vp8_idct_dc_add4uv_armv6(uint8_t *dst, int16_t block[4][16], ptrdiff_t stride);
VP8_LF(armv6);
VP8_EPEL(16, armv6);
VP8_EPEL(8,  armv6);
VP8_EPEL(4,  armv6);
VP8_BILIN(16, armv6);
VP8_BILIN(8,  armv6);
VP8_BILIN(4,  armv6);
av_cold void ff_vp78dsp_init_armv6(VP8DSPContext *dsp)
av_cold void ff_vp8dsp_init_armv6(VP8DSPContext *dsp)
