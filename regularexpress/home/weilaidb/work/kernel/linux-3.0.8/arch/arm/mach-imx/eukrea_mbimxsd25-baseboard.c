static iomux_v3_cfg_t eukrea_mbimxsd_pads[] = ;
#define GPIO_LED1	83
#define GPIO_SWITCH1	82
#define GPIO_SD1CD	52
#define GPIO_LCDPWR	26
static struct imx_fb_videomode eukrea_mximxsd_modes[] = ;
static const struct imx_fb_platform_data eukrea_mximxsd_fb_pdata __initconst = ;
static void eukrea_mbimxsd_lcd_power_set(struct plat_lcd_data *pd,
unsigned int power)
static struct plat_lcd_data eukrea_mbimxsd_lcd_power_data = ;
static struct platform_device eukrea_mbimxsd_lcd_powerdev = ;
static struct gpio_led eukrea_mbimxsd_leds[] = ;
static struct gpio_led_platform_data eukrea_mbimxsd_led_info = ;
static struct platform_device eukrea_mbimxsd_leds_gpio = ;
static struct gpio_keys_button eukrea_mbimxsd_gpio_buttons[] = ;
static const struct gpio_keys_platform_data
eukrea_mbimxsd_button_data __initconst = ;
static struct platform_device *platform_devices[] __initdata = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static struct i2c_board_info eukrea_mbimxsd_i2c_devices[] = ;
static const
struct imx_ssi_platform_data eukrea_mbimxsd_ssi_pdata __initconst = ;
static struct esdhc_platform_data sd1_pdata = ;
void __init eukrea_mbimxsd25_baseboard_init(void)
