#define AVCODEC_AVR32_MATHOPS_H
#if HAVE_INLINE_ASM
#define MULL MULL
MULL
#define MULH MULH
MULH
#define MUL64 MUL64
MUL64
MAC64
MAC64 ((d) = MAC64(d, a, b))
MLS64 MAC64(d, -(a), b)
MAC16
MAC16 ((d) = MAC16(d, a, b))
MLS16 MAC16(d, -(a), b)
#define MUL16 MUL16
MUL16
#define mid_pred mid_pred
mid_pred
