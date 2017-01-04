static void h3100_lcd_power(int enable)
static void __init h3100_map_io(void)
static int h3100_irda_set_power(struct device *dev, unsigned int state)
static void h3100_irda_set_speed(struct device *dev, unsigned int speed)
static struct irda_platform_data h3100_irda_data = ;
static struct gpio_default_state h3100_default_gpio[] = ;
static void __init h3100_mach_init(void)
MACHINE_START(H3100, "Compaq iPAQ H3100")
.boot_params	= 0xc0000100,
.map_io		= h3100_map_io,
.init_irq	= sa1100_init_irq,
.timer		= &sa1100_timer,
.init_machine	= h3100_mach_init,
MACHINE_END
