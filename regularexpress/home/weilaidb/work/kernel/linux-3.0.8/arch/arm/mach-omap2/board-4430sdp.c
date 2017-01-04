#define ETH_KS8851_IRQ			34
#define ETH_KS8851_POWER_ON		48
#define ETH_KS8851_QUART		138
#define OMAP4_SFH7741_SENSOR_OUTPUT_GPIO	184
#define OMAP4_SFH7741_ENABLE_GPIO		188
#define HDMI_GPIO_HPD 60
#define HDMI_GPIO_LS_OE 41
static const int sdp4430_keymap[] = ;
static struct matrix_keymap_data sdp4430_keymap_data = ;
static struct omap4_keypad_platform_data sdp4430_keypad_data = ;
static struct gpio_led sdp4430_gpio_leds[] = ;
static struct gpio_keys_button sdp4430_gpio_keys[] = ;
static struct gpio_led_platform_data sdp4430_led_data = ;
static struct led_pwm sdp4430_pwm_leds[] = ;
static struct led_pwm_platform_data sdp4430_pwm_data = ;
static struct platform_device sdp4430_leds_pwm = ;
static int omap_prox_activate(struct device *dev)
static void omap_prox_deactivate(struct device *dev)
static struct gpio_keys_platform_data sdp4430_gpio_keys_data = ;
static struct platform_device sdp4430_gpio_keys_device = ;
static struct platform_device sdp4430_leds_gpio = ;
static struct spi_board_info sdp4430_spi_board_info[] __initdata = ;
static struct gpio sdp4430_eth_gpios[] __initdata = ;
static int __init omap_ethernet_init(void)
static struct platform_device sdp4430_lcd_device = ;
static struct platform_device *sdp4430_devices[] __initdata = ;
static struct omap_lcd_config sdp4430_lcd_config __initdata = ;
static struct omap_board_config_kernel sdp4430_config[] __initdata = ;
static void __init omap_4430sdp_init_early(void)
static struct omap_musb_board_data musb_board_data = ;
static struct twl4030_usb_data omap4_usbphy_data = ;
static struct omap2_hsmmc_info mmc[] = ;
static struct regulator_consumer_supply sdp4430_vaux_supply[] = ;
static struct regulator_consumer_supply sdp4430_vmmc_supply[] = ;
static int omap4_twl6030_hsmmc_late_init(struct device *dev)
static __init void omap4_twl6030_hsmmc_set_late_init(struct device *dev)
static int __init omap4_twl6030_hsmmc_init(struct omap2_hsmmc_info *controllers)
static struct regulator_init_data sdp4430_vaux1 = ;
static struct regulator_init_data sdp4430_vaux2 = ;
static struct regulator_init_data sdp4430_vaux3 = ;
static struct regulator_init_data sdp4430_vmmc = ;
static struct regulator_init_data sdp4430_vpp = ;
static struct regulator_init_data sdp4430_vusim = ;
static struct regulator_init_data sdp4430_vana = ;
static struct regulator_init_data sdp4430_vcxio = ;
static struct regulator_init_data sdp4430_vdac = ;
static struct regulator_init_data sdp4430_vusb = ;
static struct regulator_init_data sdp4430_clk32kg = ;
static struct twl4030_platform_data sdp4430_twldata = ;
static struct i2c_board_info __initdata sdp4430_i2c_3_boardinfo[] = ;
static struct i2c_board_info __initdata sdp4430_i2c_4_boardinfo[] = ;
static int __init omap4_i2c_init(void)
static void __init omap_sfh7741prox_init(void)
static void sdp4430_hdmi_mux_init(void)
static struct gpio sdp4430_hdmi_gpios[] = ;
static int sdp4430_panel_enable_hdmi(struct omap_dss_device *dssdev)
static void sdp4430_panel_disable_hdmi(struct omap_dss_device *dssdev)
static struct omap_dss_device sdp4430_hdmi_device = ;
static struct omap_dss_device *sdp4430_dss_devices[] = ;
static struct omap_dss_board_info sdp4430_dss_data = ;
void omap_4430sdp_display_init(void)
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
static void __init omap_4430sdp_init(void)
static void __init omap_4430sdp_map_io(void)
MACHINE_START(OMAP_4430SDP, "OMAP4430 4430SDP board")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap_4430sdp_map_io,
.init_early	= omap_4430sdp_init_early,
.init_irq	= gic_init_irq,
.init_machine	= omap_4430sdp_init,
.timer		= &omap_timer,
MACHINE_END
