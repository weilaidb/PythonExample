static struct map_desc otom11_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG12 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg otom11_uartcfgs[] __initdata = ;
static struct resource otom_nor_resource[] = ;
static struct platform_device otom_device_nor = ;
static struct platform_device *otom11_devices[] __initdata = ;
static void __init otom11_map_io(void)
static void __init otom11_init(void)
MACHINE_START(OTOM, "Nex Vision - Otom 1.1")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= otom11_map_io,
.init_machine	= otom11_init,
.init_irq	= s3c24xx_init_irq,
.timer		= &s3c24xx_timer,
MACHINE_END
