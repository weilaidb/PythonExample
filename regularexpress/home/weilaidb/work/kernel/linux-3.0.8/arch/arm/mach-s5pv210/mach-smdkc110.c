#define SMDKC110_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |	\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define SMDKC110_ULCON_DEFAULT	S3C2410_LCON_CS8
#define SMDKC110_UFCON_DEFAULT	(S3C2410_UFCON_FIFOMODE |	\
S5PV210_UFCON_TXTRIG4 |	\
S5PV210_UFCON_RXTRIG4)
static struct s3c2410_uartcfg smdkv210_uartcfgs[] __initdata = ;
static struct s3c_ide_platdata smdkc110_ide_pdata __initdata = ;
static struct platform_device *smdkc110_devices[] __initdata = ;
static struct i2c_board_info smdkc110_i2c_devs0[] __initdata = ;
static struct i2c_board_info smdkc110_i2c_devs1[] __initdata = ;
static struct i2c_board_info smdkc110_i2c_devs2[] __initdata = ;
static void __init smdkc110_map_io(void)
static void __init smdkc110_machine_init(void)
MACHINE_START(SMDKC110, "SMDKC110")
.boot_params	= S5P_PA_SDRAM + 0x100,
.init_irq	= s5pv210_init_irq,
.map_io		= smdkc110_map_io,
.init_machine	= smdkc110_machine_init,
.timer		= &s5p_timer,
MACHINE_END
