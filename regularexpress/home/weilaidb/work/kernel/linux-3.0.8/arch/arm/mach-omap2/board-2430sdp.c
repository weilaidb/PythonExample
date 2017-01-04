#define SDP2430_CS0_BASE	0x04000000
#define SECONDARY_LCD_GPIO		147
static struct mtd_partition sdp2430_partitions[] = ;
static struct physmap_flash_data sdp2430_flash_data = ;
static struct resource sdp2430_flash_resource = ;
static struct platform_device sdp2430_flash_device = ;
static struct platform_device sdp2430_lcd_device = ;
static struct platform_device *sdp2430_devices[] __initdata = ;
static struct omap_lcd_config sdp2430_lcd_config __initdata = ;
#if defined(CONFIG_SMC91X) || defined(CONFIG_SMC91x_MODULE)
static struct omap_smc91x_platform_data board_smc91x_data = ;
static void __init board_smc91x_init(void)
static inline void board_smc91x_init(void)
static struct omap_board_config_kernel sdp2430_config[] __initdata = ;
static void __init omap_2430sdp_init_early(void)
static struct regulator_consumer_supply sdp2430_vmmc1_supplies[] = ;
static struct regulator_init_data sdp2430_vmmc1 = ;
static struct twl4030_gpio_platform_data sdp2430_gpio_data = ;
static struct twl4030_platform_data sdp2430_twldata = ;
static struct i2c_board_info __initdata sdp2430_i2c1_boardinfo[] = ;
static int __init omap2430_i2c_init(void)
static struct omap2_hsmmc_info mmc[] __initdata = ;
static struct omap_usb_config sdp2430_usb_config __initdata = ;
static struct omap_board_mux board_mux[] __initdata = ;
static void __init omap_2430sdp_init(void)
static void __init omap_2430sdp_map_io(void)
MACHINE_START(OMAP_2430SDP, "OMAP2430 sdp2430 board")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap_2430sdp_map_io,
.init_early	= omap_2430sdp_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap_2430sdp_init,
.timer		= &omap_timer,
MACHINE_END
