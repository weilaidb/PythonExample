#define INTSTS0 0x31800000
#define INTSTS1 0x31800002
#define INTMSK0 0x31800004
#define INTMSK1 0x31800006
#define INTSEL  0x31800008
#define IRQ0_IRQ 64
#define IRQ1_IRQ 65
#define IRQ3_IRQ 67
#define INTC_IPR01 0xfffe0818
#define INTC_ICR1  0xfffe0802
static void disable_se7206_irq(struct irq_data *data)
static void enable_se7206_irq(struct irq_data *data)
static void eoi_se7206_irq(struct irq_data *data)
static struct irq_chip se7206_irq_chip __read_mostly = ;
static void make_se7206_irq(unsigned int irq)
void __init init_se7206_IRQ(void)
