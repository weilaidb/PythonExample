static struct omap_onenand_platform_data *gpmc_onenand_data;
static struct platform_device gpmc_onenand_device = ;
static int omap2_onenand_set_async_mode(int cs, void __iomem *onenand_base)
static void set_onenand_cfg(void __iomem *onenand_base, int latency,
int sync_read, int sync_write, int hf, int vhf)
static int omap2_onenand_get_freq(struct omap_onenand_platform_data *cfg,
void __iomem *onenand_base, bool *clk_dep)
static int omap2_onenand_set_sync_mode(struct omap_onenand_platform_data *cfg,
void __iomem *onenand_base,
int *freq_ptr)
static int gpmc_onenand_setup(void __iomem *onenand_base, int *freq_ptr)
void __init gpmc_onenand_init(struct omap_onenand_platform_data *_onenand_data)
