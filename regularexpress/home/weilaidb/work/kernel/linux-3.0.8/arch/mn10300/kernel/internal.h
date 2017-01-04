struct clocksource;
struct clock_event_device;
extern int kernel_thread_helper(int);
extern void ret_from_fork(struct task_struct *) __attribute__((noreturn));
extern void mn10300_low_ipi_handler(void);
extern void smp_jump_to_debugger(void);
extern irqreturn_t local_timer_interrupt(void);
