static struct mtd_partition dockstar_nand_parts[] = ;
static struct mv643xx_eth_platform_data dockstar_ge00_data = ;
static struct gpio_led dockstar_led_pins[] = ;
static struct gpio_led_platform_data dockstar_led_data = ;
static struct platform_device dockstar_leds = ;
static unsigned int dockstar_mpp_config[] __initdata = ;
static void __init dockstar_init(void)
MACHINE_START(DOCKSTAR, "Seagate FreeAgent DockStar")
.boot_params	= 0x00000100,
.init_machine	= dockstar_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
