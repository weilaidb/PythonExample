static unsigned int
hpsim_irq_startup(struct irq_data *data)
static void
hpsim_irq_noop(struct irq_data *data)
static int
hpsim_set_affinity_noop(struct irq_data *d, const struct cpumask *b, bool f)
static struct irq_chip irq_type_hp_sim = ;
void __init
hpsim_irq_init (void)
