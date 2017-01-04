static struct mtd_partition openrd_nand_parts[] = ;
static struct mv643xx_eth_platform_data openrd_ge00_data = ;
static struct mv643xx_eth_platform_data openrd_ge01_data = ;
static struct mv_sata_platform_data openrd_sata_data = ;
static struct mvsdio_platform_data openrd_mvsdio_data = ;
static unsigned int openrd_mpp_config[] __initdata = ;
static unsigned int openrd_uart1_mpp_config[] __initdata = ;
static struct i2c_board_info i2c_board_info[] __initdata = ;
static int __initdata uart1;
static int __init sd_uart_selection(char *str)
__setup("kw_openrd_init_uart1=", sd_uart_selection);
static int __init uart1_mpp_config(void)
static void __init openrd_init(void)
static int __init openrd_pci_init(void)
subsys_initcall(openrd_pci_init);
MACHINE_START(OPENRD_BASE, "Marvell OpenRD Base Board")
.boot_params	= 0x00000100,
.init_machine	= openrd_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
MACHINE_START(OPENRD_CLIENT, "Marvell OpenRD Client Board")
.boot_params	= 0x00000100,
.init_machine	= openrd_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
MACHINE_START(OPENRD_ULTIMATE, "Marvell OpenRD Ultimate Board")
.boot_params	= 0x00000100,
.init_machine	= openrd_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
