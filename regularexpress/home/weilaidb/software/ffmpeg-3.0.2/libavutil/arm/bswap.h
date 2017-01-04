#define AVUTIL_ARM_BSWAP_H
#if HAVE_ARMV6
#define av_bswap32 av_bswap32
static av_always_inline av_const uint32_t av_bswap32(uint32_t x)
#elif HAVE_INLINE_ASM
#if HAVE_ARMV6_INLINE
#define av_bswap16 av_bswap16
static av_always_inline av_const unsigned av_bswap16(unsigned x)
#if AV_GCC_VERSION_AT_MOST(4,4)
#define av_bswap32 av_bswap32
static av_always_inline av_const uint32_t av_bswap32(uint32_t x)
