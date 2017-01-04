#define MCFSIM_ICR_LEVEL(l)	((l)<<3)
#define MCFSIM_ICR_PRI(p)	(p)
#define	EINT0	64
#define	EINT1	65
#define	EINT7	71
#define NR_VECS	128
#define NR_VECS	64
static void intc_irq_mask(struct irq_data *d)
static void intc_irq_unmask(struct irq_data *d)
static void intc_irq_ack(struct irq_data *d)
static u8 intc_intpri = MCFSIM_ICR_LEVEL(6) | MCFSIM_ICR_PRI(6);
static unsigned int intc_irq_startup(struct irq_data *d)
static int intc_irq_set_type(struct irq_data *d, unsigned int type)
static struct irq_chip intc_irq_chip = ;
static struct irq_chip intc_irq_chip_edge_port = ;
void __init init_IRQ(void)
