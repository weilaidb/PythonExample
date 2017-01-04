#if HAVE_INLINE_ASM
void ff_hb_fir_filter_mips(float *out, const float fir_coef[HB_FIR_SIZE + 1],
float mem[HB_FIR_SIZE], const float *in)
