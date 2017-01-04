enum ;
static u8 omap3_beagle_version;
static u8 omap3_beagle_get_rev(void)
static struct gpio omap3_beagle_rev_gpios[] __initdata = ;
static void __init omap3_beagle_init_rev(void)
static struct mtd_partition omap3beagle_nand_partitions[] = ;
static int beagle_enable_dvi(struct omap_dss_device *dssdev)
static void beagle_disable_dvi(struct omap_dss_device *dssdev)
static struct panel_generic_dpi_data dvi_panel = ;
static struct omap_dss_device beagle_dvi_device = ;
static struct omap_dss_device beagle_tv_device = ;
static struct omap_dss_device *beagle_dss_devices[] = ;
static struct omap_dss_board_info beagle_dss_data = ;
static struct regulator_consumer_supply beagle_vdac_supply =
REGULATOR_SUPPLY("vdda_dac", "omapdss_venc");
static struct regulator_consumer_supply beagle_vdvi_supplies[] = ;
static void __init beagle_display_init(void)
static struct omap2_hsmmc_info mmc[] = ;
static struct regulator_consumer_supply beagle_vmmc1_supply = ;
static struct regulator_consumer_supply beagle_vsim_supply = ;
static struct gpio_led gpio_leds[];
static int beagle_twl_gpio_setup(struct device *dev,
unsigned gpio, unsigned ngpio)
static struct twl4030_gpio_platform_data beagle_gpio_data = ;
static struct regulator_init_data beagle_vmmc1 = ;
static struct regulator_init_data beagle_vsim = ;
static struct regulator_init_data beagle_vdac = ;
static struct regulator_init_data beagle_vpll2 = ;
static struct twl4030_usb_data beagle_usb_data = ;
static struct twl4030_codec_audio_data beagle_audio_data;
static struct twl4030_codec_data beagle_codec_data = ;
static struct twl4030_platform_data beagle_twldata = ;
static struct i2c_board_info __initdata beagle_i2c_eeprom[] = ;
static int __init omap3_beagle_i2c_init(void)
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device leds_gpio = ;
static struct gpio_keys_button gpio_buttons[] = ;
static struct gpio_keys_platform_data gpio_key_info = ;
static struct platform_device keys_gpio = ;
static void __init omap3_beagle_init_early(void)
static void __init omap3_beagle_init_irq(void)
static struct platform_device *omap3_beagle_devices[] __initdata = ;
static const struct usbhs_omap_board_data usbhs_bdata __initconst = ;
static struct omap_board_mux board_mux[] __initdata = ;
static void __init beagle_opp_init(void)
static void __init omap3_beagle_init(void)
MACHINE_START(OMAP3_BEAGLE, "OMAP3 Beagle Board")
/* Maintainer: Syed Mohammed Khasim - http:
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= omap3_beagle_init_early,
.init_irq	= omap3_beagle_init_irq,
.init_machine	= omap3_beagle_init,
.timer		= &omap_timer,
MACHINE_END
