#define AVUTIL_X86_BSWAP_H
defined
defined
#define av_bswap16 av_bswap16
av_bswap16
#define av_bswap32 av_bswap32
av_bswap32
#if ARCH_X86_64
#define av_bswap64 av_bswap64
av_bswap64
#elif HAVE_INLINE_ASM
AV_GCC_VERSION_AT_MOST
#define av_bswap16 av_bswap16
av_bswap16
AV_GCC_VERSION_AT_MOST || defined(__INTEL_COMPILER)
#define av_bswap32 av_bswap32
av_bswap32
#if ARCH_X86_64
#define av_bswap64 av_bswap64
av_bswap64
