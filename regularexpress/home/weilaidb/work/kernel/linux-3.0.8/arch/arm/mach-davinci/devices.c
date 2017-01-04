#define DAVINCI_I2C_BASE	     0x01C21000
#define DAVINCI_ATA_BASE	     0x01C66000
#define DAVINCI_MMCSD0_BASE	     0x01E10000
#define DM355_MMCSD0_BASE	     0x01E11000
#define DM355_MMCSD1_BASE	     0x01E00000
#define DM365_MMCSD0_BASE	     0x01D11000
#define DM365_MMCSD1_BASE	     0x01D00000
#define DM64XX_VDD3P3V_PWDN	0x48
static struct resource i2c_resources[] = ;
static struct platform_device davinci_i2c_device = ;
void __init davinci_init_i2c(struct davinci_i2c_platform_data *pdata)
static struct resource ide_resources[] = ;
static u64 ide_dma_mask = DMA_BIT_MASK(32);
static struct platform_device ide_device = ;
void __init davinci_init_ide(void)
#if	defined(CONFIG_MMC_DAVINCI) || defined(CONFIG_MMC_DAVINCI_MODULE)
static u64 mmcsd0_dma_mask = DMA_BIT_MASK(32);
static struct resource mmcsd0_resources[] = ;
static struct platform_device davinci_mmcsd0_device = ;
static u64 mmcsd1_dma_mask = DMA_BIT_MASK(32);
static struct resource mmcsd1_resources[] = ;
static struct platform_device davinci_mmcsd1_device = ;
void __init davinci_setup_mmc(int module, struct davinci_mmc_config *config)
void __init davinci_setup_mmc(int module, struct davinci_mmc_config *config)
static struct resource wdt_resources[] = ;
struct platform_device davinci_wdt_device = ;
static void davinci_init_wdt(void)
static struct platform_device davinci_pcm_device = ;
static void davinci_init_pcm(void)
struct davinci_timer_instance davinci_timer_instance[2] = ;
static int __init davinci_init_devices(void)
arch_initcall(davinci_init_devices);
