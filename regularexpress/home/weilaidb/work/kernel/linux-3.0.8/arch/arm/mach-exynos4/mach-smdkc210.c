#define SMDKC210_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |	\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define SMDKC210_ULCON_DEFAULT	S3C2410_LCON_CS8
#define SMDKC210_UFCON_DEFAULT	(S3C2410_UFCON_FIFOMODE |	\
S5PV210_UFCON_TXTRIG4 |	\
S5PV210_UFCON_RXTRIG4)
static struct s3c2410_uartcfg smdkc210_uartcfgs[] __initdata = ;
static struct s3c_sdhci_platdata smdkc210_hsmmc0_pdata __initdata = ;
static struct s3c_sdhci_platdata smdkc210_hsmmc1_pdata __initdata = ;
static struct s3c_sdhci_platdata smdkc210_hsmmc2_pdata __initdata = ;
static struct s3c_sdhci_platdata smdkc210_hsmmc3_pdata __initdata = ;
static struct resource smdkc210_smsc911x_resources[] = ;
static struct smsc911x_platform_config smsc9215_config = ;
static struct platform_device smdkc210_smsc911x = ;
static struct i2c_board_info i2c_devs1[] __initdata = ;
static struct platform_device *smdkc210_devices[] __initdata = ;
static void __init smdkc210_smsc911x_init(void)
static void __init smdkc210_map_io(void)
static void __init smdkc210_machine_init(void)
MACHINE_START(SMDKC210, "SMDKC210")
.boot_params	= S5P_PA_SDRAM + 0x100,
.init_irq	= exynos4_init_irq,
.map_io		= smdkc210_map_io,
.init_machine	= smdkc210_machine_init,
.timer		= &exynos4_timer,
MACHINE_END
