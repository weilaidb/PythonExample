#define AVUTIL_X86_TIMER_H
#if HAVE_INLINE_ASM
#define FF_TIMER_UNITS "decicycles"
#define AV_READ_TIME read_time
static inline uint64_t read_time(void)
#elif HAVE_RDTSC
#define AV_READ_TIME __rdtsc
