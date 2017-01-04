#if defined(CONFIG_OMAP_MCBSP) || defined(CONFIG_OMAP_MCBSP_MODULE)
static struct platform_device **omap_mcbsp_devices;
void omap_mcbsp_register_board_cfg(struct resource *res, int res_count,
struct omap_mcbsp_platform_data *config, int size)
void omap_mcbsp_register_board_cfg(struct resource *res, int res_count,
struct omap_mcbsp_platform_data *config, int size)
#if defined(CONFIG_SND_OMAP_SOC_MCPDM) || \
defined(CONFIG_SND_OMAP_SOC_MCPDM_MODULE)
static struct resource mcpdm_resources[] = ;
static struct platform_device omap_mcpdm_device = ;
static void omap_init_mcpdm(void)
static inline void omap_init_mcpdm(void)
#if defined(CONFIG_MMC_OMAP) || defined(CONFIG_MMC_OMAP_MODULE) || \
defined(CONFIG_MMC_OMAP_HS) || defined(CONFIG_MMC_OMAP_HS_MODULE)
#define OMAP_MMC_NR_RES		2
int __init omap_mmc_add(const char *name, int id, unsigned long base,
unsigned long size, unsigned int irq,
struct omap_mmc_platform_data *data)
#if defined(CONFIG_HW_RANDOM_OMAP) || defined(CONFIG_HW_RANDOM_OMAP_MODULE)
#define	OMAP_RNG_BASE		0x480A0000
#define	OMAP_RNG_BASE		0xfffe5000
static struct resource rng_resources[] = ;
static struct platform_device omap_rng_device = ;
static void omap_init_rng(void)
static inline void omap_init_rng(void)
#if defined(CONFIG_SPI_OMAP_UWIRE) || defined(CONFIG_SPI_OMAP_UWIRE_MODULE)
#define	OMAP_UWIRE_BASE		0xfffb3000
static struct resource uwire_resources[] = ;
static struct platform_device omap_uwire_device = ;
static void omap_init_uwire(void)
static inline void omap_init_uwire(void)
#if defined(CONFIG_TIDSPBRIDGE) || defined(CONFIG_TIDSPBRIDGE_MODULE)
static phys_addr_t omap_dsp_phys_mempool_base;
void __init omap_dsp_reserve_sdram_memblock(void)
phys_addr_t omap_dsp_get_mempool_base(void)
EXPORT_SYMBOL(omap_dsp_get_mempool_base);
static int __init omap_init_devices(void)
arch_initcall(omap_init_devices);
