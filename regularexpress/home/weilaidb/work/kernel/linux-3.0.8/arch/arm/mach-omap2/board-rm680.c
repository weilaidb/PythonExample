static struct regulator_consumer_supply rm680_vemmc_consumers[] = ;
static struct regulator_init_data rm680_vemmc = ;
static struct fixed_voltage_config rm680_vemmc_config = ;
static struct platform_device rm680_vemmc_device = ;
static struct platform_device *rm680_peripherals_devices[] __initdata = ;
static struct twl4030_gpio_platform_data rm680_gpio_data = ;
static struct twl4030_usb_data rm680_usb_data = ;
static struct twl4030_platform_data rm680_twl_data = ;
static void __init rm680_i2c_init(void)
#if defined(CONFIG_MTD_ONENAND_OMAP2) || \
defined(CONFIG_MTD_ONENAND_OMAP2_MODULE)
static struct omap_onenand_platform_data board_onenand_data[] = ;
static struct omap2_hsmmc_info mmc[] __initdata = ;
static void __init rm680_peripherals_init(void)
static void __init rm680_init_early(void)
static struct omap_board_mux board_mux[] __initdata = ;
static void __init rm680_init(void)
static void __init rm680_map_io(void)
MACHINE_START(NOKIA_RM680, "Nokia RM-680 board")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= rm680_map_io,
.init_early	= rm680_init_early,
.init_irq	= omap_init_irq,
.init_machine	= rm680_init,
.timer		= &omap_timer,
MACHINE_END
