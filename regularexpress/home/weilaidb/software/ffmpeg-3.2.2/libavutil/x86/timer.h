#define AVUTIL_X86_TIMER_H
#if HAVE_INLINE_ASM
#define FF_TIMER_UNITS
#define AV_READ_TIME read_time
read_time
#elif HAVE_RDTSC
#define AV_READ_TIME __rdtsc
