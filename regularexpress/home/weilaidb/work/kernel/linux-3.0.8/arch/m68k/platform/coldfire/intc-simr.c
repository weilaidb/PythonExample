#define	EINT0	64
#define	EINT1	65
#define	EINT4	66
#define	EINT7	67
static unsigned int irqebitmap[] = ;
static unsigned int inline irq2ebit(unsigned int irq)
#define	EINT0	64
#define	EINT1	65
#define	EINT7	71
static unsigned int inline irq2ebit(unsigned int irq)
static void intc_irq_mask(struct irq_data *d)
static void intc_irq_unmask(struct irq_data *d)
static void intc_irq_ack(struct irq_data *d)
static unsigned int intc_irq_startup(struct irq_data *d)
static int intc_irq_set_type(struct irq_data *d, unsigned int type)
static struct irq_chip intc_irq_chip = ;
static struct irq_chip intc_irq_chip_edge_port = ;
void __init init_IRQ(void)
