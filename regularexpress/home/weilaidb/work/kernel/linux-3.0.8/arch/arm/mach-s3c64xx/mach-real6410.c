#define UCON S3C2410_UCON_DEFAULT
#define ULCON (S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB)
#define UFCON (S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE)
static struct s3c2410_uartcfg real6410_uartcfgs[] __initdata = ;
static struct resource real6410_dm9k_resource[] = ;
static struct dm9000_plat_data real6410_dm9k_pdata = ;
static struct platform_device real6410_device_eth = ;
static struct s3c_fb_pd_win real6410_fb_win[] = ;
static struct s3c_fb_platdata real6410_lcd_pdata __initdata = ;
static struct mtd_partition real6410_nand_part[] = ;
static struct s3c2410_nand_set real6410_nand_sets[] = ;
static struct s3c2410_platform_nand real6410_nand_info = ;
static struct platform_device *real6410_devices[] __initdata = ;
static struct s3c2410_ts_mach_info s3c_ts_platform __initdata = ;
static void __init real6410_map_io(void)
static char real6410_features_str[12] __initdata = "0";
static int __init real6410_features_setup(char *str)
__setup("real6410=", real6410_features_setup);
#define FEATURE_SCREEN (1 << 0)
struct real6410_features_t ;
static void real6410_parse_features(
struct real6410_features_t *features,
const char *features_str)
static void __init real6410_machine_init(void)
MACHINE_START(REAL6410, "REAL6410")
.boot_params	= S3C64XX_PA_SDRAM + 0x100,
.init_irq	= s3c6410_init_irq,
.map_io		= real6410_map_io,
.init_machine	= real6410_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
