#if HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
static void ff_celp_lp_synthesis_filterf_mips(float *out,
const float *filter_coeffs,
const float* in, int buffer_length,
int filter_length)
static void ff_celp_lp_zero_synthesis_filterf_mips(float *out,
const float *filter_coeffs,
const float *in, int buffer_length,
int filter_length)
void ff_celp_filter_init_mips(CELPFContext *c)
