static struct map_desc ixp23xx_io_desc[] __initdata = ;
void __init ixp23xx_map_io(void)
enum ixp23xx_irq_type ;
static void ixp23xx_config_irq(unsigned int, enum ixp23xx_irq_type);
static int ixp23xx_irq_set_type(struct irq_data *d, unsigned int type)
static void ixp23xx_irq_mask(struct irq_data *d)
static void ixp23xx_irq_ack(struct irq_data *d)
static void ixp23xx_irq_level_unmask(struct irq_data *d)
static void ixp23xx_irq_edge_unmask(struct irq_data *d)
static struct irq_chip ixp23xx_irq_level_chip = ;
static struct irq_chip ixp23xx_irq_edge_chip = ;
static void ixp23xx_pci_irq_mask(struct irq_data *d)
static void ixp23xx_pci_irq_unmask(struct irq_data *d)
static void pci_handler(unsigned int irq, struct irq_desc *desc)
static struct irq_chip ixp23xx_pci_irq_chip = ;
static void ixp23xx_config_irq(unsigned int irq, enum ixp23xx_irq_type type)
void __init ixp23xx_init_irq(void)
#define CLOCK_TICKS_PER_USEC	(CLOCK_TICK_RATE / USEC_PER_SEC)
static unsigned long next_jiffy_time;
static unsigned long
ixp23xx_gettimeoffset(void)
static irqreturn_t
ixp23xx_timer_interrupt(int irq, void *dev_id)
static struct irqaction ixp23xx_timer_irq = ;
void __init ixp23xx_init_timer(void)
struct sys_timer ixp23xx_timer = ;
static struct resource ixp23xx_uart_resources[] = ;
static struct plat_serial8250_port ixp23xx_uart_data[] = ;
static struct platform_device ixp23xx_uart = ;
static struct platform_device *ixp23xx_devices[] __initdata = ;
void __init ixp23xx_sys_init(void)
