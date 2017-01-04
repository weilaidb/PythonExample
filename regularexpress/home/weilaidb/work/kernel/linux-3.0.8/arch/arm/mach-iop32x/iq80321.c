static void __init iq80321_timer_init(void)
static struct sys_timer iq80321_timer = ;
static struct map_desc iq80321_io_desc[] __initdata = ;
void __init iq80321_map_io(void)
static int __init
iq80321_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci iq80321_pci __initdata = ;
static int __init iq80321_pci_init(void)
subsys_initcall(iq80321_pci_init);
static struct physmap_flash_data iq80321_flash_data = ;
static struct resource iq80321_flash_resource = ;
static struct platform_device iq80321_flash_device = ;
static struct plat_serial8250_port iq80321_serial_port[] = ;
static struct resource iq80321_uart_resource = ;
static struct platform_device iq80321_serial_device = ;
static void __init iq80321_init_machine(void)
MACHINE_START(IQ80321, "Intel IQ80321")
.boot_params	= 0xa0000100,
.map_io		= iq80321_map_io,
.init_irq	= iop32x_init_irq,
.timer		= &iq80321_timer,
.init_machine	= iq80321_init_machine,
MACHINE_END
