static struct map_desc smdk2416_iodesc[] __initdata = ;
#define UCON (S3C2410_UCON_DEFAULT	| \
S3C2440_UCON_PCLK	| \
S3C2443_UCON_RXERR_IRQEN)
#define ULCON (S3C2410_LCON_CS8 | S3C2410_LCON_PNONE)
#define UFCON (S3C2410_UFCON_RXTRIG8	| \
S3C2410_UFCON_FIFOMODE	| \
S3C2440_UFCON_TXTRIG16)
static struct s3c2410_uartcfg smdk2416_uartcfgs[] __initdata = ;
void smdk2416_hsudc_gpio_init(void)
void smdk2416_hsudc_gpio_uninit(void)
struct s3c24xx_hsudc_platdata smdk2416_hsudc_platdata = ;
struct s3c_fb_pd_win smdk2416_fb_win[] = ;
static void s3c2416_fb_gpio_setup_24bpp(void)
static struct s3c_fb_platdata smdk2416_fb_platdata = ;
static struct s3c_sdhci_platdata smdk2416_hsmmc0_pdata __initdata = ;
static struct s3c_sdhci_platdata smdk2416_hsmmc1_pdata __initdata = ;
static struct platform_device *smdk2416_devices[] __initdata = ;
static void __init smdk2416_map_io(void)
static void __init smdk2416_machine_init(void)
MACHINE_START(SMDK2416, "SMDK2416")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.init_irq	= s3c24xx_init_irq,
.map_io		= smdk2416_map_io,
.init_machine	= smdk2416_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
