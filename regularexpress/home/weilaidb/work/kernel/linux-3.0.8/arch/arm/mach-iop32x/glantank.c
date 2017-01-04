static void __init glantank_timer_init(void)
static struct sys_timer glantank_timer = ;
static struct map_desc glantank_io_desc[] __initdata = ;
void __init glantank_map_io(void)
#define INTA	IRQ_IOP32X_XINT0
#define INTB	IRQ_IOP32X_XINT1
#define INTC	IRQ_IOP32X_XINT2
#define INTD	IRQ_IOP32X_XINT3
static int __init
glantank_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci glantank_pci __initdata = ;
static int __init glantank_pci_init(void)
subsys_initcall(glantank_pci_init);
static struct physmap_flash_data glantank_flash_data = ;
static struct resource glantank_flash_resource = ;
static struct platform_device glantank_flash_device = ;
static struct plat_serial8250_port glantank_serial_port[] = ;
static struct resource glantank_uart_resource = ;
static struct platform_device glantank_serial_device = ;
static struct f75375s_platform_data glantank_f75375s = ;
static struct i2c_board_info __initdata glantank_i2c_devices[] = ;
static void glantank_power_off(void)
static void __init glantank_init_machine(void)
MACHINE_START(GLANTANK, "GLAN Tank")
.boot_params	= 0xa0000100,
.map_io		= glantank_map_io,
.init_irq	= iop32x_init_irq,
.timer		= &glantank_timer,
.init_machine	= glantank_init_machine,
MACHINE_END
