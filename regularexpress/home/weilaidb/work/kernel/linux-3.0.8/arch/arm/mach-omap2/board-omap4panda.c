#define GPIO_HUB_POWER		1
#define GPIO_HUB_NRESET		62
#define GPIO_WIFI_PMENA		43
#define GPIO_WIFI_IRQ		53
#define HDMI_GPIO_HPD 60
#define HDMI_GPIO_LS_OE 41
static int wl1271_gpios[] = ;
static struct platform_device wl1271_device = ;
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device leds_gpio = ;
static struct platform_device *panda_devices[] __initdata = ;
static void __init omap4_panda_init_early(void)
static const struct usbhs_omap_board_data usbhs_bdata __initconst = ;
static struct gpio panda_ehci_gpios[] __initdata = ;
static void __init omap4_ehci_init(void)
static struct omap_musb_board_data musb_board_data = ;
static struct twl4030_usb_data omap4_usbphy_data = ;
static struct omap2_hsmmc_info mmc[] = ;
static struct regulator_consumer_supply omap4_panda_vmmc_supply[] = ;
static struct regulator_consumer_supply omap4_panda_vmmc5_supply = ;
static struct regulator_init_data panda_vmmc5 = ;
static struct fixed_voltage_config panda_vwlan = ;
static struct platform_device omap_vwlan_device = ;
struct wl12xx_platform_data omap_panda_wlan_data  __initdata = ;
static int omap4_twl6030_hsmmc_late_init(struct device *dev)
static __init void omap4_twl6030_hsmmc_set_late_init(struct device *dev)
static int __init omap4_twl6030_hsmmc_init(struct omap2_hsmmc_info *controllers)
static struct regulator_init_data omap4_panda_vaux2 = ;
static struct regulator_init_data omap4_panda_vaux3 = ;
static struct regulator_init_data omap4_panda_vmmc = ;
static struct regulator_init_data omap4_panda_vpp = ;
static struct regulator_init_data omap4_panda_vana = ;
static struct regulator_init_data omap4_panda_vcxio = ;
static struct regulator_init_data omap4_panda_vdac = ;
static struct regulator_init_data omap4_panda_vusb = ;
static struct regulator_init_data omap4_panda_clk32kg = ;
static struct twl4030_platform_data omap4_panda_twldata = ;
static struct i2c_board_info __initdata panda_i2c_eeprom[] = ;
static int __init omap4_panda_i2c_init(void)
static struct omap_board_mux board_mux[] __initdata = ;
static struct omap_device_pad serial2_pads[] __initdata = ;
static struct omap_device_pad serial3_pads[] __initdata = ;
static struct omap_device_pad serial4_pads[] __initdata = ;
static struct omap_board_data serial2_data __initdata = ;
static struct omap_board_data serial3_data __initdata = ;
static struct omap_board_data serial4_data __initdata = ;
static inline void board_serial_init(void)
#define board_mux	NULL
static inline void board_serial_init(void)
#define PANDA_DVI_TFP410_POWER_DOWN_GPIO	0
static int omap4_panda_enable_dvi(struct omap_dss_device *dssdev)
static void omap4_panda_disable_dvi(struct omap_dss_device *dssdev)
static struct panel_generic_dpi_data omap4_dvi_panel = ;
struct omap_dss_device omap4_panda_dvi_device = ;
int __init omap4_panda_dvi_init(void)
static void omap4_panda_hdmi_mux_init(void)
static struct gpio panda_hdmi_gpios[] = ;
static int omap4_panda_panel_enable_hdmi(struct omap_dss_device *dssdev)
static void omap4_panda_panel_disable_hdmi(struct omap_dss_device *dssdev)
static struct omap_dss_device  omap4_panda_hdmi_device = ;
static struct omap_dss_device *omap4_panda_dss_devices[] = ;
static struct omap_dss_board_info omap4_panda_dss_data = ;
void omap4_panda_display_init(void)
static void __init omap4_panda_init(void)
static void __init omap4_panda_map_io(void)
MACHINE_START(OMAP4_PANDA, "OMAP4 Panda board")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap4_panda_map_io,
.init_early	= omap4_panda_init_early,
.init_irq	= gic_init_irq,
.init_machine	= omap4_panda_init,
.timer		= &omap_timer,
MACHINE_END
