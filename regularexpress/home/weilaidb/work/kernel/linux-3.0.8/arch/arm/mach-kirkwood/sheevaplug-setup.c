static struct mtd_partition sheevaplug_nand_parts[] = ;
static struct mv643xx_eth_platform_data sheevaplug_ge00_data = ;
static struct mv_sata_platform_data sheeva_esata_sata_data = ;
static struct mvsdio_platform_data sheevaplug_mvsdio_data = ;
static struct mvsdio_platform_data sheeva_esata_mvsdio_data = ;
static struct gpio_led sheevaplug_led_pins[] = ;
static struct gpio_led_platform_data sheevaplug_led_data = ;
static struct platform_device sheevaplug_leds = ;
static unsigned int sheevaplug_mpp_config[] __initdata = ;
static unsigned int sheeva_esata_mpp_config[] __initdata = ;
static void __init sheevaplug_init(void)
MACHINE_START(SHEEVAPLUG, "Marvell SheevaPlug Reference Board")
.boot_params	= 0x00000100,
.init_machine	= sheevaplug_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
MACHINE_START(ESATA_SHEEVAPLUG, "Marvell eSATA SheevaPlug Reference Board")
.boot_params	= 0x00000100,
.init_machine	= sheevaplug_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
