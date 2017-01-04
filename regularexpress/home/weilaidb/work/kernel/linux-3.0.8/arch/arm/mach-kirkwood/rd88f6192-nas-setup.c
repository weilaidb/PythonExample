#define RD88F6192_GPIO_USB_VBUS		10
static struct mv643xx_eth_platform_data rd88f6192_ge00_data = ;
static struct mv_sata_platform_data rd88f6192_sata_data = ;
static const struct flash_platform_data rd88F6192_spi_slave_data = ;
static struct spi_board_info __initdata rd88F6192_spi_slave_info[] = ;
static void __init rd88f6192_init(void)
static int __init rd88f6192_pci_init(void)
subsys_initcall(rd88f6192_pci_init);
MACHINE_START(RD88F6192_NAS, "Marvell RD-88F6192-NAS Development Board")
.boot_params	= 0x00000100,
.init_machine	= rd88f6192_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
