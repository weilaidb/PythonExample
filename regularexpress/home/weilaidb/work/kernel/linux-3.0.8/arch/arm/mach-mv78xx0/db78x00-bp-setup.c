static struct mv643xx_eth_platform_data db78x00_ge00_data = ;
static struct mv643xx_eth_platform_data db78x00_ge01_data = ;
static struct mv643xx_eth_platform_data db78x00_ge10_data = ;
static struct mv643xx_eth_platform_data db78x00_ge11_data = ;
static struct mv_sata_platform_data db78x00_sata_data = ;
static struct i2c_board_info __initdata db78x00_i2c_rtc = ;
static void __init db78x00_init(void)
static int __init db78x00_pci_init(void)
subsys_initcall(db78x00_pci_init);
MACHINE_START(DB78X00_BP, "Marvell DB-78x00-BP Development Board")
.boot_params	= 0x00000100,
.init_machine	= db78x00_init,
.map_io		= mv78xx0_map_io,
.init_early	= mv78xx0_init_early,
.init_irq	= mv78xx0_init_irq,
.timer		= &mv78xx0_timer,
MACHINE_END
