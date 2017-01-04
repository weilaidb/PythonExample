#define OMAP3LOGIC_SMSC911X_CS			1
#define OMAP3530_LV_SOM_MMC_GPIO_CD		110
#define OMAP3530_LV_SOM_MMC_GPIO_WP		126
#define OMAP3530_LV_SOM_SMSC911X_GPIO_IRQ	152
#define OMAP3_TORPEDO_MMC_GPIO_CD		127
#define OMAP3_TORPEDO_SMSC911X_GPIO_IRQ		129
static struct regulator_consumer_supply omap3logic_vmmc1_supply = ;
static struct regulator_init_data omap3logic_vmmc1 = ;
static struct twl4030_gpio_platform_data omap3logic_gpio_data = ;
static struct twl4030_platform_data omap3logic_twldata = ;
static int __init omap3logic_i2c_init(void)
static struct omap2_hsmmc_info __initdata board_mmc_info[] = ;
static void __init board_mmc_init(void)
static struct omap_smsc911x_platform_data __initdata board_smsc911x_data = ;
static void omap3torpedo_fix_pbias_voltage(void)
static inline void __init board_smsc911x_init(void)
static void __init omap3logic_init_early(void)
static struct omap_board_mux board_mux[] __initdata = ;
static void __init omap3logic_init(void)
MACHINE_START(OMAP3_TORPEDO, "Logic OMAP3 Torpedo board")
.boot_params	= 0x80000100,
.map_io		= omap3_map_io,
.init_early	= omap3logic_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap3logic_init,
.timer		= &omap_timer,
MACHINE_END
MACHINE_START(OMAP3530_LV_SOM, "OMAP Logic 3530 LV SOM board")
.boot_params	= 0x80000100,
.map_io		= omap3_map_io,
.init_early	= omap3logic_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap3logic_init,
.timer		= &omap_timer,
MACHINE_END
