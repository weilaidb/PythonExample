#define AVUTIL_PPC_INTREADWRITE_H
#if HAVE_XFORM_ASM
#if HAVE_BIGENDIAN
#define AV_RL16 av_read_bswap16
#define AV_WL16 av_write_bswap16
#define AV_RL32 av_read_bswap32
#define AV_WL32 av_write_bswap32
#define AV_RL64 av_read_bswap64
#define AV_WL64 av_write_bswap64
#define AV_RB16 av_read_bswap16
#define AV_WB16 av_write_bswap16
#define AV_RB32 av_read_bswap32
#define AV_WB32 av_write_bswap32
#define AV_RB64 av_read_bswap64
#define AV_WB64 av_write_bswap64
static av_always_inline uint16_t av_read_bswap16(const void *p)
static av_always_inline void av_write_bswap16(void *p, uint16_t v)
static av_always_inline uint32_t av_read_bswap32(const void *p)
static av_always_inline void av_write_bswap32(void *p, uint32_t v)
#if HAVE_LDBRX
static av_always_inline uint64_t av_read_bswap64(const void *p)
static av_always_inline void av_write_bswap64(void *p, uint64_t v)
static av_always_inline uint64_t av_read_bswap64(const void *p)
static av_always_inline void av_write_bswap64(void *p, uint64_t v)
