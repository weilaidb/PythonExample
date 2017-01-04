#define SYNTH_FILTER_FUNC(opt)                                                 \
void ff_synth_filter_inner_##opt(float *synth_buf_ptr, float synth_buf2[32],   \
const float window[512],                      \
float out[32], intptr_t offset, float scale); \
static void synth_filter_##opt(FFTContext *imdct,                              \
float *synth_buf_ptr, int *synth_buf_offset,    \
float synth_buf2[32], const float window[512],  \
float out[32], const float in[32], float scale) \
\
#if HAVE_YASM
#if ARCH_X86_32
SYNTH_FILTER_FUNC(sse)
SYNTH_FILTER_FUNC(sse2)
SYNTH_FILTER_FUNC(avx)
SYNTH_FILTER_FUNC(fma3)
av_cold void ff_synth_filter_init_x86(SynthFilterContext *s)
