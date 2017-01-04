#define PIN_LCD_BL	GPIO_PIN_PA(28)
#define PWM_CH_BL	0
#define PIN_LCD_DISP	GPIO_PIN_PA(31)
#define	PIN_AC97_RST_N	GPIO_PIN_PA(30)
#define PB_EXTINT_BASE	25
#define TS_IRQ		0
#define PIN_TS_EXTINT	GPIO_PIN_PB(PB_EXTINT_BASE+TS_IRQ)
#define PIN_PB_LEFT	GPIO_PIN_PB(11)
#define PIN_PB_RIGHT	GPIO_PIN_PB(12)
#define PIN_PWR_SW_N	GPIO_PIN_PB(14)
#define PIN_PWR_ON	GPIO_PIN_PB(13)
#define PIN_ZB_RST_N	GPIO_PIN_PA(21)
#define PIN_BT_RST	GPIO_PIN_PA(22)
#define PIN_LED_SYS	GPIO_PIN_PA(16)
#define PIN_LED_A	GPIO_PIN_PA(19)
#define PIN_LED_B	GPIO_PIN_PE(19)
static struct fb_videomode __initdata lcd_fb_modes[] = ;
static struct fb_monspecs __initdata lcd_fb_default_monspecs = ;
static struct atmel_lcdfb_info __initdata rmt_lcdc_data = ;
static struct fb_videomode __initdata lcd_fb_modes[] = ;
static struct fb_monspecs __initdata lcd_fb_default_monspecs = ;
static struct atmel_lcdfb_info __initdata rmt_lcdc_data = ;
static struct ac97c_platform_data __initdata ac97c0_data = ;
static struct platform_device rmt_ts_device =
};
static struct gpio_led rmt_pwm_led[] = ;
static struct gpio_led_platform_data rmt_pwm_led_data = ;
static struct platform_device rmt_pwm_led_dev = ;
static int ads7846_pendown_state(void)
static struct ads7846_platform_data ads_info = ;
static struct spi_board_info spi01_board_info[] __initdata = ;
static const struct gpio_keys_button rmt_gpio_keys_buttons[] = ;
static const struct gpio_keys_platform_data rmt_gpio_keys_data = ;
static struct platform_device rmt_gpio_keys = ;
static struct i2c_board_info __initdata mrmt1_i2c_rtc = ;
static void mrmt_power_off(void)
static int __init mrmt1_init(void)
arch_initcall(mrmt1_init);
static int __init mrmt1_early_init(void)
core_initcall(mrmt1_early_init);
