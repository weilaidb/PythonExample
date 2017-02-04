#define AVCODEC_ARM_MATHOPS_H
#if HAVE_INLINE_ASM
#if HAVE_ARMV6_INLINE
#define MULH MULH
MULH
#define FASTDIV FASTDIV
FASTDIV
#define FASTDIV FASTDIV
FASTDIV
MLS64 MAC64(d, -(a), b)
#if HAVE_ARMV5TE_INLINE
MAC16                                            \
__asm__ ((rb));
#   define MUL16 MUL16
MUL16
#define mid_pred mid_pred
mid_pred
