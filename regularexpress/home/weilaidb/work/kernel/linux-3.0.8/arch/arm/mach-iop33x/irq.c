static u32 iop33x_mask0;
static u32 iop33x_mask1;
static void intctl0_write(u32 val)
static void intctl1_write(u32 val)
static void intstr0_write(u32 val)
static void intstr1_write(u32 val)
static void intbase_write(u32 val)
static void intsize_write(u32 val)
static void
iop33x_irq_mask1 (struct irq_data *d)
static void
iop33x_irq_mask2 (struct irq_data *d)
static void
iop33x_irq_unmask1(struct irq_data *d)
static void
iop33x_irq_unmask2(struct irq_data *d)
struct irq_chip iop33x_irqchip1 = ;
struct irq_chip iop33x_irqchip2 = ;
void __init iop33x_init_irq(void)
