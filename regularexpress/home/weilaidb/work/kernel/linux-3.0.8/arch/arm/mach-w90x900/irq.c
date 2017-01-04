struct group_irq ;
static DEFINE_SPINLOCK(groupirq_lock);
#define DEFINE_GROUP(_name, _ctrlbit, _num)				\
struct group_irq group_##_name =
static void nuc900_group_enable(struct group_irq *gpirq, int enable);
static DEFINE_GROUP(nirq0, 0, 4);
static DEFINE_GROUP(nirq1, 4, 4);
static DEFINE_GROUP(usbh, 8, 2);
static DEFINE_GROUP(ottimer, 16, 3);
static DEFINE_GROUP(gdma, 20, 2);
static DEFINE_GROUP(sc, 24, 2);
static DEFINE_GROUP(i2c, 26, 2);
static DEFINE_GROUP(ps2, 28, 2);
static int group_irq_enable(struct group_irq *group_irq)
static void group_irq_disable(struct group_irq *group_irq)
static void nuc900_group_enable(struct group_irq *gpirq, int enable)
static void nuc900_irq_mask(struct irq_data *d)
static void nuc900_irq_ack(struct irq_data *d)
static void nuc900_irq_unmask(struct irq_data *d)
static struct irq_chip nuc900_irq_chip = ;
void __init nuc900_init_irq(void)
