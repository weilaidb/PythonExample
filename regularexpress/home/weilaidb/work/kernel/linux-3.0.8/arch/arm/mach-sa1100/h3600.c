static void h3600_lcd_power(int enable)
static void __init h3600_map_io(void)
static int h3600_irda_set_power(struct device *dev, unsigned int state)
static void h3600_irda_set_speed(struct device *dev, unsigned int speed)
static int h3600_irda_startup(struct device *dev)
static void h3600_irda_shutdown(struct device *dev)
static struct irda_platform_data h3600_irda_data = ;
static struct gpio_default_state h3600_default_gpio[] = ;
static void __init h3600_mach_init(void)
MACHINE_START(H3600, "Compaq iPAQ H3600")
.boot_params	= 0xc0000100,
.map_io		= h3600_map_io,
.init_irq	= sa1100_init_irq,
.timer		= &sa1100_timer,
.init_machine	= h3600_mach_init,
MACHINE_END
