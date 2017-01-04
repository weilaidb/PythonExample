static struct sys_timer ib4220b_timer = ;
static struct gpio_led ib4220b_leds[] = ;
static struct gpio_led_platform_data ib4220b_leds_data = ;
static struct platform_device ib4220b_led_device = ;
static struct gpio_keys_button ib4220b_keys[] = ;
static struct gpio_keys_platform_data ib4220b_keys_data = ;
static struct platform_device ib4220b_key_device = ;
static void __init ib4220b_init(void)
MACHINE_START(NAS4220B, "Raidsonic NAS IB-4220-B")
.boot_params	= 0x100,
.map_io		= gemini_map_io,
.init_irq	= gemini_init_irq,
.timer		= &ib4220b_timer,
.init_machine	= ib4220b_init,
MACHINE_END
