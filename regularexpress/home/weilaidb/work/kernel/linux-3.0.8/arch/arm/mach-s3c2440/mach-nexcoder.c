static struct map_desc nexcoder_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG12 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg nexcoder_uartcfgs[] __initdata = ;
static struct resource nexcoder_nor_resource[] = ;
static struct map_info nexcoder_nor_map = ;
static struct platform_device nexcoder_device_nor = ;
static struct platform_device *nexcoder_devices[] __initdata = ;
static void __init nexcoder_sensorboard_init(void)
static void __init nexcoder_map_io(void)
static void __init nexcoder_init(void)
;
MACHINE_START(NEXCODER_2440, "NexVision - Nexcoder 2440")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= nexcoder_map_io,
.init_machine	= nexcoder_init,
.init_irq	= s3c24xx_init_irq,
.timer		= &s3c24xx_timer,
MACHINE_END
