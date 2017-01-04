#define _ASMm68K_TIMEX_H
#define CLOCK_TICK_RATE	MCF_CLK
#define CLOCK_TICK_RATE	1193180
typedef unsigned long cycles_t;
static inline cycles_t get_cycles(void)
