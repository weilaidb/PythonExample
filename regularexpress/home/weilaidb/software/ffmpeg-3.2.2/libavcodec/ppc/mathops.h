#define AVCODEC_PPC_MATHOPS_H
#if HAVE_PPC4XX
MAC16 \
__asm__ ( (rb));
MUL16 \
()
#define MULH MULH
MULH
#if !ARCH_PPC64
MAC64
MAC64 ((d) = MAC64(d, a, b))
MLS64
MLS64 ((d) = MLS64(d, a, b))
