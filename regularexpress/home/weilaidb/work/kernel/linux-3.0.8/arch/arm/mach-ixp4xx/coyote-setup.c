#define COYOTE_IDE_BASE_PHYS	IXP4XX_EXP_BUS_BASE(3)
#define COYOTE_IDE_BASE_VIRT	0xFFFE1000
#define COYOTE_IDE_REGION_SIZE	0x1000
#define COYOTE_IDE_DATA_PORT	0xFFFE10E0
#define COYOTE_IDE_CTRL_PORT	0xFFFE10FC
#define COYOTE_IDE_ERROR_PORT	0xFFFE10E2
#define IRQ_COYOTE_IDE		IRQ_IXP4XX_GPIO5
static struct flash_platform_data coyote_flash_data = ;
static struct resource coyote_flash_resource = ;
static struct platform_device coyote_flash = ;
static struct resource coyote_uart_resource = ;
static struct plat_serial8250_port coyote_uart_data[] = ;
static struct platform_device coyote_uart = ;
static struct platform_device *coyote_devices[] __initdata = ;
static void __init coyote_init(void)
MACHINE_START(ADI_COYOTE, "ADI Engineering Coyote")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= coyote_init,
MACHINE_END
MACHINE_START(IXDPG425, "Intel IXDPG425")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= coyote_init,
MACHINE_END
