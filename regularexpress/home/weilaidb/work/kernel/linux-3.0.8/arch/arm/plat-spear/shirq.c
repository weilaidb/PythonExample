struct spear_shirq *shirq;
static DEFINE_SPINLOCK(lock);
static void shirq_irq_mask(struct irq_data *d)
static void shirq_irq_unmask(struct irq_data *d)
static struct irq_chip shirq_chip = ;
static void shirq_handler(unsigned irq, struct irq_desc *desc)
int spear_shirq_register(struct spear_shirq *shirq)
