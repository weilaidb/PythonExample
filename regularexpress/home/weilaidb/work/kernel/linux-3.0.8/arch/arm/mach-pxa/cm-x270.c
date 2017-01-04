#define RTC_PHYS_BASE		(PXA_CS1_PHYS + (5 << 22))
#define GPIO83_MMC_IRQ		(83)
#define CMX270_MMC_IRQ		IRQ_GPIO(GPIO83_MMC_IRQ)
#define GPIO105_MMC_POWER	(105)
#define GPIO19_WLAN_STRAP	(19)
#define GPIO102_WLAN_RST	(102)
static unsigned long cmx270_pin_config[] = ;
#if defined(CONFIG_RTC_DRV_V3020) || defined(CONFIG_RTC_DRV_V3020_MODULE)
static struct resource cmx270_v3020_resource[] = ;
struct v3020_platform_data cmx270_v3020_pdata = ;
static struct platform_device cmx270_rtc_device = ;
static void __init cmx270_init_rtc(void)
static inline void cmx270_init_rtc(void)
#if defined(CONFIG_FB_MBX) || defined(CONFIG_FB_MBX_MODULE)
static u64 fb_dma_mask = ~(u64)0;
static struct resource cmx270_2700G_resource[] = ;
static unsigned long cmx270_marathon_on[] = ;
static unsigned long cmx270_marathon_off[] = ;
static int cmx270_marathon_probe(struct fb_info *fb)
static int cmx270_marathon_remove(struct fb_info *fb)
static struct mbxfb_platform_data cmx270_2700G_data = ;
static struct platform_device cmx270_2700G = ;
static void __init cmx270_init_2700G(void)
static inline void cmx270_init_2700G(void)
#if defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static struct pxaohci_platform_data cmx270_ohci_platform_data = ;
static void __init cmx270_init_ohci(void)
static inline void cmx270_init_ohci(void)
#if defined(CONFIG_MMC) || defined(CONFIG_MMC_MODULE)
static struct pxamci_platform_data cmx270_mci_platform_data = ;
static void __init cmx270_init_mmc(void)
static inline void cmx270_init_mmc(void)
#if defined(CONFIG_SPI_PXA2XX) || defined(CONFIG_SPI_PXA2XX_MODULE)
static struct pxa2xx_spi_master cm_x270_spi_info = ;
static struct pxa2xx_spi_chip cm_x270_libertas_chip = ;
static unsigned long cm_x270_libertas_pin_config[] = ;
static int cm_x270_libertas_setup(struct spi_device *spi)
static int cm_x270_libertas_teardown(struct spi_device *spi)
struct libertas_spi_platform_data cm_x270_libertas_pdata = ;
static struct spi_board_info cm_x270_spi_devices[] __initdata = ;
static void __init cmx270_init_spi(void)
static inline void cmx270_init_spi(void)
void __init cmx270_init(void)
