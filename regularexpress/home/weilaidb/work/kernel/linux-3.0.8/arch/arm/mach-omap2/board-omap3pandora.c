#define PANDORA_WIFI_IRQ_GPIO		21
#define PANDORA_WIFI_NRESET_GPIO	23
#define OMAP3_PANDORA_TS_GPIO		94
static struct mtd_partition omap3pandora_nand_partitions[] = ;
static struct omap_nand_platform_data pandora_nand_data = ;
static struct gpio_led pandora_gpio_leds[] = ;
static struct gpio_led_platform_data pandora_gpio_led_data = ;
static struct platform_device pandora_leds_gpio = ;
#define GPIO_BUTTON(gpio_num, ev_type, ev_code, act_low, descr)	\
#define GPIO_BUTTON_LOW(gpio_num, event_code, description)	\
GPIO_BUTTON(gpio_num, EV_KEY, event_code, 1, description)
static struct gpio_keys_button pandora_gpio_keys[] = ;
static struct gpio_keys_platform_data pandora_gpio_key_info = ;
static struct platform_device pandora_keys_gpio = ;
static const uint32_t board_keymap[] = ;
static struct matrix_keymap_data board_map_data = ;
static struct twl4030_keypad_data pandora_kp_data = ;
static struct omap_dss_device pandora_lcd_device = ;
static struct omap_dss_device pandora_tv_device = ;
static struct omap_dss_device *pandora_dss_devices[] = ;
static struct omap_dss_board_info pandora_dss_data = ;
static void pandora_wl1251_init_card(struct mmc_card *card)
static struct omap2_hsmmc_info omap3pandora_mmc[] = ;
static int omap3pandora_twl_gpio_setup(struct device *dev,
unsigned gpio, unsigned ngpio)
static struct twl4030_gpio_platform_data omap3pandora_gpio_data = ;
static struct regulator_consumer_supply pandora_vmmc1_supply =
REGULATOR_SUPPLY("vmmc", "omap_hsmmc.0");
static struct regulator_consumer_supply pandora_vmmc2_supply =
REGULATOR_SUPPLY("vmmc", "omap_hsmmc.1");
static struct regulator_consumer_supply pandora_vmmc3_supply =
REGULATOR_SUPPLY("vmmc", "omap_hsmmc.2");
static struct regulator_consumer_supply pandora_vdda_dac_supply =
REGULATOR_SUPPLY("vdda_dac", "omapdss_venc");
static struct regulator_consumer_supply pandora_vdds_supplies[] = ;
static struct regulator_consumer_supply pandora_vcc_lcd_supply =
REGULATOR_SUPPLY("vcc", "display0");
static struct regulator_consumer_supply pandora_usb_phy_supply =
REGULATOR_SUPPLY("hsusb0", "ehci-omap.0");
static struct regulator_consumer_supply pandora_vaux4_supplies[] = ;
static struct regulator_consumer_supply pandora_adac_supply =
REGULATOR_SUPPLY("vcc", "soc-audio");
static struct regulator_init_data pandora_vmmc1 = ;
static struct regulator_init_data pandora_vmmc2 = ;
static struct regulator_init_data pandora_vdac = ;
static struct regulator_init_data pandora_vpll2 = ;
static struct regulator_init_data pandora_vaux1 = ;
static struct regulator_init_data pandora_vaux2 = ;
static struct regulator_init_data pandora_vaux4 = ;
static struct regulator_init_data pandora_vsim = ;
static struct regulator_init_data pandora_vmmc3 = ;
static struct fixed_voltage_config pandora_vwlan = ;
static struct platform_device pandora_vwlan_device = ;
static struct twl4030_usb_data omap3pandora_usb_data = ;
static struct twl4030_codec_audio_data omap3pandora_audio_data;
static struct twl4030_codec_data omap3pandora_codec_data = ;
static struct twl4030_bci_platform_data pandora_bci_data;
static struct twl4030_platform_data omap3pandora_twldata = ;
static struct i2c_board_info __initdata omap3pandora_i2c3_boardinfo[] = ;
static int __init omap3pandora_i2c_init(void)
static struct spi_board_info omap3pandora_spi_board_info[] __initdata = ;
static void __init omap3pandora_init_early(void)
static void __init pandora_wl1251_init(void)
static struct platform_device *omap3pandora_devices[] __initdata = ;
static const struct usbhs_omap_board_data usbhs_bdata __initconst = ;
static struct omap_board_mux board_mux[] __initdata = ;
static void __init omap3pandora_init(void)
MACHINE_START(OMAP3_PANDORA, "Pandora Handheld Console")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= omap3pandora_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap3pandora_init,
.timer		= &omap_timer,
MACHINE_END
