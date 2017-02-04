#define AVUTIL_ARM_BSWAP_H
#if HAVE_ARMV6
#define av_bswap32 av_bswap32
av_bswap32
#elif HAVE_INLINE_ASM
#if HAVE_ARMV6_INLINE
#define av_bswap16 av_bswap16
av_bswap16
AV_GCC_VERSION_AT_MOST
#define av_bswap32 av_bswap32
av_bswap32
