static void ks8695_irq_mask(struct irq_data *d)
static void ks8695_irq_unmask(struct irq_data *d)
static void ks8695_irq_ack(struct irq_data *d)
static struct irq_chip ks8695_irq_level_chip;
static struct irq_chip ks8695_irq_edge_chip;
static int ks8695_irq_set_type(struct irq_data *d, unsigned int type)
static struct irq_chip ks8695_irq_level_chip = ;
static struct irq_chip ks8695_irq_edge_chip = ;
void __init ks8695_init_irq(void)
