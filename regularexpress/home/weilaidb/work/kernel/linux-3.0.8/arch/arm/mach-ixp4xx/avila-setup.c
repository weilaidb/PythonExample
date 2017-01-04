#define AVILA_SDA_PIN	7
#define AVILA_SCL_PIN	6
static struct flash_platform_data avila_flash_data = ;
static struct resource avila_flash_resource = ;
static struct platform_device avila_flash = ;
static struct i2c_gpio_platform_data avila_i2c_gpio_data = ;
static struct platform_device avila_i2c_gpio = ;
static struct resource avila_uart_resources[] = ;
static struct plat_serial8250_port avila_uart_data[] = ;
static struct platform_device avila_uart = ;
static struct resource avila_pata_resources[] = ;
static struct ixp4xx_pata_data avila_pata_data = ;
static struct platform_device avila_pata = ;
static struct platform_device *avila_devices[] __initdata = ;
static void __init avila_init(void)
MACHINE_START(AVILA, "Gateworks Avila Network Platform")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= avila_init,
MACHINE_END
MACHINE_START(LOFT, "Giant Shoulder Inc Loft board")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= avila_init,
MACHINE_END
