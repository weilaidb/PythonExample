#define UCON S3C2410_UCON_DEFAULT | S3C2410_UCON_UCLK
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg smdk6400_uartcfgs[] __initdata = ;
static struct map_desc smdk6400_iodesc[] = ;
static void __init smdk6400_map_io(void)
static struct platform_device *smdk6400_devices[] __initdata = ;
static struct i2c_board_info i2c_devs[] __initdata = ;
static void __init smdk6400_machine_init(void)
MACHINE_START(SMDK6400, "SMDK6400")
.boot_params	= S3C64XX_PA_SDRAM + 0x100,
.init_irq	= s3c6400_init_irq,
.map_io		= smdk6400_map_io,
.init_machine	= smdk6400_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
