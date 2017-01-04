#define AVUTIL_AARCH64_BSWAP_H
#if HAVE_INLINE_ASM
#define av_bswap16 av_bswap16
static av_always_inline av_const unsigned av_bswap16(unsigned x)
#define av_bswap32 av_bswap32
static av_always_inline av_const uint32_t av_bswap32(uint32_t x)
#define av_bswap64 av_bswap64
static av_always_inline av_const uint64_t av_bswap64(uint64_t x)
