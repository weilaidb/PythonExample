#define LFE_FIR_FLOAT_FUNC(opt)                                               \
void ff_lfe_fir0_float_##opt(float *pcm_samples, int32_t *lfe_samples,         \
const float *filter_coeff, ptrdiff_t npcmblocks);
LFE_FIR_FLOAT_FUNC(sse)
LFE_FIR_FLOAT_FUNC(sse2)
LFE_FIR_FLOAT_FUNC(avx)
LFE_FIR_FLOAT_FUNC(fma3)
av_cold void ff_dcadsp_init_x86(DCADSPContext *s)
