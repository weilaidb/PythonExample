atomic_t irq_err_count;
void ack_bad_irq(unsigned int irq)
#if defined(CONFIG_PROC_FS)
int arch_show_interrupts(struct seq_file *p, int prec)
union irq_ctx ;
static union irq_ctx *hardirq_ctx[NR_CPUS] __read_mostly;
static union irq_ctx *softirq_ctx[NR_CPUS] __read_mostly;
static char softirq_stack[NR_CPUS * THREAD_SIZE] __page_aligned_bss;
static char hardirq_stack[NR_CPUS * THREAD_SIZE] __page_aligned_bss;
static inline void handle_one_irq(unsigned int irq)
void irq_ctx_init(int cpu)
void irq_ctx_exit(int cpu)
asmlinkage void do_softirq(void)
static inline void handle_one_irq(unsigned int irq)
asmlinkage __irq_entry int do_IRQ(unsigned int irq, struct pt_regs *regs)
void __init init_IRQ(void)
int __init arch_probe_nr_irqs(void)
static void route_irq(struct irq_data *data, unsigned int irq, unsigned int cpu)
void migrate_irqs(void)
