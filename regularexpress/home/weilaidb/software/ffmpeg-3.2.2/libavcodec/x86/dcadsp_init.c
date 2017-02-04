LFE_FIR_FLOAT_FUNC                                               \
void ff_lfe_fir0_float_##opt(float *pcm_samples, int32_t *lfe_samples,         \
const float *filter_coeff, ptrdiff_t npcmblocks); \
void ff_lfe_fir1_float_##opt(float *pcm_samples, int32_t *lfe_samples,         \
const float *filter_coeff, ptrdiff_t npcmblocks);
LFE_FIR_FLOAT_FUNC(sse)
LFE_FIR_FLOAT_FUNC(sse2)
LFE_FIR_FLOAT_FUNC(sse3)
LFE_FIR_FLOAT_FUNC(avx)
LFE_FIR_FLOAT_FUNC(fma3)
ff_dcadsp_init_x86
