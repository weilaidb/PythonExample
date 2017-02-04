#define AVUTIL_INTMATH_H
#if ARCH_ARM
#   include
#if ARCH_X86
#   include
#if HAVE_FAST_CLZ
AV_GCC_VERSION_AT_LEAST
ff_log2 (31 - __builtin_clz((x)|1))
#   ifndef ff_log2_16bit
#      define ff_log2_16bit av_log2
#   endif
extern const uint8_t ff_log2_tab[256];
#define ff_log2 ff_log2_c
ff_log2_c
#define ff_log2_16bit ff_log2_16bit_c
ff_log2_16bit_c
#define av_log2       ff_log2
#define av_log2_16bit ff_log2_16bit
#if HAVE_FAST_CLZ
AV_GCC_VERSION_AT_LEAST
ff_ctz __builtin_ctz(v)
ff_ctzll __builtin_ctzll(v)
ff_clz __builtin_clz(v)
#define ff_ctz ff_ctz_c
