static void iomd_ack_irq_a(struct irq_data *d)
static void iomd_mask_irq_a(struct irq_data *d)
static void iomd_unmask_irq_a(struct irq_data *d)
static struct irq_chip iomd_a_chip = ;
static void iomd_mask_irq_b(struct irq_data *d)
static void iomd_unmask_irq_b(struct irq_data *d)
static struct irq_chip iomd_b_chip = ;
static void iomd_mask_irq_dma(struct irq_data *d)
static void iomd_unmask_irq_dma(struct irq_data *d)
static struct irq_chip iomd_dma_chip = ;
static void iomd_mask_irq_fiq(struct irq_data *d)
static void iomd_unmask_irq_fiq(struct irq_data *d)
static struct irq_chip iomd_fiq_chip = ;
void __init rpc_init_irq(void)
