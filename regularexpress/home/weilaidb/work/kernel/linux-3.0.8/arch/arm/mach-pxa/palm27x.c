#if defined(CONFIG_MMC_PXA) || defined(CONFIG_MMC_PXA_MODULE)
static struct pxamci_platform_data palm27x_mci_platform_data = ;
void __init palm27x_mmc_init(int detect, int ro, int power,
int power_inverted)
#if defined(CONFIG_SUSPEND)
void __init palm27x_pm_init(unsigned long str_base)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
struct pxafb_mode_info palm_320x480_lcd_mode = ;
struct pxafb_mode_info palm_320x320_lcd_mode = ;
struct pxafb_mode_info palm_320x320_new_lcd_mode = ;
static struct pxafb_mach_info palm27x_lcd_screen = ;
static int palm27x_lcd_power;
static void palm27x_lcd_ctl(int on, struct fb_var_screeninfo *info)
void __init palm27x_lcd_init(int power, struct pxafb_mode_info *mode)
#if	defined(CONFIG_USB_GADGET_PXA27X) || \
defined(CONFIG_USB_GADGET_PXA27X_MODULE)
static struct gpio_vbus_mach_info palm27x_udc_info = ;
static struct platform_device palm27x_gpio_vbus = ;
void __init palm27x_udc_init(int vbus, int pullup, int vbus_inverted)
#if defined(CONFIG_IRDA) || defined(CONFIG_IRDA_MODULE)
static struct pxaficp_platform_data palm27x_ficp_platform_data = ;
void __init palm27x_irda_init(int pwdn)
#if	defined(CONFIG_TOUCHSCREEN_WM97XX) || \
defined(CONFIG_TOUCHSCREEN_WM97XX_MODULE)
static struct wm97xx_batt_pdata palm27x_batt_pdata = ;
static struct wm97xx_pdata palm27x_wm97xx_pdata = ;
static pxa2xx_audio_ops_t palm27x_ac97_pdata = ;
static struct palm27x_asoc_info palm27x_asoc_pdata = ;
static struct platform_device palm27x_asoc = ;
void __init palm27x_ac97_init(int minv, int maxv, int jack, int reset)
#if defined(CONFIG_BACKLIGHT_PWM) || defined(CONFIG_BACKLIGHT_PWM_MODULE)
static int palm_bl_power;
static int palm_lcd_power;
static int palm27x_backlight_init(struct device *dev)
static int palm27x_backlight_notify(struct device *dev, int brightness)
static void palm27x_backlight_exit(struct device *dev)
static struct platform_pwm_backlight_data palm27x_backlight_data = ;
static struct platform_device palm27x_backlight = ;
void __init palm27x_pwm_init(int bl, int lcd)
#if defined(CONFIG_PDA_POWER) || defined(CONFIG_PDA_POWER_MODULE)
static int palm_ac_state;
static int palm_usb_state;
static int palm27x_power_supply_init(struct device *dev)
static void palm27x_power_supply_exit(struct device *dev)
static int palm27x_is_ac_online(void)
static int palm27x_is_usb_online(void)
static char *palm27x_supplicants[] = ;
static struct pda_power_pdata palm27x_ps_info = ;
static struct platform_device palm27x_power_supply = ;
void __init palm27x_power_init(int ac, int usb)
#if defined(CONFIG_REGULATOR_MAX1586) || \
defined(CONFIG_REGULATOR_MAX1586_MODULE)
static struct regulator_consumer_supply palm27x_max1587a_consumers[] = ;
static struct regulator_init_data palm27x_max1587a_v3_info = ;
static struct max1586_subdev_data palm27x_max1587a_subdevs[] = ;
static struct max1586_platform_data palm27x_max1587a_info = ;
static struct i2c_board_info __initdata palm27x_pi2c_board_info[] = ;
static struct i2c_pxa_platform_data palm27x_i2c_power_info = ;
void __init palm27x_pmic_init(void)
