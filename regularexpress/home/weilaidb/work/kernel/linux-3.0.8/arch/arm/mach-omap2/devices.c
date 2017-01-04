#define L3_MODULES_MAX_LEN 12
#define L3_MODULES 3
static int __init omap3_l3_init(void)
postcore_initcall(omap3_l3_init);
static int __init omap4_l3_init(void)
postcore_initcall(omap4_l3_init);
#if defined(CONFIG_VIDEO_OMAP2) || defined(CONFIG_VIDEO_OMAP2_MODULE)
static struct resource omap2cam_resources[] = ;
static struct platform_device omap2cam_device = ;
static struct resource omap3isp_resources[] = ;
static struct platform_device omap3isp_device = ;
int omap3_init_camera(struct isp_platform_data *pdata)
static inline void omap_init_camera(void)
struct omap_device_pm_latency omap_keyboard_latency[] = ;
int __init omap4_keyboard_init(struct omap4_keypad_platform_data
*sdp4430_keypad_data)
#if defined(CONFIG_OMAP_MBOX_FWK) || defined(CONFIG_OMAP_MBOX_FWK_MODULE)
static struct omap_device_pm_latency mbox_latencies[] = ;
static inline void omap_init_mbox(void)
static inline void omap_init_mbox(void)
static inline void omap_init_sti(void)
#if defined(CONFIG_SND_SOC) || defined(CONFIG_SND_SOC_MODULE)
static struct platform_device omap_pcm = ;
OMAP_MCBSP_PLATFORM_DEVICE(1);
OMAP_MCBSP_PLATFORM_DEVICE(2);
OMAP_MCBSP_PLATFORM_DEVICE(3);
OMAP_MCBSP_PLATFORM_DEVICE(4);
OMAP_MCBSP_PLATFORM_DEVICE(5);
static void omap_init_audio(void)
static inline void omap_init_audio(void)
#if defined(CONFIG_SPI_OMAP24XX) || defined(CONFIG_SPI_OMAP24XX_MODULE)
struct omap_device_pm_latency omap_mcspi_latency[] = ;
static int omap_mcspi_init(struct omap_hwmod *oh, void *unused)
static void omap_init_mcspi(void)
static inline void omap_init_mcspi(void)
static struct resource omap2_pmu_resource = ;
static struct resource omap3_pmu_resource = ;
static struct platform_device omap_pmu_device = ;
static void omap_init_pmu(void)
#if defined(CONFIG_CRYPTO_DEV_OMAP_SHAM) || defined(CONFIG_CRYPTO_DEV_OMAP_SHAM_MODULE)
static struct resource omap2_sham_resources[] = ;
static int omap2_sham_resources_sz = ARRAY_SIZE(omap2_sham_resources);
#define omap2_sham_resources		NULL
#define omap2_sham_resources_sz		0
static struct resource omap3_sham_resources[] = ;
static int omap3_sham_resources_sz = ARRAY_SIZE(omap3_sham_resources);
#define omap3_sham_resources		NULL
#define omap3_sham_resources_sz		0
static struct platform_device sham_device = ;
static void omap_init_sham(void)
static inline void omap_init_sham(void)
#if defined(CONFIG_CRYPTO_DEV_OMAP_AES) || defined(CONFIG_CRYPTO_DEV_OMAP_AES_MODULE)
static struct resource omap2_aes_resources[] = ;
static int omap2_aes_resources_sz = ARRAY_SIZE(omap2_aes_resources);
#define omap2_aes_resources		NULL
#define omap2_aes_resources_sz		0
static struct resource omap3_aes_resources[] = ;
static int omap3_aes_resources_sz = ARRAY_SIZE(omap3_aes_resources);
#define omap3_aes_resources		NULL
#define omap3_aes_resources_sz		0
static struct platform_device aes_device = ;
static void omap_init_aes(void)
static inline void omap_init_aes(void)
#if defined(CONFIG_MMC_OMAP) || defined(CONFIG_MMC_OMAP_MODULE)
static inline void omap242x_mmc_mux(struct omap_mmc_platform_data
*mmc_controller)
void __init omap242x_init_mmc(struct omap_mmc_platform_data **mmc_data)
#if defined(CONFIG_HDQ_MASTER_OMAP) || defined(CONFIG_HDQ_MASTER_OMAP_MODULE)
#if defined(CONFIG_SOC_OMAP2430) || defined(CONFIG_SOC_OMAP3430)
#define OMAP_HDQ_BASE	0x480B2000
static struct resource omap_hdq_resources[] = ;
static struct platform_device omap_hdq_dev = ;
static inline void omap_hdq_init(void)
static inline void omap_hdq_init(void)
#if defined(CONFIG_VIDEO_OMAP2_VOUT) || \
defined(CONFIG_VIDEO_OMAP2_VOUT_MODULE)
#if defined(CONFIG_FB_OMAP2) || defined(CONFIG_FB_OMAP2_MODULE)
static struct resource omap_vout_resource[3 - CONFIG_FB_OMAP2_NUM_FBS] = ;
static struct resource omap_vout_resource[2] = ;
static struct platform_device omap_vout_device = ;
static void omap_init_vout(void)
static inline void omap_init_vout(void)
static int __init omap2_init_devices(void)
arch_initcall(omap2_init_devices);
#if defined(CONFIG_OMAP_WATCHDOG) || defined(CONFIG_OMAP_WATCHDOG_MODULE)
static struct omap_device_pm_latency omap_wdt_latency[] = ;
static int __init omap_init_wdt(void)
subsys_initcall(omap_init_wdt);
