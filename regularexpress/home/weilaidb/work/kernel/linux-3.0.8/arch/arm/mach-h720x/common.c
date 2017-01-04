void __init arch_dma_init(dma_t *dma)
unsigned long h720x_gettimeoffset(void)
static void mask_global_irq(struct irq_data *d)
static void unmask_global_irq(struct irq_data *d)
static void inline ack_gpio_irq(struct irq_data *d)
static void inline mask_gpio_irq(struct irq_data *d)
static void inline unmask_gpio_irq(struct irq_data *d)
static void
h720x_gpio_handler(unsigned int mask, unsigned int irq,
struct irq_desc *desc)
static void
h720x_gpioa_demux_handler(unsigned int irq_unused, struct irq_desc *desc)
static void
h720x_gpiob_demux_handler(unsigned int irq_unused, struct irq_desc *desc)
static void
h720x_gpioc_demux_handler(unsigned int irq_unused, struct irq_desc *desc)
static void
h720x_gpiod_demux_handler(unsigned int irq_unused, struct irq_desc *desc)
static void
h720x_gpioe_demux_handler(unsigned int irq_unused, struct irq_desc *desc)
static struct irq_chip h720x_global_chip = ;
static struct irq_chip h720x_gpio_chip = ;
void __init h720x_init_irq (void)
static struct map_desc h720x_io_desc[] __initdata = ;
void __init h720x_map_io(void)
