static struct map_desc qt2410_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg smdk2410_uartcfgs[] = ;
static struct s3c2410fb_display qt2410_lcd_cfg[] __initdata = ;
static struct s3c2410fb_mach_info qt2410_fb_info __initdata = ;
static struct resource qt2410_cs89x0_resources[] = ;
static struct platform_device qt2410_cs89x0 = ;
static struct s3c24xx_led_platdata qt2410_pdata_led = ;
static struct platform_device qt2410_led = ;
static void spi_gpio_cs(struct s3c2410_spigpio_info *spi, int cs)
static struct s3c2410_spigpio_info spi_gpio_cfg = ;
static struct platform_device qt2410_spi = ;
static struct platform_device *qt2410_devices[] __initdata = ;
static struct mtd_partition __initdata qt2410_nand_part[] = ;
static struct s3c2410_nand_set __initdata qt2410_nand_sets[] = ;
static struct s3c2410_platform_nand __initdata qt2410_nand_info = ;
static struct s3c2410_udc_mach_info qt2410_udc_cfg = ;
static char tft_type = 's';
static int __init qt2410_tft_setup(char *str)
__setup("tft=", qt2410_tft_setup);
static void __init qt2410_map_io(void)
static void __init qt2410_machine_init(void)
MACHINE_START(QT2410, "QT2410")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= qt2410_map_io,
.init_irq	= s3c24xx_init_irq,
.init_machine	= qt2410_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
