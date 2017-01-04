#undef PARISC_IRQ_CR16_COUNTS
extern irqreturn_t timer_interrupt(int, void *);
extern irqreturn_t ipi_interrupt(int, void *);
#define EIEM_MASK(irq)       (1UL<<(CPU_IRQ_MAX - irq))
static volatile unsigned long cpu_eiem = 0;
static DEFINE_PER_CPU(unsigned long, local_ack_eiem) = ~0UL;
static void cpu_mask_irq(struct irq_data *d)
static void __cpu_unmask_irq(unsigned int irq)
static void cpu_unmask_irq(struct irq_data *d)
void cpu_ack_irq(struct irq_data *d)
void cpu_eoi_irq(struct irq_data *d)
int cpu_check_affinity(struct irq_data *d, const struct cpumask *dest)
static int cpu_set_affinity_irq(struct irq_data *d, const struct cpumask *dest,
bool force)
static struct irq_chip cpu_interrupt_type = ;
int show_interrupts(struct seq_file *p, void *v)
int cpu_claim_irq(unsigned int irq, struct irq_chip *type, void *data)
int txn_claim_irq(int irq)
int txn_alloc_irq(unsigned int bits_wide)
unsigned long txn_affinity_addr(unsigned int irq, int cpu)
unsigned long txn_alloc_addr(unsigned int virt_irq)
unsigned int txn_alloc_data(unsigned int virt_irq)
static inline int eirr_to_irq(unsigned long eirr)
void do_cpu_irq_mask(struct pt_regs *regs)
static struct irqaction timer_action = ;
static struct irqaction ipi_action = ;
static void claim_cpu_irqs(void)
void __init init_IRQ(void)
