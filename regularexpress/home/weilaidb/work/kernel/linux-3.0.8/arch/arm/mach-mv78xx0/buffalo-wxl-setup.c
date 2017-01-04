static struct mv643xx_eth_platform_data db78x00_ge00_data = ;
static struct mv643xx_eth_platform_data db78x00_ge01_data = ;
static struct mv_sata_platform_data db78x00_sata_data = ;
static struct i2c_board_info __initdata db78x00_i2c_rtc = ;
static unsigned int wxl_mpp_config[] __initdata = ;
static void __init wxl_init(void)
static int __init wxl_pci_init(void)
subsys_initcall(wxl_pci_init);
MACHINE_START(TERASTATION_WXL, "Buffalo Nas WXL")
.boot_params	= 0x00000100,
.init_machine	= wxl_init,
.map_io		= mv78xx0_map_io,
.init_early	= mv78xx0_init_early,
.init_irq	= mv78xx0_init_irq,
.timer		= &mv78xx0_timer,
MACHINE_END
