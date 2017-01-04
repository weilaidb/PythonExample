volatile unsigned long irq_err_count;
DEFINE_PER_CPU(unsigned long, irq_pmi_count);
void ack_bad_irq(unsigned int irq)
static char irq_user_affinity[NR_IRQS];
int irq_select_affinity(unsigned int irq)
int arch_show_interrupts(struct seq_file *p, int prec)
#define MAX_ILLEGAL_IRQS 16
void
handle_irq(int irq)
