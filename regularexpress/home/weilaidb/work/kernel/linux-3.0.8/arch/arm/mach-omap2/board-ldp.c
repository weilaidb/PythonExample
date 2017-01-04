#define LDP_SMSC911X_CS		1
#define LDP_SMSC911X_GPIO	152
#define DEBUG_BASE		0x08000000
#define LDP_ETHR_START		DEBUG_BASE
static uint32_t board_keymap[] = ;
static struct matrix_keymap_data board_map_data = ;
static struct twl4030_keypad_data ldp_kp_twl4030_data = ;
static struct gpio_keys_button ldp_gpio_keys_buttons[] = ;
static struct gpio_keys_platform_data ldp_gpio_keys = ;
static struct platform_device ldp_gpio_keys_device = ;
static struct omap_smsc911x_platform_data smsc911x_cfg = ;
static inline void __init ldp_init_smsc911x(void)
static struct platform_device ldp_lcd_device = ;
static struct omap_lcd_config ldp_lcd_config __initdata = ;
static struct omap_board_config_kernel ldp_config[] __initdata = ;
static void __init omap_ldp_init_early(void)
static struct twl4030_usb_data ldp_usb_data = ;
static struct twl4030_gpio_platform_data ldp_gpio_data = ;
static struct twl4030_madc_platform_data ldp_madc_data = ;
static struct regulator_consumer_supply ldp_vmmc1_supply = ;
static struct regulator_init_data ldp_vmmc1 = ;
static struct regulator_consumer_supply ldp_vaux1_supplies[] = ;
static struct regulator_init_data ldp_vaux1 = ;
static struct twl4030_platform_data ldp_twldata = ;
static int __init omap_i2c_init(void)
static struct omap2_hsmmc_info mmc[] __initdata = ;
static struct platform_device *ldp_devices[] __initdata = ;
static struct omap_board_mux board_mux[] __initdata = ;
static struct mtd_partition ldp_nand_partitions[] = ;
static void __init omap_ldp_init(void)
MACHINE_START(OMAP_LDP, "OMAP LDP board")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= omap_ldp_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap_ldp_init,
.timer		= &omap_timer,
MACHINE_END
