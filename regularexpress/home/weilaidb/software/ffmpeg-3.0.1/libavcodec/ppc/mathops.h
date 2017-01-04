#define AVCODEC_PPC_MATHOPS_H
#if HAVE_PPC4XX
#define MAC16(rt, ra, rb) \
__asm__ ("maclhw %0, %2, %3" : "=r" (rt) : "0" (rt), "r" (ra), "r" (rb));
#define MUL16(ra, rb) \
()
#define MULH MULH
static inline av_const int MULH(int a, int b)
#if !ARCH_PPC64
static inline av_const int64_t MAC64(int64_t d, int a, int b)
#define MAC64(d, a, b) ((d) = MAC64(d, a, b))
static inline av_const int64_t MLS64(int64_t d, int a, int b)
#define MLS64(d, a, b) ((d) = MLS64(d, a, b))
