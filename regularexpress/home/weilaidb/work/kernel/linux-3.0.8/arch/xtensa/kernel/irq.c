static unsigned int cached_irq_mask;
atomic_t irq_err_count;
asmlinkage void do_IRQ(int irq, struct pt_regs *regs)
int arch_show_interrupts(struct seq_file *p, int prec)
static void xtensa_irq_mask(struct irq_data *d)
static void xtensa_irq_unmask(struct irq_data *d)
static void xtensa_irq_enable(struct irq_data *d)
static void xtensa_irq_disable(struct irq_data *d)
static void xtensa_irq_ack(struct irq_data *d)
static int xtensa_irq_retrigger(struct irq_data *d)
static struct irq_chip xtensa_irq_chip = ;
void __init init_IRQ(void)
