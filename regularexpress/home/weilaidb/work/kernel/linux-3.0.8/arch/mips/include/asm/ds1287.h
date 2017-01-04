#define __ASM_DS1287_H
extern int ds1287_timer_state(void);
extern void ds1287_set_base_clock(unsigned int clock);
extern int ds1287_clockevent_init(int irq);
