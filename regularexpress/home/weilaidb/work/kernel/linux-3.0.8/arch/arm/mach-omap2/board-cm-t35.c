#define CM_T35_GPIO_PENDOWN	57
#define CM_T35_SMSC911X_CS	5
#define CM_T35_SMSC911X_GPIO	163
#define SB_T35_SMSC911X_CS	4
#define SB_T35_SMSC911X_GPIO	65
#if defined(CONFIG_SMSC911X) || defined(CONFIG_SMSC911X_MODULE)
static struct omap_smsc911x_platform_data cm_t35_smsc911x_cfg = ;
static struct omap_smsc911x_platform_data sb_t35_smsc911x_cfg = ;
static void __init cm_t35_init_ethernet(void)
static inline void __init cm_t35_init_ethernet(void)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static struct gpio_led cm_t35_leds[] = ;
static struct gpio_led_platform_data cm_t35_led_pdata = ;
static struct platform_device cm_t35_led_device = ;
static void __init cm_t35_init_led(void)
static inline void cm_t35_init_led(void)
#if defined(CONFIG_MTD_NAND_OMAP2) || defined(CONFIG_MTD_NAND_OMAP2_MODULE)
static struct mtd_partition cm_t35_nand_partitions[] = ;
static struct omap_nand_platform_data cm_t35_nand_data = ;
static void __init cm_t35_init_nand(void)
static inline void cm_t35_init_nand(void)
#define CM_T35_LCD_EN_GPIO 157
#define CM_T35_LCD_BL_GPIO 58
#define CM_T35_DVI_EN_GPIO 54
static int lcd_enabled;
static int dvi_enabled;
static int cm_t35_panel_enable_lcd(struct omap_dss_device *dssdev)
static void cm_t35_panel_disable_lcd(struct omap_dss_device *dssdev)
static int cm_t35_panel_enable_dvi(struct omap_dss_device *dssdev)
static void cm_t35_panel_disable_dvi(struct omap_dss_device *dssdev)
static int cm_t35_panel_enable_tv(struct omap_dss_device *dssdev)
static void cm_t35_panel_disable_tv(struct omap_dss_device *dssdev)
static struct panel_generic_dpi_data lcd_panel = ;
static struct omap_dss_device cm_t35_lcd_device = ;
static struct panel_generic_dpi_data dvi_panel = ;
static struct omap_dss_device cm_t35_dvi_device = ;
static struct omap_dss_device cm_t35_tv_device = ;
static struct omap_dss_device *cm_t35_dss_devices[] = ;
static struct omap_dss_board_info cm_t35_dss_data = ;
static struct omap2_mcspi_device_config tdo24m_mcspi_config = ;
static struct tdo24m_platform_data tdo24m_config = ;
static struct spi_board_info cm_t35_lcd_spi_board_info[] __initdata = ;
static struct gpio cm_t35_dss_gpios[] __initdata = ;
static void __init cm_t35_init_display(void)
static struct regulator_consumer_supply cm_t35_vmmc1_supply = ;
static struct regulator_consumer_supply cm_t35_vsim_supply = ;
static struct regulator_consumer_supply cm_t35_vdac_supply =
REGULATOR_SUPPLY("vdda_dac", "omapdss_venc");
static struct regulator_consumer_supply cm_t35_vdvi_supply =
REGULATOR_SUPPLY("vdvi", "omapdss");
static struct regulator_init_data cm_t35_vmmc1 = ;
static struct regulator_init_data cm_t35_vsim = ;
static struct regulator_init_data cm_t35_vdac = ;
static struct regulator_init_data cm_t35_vpll2 = ;
static struct twl4030_usb_data cm_t35_usb_data = ;
static uint32_t cm_t35_keymap[] = ;
static struct matrix_keymap_data cm_t35_keymap_data = ;
static struct twl4030_keypad_data cm_t35_kp_data = ;
static struct omap2_hsmmc_info mmc[] = ;
static struct usbhs_omap_board_data usbhs_bdata __initdata = ;
static int cm_t35_twl_gpio_setup(struct device *dev, unsigned gpio,
unsigned ngpio)
static struct twl4030_gpio_platform_data cm_t35_gpio_data = ;
static struct twl4030_platform_data cm_t35_twldata = ;
static void __init cm_t35_init_i2c(void)
static void __init cm_t35_init_early(void)
static struct omap_board_mux board_mux[] __initdata = ;
static struct omap_board_config_kernel cm_t35_config[] __initdata = ;
static void __init cm_t35_init(void)
MACHINE_START(CM_T35, "Compulab CM-T35")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= cm_t35_init_early,
.init_irq	= omap_init_irq,
.init_machine	= cm_t35_init,
.timer		= &omap_timer,
MACHINE_END
