static struct gpio_keys_button wbd222_keys[] = ;
static struct gpio_keys_platform_data wbd222_keys_data = ;
static struct platform_device wbd222_keys_device = ;
static struct gpio_led wbd222_leds[] = ;
static struct gpio_led_platform_data wbd222_leds_data = ;
static struct platform_device wbd222_leds_device = ;
static struct sys_timer wbd222_timer = ;
static struct mtd_partition wbd222_partitions[] = ;
#define wbd222_num_partitions  ARRAY_SIZE(wbd222_partitions)
static void __init wbd222_init(void)
MACHINE_START(WBD222, "Wiliboard WBD-222")
.boot_params	= 0x100,
.map_io		= gemini_map_io,
.init_irq	= gemini_init_irq,
.timer		= &wbd222_timer,
.init_machine	= wbd222_init,
MACHINE_END
