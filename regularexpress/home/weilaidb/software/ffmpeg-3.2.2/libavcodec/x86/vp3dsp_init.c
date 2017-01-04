void ff_vp3_idct_put_mmx(uint8_t *dest, int line_size, int16_t *block);
void ff_vp3_idct_add_mmx(uint8_t *dest, int line_size, int16_t *block);
void ff_vp3_idct_put_sse2(uint8_t *dest, int line_size, int16_t *block);
void ff_vp3_idct_add_sse2(uint8_t *dest, int line_size, int16_t *block);
void ff_vp3_idct_dc_add_mmxext(uint8_t *dest, int line_size,
int16_t *block);
void ff_vp3_v_loop_filter_mmxext(uint8_t *src, int stride,
int *bounding_values);
void ff_vp3_h_loop_filter_mmxext(uint8_t *src, int stride,
int *bounding_values);
void ff_put_vp_no_rnd_pixels8_l2_mmx(uint8_t *dst, const uint8_t *a,
const uint8_t *b, ptrdiff_t stride,
int h);
av_cold void ff_vp3dsp_init_x86(VP3DSPContext *c, int flags)
