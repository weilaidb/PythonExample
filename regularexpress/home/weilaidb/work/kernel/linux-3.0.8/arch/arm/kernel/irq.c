#define irq_finish(irq) do  while (0)
unsigned long irq_err_count;
int arch_show_interrupts(struct seq_file *p, int prec)
asmlinkage void __exception_irq_entry
asm_do_IRQ(unsigned int irq, struct pt_regs *regs)
void set_irq_flags(unsigned int irq, unsigned int iflags)
void __init init_IRQ(void)
int __init arch_probe_nr_irqs(void)
static bool migrate_one_irq(struct irq_data *d)
void migrate_irqs(void)
