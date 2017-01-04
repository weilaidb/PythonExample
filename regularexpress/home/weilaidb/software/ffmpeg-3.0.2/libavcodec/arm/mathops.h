#define AVCODEC_ARM_MATHOPS_H
#if HAVE_INLINE_ASM
#if HAVE_ARMV6_INLINE
#define MULH MULH
static inline av_const int MULH(int a, int b)
#define FASTDIV FASTDIV
static av_always_inline av_const int FASTDIV(int a, int b)
#define FASTDIV FASTDIV
static av_always_inline av_const int FASTDIV(int a, int b)
#define MLS64(d, a, b) MAC64(d, -(a), b)
#if HAVE_ARMV5TE_INLINE
#   define MAC16(rt, ra, rb)                                            \
__asm__ ("smlabb %0, %1, %2, %0" : "+r"(rt) : "r"(ra), "r"(rb));
#   define MUL16 MUL16
static inline av_const int MUL16(int ra, int rb)
#define mid_pred mid_pred
static inline av_const int mid_pred(int a, int b, int c)
