static unsigned int ath79_ip2_flush_reg;
static unsigned int ath79_ip3_flush_reg;
static void ath79_misc_irq_handler(unsigned int irq, struct irq_desc *desc)
static void ar71xx_misc_irq_unmask(struct irq_data *d)
static void ar71xx_misc_irq_mask(struct irq_data *d)
static void ar724x_misc_irq_ack(struct irq_data *d)
static struct irq_chip ath79_misc_irq_chip = ;
static void __init ath79_misc_irq_init(void)
asmlinkage void plat_irq_dispatch(void)
void __init arch_init_irq(void)
