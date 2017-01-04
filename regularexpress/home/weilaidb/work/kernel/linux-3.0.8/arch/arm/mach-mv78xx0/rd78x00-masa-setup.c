static struct mv643xx_eth_platform_data rd78x00_masa_ge00_data = ;
static struct mv643xx_eth_platform_data rd78x00_masa_ge01_data = ;
static struct mv643xx_eth_platform_data rd78x00_masa_ge10_data = ;
static struct mv643xx_eth_platform_data rd78x00_masa_ge11_data = ;
static struct mv_sata_platform_data rd78x00_masa_sata_data = ;
static void __init rd78x00_masa_init(void)
static int __init rd78x00_pci_init(void)
subsys_initcall(rd78x00_pci_init);
MACHINE_START(RD78X00_MASA, "Marvell RD-78x00-MASA Development Board")
.boot_params	= 0x00000100,
.init_machine	= rd78x00_masa_init,
.map_io		= mv78xx0_map_io,
.init_early	= mv78xx0_init_early,
.init_irq	= mv78xx0_init_irq,
.timer		= &mv78xx0_timer,
MACHINE_END
