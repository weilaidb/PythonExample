#define __ASM_ARM_LOCALTIMER_H
struct clock_event_device;
void percpu_timer_setup(void);
asmlinkage void do_local_timer(struct pt_regs *);
#define local_timer_ack()	twd_timer_ack()
int local_timer_ack(void);
int local_timer_setup(struct clock_event_device *);
static inline int local_timer_setup(struct clock_event_device *evt)
