#define AVUTIL_ARM_TIMER_H
#if HAVE_INLINE_ASM && defined(__ARM_ARCH_7A__)
#define AV_READ_TIME read_time
static inline uint64_t read_time(void)
