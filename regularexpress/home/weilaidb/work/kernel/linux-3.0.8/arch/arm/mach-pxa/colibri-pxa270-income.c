#define GPIO114_INCOME_ETH_IRQ  (114)
#define GPIO0_INCOME_SD_DETECT  (0)
#define GPIO0_INCOME_SD_RO      (1)
#define GPIO54_INCOME_LED_A     (54)
#define GPIO55_INCOME_LED_B     (55)
#define GPIO113_INCOME_TS_IRQ   (113)
#if defined(CONFIG_MMC_PXA) || defined(CONFIG_MMC_PXA_MODULE)
static struct pxamci_platform_data income_mci_platform_data = ;
static void __init income_mmc_init(void)
static inline void income_mmc_init(void)
#if defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static struct pxaohci_platform_data income_ohci_info = ;
static void __init income_uhc_init(void)
static inline void income_uhc_init(void)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
struct gpio_led income_gpio_leds[] = ;
static struct gpio_led_platform_data income_gpio_led_info = ;
static struct platform_device income_leds = ;
static void __init income_led_init(void)
static inline void income_led_init(void)
#if defined(CONFIG_I2C_PXA) || defined(CONFIG_I2C_PXA_MODULE)
static struct i2c_board_info __initdata income_i2c_devs[] = ;
static void __init income_i2c_init(void)
static inline void income_i2c_init(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static struct pxafb_mode_info income_lcd_modes[] = ;
static struct pxafb_mach_info income_lcd_screen = ;
static void __init income_lcd_init(void)
static inline void income_lcd_init(void)
#if defined(CONFIG_BACKLIGHT_PWM) || defined(CONFIG_BACKLIGHT_PWM__MODULE)
static struct platform_pwm_backlight_data income_backlight_data = ;
static struct platform_device income_backlight = ;
static void __init income_pwm_init(void)
static inline void income_pwm_init(void)
void __init colibri_pxa270_income_boardinit(void)
