#define INTC_STATUS	0x000
#define INTC_RAW	0x010
#define INTC_STATUS_AG	0x100
#define INTC_CFG(n)	(0x200 + 4 * (n))
extern const signed char *platform_irq_mappings[NR_IRQS];
static unsigned long scp_to_intc_enable[] = ;
static void irq_set(unsigned int irq, int enable)
void variant_irq_enable(unsigned int irq)
void variant_irq_disable(unsigned int irq)
