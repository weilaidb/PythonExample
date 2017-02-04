#define AVCODEC_MIPS_COMPUTE_ANTIALIAS_FLOAT_H
#if HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
compute_antialias_mips_float
#define compute_antialias compute_antialias_mips_float
