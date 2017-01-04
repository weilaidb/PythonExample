#define FSG_SDA_PIN		12
#define FSG_SCL_PIN		13
#define FSG_SB_GPIO		4
#define FSG_RB_GPIO		9
#define FSG_UB_GPIO		10
static struct flash_platform_data fsg_flash_data = ;
static struct resource fsg_flash_resource = ;
static struct platform_device fsg_flash = ;
static struct i2c_gpio_platform_data fsg_i2c_gpio_data = ;
static struct platform_device fsg_i2c_gpio = ;
static struct i2c_board_info __initdata fsg_i2c_board_info [] = ;
static struct resource fsg_uart_resources[] = ;
static struct plat_serial8250_port fsg_uart_data[] = ;
static struct platform_device fsg_uart = ;
static struct platform_device fsg_leds = ;
static struct eth_plat_info fsg_plat_eth[] = ;
static struct platform_device fsg_eth[] = ;
static struct platform_device *fsg_devices[] __initdata = ;
static irqreturn_t fsg_power_handler(int irq, void *dev_id)
static irqreturn_t fsg_reset_handler(int irq, void *dev_id)
static void __init fsg_init(void)
MACHINE_START(FSG, "Freecom FSG-3")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= fsg_init,
MACHINE_END
