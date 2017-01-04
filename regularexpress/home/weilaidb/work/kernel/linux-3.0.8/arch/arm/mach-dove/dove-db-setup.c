static struct mv643xx_eth_platform_data dove_db_ge00_data = ;
static struct mv_sata_platform_data dove_db_sata_data = ;
static const struct flash_platform_data dove_db_spi_flash_data = ;
static struct spi_board_info __initdata dove_db_spi_flash_info[] = ;
static int __init dove_db_pci_init(void)
subsys_initcall(dove_db_pci_init);
static void __init dove_db_init(void)
MACHINE_START(DOVE_DB, "Marvell DB-MV88AP510-BP Development Board")
.boot_params	= 0x00000100,
.init_machine	= dove_db_init,
.map_io		= dove_map_io,
.init_early	= dove_init_early,
.init_irq	= dove_init_irq,
.timer		= &dove_timer,
MACHINE_END
