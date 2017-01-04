static struct mtd_partition guruplug_nand_parts[] = ;
static struct mv643xx_eth_platform_data guruplug_ge00_data = ;
static struct mv643xx_eth_platform_data guruplug_ge01_data = ;
static struct mv_sata_platform_data guruplug_sata_data = ;
static struct mvsdio_platform_data guruplug_mvsdio_data = ;
static struct gpio_led guruplug_led_pins[] = ;
static struct gpio_led_platform_data guruplug_led_data = ;
static struct platform_device guruplug_leds = ;
static unsigned int guruplug_mpp_config[] __initdata = ;
static void __init guruplug_init(void)
MACHINE_START(GURUPLUG, "Marvell GuruPlug Reference Board")
.boot_params	= 0x00000100,
.init_machine	= guruplug_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
