#define GPIO3_INTNUM		3
#define UART_INTNUM		4
#define GMAC_INTNUM		5
static const signed char gpio3_irq_mappings[] = ;
static const signed char uart_irq_mappings[] = ;
static const signed char gmac_irq_mappings[] = ;
const signed char *platform_irq_mappings[NR_IRQS] = ;
static struct plat_serial8250_port serial_platform_data[] = ;
static struct resource s6_gmac_resource[] = ;
static int __init prepare_phy_irq(int pin)
static struct platform_device platform_devices[] = ;
static int __init device_init(void)
arch_initcall_sync(device_init);
