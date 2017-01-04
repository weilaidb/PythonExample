#define _ASMALPHA_TIMEX_H
#define CLOCK_TICK_RATE	32768
typedef unsigned int cycles_t;
static inline cycles_t get_cycles (void)
