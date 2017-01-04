void ff_mpadsp_apply_window_fixed_armv6(int32_t *synth_buf, int32_t *window,
int *dither, int16_t *out, int incr);
av_cold void ff_mpadsp_init_arm(MPADSPContext *s)
