static void ixdp2x01_irq_mask(struct irq_data *d)
static void ixdp2x01_irq_unmask(struct irq_data *d)
static u32 valid_irq_mask;
static void ixdp2x01_irq_handler(unsigned int irq, struct irq_desc *desc)
static struct irq_chip ixdp2x01_irq_chip = ;
void __init ixdp2x01_init_irq(void)
static struct map_desc ixdp2x01_io_desc __initdata = ;
static void __init ixdp2x01_map_io(void)
static struct plat_serial8250_port ixdp2x01_serial_port1[] = ;
static struct resource ixdp2x01_uart_resource1 = ;
static struct platform_device ixdp2x01_serial_device1 = ;
static struct plat_serial8250_port ixdp2x01_serial_port2[] = ;
static struct resource ixdp2x01_uart_resource2 = ;
static struct platform_device ixdp2x01_serial_device2 = ;
static void ixdp2x01_uart_init(void)
static unsigned int ixdp2x01_clock;
static int __init ixdp2x01_clock_setup(char *str)
__setup("ixdp2x01_clock=", ixdp2x01_clock_setup);
static void __init ixdp2x01_timer_init(void)
static struct sys_timer ixdp2x01_timer = ;
void __init ixdp2x01_pci_preinit(void)
#define DEVPIN(dev, pin) ((pin) | ((dev) << 3))
static int __init ixdp2x01_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static int ixdp2x01_pci_setup(int nr, struct pci_sys_data *sys)
struct hw_pci ixdp2x01_pci __initdata = ;
int __init ixdp2x01_pci_init(void)
subsys_initcall(ixdp2x01_pci_init);
static struct flash_platform_data ixdp2x01_flash_platform_data = ;
static unsigned long ixdp2x01_flash_bank_setup(unsigned long ofs)
static struct ixp2000_flash_data ixdp2x01_flash_data = ;
static struct resource ixdp2x01_flash_resource = ;
static struct platform_device ixdp2x01_flash = ;
static struct ixp2000_i2c_pins ixdp2x01_i2c_gpio_pins = ;
static struct platform_device ixdp2x01_i2c_controller = ;
static struct platform_device *ixdp2x01_devices[] __initdata = ;
static void __init ixdp2x01_init_machine(void)
MACHINE_START(IXDP2401, "Intel IXDP2401 Development Platform")
.boot_params	= 0x00000100,
.map_io		= ixdp2x01_map_io,
.init_irq	= ixdp2x01_init_irq,
.timer		= &ixdp2x01_timer,
.init_machine	= ixdp2x01_init_machine,
MACHINE_END
MACHINE_START(IXDP2801, "Intel IXDP2801 Development Platform")
.boot_params	= 0x00000100,
.map_io		= ixdp2x01_map_io,
.init_irq	= ixdp2x01_init_irq,
.timer		= &ixdp2x01_timer,
.init_machine	= ixdp2x01_init_machine,
MACHINE_END
MACHINE_START(IXDP28X5, "Intel IXDP2805/2855 Development Platform")
.boot_params	= 0x00000100,
.map_io		= ixdp2x01_map_io,
.init_irq	= ixdp2x01_init_irq,
.timer		= &ixdp2x01_timer,
.init_machine	= ixdp2x01_init_machine,
MACHINE_END
