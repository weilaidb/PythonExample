unsigned long __mn10300_irq_enabled_epsw[NR_CPUS] __cacheline_aligned_in_smp = ;
EXPORT_SYMBOL(__mn10300_irq_enabled_epsw);
static char irq_affinity_online[NR_IRQS] = ;
#define NR_IRQ_WORDS	((NR_IRQS + 31) / 32)
static unsigned long irq_affinity_request[NR_IRQ_WORDS] = ;
atomic_t irq_err_count;
static void mn10300_cpupic_ack(struct irq_data *d)
static void __mask_and_set_icr(unsigned int irq,
unsigned int mask, unsigned int set)
static void mn10300_cpupic_mask(struct irq_data *d)
static void mn10300_cpupic_mask_ack(struct irq_data *d)
static void mn10300_cpupic_unmask(struct irq_data *d)
static void mn10300_cpupic_unmask_clear(struct irq_data *d)
static int
mn10300_cpupic_setaffinity(struct irq_data *d, const struct cpumask *mask,
bool force)
static struct irq_chip mn10300_cpu_pic_level = ;
static struct irq_chip mn10300_cpu_pic_edge = ;
void ack_bad_irq(int irq)
void set_intr_level(int irq, u16 level)
void mn10300_set_lateack_irq_type(int irq)
void __init init_IRQ(void)
asmlinkage void do_IRQ(void)
int arch_show_interrupts(struct seq_file *p, int prec)
void migrate_irqs(void)
