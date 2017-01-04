static struct w100_gen_regs himalaya_lcd_regs = ;
static struct w100_mode himalaya4_lcd_mode = ;
static struct w100_mode himalaya6_lcd_mode = ;
static struct w100_gpio_regs himalaya_w100_gpio_info = ;
static struct w100fb_mach_info himalaya_fb_info = ;
static struct resource himalaya_fb_resources[] = ;
static struct platform_device himalaya_fb_device = ;
static struct platform_device *devices[] __initdata = ;
static void __init himalaya_lcd_init(void)
static void __init himalaya_init(void)
MACHINE_START(HIMALAYA, "HTC Himalaya")
.boot_params = 0xa0000100,
.map_io = pxa25x_map_io,
.init_irq = pxa25x_init_irq,
.init_machine = himalaya_init,
.timer = &pxa_timer,
MACHINE_END
