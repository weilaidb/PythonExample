void ff_vp3_idct_put_neon(uint8_t *dest, int line_size, int16_t *data);
void ff_vp3_idct_add_neon(uint8_t *dest, int line_size, int16_t *data);
void ff_vp3_idct_dc_add_neon(uint8_t *dest, int line_size, int16_t *data);
void ff_vp3_v_loop_filter_neon(uint8_t *, int, int *);
void ff_vp3_h_loop_filter_neon(uint8_t *, int, int *);
av_cold void ff_vp3dsp_init_arm(VP3DSPContext *c, int flags)
