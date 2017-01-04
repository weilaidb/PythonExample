#define OVERO_GPIO_BT_XGATE	15
#define OVERO_GPIO_W2W_NRESET	16
#define OVERO_GPIO_PENDOWN	114
#define OVERO_GPIO_BT_NRESET	164
#define OVERO_GPIO_USBH_CPEN	168
#define OVERO_GPIO_USBH_NRESET	183
#define OVERO_SMSC911X_CS      5
#define OVERO_SMSC911X_GPIO    176
#define OVERO_SMSC911X2_CS     4
#define OVERO_SMSC911X2_GPIO   65
#if defined(CONFIG_TOUCHSCREEN_ADS7846) || \
defined(CONFIG_TOUCHSCREEN_ADS7846_MODULE)
static struct regulator_consumer_supply ads7846_supply =
REGULATOR_SUPPLY("vcc", "spi1.0");
static struct regulator_init_data vads7846_regulator = ;
static struct fixed_voltage_config vads7846 = ;
static struct platform_device vads7846_device = ;
static void __init overo_ads7846_init(void)
static inline void __init overo_ads7846_init(void)
#if defined(CONFIG_SMSC911X) || defined(CONFIG_SMSC911X_MODULE)
static struct omap_smsc911x_platform_data smsc911x_cfg = ;
static struct omap_smsc911x_platform_data smsc911x2_cfg = ;
static void __init overo_init_smsc911x(void)
static inline void __init overo_init_smsc911x(void)
static int lcd_enabled;
static int dvi_enabled;
#define OVERO_GPIO_LCD_EN 144
#define OVERO_GPIO_LCD_BL 145
static struct gpio overo_dss_gpios[] __initdata = ;
static void __init overo_display_init(void)
static int overo_panel_enable_dvi(struct omap_dss_device *dssdev)
static void overo_panel_disable_dvi(struct omap_dss_device *dssdev)
static struct panel_generic_dpi_data dvi_panel = ;
static struct omap_dss_device overo_dvi_device = ;
static struct omap_dss_device overo_tv_device = ;
static int overo_panel_enable_lcd(struct omap_dss_device *dssdev)
static void overo_panel_disable_lcd(struct omap_dss_device *dssdev)
static struct panel_generic_dpi_data lcd43_panel = ;
static struct omap_dss_device overo_lcd43_device = ;
#if defined(CONFIG_PANEL_LGPHILIPS_LB035Q02) || \
defined(CONFIG_PANEL_LGPHILIPS_LB035Q02_MODULE)
static struct omap_dss_device overo_lcd35_device = ;
static struct omap_dss_device *overo_dss_devices[] = ;
static struct omap_dss_board_info overo_dss_data = ;
static struct regulator_consumer_supply overo_vdda_dac_supply =
REGULATOR_SUPPLY("vdda_dac", "omapdss_venc");
static struct regulator_consumer_supply overo_vdds_dsi_supply[] = ;
static struct mtd_partition overo_nand_partitions[] = ;
static struct omap2_hsmmc_info mmc[] = ;
static struct regulator_consumer_supply overo_vmmc1_supply = ;
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_leds_pdata = ;
static struct platform_device gpio_leds_device = ;
static void __init overo_init_led(void)
static inline void __init overo_init_led(void)
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button gpio_buttons[] = ;
static struct gpio_keys_platform_data gpio_keys_pdata = ;
static struct platform_device gpio_keys_device = ;
static void __init overo_init_keys(void)
static inline void __init overo_init_keys(void)
static int overo_twl_gpio_setup(struct device *dev,
unsigned gpio, unsigned ngpio)
static struct twl4030_gpio_platform_data overo_gpio_data = ;
static struct twl4030_usb_data overo_usb_data = ;
static struct regulator_init_data overo_vmmc1 = ;
static struct regulator_init_data overo_vdac = ;
static struct regulator_init_data overo_vpll2 = ;
static struct twl4030_codec_audio_data overo_audio_data;
static struct twl4030_codec_data overo_codec_data = ;
static struct twl4030_platform_data overo_twldata = ;
static int __init overo_i2c_init(void)
static struct spi_board_info overo_spi_board_info[] __initdata = ;
static int __init overo_spi_init(void)
static void __init overo_init_early(void)
static const struct usbhs_omap_board_data usbhs_bdata __initconst = ;
static struct omap_board_mux board_mux[] __initdata = ;
static struct gpio overo_bt_gpios[] __initdata = ;
static void __init overo_init(void)
MACHINE_START(OVERO, "Gumstix Overo")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= overo_init_early,
.init_irq	= omap_init_irq,
.init_machine	= overo_init,
.timer		= &omap_timer,
MACHINE_END
