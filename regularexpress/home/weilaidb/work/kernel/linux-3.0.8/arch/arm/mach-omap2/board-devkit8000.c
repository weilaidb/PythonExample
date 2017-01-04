#define OMAP_DM9000_GPIO_IRQ	25
#define OMAP3_DEVKIT_TS_GPIO	27
static struct mtd_partition devkit8000_nand_partitions[] = ;
static struct omap2_hsmmc_info mmc[] = ;
static int devkit8000_panel_enable_lcd(struct omap_dss_device *dssdev)
static void devkit8000_panel_disable_lcd(struct omap_dss_device *dssdev)
static int devkit8000_panel_enable_dvi(struct omap_dss_device *dssdev)
static void devkit8000_panel_disable_dvi(struct omap_dss_device *dssdev)
static struct regulator_consumer_supply devkit8000_vmmc1_supply =
REGULATOR_SUPPLY("vmmc", "omap_hsmmc.0");
static struct regulator_consumer_supply devkit8000_vio_supply =
REGULATOR_SUPPLY("vcc", "spi2.0");
static struct panel_generic_dpi_data lcd_panel = ;
static struct omap_dss_device devkit8000_lcd_device = ;
static struct panel_generic_dpi_data dvi_panel = ;
static struct omap_dss_device devkit8000_dvi_device = ;
static struct omap_dss_device devkit8000_tv_device = ;
static struct omap_dss_device *devkit8000_dss_devices[] = ;
static struct omap_dss_board_info devkit8000_dss_data = ;
static struct regulator_consumer_supply devkit8000_vdda_dac_supply =
REGULATOR_SUPPLY("vdda_dac", "omapdss_venc");
static uint32_t board_keymap[] = ;
static struct matrix_keymap_data board_map_data = ;
static struct twl4030_keypad_data devkit8000_kp_data = ;
static struct gpio_led gpio_leds[];
static int devkit8000_twl_gpio_setup(struct device *dev,
unsigned gpio, unsigned ngpio)
static struct twl4030_gpio_platform_data devkit8000_gpio_data = ;
static struct regulator_consumer_supply devkit8000_vpll1_supplies[] = ;
static struct regulator_init_data devkit8000_vmmc1 = ;
static struct regulator_init_data devkit8000_vdac = ;
static struct regulator_init_data devkit8000_vpll1 = ;
static struct regulator_init_data devkit8000_vio = ;
static struct twl4030_usb_data devkit8000_usb_data = ;
static struct twl4030_codec_audio_data devkit8000_audio_data;
static struct twl4030_codec_data devkit8000_codec_data = ;
static struct twl4030_platform_data devkit8000_twldata = ;
static int __init devkit8000_i2c_init(void)
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device leds_gpio = ;
static struct gpio_keys_button gpio_buttons[] = ;
static struct gpio_keys_platform_data gpio_key_info = ;
static struct platform_device keys_gpio = ;
static void __init devkit8000_init_early(void)
static void __init devkit8000_init_irq(void)
#define OMAP_DM9000_BASE	0x2c000000
static struct resource omap_dm9000_resources[] = ;
static struct dm9000_plat_data omap_dm9000_platdata = ;
static struct platform_device omap_dm9000_dev = ;
static void __init omap_dm9000_init(void)
static struct platform_device *devkit8000_devices[] __initdata = ;
static const struct usbhs_omap_board_data usbhs_bdata __initconst = ;
static struct omap_board_mux board_mux[] __initdata = ;
static void __init devkit8000_init(void)
MACHINE_START(DEVKIT8000, "OMAP3 Devkit8000")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= devkit8000_init_early,
.init_irq	= devkit8000_init_irq,
.init_machine	= devkit8000_init,
.timer		= &omap_timer,
MACHINE_END
