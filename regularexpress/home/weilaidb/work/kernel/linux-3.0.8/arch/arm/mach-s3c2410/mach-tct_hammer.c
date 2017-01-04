static struct resource tct_hammer_nor_resource = ;
static struct mtd_partition tct_hammer_mtd_partitions[] = ;
static struct physmap_flash_data tct_hammer_flash_data = ;
static struct platform_device tct_hammer_device_nor = ;
static struct map_desc tct_hammer_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg tct_hammer_uartcfgs[] = ;
static struct platform_device *tct_hammer_devices[] __initdata = ;
static void __init tct_hammer_map_io(void)
static void __init tct_hammer_init(void)
MACHINE_START(TCT_HAMMER, "TCT_HAMMER")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= tct_hammer_map_io,
.init_irq	= s3c24xx_init_irq,
.init_machine	= tct_hammer_init,
.timer		= &s3c24xx_timer,
MACHINE_END
