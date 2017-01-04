static unsigned long _icctrl_msc;
#define MSC01_IC_REG_BASE	_icctrl_msc
#define MSCIC_WRITE(reg, data)	do  while (0)
#define MSCIC_READ(reg, data)	do  while (0)
static unsigned int irq_base;
static inline void mask_msc_irq(struct irq_data *d)
static inline void unmask_msc_irq(struct irq_data *d)
static void level_mask_and_ack_msc_irq(struct irq_data *d)
static void edge_mask_and_ack_msc_irq(struct irq_data *d)
void ll_msc_irq(void)
static void msc_bind_eic_interrupt(int irq, int set)
static struct irq_chip msc_levelirq_type = ;
static struct irq_chip msc_edgeirq_type = ;
void __init init_msc_irqs(unsigned long icubase, unsigned int irqbase, msc_irqmap_t *imp, int nirq)
