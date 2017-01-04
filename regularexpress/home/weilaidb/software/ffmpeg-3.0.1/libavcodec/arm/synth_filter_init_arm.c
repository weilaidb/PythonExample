void ff_synth_filter_float_vfp(FFTContext *imdct,
float *synth_buf_ptr, int *synth_buf_offset,
float synth_buf2[32], const float window[512],
float out[32], const float in[32],
float scale);
void ff_synth_filter_float_neon(FFTContext *imdct,
float *synth_buf_ptr, int *synth_buf_offset,
float synth_buf2[32], const float window[512],
float out[32], const float in[32],
float scale);
av_cold void ff_synth_filter_init_arm(SynthFilterContext *s)
