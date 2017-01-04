#define AVUTIL_AARCH64_TIMER_H
#if HAVE_INLINE_ASM
#define AV_READ_TIME read_time
static inline uint64_t read_time(void)
