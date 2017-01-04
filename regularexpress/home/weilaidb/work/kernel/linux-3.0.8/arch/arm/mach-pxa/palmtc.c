static unsigned long palmtc_pin_config[] __initdata = ;
#if defined(CONFIG_MMC_PXA) || defined(CONFIG_MMC_PXA_MODULE)
static struct pxamci_platform_data palmtc_mci_platform_data = ;
static void __init palmtc_mmc_init(void)
static inline void palmtc_mmc_init(void)
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button palmtc_pxa_buttons[] = ;
static struct gpio_keys_platform_data palmtc_pxa_keys_data = ;
static struct platform_device palmtc_pxa_keys = ;
static void __init palmtc_keys_init(void)
static inline void palmtc_keys_init(void)
#if defined(CONFIG_BACKLIGHT_PWM) || defined(CONFIG_BACKLIGHT_PWM_MODULE)
static int palmtc_backlight_init(struct device *dev)
static int palmtc_backlight_notify(struct device *dev, int brightness)
static void palmtc_backlight_exit(struct device *dev)
static struct platform_pwm_backlight_data palmtc_backlight_data = ;
static struct platform_device palmtc_backlight = ;
static void __init palmtc_pwm_init(void)
static inline void palmtc_pwm_init(void)
#if defined(CONFIG_IRDA) || defined(CONFIG_IRDA_MODULE)
static struct pxaficp_platform_data palmtc_ficp_platform_data = ;
static void __init palmtc_irda_init(void)
static inline void palmtc_irda_init(void)
#if defined(CONFIG_KEYBOARD_MATRIX) || defined(CONFIG_KEYBOARD_MATRIX_MODULE)
static const uint32_t palmtc_matrix_keys[] = ;
const struct matrix_keymap_data palmtc_keymap_data = ;
static const unsigned int palmtc_keypad_row_gpios[] = ;
static const unsigned int palmtc_keypad_col_gpios[] = ;
static struct matrix_keypad_platform_data palmtc_keypad_platform_data = ;
static struct platform_device palmtc_keyboard = ;
static void __init palmtc_mkp_init(void)
static inline void palmtc_mkp_init(void)
#if defined(CONFIG_USB_GADGET_PXA25X)||defined(CONFIG_USB_GADGET_PXA25X_MODULE)
static struct gpio_vbus_mach_info palmtc_udc_info = ;
static struct platform_device palmtc_gpio_vbus = ;
static void __init palmtc_udc_init(void)
;
static inline void palmtc_udc_init(void)
#if	defined(CONFIG_TOUCHSCREEN_UCB1400) || \
defined(CONFIG_TOUCHSCREEN_UCB1400_MODULE)
static struct platform_device palmtc_ucb1400_device = ;
static void __init palmtc_ts_init(void)
static inline void palmtc_ts_init(void)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
struct gpio_led palmtc_gpio_leds[] = ;
static struct gpio_led_platform_data palmtc_gpio_led_info = ;
static struct platform_device palmtc_leds = ;
static void __init palmtc_leds_init(void)
static inline void palmtc_leds_init(void)
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct resource palmtc_flash_resource = ;
static struct mtd_partition palmtc_flash_parts[] = ;
static struct physmap_flash_data palmtc_flash_data = ;
static struct platform_device palmtc_flash = ;
static void __init palmtc_nor_init(void)
static inline void palmtc_nor_init(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static struct pxafb_mode_info palmtc_lcd_modes[] = ;
static struct pxafb_mach_info palmtc_lcd_screen = ;
static void __init palmtc_lcd_init(void)
static inline void palmtc_lcd_init(void)
static void __init palmtc_init(void)
;
MACHINE_START(PALMTC, "Palm Tungsten|C")
.boot_params 	= 0xa0000100,
.map_io		= pxa25x_map_io,
.init_irq	= pxa25x_init_irq,
.timer		= &pxa_timer,
.init_machine	= palmtc_init
MACHINE_END
