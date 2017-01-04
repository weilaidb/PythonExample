unsigned char mcf_irq2imr[NR_IRQS];
#define	EIRQ1	25
#define	EIRQ7	31
void mcf_setimr(int index)
void mcf_clrimr(int index)
void mcf_maskimr(unsigned int mask)
void mcf_setimr(int index)
void mcf_clrimr(int index)
void mcf_maskimr(unsigned int mask)
void mcf_autovector(int irq)
static void intc_irq_mask(struct irq_data *d)
static void intc_irq_unmask(struct irq_data *d)
static int intc_irq_set_type(struct irq_data *d, unsigned int type)
static struct irq_chip intc_irq_chip = ;
void __init init_IRQ(void)
