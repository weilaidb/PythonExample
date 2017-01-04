#define _ASM_POWERPC_TIMEX_H
#define CLOCK_TICK_RATE	1024000
typedef unsigned long cycles_t;
static inline cycles_t get_cycles(void)
