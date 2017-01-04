static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct resource led_resources[] = ;
static struct platform_device led_device = ;
static struct platform_device *debug_devices[] __initdata = ;
int __init debug_card_init(u32 addr, unsigned gpio)
