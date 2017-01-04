static unsigned long idp_pin_config[] __initdata = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static void idp_backlight_power(int on)
static void idp_vlcd(int on)
static void idp_lcd_power(int on, struct fb_var_screeninfo *var)
static struct pxafb_mode_info sharp_lm8v31_mode = ;
static struct pxafb_mach_info sharp_lm8v31 = ;
static struct pxamci_platform_data idp_mci_platform_data = ;
static void __init idp_init(void)
static struct map_desc idp_io_desc[] __initdata = ;
static void __init idp_map_io(void)
MACHINE_START(PXA_IDP, "Vibren PXA255 IDP")
.map_io		= idp_map_io,
.init_irq	= pxa25x_init_irq,
.timer		= &pxa_timer,
.init_machine	= idp_init,
MACHINE_END
