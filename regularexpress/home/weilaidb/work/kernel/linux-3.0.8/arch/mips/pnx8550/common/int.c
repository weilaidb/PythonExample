static char gic_prio[PNX8550_INT_GIC_TOTINT] = ;
static void hw0_irqdispatch(int irq)
static void timer_irqdispatch(int irq)
asmlinkage void plat_irq_dispatch(void)
static inline void modify_cp0_intmask(unsigned clr_mask, unsigned set_mask)
static inline void mask_gic_int(unsigned int irq_nr)
static inline void unmask_gic_int(unsigned int irq_nr)
static inline void mask_irq(struct irq_data *d)
static inline void unmask_irq(struct irq_data *d)
int pnx8550_set_gic_priority(int irq, int priority)
static struct irq_chip level_irq_type = ;
static struct irqaction gic_action = ;
static struct irqaction timer_action = ;
void __init arch_init_irq(void)
EXPORT_SYMBOL(pnx8550_set_gic_priority);
