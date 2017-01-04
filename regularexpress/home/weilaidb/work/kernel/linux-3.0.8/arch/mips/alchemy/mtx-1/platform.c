static struct gpio_keys_button mtx1_gpio_button[] = ;
static struct gpio_keys_platform_data mtx1_buttons_data = ;
static struct platform_device mtx1_button = ;
static struct resource mtx1_wdt_res[] = ;
static struct platform_device mtx1_wdt = ;
static struct gpio_led default_leds[] = ;
static struct gpio_led_platform_data mtx1_led_data = ;
static struct platform_device mtx1_gpio_leds = ;
static struct mtd_partition mtx1_mtd_partitions[] = ;
static struct physmap_flash_data mtx1_flash_data = ;
static struct resource mtx1_mtd_resource = ;
static struct platform_device mtx1_mtd = ;
static struct __initdata platform_device * mtx1_devs[] = ;
static struct au1000_eth_platform_data mtx1_au1000_eth0_pdata = ;
static int __init mtx1_register_devices(void)
arch_initcall(mtx1_register_devices);
