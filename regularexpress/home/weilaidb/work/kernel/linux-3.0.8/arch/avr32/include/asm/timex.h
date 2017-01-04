#define __ASM_AVR32_TIMEX_H
#define CLOCK_TICK_RATE		500000
typedef unsigned long cycles_t;
static inline cycles_t get_cycles (void)
#define ARCH_HAS_READ_CURRENT_TIMER
