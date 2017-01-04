DEFINE_PER_CPU_SHARED_ALIGNED(irq_cpustat_t, irq_stat);
EXPORT_PER_CPU_SYMBOL(irq_stat);
DEFINE_PER_CPU(struct pt_regs *, irq_regs);
EXPORT_PER_CPU_SYMBOL(irq_regs);
static inline void stack_overflow_check(struct pt_regs *regs)
bool handle_irq(unsigned irq, struct pt_regs *regs)
extern void call_softirq(void);
asmlinkage void do_softirq(void)
