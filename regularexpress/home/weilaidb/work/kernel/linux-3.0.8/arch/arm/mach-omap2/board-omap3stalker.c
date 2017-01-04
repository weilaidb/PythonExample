#if defined(CONFIG_SMSC911X) || defined(CONFIG_SMSC911X_MODULE)
#define OMAP3STALKER_ETHR_START	0x2c000000
#define OMAP3STALKER_ETHR_SIZE	1024
#define OMAP3STALKER_ETHR_GPIO_IRQ	19
#define OMAP3STALKER_SMC911X_CS	5
static struct omap_smsc911x_platform_data smsc911x_cfg = ;
static inline void __init omap3stalker_init_eth(void)
static inline void __init omap3stalker_init_eth(void)
#define DSS_ENABLE_GPIO	199
#define LCD_PANEL_BKLIGHT_GPIO	210
#define ENABLE_VPLL2_DEV_GRP	0xE0
static int lcd_enabled;
static int dvi_enabled;
static void __init omap3_stalker_display_init(void)
static int omap3_stalker_enable_lcd(struct omap_dss_device *dssdev)
static void omap3_stalker_disable_lcd(struct omap_dss_device *dssdev)
static struct panel_generic_dpi_data lcd_panel = ;
static struct omap_dss_device omap3_stalker_lcd_device = ;
static int omap3_stalker_enable_tv(struct omap_dss_device *dssdev)
static void omap3_stalker_disable_tv(struct omap_dss_device *dssdev)
static struct omap_dss_device omap3_stalker_tv_device = ;
static int omap3_stalker_enable_dvi(struct omap_dss_device *dssdev)
static void omap3_stalker_disable_dvi(struct omap_dss_device *dssdev)
static struct panel_generic_dpi_data dvi_panel = ;
static struct omap_dss_device omap3_stalker_dvi_device = ;
static struct omap_dss_device *omap3_stalker_dss_devices[] = ;
static struct omap_dss_board_info omap3_stalker_dss_data = ;
static struct regulator_consumer_supply omap3stalker_vmmc1_supply = ;
static struct regulator_consumer_supply omap3stalker_vsim_supply = ;
static struct regulator_init_data omap3stalker_vmmc1 = ;
static struct regulator_init_data omap3stalker_vsim = ;
static struct omap2_hsmmc_info mmc[] = ;
static struct gpio_keys_button gpio_buttons[] = ;
static struct gpio_keys_platform_data gpio_key_info = ;
static struct platform_device keys_gpio = ;
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device leds_gpio = ;
static int
omap3stalker_twl_gpio_setup(struct device *dev,
unsigned gpio, unsigned ngpio)
static struct twl4030_gpio_platform_data omap3stalker_gpio_data = ;
static struct twl4030_usb_data omap3stalker_usb_data = ;
static uint32_t board_keymap[] = ;
static struct matrix_keymap_data board_map_data = ;
static struct twl4030_keypad_data omap3stalker_kp_data = ;
static struct twl4030_madc_platform_data omap3stalker_madc_data = ;
static struct twl4030_codec_audio_data omap3stalker_audio_data;
static struct twl4030_codec_data omap3stalker_codec_data = ;
static struct regulator_consumer_supply omap3_stalker_vdda_dac_supply =
REGULATOR_SUPPLY("vdda_dac", "omapdss_venc");
static struct regulator_init_data omap3_stalker_vdac = ;
static struct regulator_consumer_supply omap3_stalker_vpll2_supplies[] = ;
static struct regulator_init_data omap3_stalker_vpll2 = ;
static struct twl4030_platform_data omap3stalker_twldata = ;
static struct at24_platform_data fram_info = ;
static struct i2c_board_info __initdata omap3stalker_i2c_boardinfo3[] = ;
static int __init omap3_stalker_i2c_init(void)
#define OMAP3_STALKER_TS_GPIO	175
static struct omap_board_config_kernel omap3_stalker_config[] __initdata = ;
static void __init omap3_stalker_init_early(void)
static void __init omap3_stalker_init_irq(void)
static struct platform_device *omap3_stalker_devices[] __initdata = ;
static struct usbhs_omap_board_data usbhs_bdata __initconst = ;
static struct omap_board_mux board_mux[] __initdata = ;
static void __init omap3_stalker_init(void)
MACHINE_START(SBC3530, "OMAP3 STALKER")
.boot_params		= 0x80000100,
.map_io			= omap3_map_io,
.init_early		= omap3_stalker_init_early,
.init_irq		= omap3_stalker_init_irq,
.init_machine		= omap3_stalker_init,
.timer			= &omap_timer,
MACHINE_END
