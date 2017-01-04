#define STMP378X_DEVB_MMC0_WRITE_PROTECT	MXS_GPIO_NR(1, 30)
#define STMP378X_DEVB_MMC0_SLOT_POWER		MXS_GPIO_NR(1, 29)
#define STMP378X_DEVB_PAD_AUART (MXS_PAD_4MA | MXS_PAD_1V8 | MXS_PAD_NOPULL)
static const iomux_cfg_t stmp378x_dvb_pads[] __initconst = ;
static struct mxs_mmc_platform_data stmp378x_dvb_mmc_pdata __initdata = ;
static struct spi_board_info spi_board_info[] __initdata = ;
static void __init stmp378x_dvb_init(void)
static void __init stmp378x_dvb_timer_init(void)
static struct sys_timer stmp378x_dvb_timer = ;
MACHINE_START(STMP378X, "STMP378X")
.map_io		= mx23_map_io,
.init_irq	= mx23_init_irq,
.init_machine	= stmp378x_dvb_init,
.timer		= &stmp378x_dvb_timer,
MACHINE_END
