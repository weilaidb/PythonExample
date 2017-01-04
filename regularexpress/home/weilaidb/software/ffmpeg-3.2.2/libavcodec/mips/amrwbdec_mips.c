#if HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
void ff_hb_fir_filter_mips(float *out, const float fir_coef[HB_FIR_SIZE + 1],
float mem[HB_FIR_SIZE], const float *in)
