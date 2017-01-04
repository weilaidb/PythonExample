#define irq2port(x) (M32R_ICU_CR1_PORTL + ((x - 1) * sizeof(unsigned long)))
icu_data_t icu_data[NR_IRQS];
static void disable_mappi_irq(unsigned int irq)
static void enable_mappi_irq(unsigned int irq)
static void mask_mappi(struct irq_data *data)
static void unmask_mappi(struct irq_data *data)
static void shutdown_mappi(struct irq_data *data)
static struct irq_chip mappi_irq_type =
;
void __init init_IRQ(void)
#if defined(CONFIG_FB_S1D13XXX)
static struct s1d13xxxfb_pdata s1d13xxxfb_data = ;
static struct resource s1d13xxxfb_resources[] = ;
static struct platform_device s1d13xxxfb_device = ;
static int __init platform_init(void)
arch_initcall(platform_init);
