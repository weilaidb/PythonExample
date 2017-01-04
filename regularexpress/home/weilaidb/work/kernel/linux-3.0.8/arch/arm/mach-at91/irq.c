static void at91_aic_mask_irq(struct irq_data *d)
static void at91_aic_unmask_irq(struct irq_data *d)
unsigned int at91_extern_irq;
#define is_extern_irq(irq) ((1 << (irq)) & at91_extern_irq)
static int at91_aic_set_type(struct irq_data *d, unsigned type)
static u32 wakeups;
static u32 backups;
static int at91_aic_set_wake(struct irq_data *d, unsigned value)
void at91_irq_suspend(void)
void at91_irq_resume(void)
#define at91_aic_set_wake	NULL
static struct irq_chip at91_aic_chip = ;
void __init at91_aic_init(unsigned int priority[NR_AIC_IRQS])
