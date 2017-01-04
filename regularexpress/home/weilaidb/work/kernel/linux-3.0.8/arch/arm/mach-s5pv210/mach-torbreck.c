#define TORBRECK_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |	\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define TORBRECK_ULCON_DEFAULT	S3C2410_LCON_CS8
#define TORBRECK_UFCON_DEFAULT	(S3C2410_UFCON_FIFOMODE |	\
S5PV210_UFCON_TXTRIG4 |	\
S5PV210_UFCON_RXTRIG4)
static struct s3c2410_uartcfg torbreck_uartcfgs[] __initdata = ;
static struct platform_device *torbreck_devices[] __initdata = ;
static struct i2c_board_info torbreck_i2c_devs0[] __initdata = ;
static struct i2c_board_info torbreck_i2c_devs1[] __initdata = ;
static struct i2c_board_info torbreck_i2c_devs2[] __initdata = ;
static void __init torbreck_map_io(void)
static void __init torbreck_machine_init(void)
MACHINE_START(TORBRECK, "TORBRECK")
.boot_params	= S5P_PA_SDRAM + 0x100,
.init_irq	= s5pv210_init_irq,
.map_io		= torbreck_map_io,
.init_machine	= torbreck_machine_init,
.timer		= &s5p_timer,
MACHINE_END
