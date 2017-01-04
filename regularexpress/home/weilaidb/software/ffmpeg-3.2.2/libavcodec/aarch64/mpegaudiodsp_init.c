void ff_mpadsp_apply_window_fixed_neon(int32_t *synth_buf, int32_t *window,
int *dither, int16_t *samples, int incr);
void ff_mpadsp_apply_window_float_neon(float *synth_buf, float *window,
int *dither, float *samples, int incr);
av_cold void ff_mpadsp_init_aarch64(MPADSPContext *s)
