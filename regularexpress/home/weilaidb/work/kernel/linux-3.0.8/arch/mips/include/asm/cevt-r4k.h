#define __ASM_CEVT_R4K_H
DECLARE_PER_CPU(struct clock_event_device, mips_clockevent_device);
void mips_event_handler(struct clock_event_device *dev);
int c0_compare_int_usable(void);
void mips_set_clock_mode(enum clock_event_mode, struct clock_event_device *);
irqreturn_t c0_compare_interrupt(int, void *);
extern struct irqaction c0_compare_irqaction;
extern int cp0_timer_irq_installed;
static inline int handle_perf_irq(int r2)
