static volatile int *lasat_int_status;
static volatile int *lasat_int_mask;
static volatile int lasat_int_mask_shift;
void disable_lasat_irq(struct irq_data *d)
void enable_lasat_irq(struct irq_data *d)
static struct irq_chip lasat_irq_type = ;
static inline int ls1bit32(unsigned int x)
static unsigned long (*get_int_status)(void);
static unsigned long get_int_status_100(void)
static unsigned long get_int_status_200(void)
asmlinkage void plat_irq_dispatch(void)
static struct irqaction cascade = ;
void __init arch_init_irq(void)
