#define INTC_BASE	BARRIER_BASE_ADDR
static unsigned int intc_baseaddr;
#define INTC_BASE	intc_baseaddr
unsigned int nr_irq;
#define ISR 0x00
#define IPR 0x04
#define IER 0x08
#define IAR 0x0c
#define SIE 0x10
#define CIE 0x14
#define IVR 0x18
#define MER 0x1c
#define MER_ME (1<<0)
#define MER_HIE (1<<1)
static void intc_enable_or_unmask(struct irq_data *d)
static void intc_disable_or_mask(struct irq_data *d)
static void intc_ack(struct irq_data *d)
static void intc_mask_ack(struct irq_data *d)
static struct irq_chip intc_dev = ;
unsigned int get_irq(struct pt_regs *regs)
void __init init_IRQ(void)
