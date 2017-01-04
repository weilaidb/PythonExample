#define UCON S3C2410_UCON_DEFAULT
#define ULCON (S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB)
#define UFCON (S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE)
static struct s3c2410_uartcfg mini6410_uartcfgs[] __initdata = ;
static struct resource mini6410_dm9k_resource[] = ;
static struct dm9000_plat_data mini6410_dm9k_pdata = ;
static struct platform_device mini6410_device_eth = ;
static struct mtd_partition mini6410_nand_part[] = ;
static struct s3c2410_nand_set mini6410_nand_sets[] = ;
static struct s3c2410_platform_nand mini6410_nand_info = ;
static struct s3c_fb_pd_win mini6410_fb_win[] = ;
static struct s3c_fb_platdata mini6410_lcd_pdata __initdata = ;
static void mini6410_lcd_power_set(struct plat_lcd_data *pd,
unsigned int power)
static struct plat_lcd_data mini6410_lcd_power_data = ;
static struct platform_device mini6410_lcd_powerdev = ;
static struct s3c2410_ts_mach_info s3c_ts_platform __initdata = ;
static struct platform_device *mini6410_devices[] __initdata = ;
static void __init mini6410_map_io(void)
static char mini6410_features_str[12] __initdata = "0";
static int __init mini6410_features_setup(char *str)
__setup("mini6410=", mini6410_features_setup);
#define FEATURE_SCREEN (1 << 0)
struct mini6410_features_t ;
static void mini6410_parse_features(
struct mini6410_features_t *features,
const char *features_str)
static void __init mini6410_machine_init(void)
MACHINE_START(MINI6410, "MINI6410")
.boot_params	= S3C64XX_PA_SDRAM + 0x100,
.init_irq	= s3c6410_init_irq,
.map_io		= mini6410_map_io,
.init_machine	= mini6410_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
