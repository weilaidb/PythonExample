#if HAVE_INLINE_ASM && HAVE_MIPSFPU
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
static void vector_fmul_mips(float *dst, const float *src0, const float *src1,
int len)
static void vector_fmul_scalar_mips(float *dst, const float *src, float mul,
int len)
static void vector_fmul_window_mips(float *dst, const float *src0,
const float *src1, const float *win, int len)
static void butterflies_float_mips(float *av_restrict v1, float *av_restrict v2,
int len)
static void vector_fmul_reverse_mips(float *dst, const float *src0, const float *src1, int len)
void ff_float_dsp_init_mips(AVFloatDSPContext *fdsp)
