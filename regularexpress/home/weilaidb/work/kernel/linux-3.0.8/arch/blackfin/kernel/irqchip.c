static atomic_t irq_err_count;
void ack_bad_irq(unsigned int irq)
static struct irq_desc bad_irq_desc = ;
#error "Blackfin architecture does not support CONFIG_CPUMASK_OFFSTACK."
int show_interrupts(struct seq_file *p, void *v)
static void check_stack_overflow(int irq)
static inline void check_stack_overflow(int irq)
static void maybe_lower_to_irq14(void)
static inline void maybe_lower_to_irq14(void)
__attribute__((l1_text))
asmlinkage void asm_do_IRQ(unsigned int irq, struct pt_regs *regs)
void __init init_IRQ(void)
