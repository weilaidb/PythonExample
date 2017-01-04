#define NR_CHIP_SELECTS 6
struct hsmc ;
static struct hsmc *hsmc;
void smc_set_timing(struct smc_config *config,
const struct smc_timing *timing)
EXPORT_SYMBOL(smc_set_timing);
int smc_set_configuration(int cs, const struct smc_config *config)
EXPORT_SYMBOL(smc_set_configuration);
static int hsmc_probe(struct platform_device *pdev)
static struct platform_driver hsmc_driver = ;
static int __init hsmc_init(void)
core_initcall(hsmc_init);
