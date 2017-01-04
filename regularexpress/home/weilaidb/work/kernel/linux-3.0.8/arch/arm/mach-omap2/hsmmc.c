#if defined(CONFIG_MMC_OMAP_HS) || defined(CONFIG_MMC_OMAP_HS_MODULE)
static u16 control_pbias_offset;
static u16 control_devconf1_offset;
static u16 control_mmc1;
#define HSMMC_NAME_LEN	9
#if defined(CONFIG_ARCH_OMAP3) && defined(CONFIG_PM)
static int hsmmc_get_context_loss(struct device *dev)
#define hsmmc_get_context_loss NULL
static void omap_hsmmc1_before_set_reg(struct device *dev, int slot,
int power_on, int vdd)
static void omap_hsmmc1_after_set_reg(struct device *dev, int slot,
int power_on, int vdd)
static void omap4_hsmmc1_before_set_reg(struct device *dev, int slot,
int power_on, int vdd)
static void omap4_hsmmc1_after_set_reg(struct device *dev, int slot,
int power_on, int vdd)
static void hsmmc23_before_set_reg(struct device *dev, int slot,
int power_on, int vdd)
static int nop_mmc_set_power(struct device *dev, int slot, int power_on,
int vdd)
static inline void omap_hsmmc_mux(struct omap_mmc_platform_data *mmc_controller,
int controller_nr)
static int __init omap_hsmmc_pdata_init(struct omap2_hsmmc_info *c,
struct omap_mmc_platform_data *mmc)
static struct omap_device_pm_latency omap_hsmmc_latency[] = ;
#define MAX_OMAP_MMC_HWMOD_NAME_LEN		16
void __init omap_init_hsmmc(struct omap2_hsmmc_info *hsmmcinfo, int ctrl_nr)
void __init omap2_hsmmc_init(struct omap2_hsmmc_info *controllers)
