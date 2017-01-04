static void fpga_mask_irq(struct irq_data *d)
static inline u32 get_fpga_unmasked_irqs(void)
static void fpga_ack_irq(struct irq_data *d)
static void fpga_unmask_irq(struct irq_data *d)
static void fpga_mask_ack_irq(struct irq_data *d)
void innovator_fpga_IRQ_demux(unsigned int irq, struct irq_desc *desc)
static struct irq_chip omap_fpga_irq_ack = ;
static struct irq_chip omap_fpga_irq = ;
void omap1510_fpga_init_irq(void)
