#define AVUTIL_INTMATH_H
#if ARCH_ARM
#   include "arm/intmath.h"
#if ARCH_X86
#   include "x86/intmath.h"
#if HAVE_FAST_CLZ
#if AV_GCC_VERSION_AT_LEAST(3,4)
#   define ff_log2(x) (31 - __builtin_clz((x)|1))
#   ifndef ff_log2_16bit
#      define ff_log2_16bit av_log2
#   endif
extern const uint8_t ff_log2_tab[256];
#define ff_log2 ff_log2_c
static av_always_inline av_const int ff_log2_c(unsigned int v)
#define ff_log2_16bit ff_log2_16bit_c
static av_always_inline av_const int ff_log2_16bit_c(unsigned int v)
#define av_log2       ff_log2
#define av_log2_16bit ff_log2_16bit
#if HAVE_FAST_CLZ
#if AV_GCC_VERSION_AT_LEAST(3,4)
#define ff_ctz(v) __builtin_ctz(v)
#define ff_ctzll(v) __builtin_ctzll(v)
#define ff_clz(v) __builtin_clz(v)
#define ff_ctz ff_ctz_c
