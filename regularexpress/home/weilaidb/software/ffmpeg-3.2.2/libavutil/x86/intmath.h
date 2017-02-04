#define AVUTIL_X86_INTMATH_H
#if HAVE_FAST_CLZ
defined
defined
#if HAVE_FAST_CLZ
#if (defined(__INTEL_COMPILER) && (__INTEL_COMPILER>=1216)) || defined(_MSC_VER)
defined
ff_log2 (_bit_scan_reverse((x)|1))
#   else
#       define ff_log2 ff_log2_x86
ff_log2_x86
#   endif
#   define ff_log2_16bit av_log2
defined || (defined(_MSC_VER) && (_MSC_VER >= 1700))
ff_ctz _tzcnt_u32(v)
#   if ARCH_X86_64
ff_ctzll _tzcnt_u64(v)
#   else
#       define ff_ctzll ff_ctzll_x86
ff_ctzll_x86
#   endif
defined
defined
#define av_popcount   __builtin_popcount
#if ARCH_X86_64
#define av_popcount64 __builtin_popcountll
defined
AV_GCC_VERSION_AT_LEAST
#define av_mod_uintp2 __builtin_ia32_bzhi_si
#elif HAVE_INLINE_ASM
#define av_mod_uintp2 av_mod_uintp2_bmi2
av_mod_uintp2_bmi2
defined && !defined(__INTEL_COMPILER)
#define av_clipd av_clipd_sse2
av_clipd_sse2
defined && !defined(__INTEL_COMPILER)
#define av_clipf av_clipf_sse
av_clipf_sse
