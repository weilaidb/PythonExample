static struct gpio_keys_button wbd111_keys[] = ;
static struct gpio_keys_platform_data wbd111_keys_data = ;
static struct platform_device wbd111_keys_device = ;
static struct gpio_led wbd111_leds[] = ;
static struct gpio_led_platform_data wbd111_leds_data = ;
static struct platform_device wbd111_leds_device = ;
static struct sys_timer wbd111_timer = ;
static struct mtd_partition wbd111_partitions[] = ;
#define wbd111_num_partitions  ARRAY_SIZE(wbd111_partitions)
static void __init wbd111_init(void)
MACHINE_START(WBD111, "Wiliboard WBD-111")
.boot_params	= 0x100,
.map_io		= gemini_map_io,
.init_irq	= gemini_init_irq,
.timer		= &wbd111_timer,
.init_machine	= wbd111_init,
MACHINE_END
