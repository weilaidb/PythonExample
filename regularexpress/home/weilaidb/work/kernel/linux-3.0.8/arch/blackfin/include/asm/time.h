#define _ASM_BLACKFIN_TIME_H
# define TIME_SCALE 1
#define TIME_SCALE 4
# ifdef CONFIG_CYCLES_CLOCKSOURCE
extern unsigned long long __bfin_cycles_off;
extern unsigned int __bfin_cycles_mod;
# endif
#if defined(CONFIG_TICKSOURCE_CORETMR)
extern void bfin_coretmr_init(void);
extern void bfin_coretmr_clockevent_init(void);
