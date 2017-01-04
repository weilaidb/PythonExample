static struct mv643xx_eth_platform_data rd88f6183ap_ge_eth_data = ;
static struct dsa_chip_data rd88f6183ap_ge_switch_chip_data = ;
static struct dsa_platform_data rd88f6183ap_ge_switch_plat_data = ;
static struct mtd_partition rd88f6183ap_ge_partitions[] = ;
static struct flash_platform_data rd88f6183ap_ge_spi_slave_data = ;
static struct spi_board_info __initdata rd88f6183ap_ge_spi_slave_info[] = ;
static void __init rd88f6183ap_ge_init(void)
static struct hw_pci rd88f6183ap_ge_pci __initdata = ;
static int __init rd88f6183ap_ge_pci_init(void)
subsys_initcall(rd88f6183ap_ge_pci_init);
MACHINE_START(RD88F6183AP_GE, "Marvell Orion-1-90 AP GE Reference Design")
.boot_params	= 0x00000100,
.init_machine	= rd88f6183ap_ge_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
