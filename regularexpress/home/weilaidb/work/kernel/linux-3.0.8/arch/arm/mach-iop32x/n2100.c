static void __init n2100_timer_init(void)
static struct sys_timer n2100_timer = ;
static struct map_desc n2100_io_desc[] __initdata = ;
void __init n2100_map_io(void)
static int __init
n2100_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci n2100_pci __initdata = ;
static void n2100_fixup_r8169(struct pci_dev *dev)
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_REALTEK, PCI_ANY_ID, n2100_fixup_r8169);
static int __init n2100_pci_init(void)
subsys_initcall(n2100_pci_init);
static struct physmap_flash_data n2100_flash_data = ;
static struct resource n2100_flash_resource = ;
static struct platform_device n2100_flash_device = ;
static struct plat_serial8250_port n2100_serial_port[] = ;
static struct resource n2100_uart_resource = ;
static struct platform_device n2100_serial_device = ;
static struct f75375s_platform_data n2100_f75375s = ;
static struct pca9532_platform_data n2100_leds = ;
static struct i2c_board_info __initdata n2100_i2c_devices[] = ;
static void n2100_power_off(void)
static struct timer_list power_button_poll_timer;
static void power_button_poll(unsigned long dummy)
static void __init n2100_init_machine(void)
MACHINE_START(N2100, "Thecus N2100")
.boot_params	= 0xa0000100,
.map_io		= n2100_map_io,
.init_irq	= iop32x_init_irq,
.timer		= &n2100_timer,
.init_machine	= n2100_init_machine,
MACHINE_END
