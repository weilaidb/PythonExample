static unsigned long palmte2_pin_config[] __initdata = ;
static struct pxamci_platform_data palmte2_mci_platform_data = ;
static struct gpio_keys_button palmte2_pxa_buttons[] = ;
static struct gpio_keys_platform_data palmte2_pxa_keys_data = ;
static struct platform_device palmte2_pxa_keys = ;
static struct gpio palmte_bl_gpios[] = ;
static int palmte2_backlight_init(struct device *dev)
static int palmte2_backlight_notify(struct device *dev, int brightness)
static void palmte2_backlight_exit(struct device *dev)
static struct platform_pwm_backlight_data palmte2_backlight_data = ;
static struct platform_device palmte2_backlight = ;
static struct pxaficp_platform_data palmte2_ficp_platform_data = ;
static struct gpio_vbus_mach_info palmte2_udc_info = ;
static struct platform_device palmte2_gpio_vbus = ;
static int power_supply_init(struct device *dev)
static int palmte2_is_ac_online(void)
static void power_supply_exit(struct device *dev)
static char *palmte2_supplicants[] = ;
static struct pda_power_pdata power_supply_info = ;
static struct platform_device power_supply = ;
static struct wm97xx_batt_pdata palmte2_batt_pdata = ;
static struct wm97xx_pdata palmte2_wm97xx_pdata = ;
static pxa2xx_audio_ops_t palmte2_ac97_pdata = ;
static struct palm27x_asoc_info palmte2_asoc_pdata = ;
static struct platform_device palmte2_asoc = ;
static struct pxafb_mode_info palmte2_lcd_modes[] = ;
static struct pxafb_mach_info palmte2_lcd_screen = ;
static struct platform_device *devices[] __initdata = ;
static void __init palmte2_udc_init(void)
static void __init palmte2_init(void)
MACHINE_START(PALMTE2, "Palm Tungsten|E2")
.boot_params	= 0xa0000100,
.map_io		= pxa25x_map_io,
.init_irq	= pxa25x_init_irq,
.timer		= &pxa_timer,
.init_machine	= palmte2_init
MACHINE_END
