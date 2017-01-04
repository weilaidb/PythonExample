static u32 iop32x_mask;
static void intctl_write(u32 val)
static void intstr_write(u32 val)
static void
iop32x_irq_mask(struct irq_data *d)
static void
iop32x_irq_unmask(struct irq_data *d)
struct irq_chip ext_chip = ;
void __init iop32x_init_irq(void)
