#define _ASM_BLACKFIN_TIMEX_H
#define CLOCK_TICK_RATE	1000000
typedef unsigned long long cycles_t;
static inline cycles_t get_cycles(void)
