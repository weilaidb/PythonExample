static struct resource amlm5900_nor_resource = ;
static struct mtd_partition amlm5900_mtd_partitions[] = ;
static struct physmap_flash_data amlm5900_flash_data = ;
static struct platform_device amlm5900_device_nor = ;
static struct map_desc amlm5900_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg amlm5900_uartcfgs[] = ;
static struct platform_device *amlm5900_devices[] __initdata = ;
static void __init amlm5900_map_io(void)
static struct s3c2410fb_display __initdata amlm5900_lcd_info = ;
static struct s3c2410fb_mach_info __initdata amlm5900_fb_info = ;
static irqreturn_t
amlm5900_wake_interrupt(int irq, void *ignored)
static void amlm5900_init_pm(void)
static void __init amlm5900_init(void)
MACHINE_START(AML_M5900, "AML_M5900")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= amlm5900_map_io,
.init_irq	= s3c24xx_init_irq,
.init_machine	= amlm5900_init,
.timer		= &s3c24xx_timer,
MACHINE_END
