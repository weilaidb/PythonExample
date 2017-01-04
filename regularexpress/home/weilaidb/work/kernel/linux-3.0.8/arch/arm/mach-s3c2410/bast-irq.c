#define irqdbf(x...)
#define irqdbf2(x...)
static unsigned char bast_pc104_irqmasks[] = ;
static unsigned char bast_pc104_irqs[] = ;
static void
bast_pc104_mask(struct irq_data *data)
static void
bast_pc104_maskack(struct irq_data *data)
static void
bast_pc104_unmask(struct irq_data *data)
static struct irq_chip  bast_pc104_chip = ;
static void
bast_irq_pc104_demux(unsigned int irq,
struct irq_desc *desc)
static __init int bast_irq_init(void)
arch_initcall(bast_irq_init);
