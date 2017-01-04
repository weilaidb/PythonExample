static int toshiba_rbtx4927_irq_nested(int sw_irq)
static void toshiba_rbtx4927_irq_ioc_enable(struct irq_data *d)
static void toshiba_rbtx4927_irq_ioc_disable(struct irq_data *d)
#define TOSHIBA_RBTX4927_IOC_NAME "RBTX4927-IOC"
static struct irq_chip toshiba_rbtx4927_irq_ioc_type = ;
static void __init toshiba_rbtx4927_irq_ioc_init(void)
static int rbtx4927_irq_dispatch(int pending)
void __init rbtx4927_irq_setup(void)
