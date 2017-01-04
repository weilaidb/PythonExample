#define OMAP3_AC_GPIO		136
#define OMAP3_TS_GPIO		162
#define TB_BL_PWM_TIMER		9
#define TB_KILL_POWER_GPIO	168
static unsigned long touchbook_revision;
static struct mtd_partition omap3touchbook_nand_partitions[] = ;
static struct omap2_hsmmc_info mmc[] = ;
static struct platform_device omap3_touchbook_lcd_device = ;
static struct omap_lcd_config omap3_touchbook_lcd_config __initdata = ;
static struct regulator_consumer_supply touchbook_vmmc1_supply = ;
static struct regulator_consumer_supply touchbook_vsim_supply = ;
static struct gpio_led gpio_leds[];
static int touchbook_twl_gpio_setup(struct device *dev,
unsigned gpio, unsigned ngpio)
static struct twl4030_gpio_platform_data touchbook_gpio_data = ;
static struct regulator_consumer_supply touchbook_vdac_supply = ;
static struct regulator_consumer_supply touchbook_vdvi_supply = ;
static struct regulator_init_data touchbook_vmmc1 = ;
static struct regulator_init_data touchbook_vsim = ;
static struct regulator_init_data touchbook_vdac = ;
static struct regulator_init_data touchbook_vpll2 = ;
static struct twl4030_usb_data touchbook_usb_data = ;
static struct twl4030_codec_audio_data touchbook_audio_data;
static struct twl4030_codec_data touchbook_codec_data = ;
static struct twl4030_platform_data touchbook_twldata = ;
static struct i2c_board_info __initdata touchBook_i2c_boardinfo[] = ;
static int __init omap3_touchbook_i2c_init(void)
static struct ads7846_platform_data ads7846_pdata = ;
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device leds_gpio = ;
static struct gpio_keys_button gpio_buttons[] = ;
static struct gpio_keys_platform_data gpio_key_info = ;
static struct platform_device keys_gpio = ;
static struct omap_board_config_kernel omap3_touchbook_config[] __initdata = ;
static struct omap_board_mux board_mux[] __initdata = ;
static void __init omap3_touchbook_init_early(void)
static void __init omap3_touchbook_init_irq(void)
static struct platform_device *omap3_touchbook_devices[] __initdata = ;
static const struct usbhs_omap_board_data usbhs_bdata __initconst = ;
static void omap3_touchbook_poweroff(void)
static int __init early_touchbook_revision(char *p)
early_param("tbr", early_touchbook_revision);
static void __init omap3_touchbook_init(void)
MACHINE_START(TOUCHBOOK, "OMAP3 touchbook Board")
/* Maintainer: Gregoire Gentil - http:
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= omap3_touchbook_init_early,
.init_irq	= omap3_touchbook_init_irq,
.init_machine	= omap3_touchbook_init,
.timer		= &omap_timer,
MACHINE_END
