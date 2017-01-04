#define AVUTIL_X86_INTMATH_H
#if HAVE_FAST_CLZ
#if defined(_MSC_VER)
#elif defined(__INTEL_COMPILER)
#if HAVE_FAST_CLZ
#if (defined(__INTEL_COMPILER) && (__INTEL_COMPILER>=1216)) || defined(_MSC_VER)
#   if defined(__INTEL_COMPILER)
#       define ff_log2(x) (_bit_scan_reverse((x)|1))
#   else
#       define ff_log2 ff_log2_x86
static av_always_inline av_const int ff_log2_x86(unsigned int v)
#   endif
#   define ff_log2_16bit av_log2
#if defined(__INTEL_COMPILER) || (defined(_MSC_VER) && (_MSC_VER >= 1700))
#   define ff_ctz(v) _tzcnt_u32(v)
#   if ARCH_X86_64
#       define ff_ctzll(v) _tzcnt_u64(v)
#   else
#       define ff_ctzll ff_ctzll_x86
static av_always_inline av_const int ff_ctzll_x86(long long v)
#   endif
#if defined(__GNUC__)
#if defined(__POPCNT__)
#define av_popcount   __builtin_popcount
#if ARCH_X86_64
#define av_popcount64 __builtin_popcountll
#if defined(__BMI2__)
#if AV_GCC_VERSION_AT_LEAST(5,1)
#define av_mod_uintp2 __builtin_ia32_bzhi_si
#elif HAVE_INLINE_ASM
#define av_mod_uintp2 av_mod_uintp2_bmi2
static av_always_inline av_const unsigned av_mod_uintp2_bmi2(unsigned a, unsigned p)
#if defined(__SSE2__) && !defined(__INTEL_COMPILER)
#define av_clipd av_clipd_sse2
static av_always_inline av_const double av_clipd_sse2(double a, double amin, double amax)
#if defined(__SSE__) && !defined(__INTEL_COMPILER)
#define av_clipf av_clipf_sse
static av_always_inline av_const float av_clipf_sse(float a, float amin, float amax)
