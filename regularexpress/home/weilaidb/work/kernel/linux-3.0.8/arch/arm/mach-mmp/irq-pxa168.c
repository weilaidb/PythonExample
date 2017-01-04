#define IRQ_ROUTE_TO_AP		(ICU_INT_CONF_AP_INT | ICU_INT_CONF_IRQ)
#define PRIORITY_DEFAULT	0x1
#define PRIORITY_NONE		0x0
static void icu_mask_irq(struct irq_data *d)
static void icu_unmask_irq(struct irq_data *d)
static struct irq_chip icu_irq_chip = ;
void __init icu_init_irq(void)
