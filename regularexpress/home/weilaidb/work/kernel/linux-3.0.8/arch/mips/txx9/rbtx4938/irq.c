static int toshiba_rbtx4938_irq_nested(int sw_irq)
static void toshiba_rbtx4938_irq_ioc_enable(struct irq_data *d)
static void toshiba_rbtx4938_irq_ioc_disable(struct irq_data *d)
#define TOSHIBA_RBTX4938_IOC_NAME "RBTX4938-IOC"
static struct irq_chip toshiba_rbtx4938_irq_ioc_type = ;
static int rbtx4938_irq_dispatch(int pending)
static void __init toshiba_rbtx4938_irq_ioc_init(void)
void __init rbtx4938_irq_setup(void)
