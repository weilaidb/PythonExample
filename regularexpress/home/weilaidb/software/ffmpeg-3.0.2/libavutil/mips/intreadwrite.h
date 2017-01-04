#define AVUTIL_MIPS_INTREADWRITE_H
#if ARCH_MIPS64 && HAVE_INLINE_ASM && !HAVE_MIPS64R6
#define AV_RN32 AV_RN32
static av_always_inline uint32_t AV_RN32(const void *p)
