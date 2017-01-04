#define CONFIG_DISABLE_HFCLK 1
#define SDP3430_TS_GPIO_IRQ_SDPV1	3
#define SDP3430_TS_GPIO_IRQ_SDPV2	2
#define ENABLE_VAUX3_DEDICATED	0x03
#define ENABLE_VAUX3_DEV_GRP	0x20
#define TWL4030_MSECURE_GPIO 22
static uint32_t board_keymap[] = ;
static struct matrix_keymap_data board_map_data = ;
static struct twl4030_keypad_data sdp3430_kp_data = ;
#define SDP3430_LCD_PANEL_BACKLIGHT_GPIO	8
#define SDP3430_LCD_PANEL_ENABLE_GPIO		5
static struct gpio sdp3430_dss_gpios[] __initdata = ;
static int lcd_enabled;
static int dvi_enabled;
static void __init sdp3430_display_init(void)
static int sdp3430_panel_enable_lcd(struct omap_dss_device *dssdev)
static void sdp3430_panel_disable_lcd(struct omap_dss_device *dssdev)
static int sdp3430_panel_enable_dvi(struct omap_dss_device *dssdev)
static void sdp3430_panel_disable_dvi(struct omap_dss_device *dssdev)
static int sdp3430_panel_enable_tv(struct omap_dss_device *dssdev)
static void sdp3430_panel_disable_tv(struct omap_dss_device *dssdev)
static struct omap_dss_device sdp3430_lcd_device = ;
static struct panel_generic_dpi_data dvi_panel = ;
static struct omap_dss_device sdp3430_dvi_device = ;
static struct omap_dss_device sdp3430_tv_device = ;
static struct omap_dss_device *sdp3430_dss_devices[] = ;
static struct omap_dss_board_info sdp3430_dss_data = ;
static struct omap_board_config_kernel sdp3430_config[] __initdata = ;
static void __init omap_3430sdp_init_early(void)
static int sdp3430_batt_table[] = ;
static struct twl4030_bci_platform_data sdp3430_bci_data = ;
static struct omap2_hsmmc_info mmc[] = ;
static int sdp3430_twl_gpio_setup(struct device *dev,
unsigned gpio, unsigned ngpio)
static struct twl4030_gpio_platform_data sdp3430_gpio_data = ;
static struct twl4030_usb_data sdp3430_usb_data = ;
static struct twl4030_madc_platform_data sdp3430_madc_data = ;
static struct regulator_consumer_supply sdp3430_vaux3_supplies[] = ;
static struct regulator_consumer_supply sdp3430_vdda_dac_supplies[] = ;
static struct regulator_consumer_supply sdp3430_vpll2_supplies[] = ;
static struct regulator_consumer_supply sdp3430_vmmc1_supplies[] = ;
static struct regulator_consumer_supply sdp3430_vsim_supplies[] = ;
static struct regulator_consumer_supply sdp3430_vmmc2_supplies[] = ;
static struct regulator_init_data sdp3430_vaux1 = ;
static struct regulator_init_data sdp3430_vaux2 = ;
static struct regulator_init_data sdp3430_vaux3 = ;
static struct regulator_init_data sdp3430_vaux4 = ;
static struct regulator_init_data sdp3430_vmmc1 = ;
static struct regulator_init_data sdp3430_vmmc2 = ;
static struct regulator_init_data sdp3430_vsim = ;
static struct regulator_init_data sdp3430_vdac = ;
static struct regulator_init_data sdp3430_vpll2 = ;
static struct twl4030_codec_audio_data sdp3430_audio;
static struct twl4030_codec_data sdp3430_codec = ;
static struct twl4030_platform_data sdp3430_twldata = ;
static int __init omap3430_i2c_init(void)
#if defined(CONFIG_SMC91X) || defined(CONFIG_SMC91X_MODULE)
static struct omap_smc91x_platform_data board_smc91x_data = ;
static void __init board_smc91x_init(void)
static inline void board_smc91x_init(void)
static void enable_board_wakeup_source(void)
static const struct usbhs_omap_board_data usbhs_bdata __initconst = ;
static struct omap_board_mux board_mux[] __initdata = ;
static struct omap_device_pad serial1_pads[] __initdata = ;
static struct omap_device_pad serial2_pads[] __initdata = ;
static struct omap_device_pad serial3_pads[] __initdata = ;
static struct omap_board_data serial1_data __initdata = ;
static struct omap_board_data serial2_data __initdata = ;
static struct omap_board_data serial3_data __initdata = ;
static inline void board_serial_init(void)
#define board_mux	NULL
static inline void board_serial_init(void)
static char chip_sel_3430[][GPMC_CS_NUM] = ;
static struct mtd_partition sdp_nor_partitions[] = ;
static struct mtd_partition sdp_onenand_partitions[] = ;
static struct mtd_partition sdp_nand_partitions[] = ;
static struct flash_partitions sdp_flash_partitions[] = ;
static void __init omap_3430sdp_init(void)
MACHINE_START(OMAP_3430SDP, "OMAP3430 3430SDP board")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= omap_3430sdp_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap_3430sdp_init,
.timer		= &omap_timer,
MACHINE_END
