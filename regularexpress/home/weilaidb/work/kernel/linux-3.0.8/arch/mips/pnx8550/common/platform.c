static struct resource pnx8550_usb_ohci_resources[] = ;
static struct resource pnx8550_uart_resources[] = ;
struct pnx8xxx_port pnx8xxx_ports[] = ;
static u64 ohci_dmamask = DMA_BIT_MASK(32);
static u64 uart_dmamask = DMA_BIT_MASK(32);
static struct platform_device pnx8550_usb_ohci_device = ;
static struct platform_device pnx8550_uart_device = ;
static struct platform_device *pnx8550_platform_devices[] __initdata = ;
static int __init pnx8550_platform_init(void)
arch_initcall(pnx8550_platform_init);
