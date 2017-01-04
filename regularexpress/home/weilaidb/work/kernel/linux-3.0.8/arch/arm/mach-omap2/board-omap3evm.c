#define OMAP3_EVM_TS_GPIO	175
#define OMAP3_EVM_EHCI_VBUS	22
#define OMAP3_EVM_EHCI_SELECT	61
#define OMAP3EVM_ETHR_START	0x2c000000
#define OMAP3EVM_ETHR_SIZE	1024
#define OMAP3EVM_ETHR_ID_REV	0x50
#define OMAP3EVM_ETHR_GPIO_IRQ	176
#define OMAP3EVM_SMSC911X_CS	5
#define OMAP3EVM_GEN1_ETHR_GPIO_RST	64
#define OMAP3EVM_GEN2_ETHR_GPIO_RST	7
static u8 omap3_evm_version;
u8 get_omap3_evm_rev(void)
EXPORT_SYMBOL(get_omap3_evm_rev);
static void __init omap3_evm_get_revision(void)
#if defined(CONFIG_SMSC911X) || defined(CONFIG_SMSC911X_MODULE)
static struct omap_smsc911x_platform_data smsc911x_cfg = ;
static inline void __init omap3evm_init_smsc911x(void)
static inline void __init omap3evm_init_smsc911x(void)
#define OMAP3EVM_LCD_PANEL_LR		2
#define OMAP3EVM_LCD_PANEL_UD		3
#define OMAP3EVM_LCD_PANEL_INI		152
#define OMAP3EVM_LCD_PANEL_ENVDD	153
#define OMAP3EVM_LCD_PANEL_QVGA		154
#define OMAP3EVM_LCD_PANEL_RESB		155
#define OMAP3EVM_LCD_PANEL_BKLIGHT_GPIO	210
#define OMAP3EVM_DVI_PANEL_EN_GPIO	199
static struct gpio omap3_evm_dss_gpios[] __initdata = ;
static int lcd_enabled;
static int dvi_enabled;
static void __init omap3_evm_display_init(void)
static int omap3_evm_enable_lcd(struct omap_dss_device *dssdev)
static void omap3_evm_disable_lcd(struct omap_dss_device *dssdev)
static struct omap_dss_device omap3_evm_lcd_device = ;
static int omap3_evm_enable_tv(struct omap_dss_device *dssdev)
static void omap3_evm_disable_tv(struct omap_dss_device *dssdev)
static struct omap_dss_device omap3_evm_tv_device = ;
static int omap3_evm_enable_dvi(struct omap_dss_device *dssdev)
static void omap3_evm_disable_dvi(struct omap_dss_device *dssdev)
static struct panel_generic_dpi_data dvi_panel = ;
static struct omap_dss_device omap3_evm_dvi_device = ;
static struct omap_dss_device *omap3_evm_dss_devices[] = ;
static struct omap_dss_board_info omap3_evm_dss_data = ;
static struct regulator_consumer_supply omap3evm_vmmc1_supply = ;
static struct regulator_consumer_supply omap3evm_vsim_supply = ;
static struct regulator_init_data omap3evm_vmmc1 = ;
static struct regulator_init_data omap3evm_vsim = ;
static struct omap2_hsmmc_info mmc[] = ;
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device leds_gpio = ;
static int omap3evm_twl_gpio_setup(struct device *dev,
unsigned gpio, unsigned ngpio)
static struct twl4030_gpio_platform_data omap3evm_gpio_data = ;
static struct twl4030_usb_data omap3evm_usb_data = ;
static uint32_t board_keymap[] = ;
static struct matrix_keymap_data board_map_data = ;
static struct twl4030_keypad_data omap3evm_kp_data = ;
static struct twl4030_madc_platform_data omap3evm_madc_data = ;
static struct twl4030_codec_audio_data omap3evm_audio_data;
static struct twl4030_codec_data omap3evm_codec_data = ;
static struct regulator_consumer_supply omap3_evm_vdda_dac_supply =
REGULATOR_SUPPLY("vdda_dac", "omapdss_venc");
static struct regulator_init_data omap3_evm_vdac = ;
static struct regulator_consumer_supply omap3_evm_vpll2_supplies[] = ;
static struct regulator_init_data omap3_evm_vpll2 = ;
static struct regulator_consumer_supply omap3evm_vio_supply =
REGULATOR_SUPPLY("vcc", "spi1.0");
static struct regulator_init_data omap3evm_vio = ;
#define OMAP3EVM_WLAN_PMENA_GPIO	(150)
#define OMAP3EVM_WLAN_IRQ_GPIO		(149)
static struct regulator_consumer_supply omap3evm_vmmc2_supply =
REGULATOR_SUPPLY("vmmc", "omap_hsmmc.1");
static struct regulator_init_data omap3evm_vmmc2 = ;
static struct fixed_voltage_config omap3evm_vwlan = ;
static struct platform_device omap3evm_wlan_regulator = ;
struct wl12xx_platform_data omap3evm_wlan_data __initdata = ;
static struct twl4030_platform_data omap3evm_twldata = ;
static int __init omap3_evm_i2c_init(void)
static struct omap_board_config_kernel omap3_evm_config[] __initdata = ;
static void __init omap3_evm_init_early(void)
static struct usbhs_omap_board_data usbhs_bdata __initdata = ;
static struct omap_board_mux omap35x_board_mux[] __initdata = ;
static struct omap_board_mux omap36x_board_mux[] __initdata = ;
#define omap35x_board_mux	NULL
#define omap36x_board_mux	NULL
static struct omap_musb_board_data musb_board_data = ;
static struct gpio omap3_evm_ehci_gpios[] __initdata = ;
static void __init omap3_evm_init(void)
MACHINE_START(OMAP3EVM, "OMAP3 EVM")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= omap3_evm_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap3_evm_init,
.timer		= &omap_timer,
MACHINE_END
