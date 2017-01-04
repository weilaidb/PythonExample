static u32 read_intctl_0(void)
static void write_intctl_0(u32 val)
static u32 read_intctl_1(void)
static void write_intctl_1(u32 val)
static u32 read_intctl_2(void)
static void write_intctl_2(u32 val)
static u32 read_intctl_3(void)
static void write_intctl_3(u32 val)
static void write_intstr_0(u32 val)
static void write_intstr_1(u32 val)
static void write_intstr_2(u32 val)
static void write_intstr_3(u32 val)
static void write_intbase(u32 val)
static void write_intsize(u32 val)
static void
iop13xx_irq_mask0 (struct irq_data *d)
static void
iop13xx_irq_mask1 (struct irq_data *d)
static void
iop13xx_irq_mask2 (struct irq_data *d)
static void
iop13xx_irq_mask3 (struct irq_data *d)
static void
iop13xx_irq_unmask0(struct irq_data *d)
static void
iop13xx_irq_unmask1(struct irq_data *d)
static void
iop13xx_irq_unmask2(struct irq_data *d)
static void
iop13xx_irq_unmask3(struct irq_data *d)
static struct irq_chip iop13xx_irqchip1 = ;
static struct irq_chip iop13xx_irqchip2 = ;
static struct irq_chip iop13xx_irqchip3 = ;
static struct irq_chip iop13xx_irqchip4 = ;
extern void iop_init_cp6_handler(void);
void __init iop13xx_init_irq(void)
