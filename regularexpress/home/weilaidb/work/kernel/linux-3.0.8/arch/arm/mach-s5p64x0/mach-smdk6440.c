#define SMDK6440_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |		\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define SMDK6440_ULCON_DEFAULT	S3C2410_LCON_CS8
#define SMDK6440_UFCON_DEFAULT	(S3C2410_UFCON_FIFOMODE |	\
S3C2440_UFCON_TXTRIG16 |	\
S3C2410_UFCON_RXTRIG8)
static struct s3c2410_uartcfg smdk6440_uartcfgs[] __initdata = ;
static int smdk6440_backlight_init(struct device *dev)
static void smdk6440_backlight_exit(struct device *dev)
static struct platform_pwm_backlight_data smdk6440_backlight_data = ;
static struct platform_device smdk6440_backlight_device = ;
static struct platform_device *smdk6440_devices[] __initdata = ;
static struct s3c2410_platform_i2c s5p6440_i2c0_data __initdata = ;
static struct s3c2410_platform_i2c s5p6440_i2c1_data __initdata = ;
static struct i2c_board_info smdk6440_i2c_devs0[] __initdata = ;
static struct i2c_board_info smdk6440_i2c_devs1[] __initdata = ;
static struct s3c2410_ts_mach_info s3c_ts_platform __initdata = ;
static void __init smdk6440_map_io(void)
static void __init smdk6440_machine_init(void)
MACHINE_START(SMDK6440, "SMDK6440")
.boot_params	= S5P64X0_PA_SDRAM + 0x100,
.init_irq	= s5p6440_init_irq,
.map_io		= smdk6440_map_io,
.init_machine	= smdk6440_machine_init,
.timer		= &s5p_timer,
MACHINE_END
