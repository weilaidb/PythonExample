#define AVUTIL_ARM_INTREADWRITE_H
#if HAVE_FAST_UNALIGNED && HAVE_INLINE_ASM && AV_GCC_VERSION_AT_MOST(4,6)
#define AV_RN16 AV_RN16
static av_always_inline unsigned AV_RN16(const void *p)
#define AV_WN16 AV_WN16
static av_always_inline void AV_WN16(void *p, uint16_t v)
#define AV_RN32 AV_RN32
static av_always_inline uint32_t AV_RN32(const void *p)
#define AV_WN32 AV_WN32
static av_always_inline void AV_WN32(void *p, uint32_t v)
#if HAVE_ASM_MOD_Q
#define AV_RN64 AV_RN64
static av_always_inline uint64_t AV_RN64(const void *p)
#define AV_WN64 AV_WN64
static av_always_inline void AV_WN64(void *p, uint64_t v)
