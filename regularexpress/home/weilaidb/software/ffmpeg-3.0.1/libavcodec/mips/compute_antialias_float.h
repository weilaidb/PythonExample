#define AVCODEC_MIPS_COMPUTE_ANTIALIAS_FLOAT_H
#if HAVE_INLINE_ASM
static void compute_antialias_mips_float(MPADecodeContext *s,
GranuleDef *g)
#define compute_antialias compute_antialias_mips_float
