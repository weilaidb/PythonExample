#define _ASM_TILE_TIMEX_H
#define CLOCK_TICK_RATE	1000000
typedef unsigned long long cycles_t;
#if CHIP_HAS_SPLIT_CYCLE()
cycles_t get_cycles(void);
static inline cycles_t get_cycles(void)
cycles_t get_clock_rate(void);
cycles_t ns2cycles(unsigned long nsecs);
void setup_clock(void);
void setup_tile_timer(void);
