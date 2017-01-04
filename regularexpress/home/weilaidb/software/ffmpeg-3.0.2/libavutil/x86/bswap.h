#define AVUTIL_X86_BSWAP_H
#if defined(_MSC_VER)
#if defined(_MSC_VER)
#define av_bswap16 av_bswap16
static av_always_inline av_const uint16_t av_bswap16(uint16_t x)
#define av_bswap32 av_bswap32
static av_always_inline av_const uint32_t av_bswap32(uint32_t x)
#if ARCH_X86_64
#define av_bswap64 av_bswap64
static inline uint64_t av_const av_bswap64(uint64_t x)
#elif HAVE_INLINE_ASM
#if AV_GCC_VERSION_AT_MOST(4,0)
#define av_bswap16 av_bswap16
static av_always_inline av_const unsigned av_bswap16(unsigned x)
#if AV_GCC_VERSION_AT_MOST(4,4) || defined(__INTEL_COMPILER)
#define av_bswap32 av_bswap32
static av_always_inline av_const uint32_t av_bswap32(uint32_t x)
#if ARCH_X86_64
#define av_bswap64 av_bswap64
static inline uint64_t av_const av_bswap64(uint64_t x)
