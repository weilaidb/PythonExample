#define AVCODEC_MIPS_MATHOPS_H
#if HAVE_INLINE_ASM
#if HAVE_LOONGSON3
#define MULH MULH
static inline av_const int MULH(int a, int b)
#define mid_pred mid_pred
static inline av_const int mid_pred(int a, int b, int c)
