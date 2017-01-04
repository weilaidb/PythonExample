static struct resource gpr_wdt_resource[] = ;
static struct platform_device gpr_wdt_device = ;
static struct mtd_partition gpr_mtd_partitions[] = ;
static struct physmap_flash_data gpr_flash_data = ;
static struct resource gpr_mtd_resource = ;
static struct platform_device gpr_mtd_device = ;
static struct gpio_led gpr_gpio_leds[] = ;
static struct gpio_led_platform_data gpr_led_data = ;
static struct platform_device gpr_led_devices = ;
static struct i2c_gpio_platform_data gpr_i2c_data = ;
static struct platform_device gpr_i2c_device = ;
static struct i2c_board_info gpr_i2c_info[] __initdata = ;
static struct platform_device *gpr_devices[] __initdata = ;
static int __init gpr_dev_init(void)
device_initcall(gpr_dev_init);
