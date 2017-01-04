#define AVUTIL_AVR32_INTREADWRITE_H
#define AV_RL16 AV_RL16
static av_always_inline uint16_t AV_RL16(const void *p)
#define AV_RB16 AV_RB16
static av_always_inline uint16_t AV_RB16(const void *p)
#define AV_RB24 AV_RB24
static av_always_inline uint32_t AV_RB24(const void *p)
#define AV_RL24 AV_RL24
static av_always_inline uint32_t AV_RL24(const void *p)
#if ARCH_AVR32_AP
#define AV_RB32 AV_RB32
static av_always_inline uint32_t AV_RB32(const void *p)
#define AV_WB32 AV_WB32
static av_always_inline void AV_WB32(void *p, uint32_t v)
#define AV_RL32(p)    av_bswap32(AV_RB32(p))
#define AV_WL32(p, v) AV_WB32(p, av_bswap32(v))
#define AV_WB64 AV_WB64
static av_always_inline void AV_WB64(void *p, uint64_t v)
#define AV_WL64 AV_WL64
static av_always_inline void AV_WL64(void *p, uint64_t v)
#define AV_RB32 AV_RB32
static av_always_inline uint32_t AV_RB32(const void *p)
#define AV_RL32 AV_RL32
static av_always_inline uint32_t AV_RL32(const void *p)
#define AV_RB64 AV_RB64
static av_always_inline uint64_t AV_RB64(const void *p)
#define AV_RL64 AV_RL64
static av_always_inline uint64_t AV_RL64(const void *p)
