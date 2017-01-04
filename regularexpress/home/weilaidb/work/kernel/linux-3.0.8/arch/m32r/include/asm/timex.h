#define _ASM_M32R_TIMEX_H
#define CLOCK_TICK_RATE	(CONFIG_BUS_CLOCK / CONFIG_TIMER_DIVIDE)
#define CLOCK_TICK_FACTOR	20
typedef unsigned long long cycles_t;
static __inline__ cycles_t get_cycles (void)
