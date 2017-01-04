static struct mv643xx_eth_platform_data mv88f6281gtw_ge_ge00_data = ;
static struct dsa_chip_data mv88f6281gtw_ge_switch_chip_data = ;
static struct dsa_platform_data mv88f6281gtw_ge_switch_plat_data = ;
static const struct flash_platform_data mv88f6281gtw_ge_spi_slave_data = ;
static struct spi_board_info __initdata mv88f6281gtw_ge_spi_slave_info[] = ;
static struct gpio_keys_button mv88f6281gtw_ge_button_pins[] = ;
static struct gpio_keys_platform_data mv88f6281gtw_ge_button_data = ;
static struct platform_device mv88f6281gtw_ge_buttons = ;
static struct gpio_led mv88f6281gtw_ge_led_pins[] = ;
static struct gpio_led_platform_data mv88f6281gtw_ge_led_data = ;
static struct platform_device mv88f6281gtw_ge_leds = ;
static unsigned int mv88f6281gtw_ge_mpp_config[] __initdata = ;
static void __init mv88f6281gtw_ge_init(void)
static int __init mv88f6281gtw_ge_pci_init(void)
subsys_initcall(mv88f6281gtw_ge_pci_init);
MACHINE_START(MV88F6281GTW_GE, "Marvell 88F6281 GTW GE Board")
.boot_params	= 0x00000100,
.init_machine	= mv88f6281gtw_ge_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
