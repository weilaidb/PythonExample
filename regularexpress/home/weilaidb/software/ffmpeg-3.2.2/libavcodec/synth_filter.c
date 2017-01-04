static void synth_filter_float(FFTContext *imdct,
float *synth_buf_ptr, int *synth_buf_offset,
float synth_buf2[32], const float window[512],
float out[32], const float in[32], float scale)
static void synth_filter_float_64(FFTContext *imdct,
float *synth_buf_ptr, int *synth_buf_offset,
float synth_buf2[64], const float window[1024],
float out[64], const float in[64], float scale)
static void synth_filter_fixed(DCADCTContext *imdct,
int32_t *synth_buf_ptr, int *synth_buf_offset,
int32_t synth_buf2[32], const int32_t window[512],
int32_t out[32], const int32_t in[32])
static void synth_filter_fixed_64(DCADCTContext *imdct,
int32_t *synth_buf_ptr, int *synth_buf_offset,
int32_t synth_buf2[64], const int32_t window[1024],
int32_t out[64], const int32_t in[64])
av_cold void ff_synth_filter_init(SynthFilterContext *c)
