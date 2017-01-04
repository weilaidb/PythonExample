static struct map_desc n30_iodesc[] __initdata = ;
static struct s3c2410_uartcfg n30_uartcfgs[] = ;
static struct s3c2410_udc_mach_info n30_udc_cfg __initdata = ;
static struct gpio_keys_button n30_buttons[] = ;
static struct gpio_keys_platform_data n30_button_data = ;
static struct platform_device n30_button_device = ;
static struct gpio_keys_button n35_buttons[] = ;
static struct gpio_keys_platform_data n35_button_data = ;
static struct platform_device n35_button_device = ;
static struct s3c24xx_led_platdata n30_blue_led_pdata = ;
static struct s3c24xx_led_platdata n35_blue_led_pdata = ;
static struct s3c24xx_led_platdata n30_warning_led_pdata = ;
static struct s3c24xx_led_platdata n35_warning_led_pdata = ;
static struct platform_device n30_blue_led = ;
static struct platform_device n35_blue_led = ;
static struct platform_device n30_warning_led = ;
static struct platform_device n35_warning_led = ;
static struct s3c2410fb_display n30_display __initdata = ;
static struct s3c2410fb_mach_info n30_fb_info __initdata = ;
static void n30_sdi_set_power(unsigned char power_mode, unsigned short vdd)
static struct s3c24xx_mci_pdata n30_mci_cfg __initdata = ;
static struct platform_device *n30_devices[] __initdata = ;
static struct platform_device *n35_devices[] __initdata = ;
static struct s3c2410_platform_i2c __initdata n30_i2ccfg = ;
static void __init n30_hwinit(void)
static void __init n30_map_io(void)
static void __init n30_init(void)
MACHINE_START(N30, "Acer-N30")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.timer		= &s3c24xx_timer,
.init_machine	= n30_init,
.init_irq	= s3c24xx_init_irq,
.map_io		= n30_map_io,
MACHINE_END
MACHINE_START(N35, "Acer-N35")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.timer		= &s3c24xx_timer,
.init_machine	= n30_init,
.init_irq	= s3c24xx_init_irq,
.map_io		= n30_map_io,
MACHINE_END
