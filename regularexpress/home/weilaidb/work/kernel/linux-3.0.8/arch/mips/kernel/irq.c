int kgdb_early_setup;
static unsigned long irq_map[NR_IRQS / BITS_PER_LONG];
int allocate_irqno(void)
void __init alloc_legacy_irqno(void)
void free_irqno(unsigned int irq)
void ack_bad_irq(unsigned int irq)
atomic_t irq_err_count;
int arch_show_interrupts(struct seq_file *p, int prec)
asmlinkage void spurious_interrupt(void)
void __init init_IRQ(void)
static inline void check_stack_overflow(void)
static inline void check_stack_overflow(void)
void __irq_entry do_IRQ(unsigned int irq)
void __irq_entry do_IRQ_no_affinity(unsigned int irq)
