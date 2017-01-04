static struct map_desc smdk2410_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg smdk2410_uartcfgs[] __initdata = ;
static struct platform_device *smdk2410_devices[] __initdata = ;
static void __init smdk2410_map_io(void)
static void __init smdk2410_init(void)
MACHINE_START(SMDK2410, "SMDK2410")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= smdk2410_map_io,
.init_irq	= s3c24xx_init_irq,
.init_machine	= smdk2410_init,
.timer		= &s3c24xx_timer,
MACHINE_END
