#define AVCODEC_MIPS_COMPUTE_ANTIALIAS_FIXED_H
#if HAVE_INLINE_ASM
static void compute_antialias_mips_fixed(MPADecodeContext *s,
GranuleDef *g)
#define compute_antialias compute_antialias_mips_fixed
