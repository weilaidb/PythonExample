atomic_t irq_err_count;
void (*x86_platform_ipi_callback)(void) = NULL;
void ack_bad_irq(unsigned int irq)
#define irq_stats(x)		(&per_cpu(irq_stat, x))
int arch_show_interrupts(struct seq_file *p, int prec)
u64 arch_irq_stat_cpu(unsigned int cpu)
u64 arch_irq_stat(void)
unsigned int __irq_entry do_IRQ(struct pt_regs *regs)
void smp_x86_platform_ipi(struct pt_regs *regs)
EXPORT_SYMBOL_GPL(vector_used_by_percpu_irq);
void fixup_irqs(void)
