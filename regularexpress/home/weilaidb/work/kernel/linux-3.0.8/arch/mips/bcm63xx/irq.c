static void bcm63xx_irq_dispatch_internal(void)
asmlinkage void plat_irq_dispatch(void)
static inline void bcm63xx_internal_irq_mask(struct irq_data *d)
static void bcm63xx_internal_irq_unmask(struct irq_data *d)
static void bcm63xx_external_irq_mask(struct irq_data *d)
static void bcm63xx_external_irq_unmask(struct irq_data *d)
static void bcm63xx_external_irq_clear(struct irq_data *d)
static unsigned int bcm63xx_external_irq_startup(struct irq_data *d)
static void bcm63xx_external_irq_shutdown(struct irq_data *d)
static int bcm63xx_external_irq_set_type(struct irq_data *d,
unsigned int flow_type)
static struct irq_chip bcm63xx_internal_irq_chip = ;
static struct irq_chip bcm63xx_external_irq_chip = ;
static struct irqaction cpu_ip2_cascade_action = ;
void __init arch_init_irq(void)
