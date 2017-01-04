void ack_bad_irq(unsigned int irq)
ia64_vector __ia64_irq_to_vector(int irq)
unsigned int __ia64_local_vector_to_irq (ia64_vector vec)
atomic_t irq_err_count;
int arch_show_interrupts(struct seq_file *p, int prec)
static char irq_redir [NR_IRQS];
void set_irq_affinity_info (unsigned int irq, int hwid, int redir)
bool is_affinity_mask_valid(const struct cpumask *cpumask)
unsigned int vectors_in_migration[NR_IRQS];
static void migrate_irqs(void)
void fixup_irqs(void)
