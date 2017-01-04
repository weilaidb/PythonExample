static struct map_desc netx_io_desc[] __initdata = ;
void __init netx_map_io(void)
static struct resource netx_rtc_resources[] = ;
static struct platform_device netx_rtc_device = ;
static struct platform_device *devices[] __initdata = ;
static void
netx_hif_demux_handler(unsigned int irq_unused, struct irq_desc *desc)
static int
netx_hif_irq_type(struct irq_data *d, unsigned int type)
static void
netx_hif_ack_irq(struct irq_data *d)
static void
netx_hif_mask_irq(struct irq_data *d)
static void
netx_hif_unmask_irq(struct irq_data *d)
static struct irq_chip netx_hif_chip = ;
void __init netx_init_irq(void)
static int __init netx_init(void)
subsys_initcall(netx_init);
