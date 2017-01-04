#define ARMLEX4210_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |	\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define ARMLEX4210_ULCON_DEFAULT	S3C2410_LCON_CS8
#define ARMLEX4210_UFCON_DEFAULT	(S3C2410_UFCON_FIFOMODE |	\
S5PV210_UFCON_TXTRIG4 |	\
S5PV210_UFCON_RXTRIG4)
static struct s3c2410_uartcfg armlex4210_uartcfgs[] __initdata = ;
static struct s3c_sdhci_platdata armlex4210_hsmmc0_pdata __initdata = ;
static struct s3c_sdhci_platdata armlex4210_hsmmc2_pdata __initdata = ;
static struct s3c_sdhci_platdata armlex4210_hsmmc3_pdata __initdata = ;
static void __init armlex4210_sdhci_init(void)
static void __init armlex4210_wlan_init(void)
static struct resource armlex4210_smsc911x_resources[] = ;
static struct smsc911x_platform_config smsc9215_config = ;
static struct platform_device armlex4210_smsc911x = ;
static struct platform_device *armlex4210_devices[] __initdata = ;
static void __init armlex4210_smsc911x_init(void)
static void __init armlex4210_map_io(void)
static void __init armlex4210_machine_init(void)
MACHINE_START(ARMLEX4210, "ARMLEX4210")
.boot_params	= S5P_PA_SDRAM + 0x100,
.init_irq	= exynos4_init_irq,
.map_io		= armlex4210_map_io,
.init_machine	= armlex4210_machine_init,
.timer		= &exynos4_timer,
MACHINE_END
