static void __init enp2611_timer_init(void)
static struct sys_timer enp2611_timer = ;
static struct map_desc enp2611_io_desc[] __initdata = ;
void __init enp2611_map_io(void)
static int enp2611_pci_setup(int nr, struct pci_sys_data *sys)
static void __init enp2611_pci_preinit(void)
static inline int enp2611_pci_valid_device(struct pci_bus *bus,
unsigned int devfn)
static int enp2611_pci_read_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *value)
static int enp2611_pci_write_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 value)
static struct pci_ops enp2611_pci_ops = ;
static struct pci_bus * __init enp2611_pci_scan_bus(int nr,
struct pci_sys_data *sys)
static int __init enp2611_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
struct hw_pci enp2611_pci __initdata = ;
int __init enp2611_pci_init(void)
subsys_initcall(enp2611_pci_init);
static struct flash_platform_data enp2611_flash_platform_data = ;
static struct ixp2000_flash_data enp2611_flash_data = ;
static struct resource enp2611_flash_resource = ;
static struct platform_device enp2611_flash = ;
static struct ixp2000_i2c_pins enp2611_i2c_gpio_pins = ;
static struct platform_device enp2611_i2c_controller = ;
static struct platform_device *enp2611_devices[] __initdata = ;
static void __init enp2611_init_machine(void)
MACHINE_START(ENP2611, "Radisys ENP-2611 PCI network processor board")
.boot_params	= 0x00000100,
.map_io		= enp2611_map_io,
.init_irq	= ixp2000_init_irq,
.timer		= &enp2611_timer,
.init_machine	= enp2611_init_machine,
MACHINE_END
