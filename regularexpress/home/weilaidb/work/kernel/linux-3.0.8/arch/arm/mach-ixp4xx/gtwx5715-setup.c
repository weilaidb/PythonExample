#define GTWX5715_KSSPI_SELECT	5
#define GTWX5715_KSSPI_TXD	6
#define GTWX5715_KSSPI_CLOCK	7
#define GTWX5715_KSSPI_RXD	12
#define GTWX5715_BUTTON_GPIO	3
#define GTWX5715_LED1_GPIO	2
#define GTWX5715_LED2_GPIO	9
#define GTWX5715_LED3_GPIO	8
#define GTWX5715_LED4_GPIO	1
#define GTWX5715_LED9_GPIO	4
#define	REG_OFFSET	3
#define	REG_OFFSET	0
static struct resource gtwx5715_uart_resources[] = ;
static struct plat_serial8250_port gtwx5715_uart_platform_data[] = ;
static struct platform_device gtwx5715_uart_device = ;
static struct flash_platform_data gtwx5715_flash_data = ;
static struct resource gtwx5715_flash_resource = ;
static struct platform_device gtwx5715_flash = ;
static struct platform_device *gtwx5715_devices[] __initdata = ;
static void __init gtwx5715_init(void)
MACHINE_START(GTWX5715, "Gemtek GTWX5715 (Linksys WRV54G)")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= gtwx5715_init,
MACHINE_END
