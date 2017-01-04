#define irq2port(x) (M32R_ICU_CR1_PORTL + ((x - 1) * sizeof(unsigned long)))
icu_data_t icu_data[NR_IRQS];
static void disable_m32104ut_irq(unsigned int irq)
static void enable_m32104ut_irq(unsigned int irq)
static void mask_m32104ut_irq(struct irq_data *data)
static void unmask_m32104ut_irq(struct irq_data *data)
static void shutdown_m32104ut_irq(struct irq_data *data)
static struct irq_chip m32104ut_irq_type =
;
void __init init_IRQ(void)
#if defined(CONFIG_SMC91X)
#define LAN_IOSTART     0x300
#define LAN_IOEND       0x320
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static int __init platform_init(void)
arch_initcall(platform_init);
