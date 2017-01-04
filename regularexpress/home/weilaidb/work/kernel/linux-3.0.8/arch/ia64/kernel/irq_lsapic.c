static unsigned int
lsapic_noop_startup (struct irq_data *data)
static void
lsapic_noop (struct irq_data *data)
static int lsapic_retrigger(struct irq_data *data)
struct irq_chip irq_type_ia64_lsapic = ;
