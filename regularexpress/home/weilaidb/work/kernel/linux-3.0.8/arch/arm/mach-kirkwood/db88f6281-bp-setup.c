static struct mtd_partition db88f6281_nand_parts[] = ;
static struct mv643xx_eth_platform_data db88f6281_ge00_data = ;
static struct mv_sata_platform_data db88f6281_sata_data = ;
static struct mvsdio_platform_data db88f6281_mvsdio_data = ;
static unsigned int db88f6281_mpp_config[] __initdata = ;
static void __init db88f6281_init(void)
static int __init db88f6281_pci_init(void)
subsys_initcall(db88f6281_pci_init);
MACHINE_START(DB88F6281_BP, "Marvell DB-88F6281-BP Development Board")
.boot_params	= 0x00000100,
.init_machine	= db88f6281_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
