#define AVCODEC_MIPS_AMRWBDEC_MIPS_H
#if HAVE_MIPSFPU && HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
void ff_hb_fir_filter_mips(float *out, const float fir_coef[],
float mem[], const float *in);
#define hb_fir_filter ff_hb_fir_filter_mips
