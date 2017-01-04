static DEFINE_SPINLOCK(ixp2000_slowport_lock);
static unsigned long ixp2000_slowport_irq_flags;
void ixp2000_acquire_slowport(struct slowport_cfg *new_cfg, struct slowport_cfg *old_cfg)
void ixp2000_release_slowport(struct slowport_cfg *old_cfg)
static struct map_desc ixp2000_io_desc[] __initdata = ;
void __init ixp2000_map_io(void)
static struct plat_serial8250_port ixp2000_serial_port[] = ;
static struct resource ixp2000_uart_resource = ;
static struct platform_device ixp2000_serial_device = ;
void __init ixp2000_uart_init(void)
static unsigned ticks_per_jiffy;
static unsigned ticks_per_usec;
static unsigned next_jiffy_time;
static volatile unsigned long *missing_jiffy_timer_csr;
unsigned long ixp2000_gettimeoffset (void)
static irqreturn_t ixp2000_timer_interrupt(int irq, void *dev_id)
static struct irqaction ixp2000_timer_irq = ;
void __init ixp2000_init_time(unsigned long tick_rate)
static unsigned long GPIO_IRQ_falling_edge;
static unsigned long GPIO_IRQ_rising_edge;
static unsigned long GPIO_IRQ_level_low;
static unsigned long GPIO_IRQ_level_high;
static void update_gpio_int_csrs(void)
void gpio_line_config(int line, int direction)
EXPORT_SYMBOL(gpio_line_config);
static void ixp2000_GPIO_irq_handler(unsigned int irq, struct irq_desc *desc)
static int ixp2000_GPIO_irq_type(struct irq_data *d, unsigned int type)
static void ixp2000_GPIO_irq_mask_ack(struct irq_data *d)
static void ixp2000_GPIO_irq_mask(struct irq_data *d)
static void ixp2000_GPIO_irq_unmask(struct irq_data *d)
static struct irq_chip ixp2000_GPIO_irq_chip = ;
static void ixp2000_pci_irq_mask(struct irq_data *d)
static void ixp2000_pci_irq_unmask(struct irq_data *d)
static void ixp2000_err_irq_handler(unsigned int irq, struct irq_desc *desc)
static void ixp2000_err_irq_mask(struct irq_data *d)
static void ixp2000_err_irq_unmask(struct irq_data *d)
static struct irq_chip ixp2000_err_irq_chip = ;
static struct irq_chip ixp2000_pci_irq_chip = ;
static void ixp2000_irq_mask(struct irq_data *d)
static void ixp2000_irq_unmask(struct irq_data *d)
static struct irq_chip ixp2000_irq_chip = ;
void __init ixp2000_init_irq(void)
