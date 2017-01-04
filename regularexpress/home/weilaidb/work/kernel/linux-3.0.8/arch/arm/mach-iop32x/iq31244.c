static int force_ep80219;
static int is_80219(void)
static int is_ep80219(void)
static void __init iq31244_timer_init(void)
static struct sys_timer iq31244_timer = ;
static struct map_desc iq31244_io_desc[] __initdata = ;
void __init iq31244_map_io(void)
static int __init
ep80219_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci ep80219_pci __initdata = ;
static int __init
iq31244_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci iq31244_pci __initdata = ;
static int __init iq31244_pci_init(void)
subsys_initcall(iq31244_pci_init);
static struct physmap_flash_data iq31244_flash_data = ;
static struct resource iq31244_flash_resource = ;
static struct platform_device iq31244_flash_device = ;
static struct plat_serial8250_port iq31244_serial_port[] = ;
static struct resource iq31244_uart_resource = ;
static struct platform_device iq31244_serial_device = ;
void ep80219_power_off(void)
static void __init iq31244_init_machine(void)
static int __init force_ep80219_setup(char *str)
__setup("force_ep80219", force_ep80219_setup);
MACHINE_START(IQ31244, "Intel IQ31244")
.boot_params	= 0xa0000100,
.map_io		= iq31244_map_io,
.init_irq	= iop32x_init_irq,
.timer		= &iq31244_timer,
.init_machine	= iq31244_init_machine,
MACHINE_END
MACHINE_START(EP80219, "Intel EP80219")
.boot_params	= 0xa0000100,
.map_io		= iq31244_map_io,
.init_irq	= iop32x_init_irq,
.timer		= &iq31244_timer,
.init_machine	= iq31244_init_machine,
MACHINE_END
