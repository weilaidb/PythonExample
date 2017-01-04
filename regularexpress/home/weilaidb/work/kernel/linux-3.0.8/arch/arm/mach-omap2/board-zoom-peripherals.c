#define OMAP_ZOOM_WLAN_PMENA_GPIO	(101)
#define OMAP_ZOOM_WLAN_IRQ_GPIO		(162)
#define LCD_PANEL_ENABLE_GPIO		(7 + OMAP_MAX_GPIO_LINES)
static uint32_t board_keymap[] = ;
static struct matrix_keymap_data board_map_data = ;
static struct twl4030_keypad_data zoom_kp_twl4030_data = ;
static struct regulator_consumer_supply zoom_vmmc1_supply = ;
static struct regulator_consumer_supply zoom_vsim_supply = ;
static struct regulator_consumer_supply zoom_vmmc2_supply = ;
static struct regulator_consumer_supply zoom_vmmc3_supply = ;
static struct regulator_init_data zoom_vmmc1 = ;
static struct regulator_init_data zoom_vmmc2 = ;
static struct regulator_init_data zoom_vsim = ;
static struct regulator_init_data zoom_vmmc3 = ;
static struct fixed_voltage_config zoom_vwlan = ;
static struct platform_device omap_vwlan_device = ;
static struct wl12xx_platform_data omap_zoom_wlan_data __initdata = ;
static struct omap2_hsmmc_info mmc[] = ;
static struct regulator_consumer_supply zoom_vpll2_supplies[] = ;
static struct regulator_consumer_supply zoom_vdda_dac_supply =
REGULATOR_SUPPLY("vdda_dac", "omapdss_venc");
static struct regulator_init_data zoom_vpll2 = ;
static struct regulator_init_data zoom_vdac = ;
static int zoom_twl_gpio_setup(struct device *dev,
unsigned gpio, unsigned ngpio)
static void zoom2_set_hs_extmute(int mute)
static int zoom_batt_table[] = ;
static struct twl4030_bci_platform_data zoom_bci_data = ;
static struct twl4030_usb_data zoom_usb_data = ;
static struct twl4030_gpio_platform_data zoom_gpio_data = ;
static struct twl4030_madc_platform_data zoom_madc_data = ;
static struct twl4030_codec_audio_data zoom_audio_data;
static struct twl4030_codec_data zoom_codec_data = ;
static struct twl4030_platform_data zoom_twldata = ;
static int __init omap_i2c_init(void)
static void enable_board_wakeup_source(void)
void __init zoom_peripherals_init(void)
