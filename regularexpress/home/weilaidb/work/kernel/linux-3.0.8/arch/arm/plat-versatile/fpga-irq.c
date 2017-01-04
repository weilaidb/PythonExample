#define IRQ_STATUS		0x00
#define IRQ_RAW_STATUS		0x04
#define IRQ_ENABLE_SET		0x08
#define IRQ_ENABLE_CLEAR	0x0c
static void fpga_irq_mask(struct irq_data *d)
static void fpga_irq_unmask(struct irq_data *d)
static void fpga_irq_handle(unsigned int irq, struct irq_desc *desc)
void __init fpga_irq_init(int parent_irq, u32 valid, struct fpga_irq_data *f)
