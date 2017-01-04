#define _ASM_X86_MACH_DEFAULT_MACH_TIMER_H
#define CALIBRATE_TIME_MSEC 30
#define CALIBRATE_LATCH	\
((CLOCK_TICK_RATE * CALIBRATE_TIME_MSEC + 1000/2)/1000)
static inline void mach_prepare_counter(void)
static inline void mach_countup(unsigned long *count_p)
