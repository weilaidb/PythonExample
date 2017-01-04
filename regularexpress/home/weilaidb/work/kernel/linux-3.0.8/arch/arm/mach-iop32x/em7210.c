static void __init em7210_timer_init(void)
static struct sys_timer em7210_timer = ;
static struct i2c_board_info __initdata em7210_i2c_devices[] = ;
static struct map_desc em7210_io_desc[] __initdata = ;
void __init em7210_map_io(void)
#define INTA	IRQ_IOP32X_XINT0
#define INTB	IRQ_IOP32X_XINT1
#define INTC	IRQ_IOP32X_XINT2
#define INTD	IRQ_IOP32X_XINT3
static int __init
em7210_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci em7210_pci __initdata = ;
static int __init em7210_pci_init(void)
subsys_initcall(em7210_pci_init);
static struct physmap_flash_data em7210_flash_data = ;
static struct resource em7210_flash_resource = ;
static struct platform_device em7210_flash_device = ;
static struct plat_serial8250_port em7210_serial_port[] = ;
static struct resource em7210_uart_resource = ;
static struct platform_device em7210_serial_device = ;
void em7210_power_off(void)
static void __init em7210_init_machine(void)
MACHINE_START(EM7210, "Lanner EM7210")
.boot_params	= 0xa0000100,
.map_io		= em7210_map_io,
.init_irq	= iop32x_init_irq,
.timer		= &em7210_timer,
.init_machine	= em7210_init_machine,
MACHINE_END
