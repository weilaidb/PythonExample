#define _SPARC64_TIMER_H
struct sparc64_tick_ops ;
extern struct sparc64_tick_ops *tick_ops;
extern unsigned long sparc64_get_clock_tick(unsigned int cpu);
extern void __devinit setup_sparc64_timer(void);
extern void __init time_init(void);
