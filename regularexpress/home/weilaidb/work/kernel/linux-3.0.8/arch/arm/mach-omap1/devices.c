#if defined(CONFIG_RTC_DRV_OMAP) || defined(CONFIG_RTC_DRV_OMAP_MODULE)
#define	OMAP_RTC_BASE		0xfffb4800
static struct resource rtc_resources[] = ;
static struct platform_device omap_rtc_device = ;
static void omap_init_rtc(void)
static inline void omap_init_rtc(void)
static inline void omap_init_mbox(void)
#if defined(CONFIG_MMC_OMAP) || defined(CONFIG_MMC_OMAP_MODULE)
static inline void omap1_mmc_mux(struct omap_mmc_platform_data *mmc_controller,
int controller_nr)
void __init omap1_init_mmc(struct omap_mmc_platform_data **mmc_data,
int nr_controllers)
#if defined(CONFIG_SPI_OMAP_100K) || defined(CONFIG_SPI_OMAP_100K_MODULE)
struct platform_device omap_spi1 = ;
struct platform_device omap_spi2 = ;
static void omap_init_spi100k(void)
static inline void omap_init_spi100k(void)
#define OMAP1_CAMERA_BASE	0xfffb6800
#define OMAP1_CAMERA_IOSIZE	0x1c
static struct resource omap1_camera_resources[] = ;
static u64 omap1_camera_dma_mask = DMA_BIT_MASK(32);
static struct platform_device omap1_camera_device = ;
void __init omap1_camera_init(void *info)
static inline void omap_init_sti(void)
#if defined(CONFIG_SND_SOC) || defined(CONFIG_SND_SOC_MODULE)
static struct platform_device omap_pcm = ;
OMAP_MCBSP_PLATFORM_DEVICE(1);
OMAP_MCBSP_PLATFORM_DEVICE(2);
OMAP_MCBSP_PLATFORM_DEVICE(3);
static void omap_init_audio(void)
static inline void omap_init_audio(void)
static int __init omap1_init_devices(void)
arch_initcall(omap1_init_devices);
#if defined(CONFIG_OMAP_WATCHDOG) || defined(CONFIG_OMAP_WATCHDOG_MODULE)
static struct resource wdt_resources[] = ;
static struct platform_device omap_wdt_device = ;
static int __init omap_init_wdt(void)
subsys_initcall(omap_init_wdt);
