static struct mv643xx_eth_platform_data cm_a510_ge00_data = ;
static struct mv_sata_platform_data cm_a510_sata_data = ;
static const struct flash_platform_data cm_a510_spi_flash_data = ;
static struct spi_board_info __initdata cm_a510_spi_flash_info[] = ;
static int __init cm_a510_pci_init(void)
subsys_initcall(cm_a510_pci_init);
static void __init cm_a510_init(void)
MACHINE_START(CM_A510, "Compulab CM-A510 Board")
.boot_params	= 0x00000100,
.init_machine	= cm_a510_init,
.map_io		= dove_map_io,
.init_early	= dove_init_early,
.init_irq	= dove_init_irq,
.timer		= &dove_timer,
MACHINE_END
