#define IGEP2_SMSC911X_CS       5
#define IGEP2_SMSC911X_GPIO     176
#define IGEP2_GPIO_USBH_NRESET  24
#define IGEP2_GPIO_LED0_GREEN   26
#define IGEP2_GPIO_LED0_RED     27
#define IGEP2_GPIO_LED1_RED     28
#define IGEP2_GPIO_DVI_PUP      170
#define IGEP2_RB_GPIO_WIFI_NPD     94
#define IGEP2_RB_GPIO_WIFI_NRESET  95
#define IGEP2_RB_GPIO_BT_NRESET    137
#define IGEP2_RC_GPIO_WIFI_NPD     138
#define IGEP2_RC_GPIO_WIFI_NRESET  139
#define IGEP2_RC_GPIO_BT_NRESET    137
#define IGEP3_GPIO_LED0_GREEN	54
#define IGEP3_GPIO_LED0_RED	53
#define IGEP3_GPIO_LED1_RED	16
#define IGEP3_GPIO_USBH_NRESET  183
#define IGEP2_BOARD_HWREV_B	0
#define IGEP2_BOARD_HWREV_C	1
#define IGEP3_BOARD_HWREV	2
static u8 hwrev;
static void __init igep2_get_revision(void)
#if defined(CONFIG_MTD_ONENAND_OMAP2) || \
defined(CONFIG_MTD_ONENAND_OMAP2_MODULE)
#define ONENAND_MAP             0x20000000
static struct mtd_partition igep_onenand_partitions[] = ;
static struct omap_onenand_platform_data igep_onenand_data = ;
static struct platform_device igep_onenand_device = ;
static void __init igep_flash_init(void)
static void __init igep_flash_init(void)
#if defined(CONFIG_SMSC911X) || defined(CONFIG_SMSC911X_MODULE)
static struct omap_smsc911x_platform_data smsc911x_cfg = ;
static inline void __init igep2_init_smsc911x(void)
static inline void __init igep2_init_smsc911x(void)
static struct regulator_consumer_supply igep_vmmc1_supply =
REGULATOR_SUPPLY("vmmc", "omap_hsmmc.0");
static struct regulator_init_data igep_vmmc1 = ;
static struct regulator_consumer_supply igep_vio_supply =
REGULATOR_SUPPLY("vmmc_aux", "omap_hsmmc.1");
static struct regulator_init_data igep_vio = ;
static struct regulator_consumer_supply igep_vmmc2_supply =
REGULATOR_SUPPLY("vmmc", "omap_hsmmc.1");
static struct regulator_init_data igep_vmmc2 = ;
static struct fixed_voltage_config igep_vwlan = ;
static struct platform_device igep_vwlan_device = ;
static struct omap2_hsmmc_info mmc[] = ;
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static struct gpio_led igep_gpio_leds[] = ;
static struct gpio_led_platform_data igep_led_pdata = ;
static struct platform_device igep_led_device = ;
static void __init igep_leds_init(void)
static struct gpio igep_gpio_leds[] __initdata = ;
static inline void igep_leds_init(void)
static struct gpio igep2_twl_gpios[] = ;
static int igep_twl_gpio_setup(struct device *dev,
unsigned gpio, unsigned ngpio)
;
static struct twl4030_gpio_platform_data igep_twl4030_gpio_pdata = ;
static struct twl4030_usb_data igep_usb_data = ;
static int igep2_enable_dvi(struct omap_dss_device *dssdev)
static void igep2_disable_dvi(struct omap_dss_device *dssdev)
static struct panel_generic_dpi_data dvi_panel = ;
static struct omap_dss_device igep2_dvi_device = ;
static struct omap_dss_device *igep2_dss_devices[] = ;
static struct omap_dss_board_info igep2_dss_data = ;
static struct regulator_consumer_supply igep2_vpll2_supplies[] = ;
static struct regulator_init_data igep2_vpll2 = ;
static void __init igep2_display_init(void)
static struct platform_device *igep_devices[] __initdata = ;
static void __init igep_init_early(void)
static struct twl4030_codec_audio_data igep2_audio_data;
static struct twl4030_codec_data igep2_codec_data = ;
static int igep2_keymap[] = ;
static struct matrix_keymap_data igep2_keymap_data = ;
static struct twl4030_keypad_data igep2_keypad_pdata = ;
static struct twl4030_platform_data igep_twldata = ;
static struct i2c_board_info __initdata igep2_i2c3_boardinfo[] = ;
static void __init igep_i2c_init(void)
static const struct usbhs_omap_board_data igep2_usbhs_bdata __initconst = ;
static const struct usbhs_omap_board_data igep3_usbhs_bdata __initconst = ;
static struct omap_board_mux board_mux[] __initdata = ;
#if defined(CONFIG_LIBERTAS_SDIO) || defined(CONFIG_LIBERTAS_SDIO_MODULE)
static struct gpio igep_wlan_bt_gpios[] __initdata = ;
static void __init igep_wlan_bt_init(void)
static inline void __init igep_wlan_bt_init(void)
static void __init igep_init(void)
MACHINE_START(IGEP0020, "IGEP v2 board")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= igep_init_early,
.init_irq	= omap_init_irq,
.init_machine	= igep_init,
.timer		= &omap_timer,
MACHINE_END
MACHINE_START(IGEP0030, "IGEP OMAP3 module")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= igep_init_early,
.init_irq	= omap_init_irq,
.init_machine	= igep_init,
.timer		= &omap_timer,
MACHINE_END
