static const int eukrea_mbimx27_pins[] __initconst = ;
static const uint32_t eukrea_mbimx27_keymap[] = ;
static const struct matrix_keymap_data
eukrea_mbimx27_keymap_data __initconst = ;
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device leds_gpio = ;
static struct imx_fb_videomode eukrea_mbimx27_modes[] = ;
static const struct imx_fb_platform_data eukrea_mbimx27_fb_data __initconst = ;
static void eukrea_mbimx27_bl_set_intensity(int intensity)
static struct generic_bl_info eukrea_mbimx27_bl_info = ;
static struct platform_device eukrea_mbimx27_bl_dev = ;
static void eukrea_mbimx27_lcd_power_set(struct plat_lcd_data *pd,
unsigned int power)
static struct plat_lcd_data eukrea_mbimx27_lcd_power_data = ;
static struct platform_device eukrea_mbimx27_lcd_powerdev = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
#define ADS7846_PENDOWN (GPIO_PORTD | 25)
static void __maybe_unused ads7846_dev_init(void)
static int ads7846_get_pendown_state(void)
static struct ads7846_platform_data ads7846_config __initdata = ;
static struct spi_board_info __maybe_unused
eukrea_mbimx27_spi_board_info[] __initdata = ;
static int eukrea_mbimx27_spi_cs[] = ;
static const struct spi_imx_master eukrea_mbimx27_spi0_data __initconst = ;
static struct i2c_board_info eukrea_mbimx27_i2c_devices[] = ;
static struct platform_device *platform_devices[] __initdata = ;
static const struct imxmmc_platform_data sdhc_pdata __initconst = ;
static const
struct imx_ssi_platform_data eukrea_mbimx27_ssi_pdata __initconst = ;
void __init eukrea_mbimx27_baseboard_init(void)
