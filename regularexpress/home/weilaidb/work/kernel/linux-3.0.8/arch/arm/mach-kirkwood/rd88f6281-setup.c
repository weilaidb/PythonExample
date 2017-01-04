static struct mtd_partition rd88f6281_nand_parts[] = ;
static struct mv643xx_eth_platform_data rd88f6281_ge00_data = ;
static struct dsa_chip_data rd88f6281_switch_chip_data = ;
static struct dsa_platform_data rd88f6281_switch_plat_data = ;
static struct mv643xx_eth_platform_data rd88f6281_ge01_data = ;
static struct mv_sata_platform_data rd88f6281_sata_data = ;
static struct mvsdio_platform_data rd88f6281_mvsdio_data = ;
static unsigned int rd88f6281_mpp_config[] __initdata = ;
static void __init rd88f6281_init(void)
static int __init rd88f6281_pci_init(void)
subsys_initcall(rd88f6281_pci_init);
MACHINE_START(RD88F6281, "Marvell RD-88F6281 Reference Board")
.boot_params	= 0x00000100,
.init_machine	= rd88f6281_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
