#define __H8300_TIMER_H
void h8300_timer_tick(void);
void h8300_timer_setup(void);
void h8300_gettod(unsigned int *year, unsigned int *mon, unsigned int *day,
unsigned int *hour, unsigned int *min, unsigned int *sec);
#define TIMER_FREQ (CONFIG_CPU_CLOCK*10000)
#define calc_param(cnt, div, rate, limit)			\
do  while(0)
