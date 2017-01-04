#define GT641XX_IRQ_TO_BIT(irq)	(1U << (irq - GT641XX_IRQ_BASE))
static DEFINE_RAW_SPINLOCK(gt641xx_irq_lock);
static void ack_gt641xx_irq(struct irq_data *d)
static void mask_gt641xx_irq(struct irq_data *d)
static void mask_ack_gt641xx_irq(struct irq_data *d)
static void unmask_gt641xx_irq(struct irq_data *d)
static struct irq_chip gt641xx_irq_chip = ;
void gt641xx_irq_dispatch(void)
void __init gt641xx_irq_init(void)
