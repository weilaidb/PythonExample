#define UCON S3C2410_UCON_DEFAULT
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg ncp_uartcfgs[] __initdata = ;
static struct platform_device *ncp_devices[] __initdata = ;
static struct map_desc ncp_iodesc[] __initdata = ;
static void __init ncp_map_io(void)
static void __init ncp_machine_init(void)
MACHINE_START(NCP, "NCP")
.boot_params	= S3C64XX_PA_SDRAM + 0x100,
.init_irq	= s3c6410_init_irq,
.map_io		= ncp_map_io,
.init_machine	= ncp_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
