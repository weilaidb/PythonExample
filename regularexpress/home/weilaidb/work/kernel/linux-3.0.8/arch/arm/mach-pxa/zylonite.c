int gpio_eth_irq;
int gpio_debug_led1;
int gpio_debug_led2;
int wm9713_irq;
int lcd_id;
int lcd_orientation;
struct platform_device pxa_device_wm9713_audio = ;
static void __init zylonite_init_wm9713_audio(void)
static struct resource smc91x_resources[] = ;
static struct smc91x_platdata zylonite_smc91x_info = ;
static struct platform_device smc91x_device = ;
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static struct gpio_led zylonite_debug_leds[] = ;
static struct gpio_led_platform_data zylonite_debug_leds_info = ;
static struct platform_device zylonite_device_leds = ;
static void __init zylonite_init_leds(void)
static inline void zylonite_init_leds(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static struct platform_pwm_backlight_data zylonite_backlight_data = ;
static struct platform_device zylonite_backlight_device = ;
static struct pxafb_mode_info toshiba_ltm035a776c_mode = ;
static struct pxafb_mode_info toshiba_ltm04c380k_mode = ;
static struct pxafb_mach_info zylonite_toshiba_lcd_info = ;
static struct pxafb_mode_info sharp_ls037_modes[] = ;
static struct pxafb_mach_info zylonite_sharp_lcd_info = ;
static void __init zylonite_init_lcd(void)
static inline void zylonite_init_lcd(void)
#if defined(CONFIG_MMC)
static struct pxamci_platform_data zylonite_mci_platform_data = ;
static struct pxamci_platform_data zylonite_mci2_platform_data = ;
static struct pxamci_platform_data zylonite_mci3_platform_data = ;
static void __init zylonite_init_mmc(void)
static inline void zylonite_init_mmc(void)
#if defined(CONFIG_KEYBOARD_PXA27x) || defined(CONFIG_KEYBOARD_PXA27x_MODULE)
static unsigned int zylonite_matrix_key_map[] = ;
static struct pxa27x_keypad_platform_data zylonite_keypad_info = ;
static void __init zylonite_init_keypad(void)
static inline void zylonite_init_keypad(void)
#if defined(CONFIG_MTD_NAND_PXA3xx) || defined(CONFIG_MTD_NAND_PXA3xx_MODULE)
static struct mtd_partition zylonite_nand_partitions[] = ;
static struct pxa3xx_nand_platform_data zylonite_nand_info = ;
static void __init zylonite_init_nand(void)
static inline void zylonite_init_nand(void)
#if defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static struct pxaohci_platform_data zylonite_ohci_info = ;
static void __init zylonite_init_ohci(void)
static inline void zylonite_init_ohci(void)
static void __init zylonite_init(void)
MACHINE_START(ZYLONITE, "PXA3xx Platform Development Kit (aka Zylonite)")
.boot_params	= 0xa0000100,
.map_io		= pxa3xx_map_io,
.nr_irqs	= ZYLONITE_NR_IRQS,
.init_irq	= pxa3xx_init_irq,
.timer		= &pxa_timer,
.init_machine	= zylonite_init,
MACHINE_END
