#define       OMAP_LCDC_CONTROL               (0xfffec000 + 0x00)
#define       OMAP_LCDC_STATUS                (0xfffec000 + 0x10)
#define       OMAP_DMA_LCD_CCR                (0xfffee300 + 0xc2)
#define       OMAP_DMA_LCD_CTRL               (0xfffee300 + 0xc4)
#define       OMAP_LCDC_CTRL_LCD_EN           (1 << 0)
#define       OMAP_LCDC_STAT_DONE             (1 << 0)
#define HTCHERALD_GPIO_POWER 139
#define HTCHERALD_GPIO_SLIDE 174
#define HTCHERALD_GIRQ_BTNS 141
#define HTCHERALD_GPIO_TS 76
#define HTCPLD_GPIO_START_OFFSET	(OMAP_MAX_GPIO_LINES + 16)
#define HTCPLD_IRQ(chip, offset)	(OMAP_IRQ_END + 8 * (chip) + (offset))
#define HTCPLD_BASE(chip, offset)	\
(HTCPLD_GPIO_START_OFFSET + 8 * (chip) + (offset))
#define HTCPLD_GPIO_LED_DPAD		HTCPLD_BASE(0, 0)
#define HTCPLD_GPIO_LED_KBD		HTCPLD_BASE(1, 0)
#define HTCPLD_GPIO_LED_CAPS		HTCPLD_BASE(1, 5)
#define HTCPLD_GPIO_LED_RED_FLASH	HTCPLD_BASE(2, 1)
#define HTCPLD_GPIO_LED_RED_SOLID	HTCPLD_BASE(2, 2)
#define HTCPLD_GPIO_LED_GREEN_FLASH	HTCPLD_BASE(2, 3)
#define HTCPLD_GPIO_LED_GREEN_SOLID	HTCPLD_BASE(2, 4)
#define HTCPLD_GPIO_LED_WIFI		HTCPLD_BASE(2, 5)
#define HTCPLD_GPIO_LED_BT		HTCPLD_BASE(2, 6)
#define HTCPLD_GPIO_LED_VIBRATE		HTCPLD_BASE(3, 3)
#define HTCPLD_GPIO_LED_ALT		HTCPLD_BASE(3, 4)
#define HTCPLD_GPIO_RIGHT_KBD		HTCPLD_BASE(6, 7)
#define HTCPLD_GPIO_UP_KBD		HTCPLD_BASE(6, 6)
#define HTCPLD_GPIO_LEFT_KBD		HTCPLD_BASE(6, 5)
#define HTCPLD_GPIO_DOWN_KBD		HTCPLD_BASE(6, 4)
#define HTCPLD_GPIO_RIGHT_DPAD		HTCPLD_BASE(7, 7)
#define HTCPLD_GPIO_UP_DPAD		HTCPLD_BASE(7, 6)
#define HTCPLD_GPIO_LEFT_DPAD		HTCPLD_BASE(7, 5)
#define HTCPLD_GPIO_DOWN_DPAD		HTCPLD_BASE(7, 4)
#define HTCPLD_GPIO_ENTER_DPAD		HTCPLD_BASE(7, 3)
#define HTCPLD_GPIO_INT_RESET_HI	HTCPLD_BASE(2, 7)
#define HTCPLD_GPIO_INT_RESET_LO	HTCPLD_BASE(2, 0)
#define HTCPLD_IRQ_RIGHT_KBD		HTCPLD_IRQ(0, 7)
#define HTCPLD_IRQ_UP_KBD		HTCPLD_IRQ(0, 6)
#define HTCPLD_IRQ_LEFT_KBD		HTCPLD_IRQ(0, 5)
#define HTCPLD_IRQ_DOWN_KBD		HTCPLD_IRQ(0, 4)
#define HTCPLD_IRQ_RIGHT_DPAD		HTCPLD_IRQ(1, 7)
#define HTCPLD_IRQ_UP_DPAD		HTCPLD_IRQ(1, 6)
#define HTCPLD_IRQ_LEFT_DPAD		HTCPLD_IRQ(1, 5)
#define HTCPLD_IRQ_DOWN_DPAD		HTCPLD_IRQ(1, 4)
#define HTCPLD_IRQ_ENTER_DPAD		HTCPLD_IRQ(1, 3)
static const unsigned int htc_herald_keymap[] = ;
static const struct matrix_keymap_data htc_herald_keymap_data = ;
static struct omap_kp_platform_data htcherald_kp_data = ;
static struct resource kp_resources[] = ;
static struct platform_device kp_device = ;
static struct gpio_keys_button herald_gpio_keys_table[] = ;
static struct gpio_keys_platform_data herald_gpio_keys_data = ;
static struct platform_device herald_gpiokeys_device = ;
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_leds_data = ;
static struct platform_device gpio_leds_device = ;
static struct resource htcpld_resources[] = ;
static struct htcpld_chip_platform_data htcpld_chips[] = ;
static struct htcpld_core_platform_data htcpld_pfdata = ;
static struct platform_device htcpld_device = ;
static struct omap_usb_config htcherald_usb_config __initdata = ;
static struct omap_lcd_config htcherald_lcd_config __initdata = ;
static struct omap_board_config_kernel htcherald_config[] __initdata = ;
static struct platform_device lcd_device = ;
#if defined(CONFIG_MMC_OMAP) || defined(CONFIG_MMC_OMAP_MODULE)
static struct omap_mmc_platform_data htc_mmc1_data = ;
static struct omap_mmc_platform_data *htc_mmc_data[1];
static struct platform_device *devices[] __initdata = ;
static const struct ads7846_platform_data htcherald_ts_platform_data = ;
static struct spi_board_info __initdata htcherald_spi_board_info[] = ;
static void __init htcherald_lcd_init(void)
static void __init htcherald_map_io(void)
static void __init htcherald_disable_watchdog(void)
#define HTCHERALD_GPIO_USB_EN1 33
#define HTCHERALD_GPIO_USB_EN2 73
#define HTCHERALD_GPIO_USB_DM  35
#define HTCHERALD_GPIO_USB_DP  36
static void __init htcherald_usb_enable(void)
static void __init htcherald_init(void)
static void __init htcherald_init_irq(void)
MACHINE_START(HERALD, "HTC Herald")
.boot_params    = 0x10000100,
.map_io         = htcherald_map_io,
.reserve	= omap_reserve,
.init_irq       = htcherald_init_irq,
.init_machine   = htcherald_init,
.timer          = &omap_timer,
MACHINE_END
