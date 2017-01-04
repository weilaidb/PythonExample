#define irq2port(x) (M32R_ICU_CR1_PORTL + ((x - 1) * sizeof(unsigned long)))
icu_data_t icu_data[NR_IRQS];
static void disable_oaks32r_irq(unsigned int irq)
static void enable_oaks32r_irq(unsigned int irq)
static void mask_oaks32r(struct irq_data *data)
static void unmask_oaks32r(struct irq_data *data)
static void shutdown_oaks32r(struct irq_data *data)
static struct irq_chip oaks32r_irq_type =
;
void __init init_IRQ(void)
