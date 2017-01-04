static void amiga_enable_irq(unsigned int irq);
static void amiga_disable_irq(unsigned int irq);
static irqreturn_t ami_int1(int irq, void *dev_id);
static irqreturn_t ami_int3(int irq, void *dev_id);
static irqreturn_t ami_int4(int irq, void *dev_id);
static irqreturn_t ami_int5(int irq, void *dev_id);
static struct irq_controller amiga_irq_controller = ;
void __init amiga_init_IRQ(void)
static void amiga_enable_irq(unsigned int irq)
static void amiga_disable_irq(unsigned int irq)
static irqreturn_t ami_int1(int irq, void *dev_id)
static irqreturn_t ami_int3(int irq, void *dev_id)
static irqreturn_t ami_int4(int irq, void *dev_id)
static irqreturn_t ami_int5(int irq, void *dev_id)
