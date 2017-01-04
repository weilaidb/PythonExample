static void isp116x_pfm_delay(struct device *dev, int delay)
static struct isp116x_platform_data isp116x_pfm_data = ;
static struct resource isp116x_pfm_resources[] = ;
static struct platform_device mp900c_dummy_device = ;
static struct platform_device mp900c_usb = ;
static struct platform_device *devices[] __initdata = ;
static void __init mp900c_init(void)
MACHINE_START(NEC_MP900, "MobilePro900/C")
.boot_params	= 0xa0220100,
.timer		= &pxa_timer,
.map_io		= pxa25x_map_io,
.init_irq	= pxa25x_init_irq,
.init_machine	= mp900c_init,
MACHINE_END
