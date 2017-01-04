#define SMDK6450_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |		\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define SMDK6450_ULCON_DEFAULT	S3C2410_LCON_CS8
#define SMDK6450_UFCON_DEFAULT	(S3C2410_UFCON_FIFOMODE |	\
S3C2440_UFCON_TXTRIG16 |	\
S3C2410_UFCON_RXTRIG8)
static struct s3c2410_uartcfg smdk6450_uartcfgs[] __initdata = ;
static int smdk6450_backlight_init(struct device *dev)
static void smdk6450_backlight_exit(struct device *dev)
static struct platform_pwm_backlight_data smdk6450_backlight_data = ;
static struct platform_device smdk6450_backlight_device = ;
static struct platform_device *smdk6450_devices[] __initdata = ;
static struct s3c2410_platform_i2c s5p6450_i2c0_data __initdata = ;
static struct s3c2410_platform_i2c s5p6450_i2c1_data __initdata = ;
static struct i2c_board_info smdk6450_i2c_devs0[] __initdata = ;
static struct i2c_board_info smdk6450_i2c_devs1[] __initdata = ;
static struct s3c2410_ts_mach_info s3c_ts_platform __initdata = ;
static void __init smdk6450_map_io(void)
static void __init smdk6450_machine_init(void)
MACHINE_START(SMDK6450, "SMDK6450")
.boot_params	= S5P64X0_PA_SDRAM + 0x100,
.init_irq	= s5p6450_init_irq,
.map_io		= smdk6450_map_io,
.init_machine	= smdk6450_machine_init,
.timer		= &s5p_timer,
MACHINE_END
