static void bcmring_mask_irq0(struct irq_data *d)
static void bcmring_unmask_irq0(struct irq_data *d)
static void bcmring_mask_irq1(struct irq_data *d)
static void bcmring_unmask_irq1(struct irq_data *d)
static void bcmring_mask_irq2(struct irq_data *d)
static void bcmring_unmask_irq2(struct irq_data *d)
static struct irq_chip bcmring_irq0_chip = ;
static struct irq_chip bcmring_irq1_chip = ;
static struct irq_chip bcmring_irq2_chip = ;
static void vic_init(void __iomem *base, struct irq_chip *chip,
unsigned int irq_start, unsigned int vic_sources)
void __init bcmring_init_irq(void)
