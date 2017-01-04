#if defined(CONFIG_SMC91X) || defined(CONFIG_SMC91X_MODULE)
static struct omap_smc91x_platform_data board_smc91x_data = ;
static void __init board_smc91x_init(void)
static inline void board_smc91x_init(void)
static void enable_board_wakeup_source(void)
static const struct usbhs_omap_board_data usbhs_bdata __initconst = ;
static struct omap_board_config_kernel sdp_config[] __initdata = ;
static void __init omap_sdp_init_early(void)
static struct omap_board_mux board_mux[] __initdata = ;
static char chip_sel_sdp[][GPMC_CS_NUM] = ;
static struct mtd_partition sdp_nor_partitions[] = ;
static struct mtd_partition sdp_onenand_partitions[] = ;
static struct mtd_partition sdp_nand_partitions[] = ;
static struct flash_partitions sdp_flash_partitions[] = ;
static void __init omap_sdp_init(void)
MACHINE_START(OMAP_3630SDP, "OMAP 3630SDP board")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= omap_sdp_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap_sdp_init,
.timer		= &omap_timer,
MACHINE_END
